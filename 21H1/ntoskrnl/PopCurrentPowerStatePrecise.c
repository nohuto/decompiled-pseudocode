/*
 * XREFs of PopCurrentPowerStatePrecise @ 0x140779C64
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14056AAC8 (PopCaptureSleepStudyStatistics.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PopSleepstudyStartNextSession @ 0x140760E48 (PopSleepstudyStartNextSession.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     PopValidateRTCWake @ 0x140993C6C (PopValidateRTCWake.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1409AE840 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 * Callees:
 *     PopCurrentPowerState @ 0x14070C77C (PopCurrentPowerState.c)
 *     PopBatteryUpdateCurrentState @ 0x140779C98 (PopBatteryUpdateCurrentState.c)
 */

__int64 __fastcall PopCurrentPowerStatePrecise(_OWORD *a1, __int64 a2)
{
  unsigned int updated; // ebx

  updated = PopBatteryUpdateCurrentState(a2);
  PopCurrentPowerState(a1);
  return updated;
}
