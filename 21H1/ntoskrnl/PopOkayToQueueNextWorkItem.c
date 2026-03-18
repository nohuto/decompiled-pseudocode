/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x1403217D4
 * Callers:
 *     PopBsdUpdateWorker @ 0x1405C7060 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x1406EA8C0 (PpmPerfTelemetryWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140765B70 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140765BC0 (PopSetUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407BF5B0 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x1408DCA90 (PopRecordLidStateWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EAE54 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408ED870 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408F0FE0 (PopPreSleepNotifyWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AE840 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
