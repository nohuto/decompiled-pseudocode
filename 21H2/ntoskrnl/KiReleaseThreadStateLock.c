/*
 * XREFs of KiReleaseThreadStateLock @ 0x1402EA480
 * Callers:
 *     KeQueryTotalCycleTimeThread @ 0x14022EEF0 (KeQueryTotalCycleTimeThread.c)
 *     KiSetPriorityThread @ 0x1402302A0 (KiSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x1402305B0 (KeSetActualBasePriorityThread.c)
 *     MiSwapStackPage @ 0x1402C605C (MiSwapStackPage.c)
 *     KiApplyForegroundBoostThread @ 0x1402EA08C (KiApplyForegroundBoostThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402EAD48 (KeSetIdealProcessorThreadEx.c)
 *     KiSetThreadSchedulingGroup @ 0x1402EC058 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x1402EC1B8 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiSetAffinityThread @ 0x1402EC3D4 (KiSetAffinityThread.c)
 *     KeUpdateThreadTag @ 0x14036BF50 (KeUpdateThreadTag.c)
 *     KiUpdateThreadCpuSets @ 0x1403C628C (KiUpdateThreadCpuSets.c)
 *     KeTryToFreezeThreadStack @ 0x140513388 (KeTryToFreezeThreadStack.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E5C8 (KeSetThreadSchedulerAssist.c)
 *     KiSendHeteroRescheduleIntRequestHelper @ 0x14051FFF0 (KiSendHeteroRescheduleIntRequestHelper.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 *     KeAbCrossThreadDelete @ 0x140520E78 (KeAbCrossThreadDelete.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
