/*
 * XREFs of KeInsertQueueDpc @ 0x1402C4640
 * Callers:
 *     KiAbQueueAutoBoostDpc @ 0x140205B9C (KiAbQueueAutoBoostDpc.c)
 *     KiAddThreadToPrcbQueue @ 0x140214370 (KiAddThreadToPrcbQueue.c)
 *     MiRestoreTransitionPte @ 0x140220210 (MiRestoreTransitionPte.c)
 *     KiInitializeUserApc @ 0x140230744 (KiInitializeUserApc.c)
 *     KiScheduleNextForegroundBoost @ 0x140235F3C (KiScheduleNextForegroundBoost.c)
 *     EtwpSwitchBuffer @ 0x140253E34 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     PopQueueTargetDpc @ 0x1402698B0 (PopQueueTargetDpc.c)
 *     KiQueueReadyThread @ 0x14027A920 (KiQueueReadyThread.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x14027B610 (KiChargeSchedulingGroupCycleTime.c)
 *     EtwpRequestFlushTimer @ 0x140281350 (EtwpRequestFlushTimer.c)
 *     IopAllocateIrpPrivate @ 0x14035C7C0 (IopAllocateIrpPrivate.c)
 *     MmSetAccessLogging @ 0x1403806A4 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x1403C6DEC (ExQueueDebuggerWorker.c)
 *     HalpCmciHandler @ 0x1404BCCE8 (HalpCmciHandler.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404EDA74 (CmFcManagerNotifyFeatureUsage.c)
 *     KiResetForceIdle @ 0x140523860 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1405A6160 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A704C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AF298 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AF390 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405AF73C (EtwpCovSampLookasidePop.c)
 *     ObpProcessRemoveObjectQueue @ 0x1405E2E40 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     PspProcessDelete @ 0x14067D320 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140683580 (PspThreadDelete.c)
 *     EtwInitialize @ 0x140798F94 (EtwInitialize.c)
 *     PopCaptureTimeOnProcZero @ 0x140991688 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140993A68 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140995B90 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140997250 (PopEndMirroring.c)
 *     HalpCmciInitProcessor @ 0x14099AD20 (HalpCmciInitProcessor.c)
 *     IopLiveDumpCorralProcessors @ 0x1409ACBD0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AF6A4 (PnprQuiesceProcessors.c)
 *     KdExitDebugger @ 0x1409B8190 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1402C4660 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
