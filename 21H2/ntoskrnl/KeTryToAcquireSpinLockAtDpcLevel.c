/*
 * XREFs of KeTryToAcquireSpinLockAtDpcLevel @ 0x14022B430
 * Callers:
 *     PopFxDeviceRelationsCleanup @ 0x140419798 (PopFxDeviceRelationsCleanup.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiTryToAcquireSpinLockInstrumented @ 0x14056E8F8 (KiTryToAcquireSpinLockInstrumented.c)
 */

BOOLEAN __stdcall KeTryToAcquireSpinLockAtDpcLevel(PKSPIN_LOCK SpinLock)
{
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  _DWORD *v5; // rcx
  int v6; // eax
  int v7; // edx

  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    return KiTryToAcquireSpinLockInstrumented(SpinLock);
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v6 = SchedulerAssist[6];
      SchedulerAssist[6] = v6 + 1;
      if ( v6 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( !_interlockedbittestandset64((volatile signed __int32 *)SpinLock, 0LL) )
    return 1;
  v5 = CurrentPrcb->SchedulerAssist;
  if ( v5 && CurrentPrcb->NestingLevel <= 1u )
  {
    v7 = v5[6] - 1;
    v5[6] = v7;
    if ( !v7 )
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  _mm_pause();
  return 0;
}
