/*
 * XREFs of ObGetCurrentIrql @ 0x1402C8F70
 * Callers:
 *     EtwpOpenLogger @ 0x14026D558 (EtwpOpenLogger.c)
 *     EtwpSwitchBuffer @ 0x14027E018 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14027E550 (EtwpPrepareDirtyBuffer.c)
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     EtwpRequestFlushTimer @ 0x1402C8E5C (EtwpRequestFlushTimer.c)
 *     MmCanThreadFault @ 0x1402C8EE8 (MmCanThreadFault.c)
 *     KiDispatchException @ 0x1402E5930 (KiDispatchException.c)
 *     ObpDeferObjectDeletion @ 0x1403494E0 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x1403568E0 (EtwTelemetryCoverageReport.c)
 *     RtlQueryFeatureConfiguration @ 0x140389E10 (RtlQueryFeatureConfiguration.c)
 *     sub_1403DA850 @ 0x1403DA850 (sub_1403DA850.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E86C8 (CmFcManagerNotifyFeatureUsage.c)
 *     KdPowerTransitionEx @ 0x14050BB60 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x14050E8A4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14050E980 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x1405153A0 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x14051FC30 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x14055F888 (ObpPushStackInfo.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14057FF60 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A08C4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1405A0A60 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1405A1A30 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405A56BC (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1405A7BF8 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1405A8160 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406C6C5C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406C6F20 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x14079A310 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14029B0A0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
