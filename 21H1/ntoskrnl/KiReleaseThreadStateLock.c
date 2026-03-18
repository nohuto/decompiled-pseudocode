/*
 * XREFs of KiReleaseThreadStateLock @ 0x140336300
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14025A360 (KeQueryTotalCycleTimeThread.c)
 *     KiSetPriorityThread @ 0x14026C6D0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14026C9E0 (KeSetActualBasePriorityThread.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140311544 (KiRemoveThreadFromSchedulingGroup.c)
 *     MiSwapStackPage @ 0x140316FFC (MiSwapStackPage.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     KiApplyForegroundBoostThread @ 0x140335F0C (KiApplyForegroundBoostThread.c)
 *     KiSetThreadSchedulingGroup @ 0x14035B1E8 (KiSetThreadSchedulingGroup.c)
 *     KeUpdateThreadTag @ 0x140369290 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1403C226C (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x14050D8C8 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051A4F0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x14051B378 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiReleaseThreadStateLock(__int64 a1, __int64 a2, volatile signed __int64 *a3)
{
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  struct _KPRCB *v6; // rcx
  _DWORD *v7; // rdx
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 48), 0LL);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        result = (unsigned int)(SchedulerAssist[6] - 1);
        SchedulerAssist[6] = result;
        if ( !(_DWORD)result )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  if ( a3 )
  {
    _InterlockedAnd64(a3, 0LL);
    v6 = KeGetCurrentPrcb();
    v7 = v6->SchedulerAssist;
    if ( v7 )
    {
      if ( v6->NestingLevel <= 1u )
      {
        result = (unsigned int)(v7[6] - 1);
        v7[6] = result;
        if ( !(_DWORD)result )
          return KiRemoveSystemWorkPriorityKick(v6);
      }
    }
  }
  return result;
}
