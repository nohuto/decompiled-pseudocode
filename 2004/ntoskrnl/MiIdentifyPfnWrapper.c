/*
 * XREFs of MiIdentifyPfnWrapper @ 0x1402062C0
 * Callers:
 *     MiLogAllocateWsleEvent @ 0x14052B068 (MiLogAllocateWsleEvent.c)
 *     MiQueryLeafPte @ 0x140541B50 (MiQueryLeafPte.c)
 *     PfpPfnPrioRequest @ 0x1405F0C80 (PfpPfnPrioRequest.c)
 *     MmIdentifyPhysicalMemory @ 0x1408C3AB8 (MmIdentifyPhysicalMemory.c)
 *     MmRelocatePfnList @ 0x1408CE4DC (MmRelocatePfnList.c)
 * Callees:
 *     MiIdentifyPfn @ 0x140206380 (MiIdentifyPfn.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiIdentifyPfnWrapper(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = a2;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= a2;
  }
  v13 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v13, a2);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v5 = MiIdentifyPfn(a1, v2);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = CurrentPrcb->SchedulerAssist;
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & v10[5]) == 0;
        v10[5] &= v11;
        if ( v12 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v5;
}
