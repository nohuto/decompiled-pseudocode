/*
 * XREFs of KeInsertQueueDpc @ 0x14021FD40
 * Callers:
 *     KiQueueReadyThread @ 0x1402593B0 (KiQueueReadyThread.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14025A0A0 (KiChargeSchedulingGroupCycleTime.c)
 *     EtwpRequestFlushTimer @ 0x14025FBDC (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140265E94 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402663DC (EtwpPrepareDirtyBuffer.c)
 *     PopQueueTargetDpc @ 0x14027B910 (PopQueueTargetDpc.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402889FC (KiAbQueueAutoBoostDpc.c)
 *     KiAddThreadToPrcbQueue @ 0x14029C210 (KiAddThreadToPrcbQueue.c)
 *     MiRestoreTransitionPte @ 0x1402A2DD0 (MiRestoreTransitionPte.c)
 *     KiInitializeUserApc @ 0x1402B2594 (KiInitializeUserApc.c)
 *     KiScheduleNextForegroundBoost @ 0x1402B7D5C (KiScheduleNextForegroundBoost.c)
 *     IopAllocateIrpPrivate @ 0x140351A70 (IopAllocateIrpPrivate.c)
 *     MmSetAccessLogging @ 0x140380B54 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x1403C6C4C (ExQueueDebuggerWorker.c)
 *     HalpCmciHandler @ 0x1404BCAA8 (HalpCmciHandler.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404ED834 (CmFcManagerNotifyFeatureUsage.c)
 *     KiResetForceIdle @ 0x140523620 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1405A5F30 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A6E1C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF068 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF160 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF50C (EtwpCovSampLookasidePop.c)
 *     PspProcessDelete @ 0x1406136C0 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140619920 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140684B90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x1406B8D9C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406C0144 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x140798D94 (EtwInitialize.c)
 *     PopCaptureTimeOnProcZero @ 0x140990688 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140992A68 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140994B90 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140996250 (PopEndMirroring.c)
 *     HalpCmciInitProcessor @ 0x140999D20 (HalpCmciInitProcessor.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ABCA0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AE774 (PnprQuiesceProcessors.c)
 *     KdExitDebugger @ 0x1409B7190 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14021FD60 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
