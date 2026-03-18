/*
 * XREFs of ObGetCurrentIrql @ 0x140236140
 * Callers:
 *     EtwpRequestFlushTimer @ 0x14023602C (EtwpRequestFlushTimer.c)
 *     MmCanThreadFault @ 0x1402360B8 (MmCanThreadFault.c)
 *     EtwpSwitchBuffer @ 0x140241288 (EtwpSwitchBuffer.c)
 *     EtwpPrepareDirtyBuffer @ 0x1402417B8 (EtwpPrepareDirtyBuffer.c)
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     EtwpOpenLogger @ 0x1402D6EF8 (EtwpOpenLogger.c)
 *     ObpDeferObjectDeletion @ 0x14030B7E0 (ObpDeferObjectDeletion.c)
 *     EtwTelemetryCoverageReport @ 0x140318CF0 (EtwTelemetryCoverageReport.c)
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     sub_1403D9A10 @ 0x1403D9A10 (sub_1403D9A10.c)
 *     CmFcManagerNotifyFeatureUsage @ 0x1404E8098 (CmFcManagerNotifyFeatureUsage.c)
 *     KdPowerTransitionEx @ 0x14050B510 (KdPowerTransitionEx.c)
 *     KeResumeClockTimerSafe @ 0x14050E254 (KeResumeClockTimerSafe.c)
 *     KeSuspendClockTimerSafe @ 0x14050E330 (KeSuspendClockTimerSafe.c)
 *     KeTryToInsertQueueApc @ 0x140514D50 (KeTryToInsertQueueApc.c)
 *     KiGetRecoveryInformation @ 0x14051F5E0 (KiGetRecoveryInformation.c)
 *     ObpPushStackInfo @ 0x14055F238 (ObpPushStackInfo.c)
 *     EtwpGetStackExtendedHeaderItem @ 0x1405A01D4 (EtwpGetStackExtendedHeaderItem.c)
 *     EtwSendTraceBuffer @ 0x1405A0370 (EtwSendTraceBuffer.c)
 *     EtwpStackTraceDispatcher @ 0x1405A1340 (EtwpStackTraceDispatcher.c)
 *     EtwpSendTraceEvent @ 0x1405A4FCC (EtwpSendTraceEvent.c)
 *     EtwpDisableCompression @ 0x1405A7508 (EtwpDisableCompression.c)
 *     EtwpReenableCompression @ 0x1405A7A70 (EtwpReenableCompression.c)
 *     EtwpSynchronizeWithLogger @ 0x1406777EC (EtwpSynchronizeWithLogger.c)
 *     EtwpStopLoggerInstance @ 0x140678BF8 (EtwpStopLoggerInstance.c)
 *     EtwInitialize @ 0x1407867D8 (EtwInitialize.c)
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140208590 (KeAreInterruptsEnabled.c)
 */

unsigned __int8 ObGetCurrentIrql()
{
  if ( KeAreInterruptsEnabled() )
    return KeGetCurrentIrql();
  else
    return 15;
}
