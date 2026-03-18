/*
 * XREFs of ObGetCurrentIrql @ 0x1402473F0
 * Callers:
 *     EtwpEventWriteFull @ 0x14020E300 (EtwpEventWriteFull.c)
 *     EtwpOpenLogger @ 0x140245C78 (EtwpOpenLogger.c)
 *     EtwpRequestFlushTimer @ 0x1402472E4 (EtwpRequestFlushTimer.c)
 *     MmCanThreadFault @ 0x140247370 (MmCanThreadFault.c)
 *     EtwpSwitchBuffer @ 0x1402670E0 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x140267618 (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x1402E7710 (KiDispatchException.c)
 *     ObpDeferObjectDeletion @ 0x14031A0E0 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x1403272E0 (EtwTelemetryCoverageReport.c)
 *     RtlQueryFeatureConfiguration @ 0x14038C0B0 (RtlQueryFeatureConfiguration.c)
 *     sub_1403DD4E0 @ 0x1403DD4E0 (sub_1403DD4E0.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404EBF58 (CmFcManagerNotifyFeatureUsage.c)
 *     KdPowerTransitionEx @ 0x14050F490 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x1405121D4 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x1405122B0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140518CD0 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x140523600 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140563258 (ObpPushStackInfo.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058C750 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A4364 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1405A4500 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1405A54D0 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405A915C (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1405AB758 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1405ABCC0 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x14071269C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140712DC0 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x1407A9640 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140226820 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
