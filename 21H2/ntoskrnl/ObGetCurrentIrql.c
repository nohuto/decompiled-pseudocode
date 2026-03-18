/*
 * XREFs of ObGetCurrentIrql @ 0x140244120
 * Callers:
 *     EtwpOpenLogger @ 0x14022AFF8 (EtwpOpenLogger.c)
 *     ObpDeferObjectDeletion @ 0x1402440B4 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x14024F470 (EtwTelemetryCoverageReport.c)
 *     KiDispatchException @ 0x140299280 (KiDispatchException.c)
 *     EtwpSwitchBuffer @ 0x1402E1704 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402E1CBC (EtwpPrepareDirtyBuffer.c)
 *     EtwpRequestFlushTimer @ 0x1402E1D48 (EtwpRequestFlushTimer.c)
 *     EtwpEventWriteFull @ 0x140300E50 (EtwpEventWriteFull.c)
 *     EtwpSendTraceEvent @ 0x1403B3C40 (EtwpSendTraceEvent.c)
 *     RtlQueryFeatureConfiguration @ 0x1403C7820 (RtlQueryFeatureConfiguration.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x1403C7A30 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     WheaIsCriticalState @ 0x1403D2BA0 (WheaIsCriticalState.c)
 *     KdPowerTransitionEx @ 0x1403DA590 (KdPowerTransitionEx.c)
 *     sub_1403ED150 @ 0x1403ED150 (sub_1403ED150.c)
 *     EtwpGetStackCaptureSettings @ 0x140460684 (EtwpGetStackCaptureSettings.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x14053FE50 (CmFcManagerNotifyFeatureUsage.c)
 *     KeResumeClockTimerSafe @ 0x14056CB60 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14056CC3C (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140570750 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x1405792C0 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     EtwSendTraceBuffer @ 0x140630940 (EtwSendTraceBuffer.c)
 *     EtwpDisableCompression @ 0x1406352B0 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1406354FC (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406EC9F8 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14082AB94 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
