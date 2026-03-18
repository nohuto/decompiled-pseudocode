/*
 * XREFs of PopOkayToQueueNextWorkItem @ 0x14035F184
 * Callers:
 *     PopBsdUpdateWorker @ 0x1405C7E90 (PopBsdUpdateWorker.c)
 *     PpmPerfTelemetryWorker @ 0x14070E530 (PpmPerfTelemetryWorker.c)
 *     PopClearUserShutdownMarkerWorker @ 0x140767530 (PopClearUserShutdownMarkerWorker.c)
 *     PopSetUserShutdownMarkerWorker @ 0x140767580 (PopSetUserShutdownMarkerWorker.c)
 *     PopExternalMonitorUpdatedWorker @ 0x1407C2B10 (PopExternalMonitorUpdatedWorker.c)
 *     PopRecordLidStateWorker @ 0x1408DDE00 (PopRecordLidStateWorker.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EC0D4 (PopDripsWatchdogScheduleNextTimer.c)
 *     PopNetRefreshTimerWorkerCallback @ 0x1408EEB60 (PopNetRefreshTimerWorkerCallback.c)
 *     PopPreSleepNotifyWorker @ 0x1408F22D0 (PopPreSleepNotifyWorker.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AF6A0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopOkayToQueueNextWorkItem(__int64 a1)
{
  return (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
}
