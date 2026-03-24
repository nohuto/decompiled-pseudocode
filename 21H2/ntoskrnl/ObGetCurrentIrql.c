/*
 * XREFs of ObGetCurrentIrql @ 0x14025F590
 * Callers:
 *     EtwpOpenLogger @ 0x14025DB98 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x14025DF60 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x14025F510 (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x14025FBDC (EtwpRequestFlushTimer.c)
 *     EtwpSwitchBuffer @ 0x140265E94 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402663DC (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x140273320 (KiDispatchException.c)
 *     ObpDeferObjectDeletion @ 0x1402BC2D0 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x1402C84B0 (EtwTelemetryCoverageReport.c)
 *     RtlQueryFeatureConfiguration @ 0x14038C800 (RtlQueryFeatureConfiguration.c)
 *     sub_1403DDE50 @ 0x1403DDE50 (sub_1403DDE50.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404ED834 (CmFcManagerNotifyFeatureUsage.c)
 *     KdPowerTransitionEx @ 0x140510FC0 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x140513D14 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140513DF0 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x14051A810 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x1405250E0 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140564D28 (ObpPushStackInfo.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E160 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5D94 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1405A5F30 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1405A6F00 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405AAB68 (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1405AD158 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1405AD6C0 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406B8D9C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x1406C0144 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x140798D94 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1403506D0 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
