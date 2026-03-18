/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x1407ED930
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140809838 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x140A494E8 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x140A519DC (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x140A6BCF0 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x140750EC4 (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x1407ED964 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
