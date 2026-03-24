/*
 * XREFs of PopBlockSessionSwitch @ 0x140779D60
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x14057C010 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x14057C0A0 (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408EE5F0 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408F02C8 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408F0314 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1408F53EC (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x14067E978 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x14067E9C8 (PopDispatchStateCallout.c)
 */

__int64 __fastcall PopBlockSessionSwitch(char a1, int *a2)
{
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-38h] BYREF
  __int128 v5; // [rsp+28h] [rbp-30h] BYREF
  __int64 v6; // [rsp+38h] [rbp-20h]

  v5 = 0LL;
  DWORD2(v5) = 1;
  v6 = 0LL;
  if ( a1 )
  {
    result = PoBlockConsoleSwitch((__int64)&v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(&v5, (__int64)&v4);
  }
  return result;
}
