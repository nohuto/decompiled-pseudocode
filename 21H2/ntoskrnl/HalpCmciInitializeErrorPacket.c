/*
 * XREFs of HalpCmciInitializeErrorPacket @ 0x1409A229C
 * Callers:
 *     HalpInitializeCmc @ 0x1409A20E8 (HalpInitializeCmc.c)
 *     HalpCmciInit @ 0x1409A2174 (HalpCmciInit.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x14037C598 (HalpMmAllocCtxAlloc.c)
 *     HalpGetMcaPcrContext @ 0x1403A0D18 (HalpGetMcaPcrContext.c)
 *     HalpCmcInitializeErrorPacketContents @ 0x1403C5978 (HalpCmcInitializeErrorPacketContents.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpCmciInitializeErrorPacket(__int64 a1, __int64 a2)
{
  GUID *v3; // rbx
  __int64 v4; // rcx
  __int64 McaPcrContext; // rsi
  unsigned __int8 CurrentIrql; // di
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v9; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v11; // r8
  int v12; // eax
  bool v13; // zf

  v3 = 0LL;
  McaPcrContext = HalpGetMcaPcrContext(a2);
  if ( !*(_QWORD *)(McaPcrContext + 16) )
  {
    v3 = (GUID *)HalpMmAllocCtxAlloc(v4, 352LL);
    if ( !v3 )
      KeBugCheckEx(0xACu, 0x160uLL, 0xDA00uLL, 0LL, 0LL);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  if ( v3 )
    *(_QWORD *)(McaPcrContext + 16) = v3;
  else
    v3 = *(GUID **)(McaPcrContext + 16);
  HalpCmcInitializeErrorPacketContents(v3);
  *(_OWORD *)(*(_QWORD *)(McaPcrContext + 16) + 32LL) = CMCI_NOTIFY_TYPE_GUID;
  *(_QWORD *)(McaPcrContext + 24) = a1;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v9 = KeGetCurrentIrql();
      if ( v9 <= 0xFu && CurrentIrql <= 0xFu && v9 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v11 = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v13 = (v12 & v11[5]) == 0;
        v11[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
