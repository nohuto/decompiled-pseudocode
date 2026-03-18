/*
 * XREFs of KeInsertQueueDpc @ 0x14027F670
 * Callers:
 *     IopAllocateIrpPrivate @ 0x1402113E0 (IopAllocateIrpPrivate.c)
 *     EtwpRequestFlushTimer @ 0x1402472E4 (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x1402670E0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140267618 (EtwpPrepareDirtyBuffer.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x1402D9730 (KiChargeSchedulingGroupCycleTime.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiInitializeUserApc @ 0x1402E8960 (KiInitializeUserApc.c)
 *     KiScheduleNextForegroundBoost @ 0x140314968 (KiScheduleNextForegroundBoost.c)
 *     PopQueueTargetDpc @ 0x14033E800 (PopQueueTargetDpc.c)
 *     MiRestoreTransitionPte @ 0x140346AA0 (MiRestoreTransitionPte.c)
 *     KiAddThreadToPrcbQueue @ 0x14035F310 (KiAddThreadToPrcbQueue.c)
 *     KiAbQueueAutoBoostDpc @ 0x14035F69C (KiAbQueueAutoBoostDpc.c)
 *     MmSetAccessLogging @ 0x140380314 (MmSetAccessLogging.c)
 *     ExQueueDebuggerWorker @ 0x1403C625C (ExQueueDebuggerWorker.c)
 *     HalpCmciHandler @ 0x1404BB0E8 (HalpCmciHandler.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404EBF58 (CmFcManagerNotifyFeatureUsage.c)
 *     KiResetForceIdle @ 0x140521B40 (KiResetForceIdle.c)
 *     EtwSendTraceBuffer @ 0x1405A4500 (EtwSendTraceBuffer.c)
 *     EtwpQueueStackWalkDpc @ 0x1405A53EC (EtwpQueueStackWalkDpc.c)
 *     EtwpCovSampCaptureQueueBuffer @ 0x1405AD668 (EtwpCovSampCaptureQueueBuffer.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405AD760 (EtwpCovSampCaptureReleaseToLookaside.c)
 *     EtwpCovSampLookasidePop @ 0x1405ADB0C (EtwpCovSampLookasidePop.c)
 *     PspProcessDelete @ 0x140660C40 (PspProcessDelete.c)
 *     PspThreadDelete @ 0x140666EA0 (PspThreadDelete.c)
 *     ObpProcessRemoveObjectQueue @ 0x1406B0C90 (ObpProcessRemoveObjectQueue.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 *     PopCaptureTimeOnProcZero @ 0x140993688 (PopCaptureTimeOnProcZero.c)
 *     PopInvokeSystemStateHandler @ 0x140995A68 (PopInvokeSystemStateHandler.c)
 *     KiCalibrateTimeAdjustment @ 0x140997B90 (KiCalibrateTimeAdjustment.c)
 *     PopEndMirroring @ 0x140999250 (PopEndMirroring.c)
 *     HalpCmciInitProcessor @ 0x14099C7A0 (HalpCmciInitProcessor.c)
 *     IopLiveDumpCorralProcessors @ 0x1409AEDA0 (IopLiveDumpCorralProcessors.c)
 *     PnprQuiesceProcessors @ 0x1409B1874 (PnprQuiesceProcessors.c)
 *     KdExitDebugger @ 0x1409BA190 (KdExitDebugger.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14027F690 (KiInsertQueueDpc.c)
 */

BOOLEAN __stdcall KeInsertQueueDpc(PRKDPC Dpc, PVOID SystemArgument1, PVOID SystemArgument2)
{
  return KiInsertQueueDpc((ULONG_PTR)Dpc, 0);
}
