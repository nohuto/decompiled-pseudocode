/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x14077C074
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056B118 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140762728 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x1409952AC (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AF6A0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14064B18C (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x14077C0A8 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
