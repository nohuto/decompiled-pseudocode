/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14078E604
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x14066AF10 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140774E98 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409920F4 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x1409995FC (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409B3440 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14066C4DC (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x14078E638 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
