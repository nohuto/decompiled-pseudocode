/*
 * XREFs of PopBlockSessionSwitch @ 0x140766D80
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x140576BD0 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x140576C60 (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorNotifyCsStateExited @ 0x1408EB1E0 (PopPowerAggregatorNotifyCsStateExited.c)
 *     PopScreenOff @ 0x1408ECEB8 (PopScreenOff.c)
 *     PopScreenOn @ 0x1408ECF04 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x1408F1FFC (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x140712794 (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1407127E4 (PopDispatchStateCallout.c)
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
