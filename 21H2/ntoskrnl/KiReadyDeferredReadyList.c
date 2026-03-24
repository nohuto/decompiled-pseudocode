/*
 * XREFs of KiReadyDeferredReadyList @ 0x140230D60
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KiDirectSwitchThread @ 0x14024C840 (KiDirectSwitchThread.c)
 *     KiSearchForNewThread @ 0x140256CB8 (KiSearchForNewThread.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140258E60 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiFastReadyThread @ 0x140278190 (KiFastReadyThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140288488 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140293A50 (KiAbThreadUnboostCpuPriority.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402AAD9C (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1402E2510 (KeBoostPriorityThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9ED0 (KiProcessPendingForegroundBoosts.c)
 *     KiSetThreadSchedulingGroup @ 0x1402EC058 (KiSetThreadSchedulingGroup.c)
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x1402F0F60 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x1402F197C (KiAbApplyWakeupBoost.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140347370 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbForceProcessLockEntry @ 0x14038FA84 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x1403993CC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5FB4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C60DC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C938 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E5C8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520B20 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x1405254AC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140343EC0 (KiDeferredReadySingleThread.c)
 */

_QWORD *__fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2)
{
  _QWORD *result; // rax

  result = *a2;
  if ( *a2 )
  {
    for ( *a2 = (_QWORD *)*result; ; *a2 = (_QWORD *)*result )
    {
      KiDeferredReadySingleThread(a1, result - 27, a2);
      result = *a2;
      if ( !*a2 )
        break;
    }
  }
  return result;
}
