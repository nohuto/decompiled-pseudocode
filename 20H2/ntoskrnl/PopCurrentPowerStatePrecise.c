/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14078A674
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056EB48 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140770D38 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x14099B40C (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B5610 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x1406F8A3C (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x14078A6A8 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
