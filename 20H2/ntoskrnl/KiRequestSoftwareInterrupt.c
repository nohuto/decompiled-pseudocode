/*
 * XREFs of KiRequestSoftwareInterrupt @ 0x1402F7EF4
 * Callers:
 *     KeRemoveQueueEx @ 0x140207B10 (KeRemoveQueueEx.c)
 *     KiExitDispatcher @ 0x1402197A0 (KiExitDispatcher.c)
 *     PsImpersonateContainerOfThread @ 0x14027E130 (PsImpersonateContainerOfThread.c)
 *     KeAccumulateTicks @ 0x140283C20 (KeAccumulateTicks.c)
 *     KiReadyOutSwappedThreads @ 0x14028D410 (KiReadyOutSwappedThreads.c)
 *     KiProcessDeferredReadyList @ 0x1402BE630 (KiProcessDeferredReadyList.c)
 *     KiCheckForThreadDispatch @ 0x1402D82C4 (KiCheckForThreadDispatch.c)
 *     KeSetBasePriorityThread @ 0x1402DBEC0 (KeSetBasePriorityThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KeCpuSetReportParkedProcessors @ 0x1402F7040 (KeCpuSetReportParkedProcessors.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402F7278 (KiAbThreadUnboostCpuPriority.c)
 *     KeSetLegacyAffinityThread @ 0x1402F77F0 (KeSetLegacyAffinityThread.c)
 *     KiRequestTimer2Expiration @ 0x1402F7DC0 (KiRequestTimer2Expiration.c)
 *     KiFlushQueuedDpcsWorker @ 0x140328160 (KiFlushQueuedDpcsWorker.c)
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
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x14051F040 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 *     KeTransitionProcessorParkState @ 0x1405239CC (KeTransitionProcessorParkState.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x1402F7F30 (HalRequestSoftwareInterrupt.c)
 */

__int64 __fastcall KiRequestSoftwareInterrupt(struct _KPRCB *CurrentPrcb, char a2)
{
  __int64 result; // rax

  if ( a2 != 2 )
    goto LABEL_5;
  if ( !CurrentPrcb )
    CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->NestingLevel )
  {
    CurrentPrcb->InterruptRequest = 1;
  }
  else
  {
LABEL_5:
    LOBYTE(CurrentPrcb) = a2;
    return HalRequestSoftwareInterrupt(CurrentPrcb);
  }
  return result;
}
