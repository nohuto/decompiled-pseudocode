/*
 * XREFs of KiReadyDeferredReadyList @ 0x140214140
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14020CFA0 (KiSearchForNewThreadOnProcessor.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KiAbApplyWakeupBoost @ 0x140274DEC (KiAbApplyWakeupBoost.c)
 *     KiFastReadyThread @ 0x1402E4884 (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x1402EB5B4 (KiSearchForNewThread.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1402EE940 (KiDirectSwitchThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402F0C10 (KiProcessPendingForegroundBoosts.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     KiAbDeferredProcessingWorker @ 0x140329E40 (KiAbDeferredProcessingWorker.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x140348C48 (KeSetSchedulingGroupRankBias.c)
 *     KiSetThreadSchedulingGroup @ 0x14034E548 (KiSetThreadSchedulingGroup.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C2F7C (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051B670 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x14051FFFC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 */

_QWORD *__fastcall KiReadyDeferredReadyList(__int64 a1, _QWORD **a2, __int64 a3, __int64 a4)
{
  _QWORD *result; // rax

  result = *a2;
  if ( *a2 )
  {
    for ( *a2 = (_QWORD *)*result; ; *a2 = (_QWORD *)*result )
    {
      KiDeferredReadySingleThread(a1, result - 27, a2, a4);
      result = *a2;
      if ( !*a2 )
        break;
    }
  }
  return result;
}
