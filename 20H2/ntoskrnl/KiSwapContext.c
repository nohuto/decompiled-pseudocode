/*
 * XREFs of KiSwapContext @ 0x140403E60
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     KiSwapThread @ 0x14021C4C0 (KiSwapThread.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiSchedulerApc @ 0x1402D7C50 (KiSchedulerApc.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1402DAD50 (KiQuantumEnd.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KeYieldExecution @ 0x140302FA0 (KeYieldExecution.c)
 *     KeBoostPriorityThread @ 0x140336FA0 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x14035E3E8 (KeSetSchedulingGroupRankBias.c)
 *     KiAbForceProcessLockEntry @ 0x14038F584 (KiAbForceProcessLockEntry.c)
 *     KeSetAffinityThread @ 0x140398F5C (KeSetAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x1403C55C4 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x1403C56EC (KeUpdateThreadCpuSets.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x14051AE58 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KeSetThreadSchedulerAssist @ 0x14051CAE8 (KeSetThreadSchedulerAssist.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     SwapContext @ 0x1404041B0 (SwapContext.c)
 */

__int64 __fastcall KiSwapContext(__int64 a1, __int64 a2, unsigned int a3)
{
  return SwapContext(a3);
}
