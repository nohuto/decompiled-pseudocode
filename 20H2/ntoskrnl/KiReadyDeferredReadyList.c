/*
 * XREFs of KiReadyDeferredReadyList @ 0x1402BE7C0
 * Callers:
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     KiSearchForNewThreadOnProcessor @ 0x14021D160 (KiSearchForNewThreadOnProcessor.c)
 *     KiAbDeferredProcessingWorker @ 0x140242530 (KiAbDeferredProcessingWorker.c)
 *     KiAbApplyWakeupBoost @ 0x140242F4C (KiAbApplyWakeupBoost.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiFastReadyThread @ 0x1402D80A0 (KiFastReadyThread.c)
 *     KiSearchForNewThread @ 0x1402D9CEC (KiSearchForNewThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiDirectSwitchThread @ 0x1402DE570 (KiDirectSwitchThread.c)
 *     KiProcessPendingForegroundBoosts @ 0x1402E9570 (KiProcessPendingForegroundBoosts.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14035E3E8 (KeSetSchedulingGroupRankBias.c)
 *     KiSetThreadSchedulingGroup @ 0x14035F01C (KiSetThreadSchedulingGroup.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C56EC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051F040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 */

struct _SINGLE_LIST_ENTRY *__fastcall KiReadyDeferredReadyList(__int64 a1, _SINGLE_LIST_ENTRY *a2)
{
  struct _SINGLE_LIST_ENTRY *result; // rax

  result = a2->Next;
  if ( a2->Next )
  {
    for ( a2->Next = result->Next; ; a2->Next = result->Next )
    {
      KiDeferredReadySingleThread(a1, (ULONG_PTR)&result[-27], a2);
      result = a2->Next;
      if ( !a2->Next )
        break;
    }
  }
  return result;
}
