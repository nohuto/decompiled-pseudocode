/*
 * XREFs of PopProcessSessionDisplayStateChange @ 0x1408ECE18
 * Callers:
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 * Callees:
 *     PopArmIdlePhaseWatchdog @ 0x1408EC7F8 (PopArmIdlePhaseWatchdog.c)
 *     PopDisarmIdlePhaseWatchdog @ 0x1408EC91C (PopDisarmIdlePhaseWatchdog.c)
 *     PopTriggerMonitorPowerEvent @ 0x1408ED814 (PopTriggerMonitorPowerEvent.c)
 */

__int64 __fastcall PopProcessSessionDisplayStateChange(char a1, unsigned int a2)
{
  __int64 v4; // rcx

  if ( a1 )
    PopDisarmIdlePhaseWatchdog();
  else
    PopArmIdlePhaseWatchdog(a2);
  if ( TtmpEnabled == 1 )
    return 3221225659LL;
  LOBYTE(v4) = a1;
  return PopTriggerMonitorPowerEvent(v4, a2);
}
