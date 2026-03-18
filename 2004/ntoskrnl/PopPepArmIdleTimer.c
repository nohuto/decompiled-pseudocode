/*
 * XREFs of PopPepArmIdleTimer @ 0x14056EB94
 * Callers:
 *     PopPepGetComponentPreferedIdleState @ 0x140346908 (PopPepGetComponentPreferedIdleState.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14056F580 (PopPepIdleTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutRoutine @ 0x14056F5B0 (PopPepIdleTimeoutRoutine.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140212700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeSetCoalescableTimer @ 0x1402C8FA0 (KeSetCoalescableTimer.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PopPepArmIdleTimer(char a1)
{
  unsigned __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( PopPepIdleStateTimeout )
  {
    v2 = ExAcquireSpinLockExclusive(&PopPepIdleTimerLock);
    if ( a1 )
      PopPepIdleTimerArmed = 0;
    if ( !PopPepIdleTimerArmed && PopPepPoweredIdleComponentCount > 0 )
    {
      PopPepIdleTimerArmed = 1;
      KeSetCoalescableTimer(
        &PopPepIdleTimer,
        (LARGE_INTEGER)(-10000LL * PopPepIdleStateTimeout),
        0,
        PopPepIdleStateTimeout,
        &PopPepIdleDpc);
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(&PopPepIdleTimerLock);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v7 = (v6 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v6;
          if ( v7 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
