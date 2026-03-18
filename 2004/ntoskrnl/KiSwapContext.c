/*
 * XREFs of KiSwapContext @ 0x1403FDDE0
 * Callers:
 *     KiSwapThread @ 0x14020C300 (KiSwapThread.c)
 *     KeRemoveQueueEx @ 0x14020F400 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x1402123A0 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140213FB0 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140281200 (KiReadyOutSwappedThreads.c)
 *     KiExitDispatcher @ 0x140286FF0 (KiExitDispatcher.c)
 *     KeDelayExecutionThread @ 0x1402BC230 (KeDelayExecutionThread.c)
 *     KiCheckForThreadDispatch @ 0x1402E4AA4 (KiCheckForThreadDispatch.c)
 *     KiQuantumEnd @ 0x1402EC1A0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402ED310 (KeSetBasePriorityThread.c)
 *     KeYieldExecution @ 0x1402F1580 (KeYieldExecution.c)
 *     KiSchedulerApc @ 0x1402FA4E0 (KiSchedulerApc.c)
 *     KeBoostPriorityThread @ 0x14030AEC4 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x14030B910 (KeSetLegacyAffinityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x14032B4B4 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140340DC4 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetSchedulingGroupRankBias @ 0x140348C48 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038D0C4 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140396A9C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C2E54 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C2F7C (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140517488 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x140519118 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     SwapContext @ 0x1403FE130 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
