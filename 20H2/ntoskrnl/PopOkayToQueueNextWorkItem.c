/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14032FF84
 * Callers:
 *     PopBsdUpdateWorker @ 0x1405CD1D0 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x1406E0B60 (PpmPerfTelemetryWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140776560 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x1407765B0 (PopSetUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407D1310 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x1408E3C40 (PopRecordLidStateWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408F1CE4 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408F4770 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408F7EE0 (PopPreSleepNotifyWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B5610 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
