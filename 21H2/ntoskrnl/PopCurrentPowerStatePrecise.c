/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14078E444
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x1406777D0 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140774CD8 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409910F4 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x1409985FC (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B2510 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x140678D9C (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E478 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
