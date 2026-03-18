/*
 * XREFs of KeInsertQueueDpc @ 0x140214C00
 * Callers:
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027E550 (EtwpPrepareDirtyBuffer.c)
 *     IopAllocateIrpPrivate @ 0x14028F830 (IopAllocateIrpPrivate.c)
 *     EtwpRequestFlushTimer @ 0x1402C8E5C (EtwpRequestFlushTimer.c)
 *     KiInitializeUserApc @ 0x1402E30B0 (KiInitializeUserApc.c)
 *     PopQueueTargetDpc @ 0x1402E3C10 (PopQueueTargetDpc.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1402EDEE0 (KiChargeSchedulingGroupCycleTime.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KiScheduleNextForegroundBoost @ 0x1402EF6A4 (KiScheduleNextForegroundBoost.c)
 *     KiAddThreadToPrcbQueue @ 0x1402F18F0 (KiAddThreadToPrcbQueue.c)
 *     MiRestoreTransitionPte @ 0x1402F6C10 (MiRestoreTransitionPte.c)
 *     KiAbQueueAutoBoostDpc @ 0x14032A93C (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x14037E5E4 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x1403C3AEC (ExQueueDebuggerWorker.c)
 *     HalpCmciHandler @ 0x1404B7BC8 (HalpCmciHandler.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E86C8 (CmFcManagerNotifyFeatureUsage.c)
 *     KiResetForceIdle @ 0x14051E170 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1405A0A60 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A194C (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405A9B08 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9C00 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405A9FAC (EtwpCovSampLookasidePop.c)
 *     PspProcessDelete @ 0x14061A610 (PspProcessDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x140698AB0 (ObpProcessRemoveObjectQueue.c)
 *     PspThreadDelete @ 0x14069AB30 (PspThreadDelete.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 *     PopCaptureTimeOnProcZero @ 0x14098D698 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x14098FAAC (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140991B20 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x1409930F0 (PopEndMirroring.c)
 *     HalpCmciInitProcessor @ 0x140996760 (HalpCmciInitProcessor.c)
 *     IopLiveDumpCorralProcessors @ 0x1409A8E30 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409AB904 (PnprQuiesceProcessors.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140214C20 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
