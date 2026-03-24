/*
 * XREFs of KiSwapContext @ 0x140406470
 * Callers:
 *     KeRemoveQueueEx @ 0x1402047D0 (KeRemoveQueueEx.c)
 *     PsImpersonateContainerOfThread @ 0x14021BC90 (PsImpersonateContainerOfThread.c)
 *     KiProcessDeferredReadyList @ 0x140230BD0 (KiProcessDeferredReadyList.c)
 *     KiReadyOutSwappedThreads @ 0x140248460 (KiReadyOutSwappedThreads.c)
 *     KeDelayExecutionThread @ 0x140257490 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x140257CF0 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x140258E60 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402783B4 (KiCheckForThreadDispatch.c)
 *     KiSchedulerApc @ 0x140279C00 (KiSchedulerApc.c)
 *     KeSetSchedulingGroupRankBias @ 0x140288488 (KeSetSchedulingGroupRankBias.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140293A50 (KiAbThreadUnboostCpuPriority.c)
 *     KeYieldExecution @ 0x14029E1B0 (KeYieldExecution.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402AAD9C (KeCpuSetReportParkedProcessors.c)
 *     KeBoostPriorityThread @ 0x1402E2510 (KeBoostPriorityThread.c)
 *     KeSetLegacyAffinityThread @ 0x1402ECAF0 (KeSetLegacyAffinityThread.c)
 *     KiExitDispatcher @ 0x140343AC0 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x1403466D0 (KiSwapThread.c)
 *     KiAbForceProcessLockEntry @ 0x14038FA84 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x1403993CC (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C5FB4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C60DC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051C938 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051CBE0 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051E5C8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x140520364 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     SwapContext @ 0x1404067C0 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
