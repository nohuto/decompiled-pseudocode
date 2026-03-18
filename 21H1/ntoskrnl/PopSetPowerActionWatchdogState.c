/*
 * XREFs of PopSetPowerActionWatchdogState @ 0x14037FFB8
 * Callers:
 *     PopIssueActionRequest @ 0x140761B68 (PopIssueActionRequest.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     PopPowerActionWatchdog @ 0x140569B00 (PopPowerActionWatchdog.c)
 *     PopUpdatePowerActionWatchdogTimeouts @ 0x1407618A0 (PopUpdatePowerActionWatchdogTimeouts.c)
 */

void __fastcall PopSetPowerActionWatchdogState(unsigned int a1)
{
  unsigned __int64 v2; // rdi
  int v3; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v7; // eax
  bool v8; // zf

  if ( a1 <= 2 )
  {
    if ( a1 == 1 )
      PopUpdatePowerActionWatchdogTimeouts();
    v2 = KeAcquireSpinLockRaiseToDpc(&qword_140C23518);
    if ( dword_140C235A4 != a1 )
    {
      if ( dword_140C235A4 )
      {
        if ( !KeCancelTimer(&stru_140C23560) )
          PopPowerActionWatchdog(0LL, 0LL, 0LL, 0LL);
        qword_140C235A8 = 0LL;
        dword_140C235A4 = 0;
      }
      if ( a1 )
      {
        v3 = a1 == 1 ? PopPowerActionTransitioningWatchdogTimeout : PopPowerActionResumingWatchdogTimeout;
        if ( v3 )
        {
          qword_140C235A8 = MEMORY[0xFFFFF78000000008];
          dword_140C235A4 = a1;
          KiSetTimerEx((__int64)&stru_140C23560, -10000000LL * v3, 0, 0, (__int64)&dword_140C23520);
        }
      }
    }
    KxReleaseSpinLock(&qword_140C23518);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
          v8 = (v7 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v7;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v2);
  }
}
