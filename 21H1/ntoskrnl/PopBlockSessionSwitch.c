/*
 * XREFs of PopBlockSessionSwitch @ 0x1407653C0
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x140576580 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x140576610 (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408E9F60 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408EBC38 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408EBC84 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1408F0D0C (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1406FDD90 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1406FDDE0 (PopDispatchStateCallout.c)
 */

ULONG __fastcall PopBlockSessionSwitch(char a1, ULONG *a2)
{
  ULONG result; // eax
  ULONG v4; // [rsp+20h] [rbp-38h] BYREF
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
