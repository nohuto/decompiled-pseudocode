/*
 * XREFs of ObGetCurrentIrql @ 0x14023A8A0
 * Callers:
 *     ObpDeferObjectDeletion @ 0x14023A834 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     EtwpSwitchBuffer @ 0x140253E34 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x14025437C (EtwpPrepareDirtyBuffer.c)
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     EtwpOpenLogger @ 0x14027F6C8 (EtwpOpenLogger.c)
 *     EtwpEventWriteFull @ 0x14027FA90 (EtwpEventWriteFull.c)
 *     MmCanThreadFault @ 0x140281228 (MmCanThreadFault.c)
 *     EtwpRequestFlushTimer @ 0x140281350 (EtwpRequestFlushTimer.c)
 *     RtlQueryFeatureConfiguration @ 0x14038C950 (RtlQueryFeatureConfiguration.c)
 *     sub_1403DDFC0 @ 0x1403DDFC0 (sub_1403DDFC0.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404EDA74 (CmFcManagerNotifyFeatureUsage.c)
 *     KdPowerTransitionEx @ 0x140511200 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x140513F54 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x140514030 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x14051AA50 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x140525320 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x140564F68 (ObpPushStackInfo.c)
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x14058E390 (RtlRegisterFeatureConfigurationChangeNotification.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A5FC4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1405A6160 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1405A7130 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405AAD98 (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1405AD388 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1405AD8F0 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x14061839C (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x14061F054 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x140798F94 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14035B420 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( (unsigned __int8)KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
