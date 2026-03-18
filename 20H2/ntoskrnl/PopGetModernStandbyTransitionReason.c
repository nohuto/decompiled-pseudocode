/*
 * XREFs of PopGetModernStandbyTransitionReason @ 0x140574AF0
 * Callers:
 *     PopCalculateCsSummary @ 0x14056E490 (PopCalculateCsSummary.c)
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 *     PopDiagTraceSleepStudyStart @ 0x1408EDA88 (PopDiagTraceSleepStudyStart.c)
 *     PopIdleCsStateChanged @ 0x1408F7E54 (PopIdleCsStateChanged.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x14021E5F0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxReleaseSpinLock @ 0x14021E780 (KxReleaseSpinLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F1DD4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PopGetModernStandbyTransitionReason(char a1, __int64 *a2)
{
  unsigned __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rax
  _DWORD *SchedulerAssist; // r9
  int v10; // edx
  bool v11; // zf

  v4 = KeAcquireSpinLockRaiseToDpc(&PopModernStandbyTransitionInfo);
  if ( a1 )
  {
    v5 = dword_140C11604;
    v6 = 0LL;
  }
  else
  {
    v5 = dword_140C11608;
    v6 = qword_140C11610;
  }
  if ( a2 )
    *a2 = v6;
  KxReleaseSpinLock(&PopModernStandbyTransitionInfo);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v4 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v4 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v4);
  return v5;
}
