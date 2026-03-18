/*
 * XREFs of KeInsertQueueDpc @ 0x14026DC50
 * Callers:
 *     PopQueueTargetDpc @ 0x140205060 (PopQueueTargetDpc.c)
 *     EtwpRequestFlushTimer @ 0x14023602C (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402417B8 (EtwpPrepareDirtyBuffer.c)
 *     IopAllocateIrpPrivate @ 0x140252FB0 (IopAllocateIrpPrivate.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402DDB6C (KiAbQueueAutoBoostDpc.c)
 *     KiInitializeUserApc @ 0x140329350 (KiInitializeUserApc.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140333020 (KiChargeSchedulingGroupCycleTime.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KiScheduleNextForegroundBoost @ 0x1403347E4 (KiScheduleNextForegroundBoost.c)
 *     KiAddThreadToPrcbQueue @ 0x140336A30 (KiAddThreadToPrcbQueue.c)
 *     MiRestoreTransitionPte @ 0x140352BF0 (MiRestoreTransitionPte.c)
 *     MmSetAccessLogging @ 0x14037DB24 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x1403C2C2C (ExQueueDebuggerWorker.c)
 *     HalpCmciHandler @ 0x1404B74E8 (HalpCmciHandler.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E8098 (CmFcManagerNotifyFeatureUsage.c)
 *     KiResetForceIdle @ 0x14051DB20 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A125C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9418 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9510 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405A98BC (EtwpCovSampLookasidePop.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405EF5A0 (ObpProcessRemoveObjectQueue.c)
 *     PspThreadDelete @ 0x1405F1620 (PspThreadDelete.c)
 *     PspProcessDelete @ 0x14065FD30 (PspProcessDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 *     PopCaptureTimeOnProcZero @ 0x14098CE80 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x14098ED58 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140990BE0 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140991AB0 (PopEndMirroring.c)
 *     HalpCmciInitProcessor @ 0x140995390 (HalpCmciInitProcessor.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A7FD0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AAAA4 (PnprQuiesceProcessors.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14026DC70 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
