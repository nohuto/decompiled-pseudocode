/*
 * XREFs of KiReadyDeferredReadyList @ 0x14026D190
 * Callers:
 *     KeCpuSetReportParkedProcessors @ 0x14020245C (KeCpuSetReportParkedProcessors.c)
 *     KiSwapThread @ 0x140265350 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140265FF0 (KiSearchForNewThreadOnProcessor.c)
 *     PsImpersonateContainerOfThread @ 0x14026B3F0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x14026D000 (KiProcessDeferredReadyList.c)
 *     KeBoostPriorityThread @ 0x1402C94E4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402C9F30 (KeSetLegacyAffinityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x1402DC40C (KeSetSchedulingGroupRankBias.c)
 *     KiAbDeferredProcessingWorker @ 0x1402DD070 (KiAbDeferredProcessingWorker.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140303FF4 (KiAbThreadUnboostCpuPriority.c)
 *     KiFastReadyThread @ 0x1403299AC (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x1403306F4 (KiSearchForNewThread.c)
 *     KiQuantumEnd @ 0x1403312E0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140332450 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x140333A80 (KiDirectSwitchThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x140335D50 (KiProcessPendingForegroundBoosts.c)
 *     KiAbApplyWakeupBoost @ 0x14035AA8C (KiAbApplyWakeupBoost.c)
 *     KiSetThreadSchedulingGroup @ 0x14035B1E8 (KiSetThreadSchedulingGroup.c)
 *     KiAbForceProcessLockEntry @ 0x14038C554 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140395ECC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C1F94 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C20BC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140516E38 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140518AC8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051B020 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x14051F9AC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 */

_QWORD *__fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = (_QWORD *)*a2;
  if ( *a2 )
  {
    for ( *a2 = *result; ; *a2 = *result )
    {
      KiDeferredReadySingleThread(a1, (__int64)(result - 27), (__int64)a2, a4);
      result = (_QWORD *)*a2;
      if ( !*a2 )
        break;
    }
  }
  return result;
}
