/*
 * XREFs of KeQueryBasePriorityThread @ 0x14025A464
 * Callers:
 *     NtQueryInformationThread @ 0x140610870 (NtQueryInformationThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140244550 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027D690 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14027D890 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     KiReleaseThreadLockSafe @ 0x1402EE520 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryBasePriorityThread(__int64 a1)
{
  __int64 v1; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v8; // rcx
  unsigned int v9; // ebx
  _DWORD *v11; // rcx
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  int v14; // eax
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // rax
  _DWORD *v17; // r9
  int v18; // edx
  bool v19; // zf
  int v20; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 544);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  CurrentPrcb = KeGetCurrentPrcb();
  v20 = 0;
  while ( 1 )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v8[6];
        v8[6] = v13 + 1;
        if ( v13 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v11 = CurrentPrcb->SchedulerAssist;
    if ( v11 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v14 = v11[6] - 1;
        v11[6] = v14;
        if ( !v14 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v20, v4, v5, v6);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v9 = *(char *)(a1 + 563) - *(char *)(v1 + 640);
  if ( *(_BYTE *)(a1 + 645) )
    v9 = 16 * *(char *)(a1 + 645);
  KiReleaseThreadLockSafe(a1);
  ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v1 + 64));
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick(v16);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v9;
}
