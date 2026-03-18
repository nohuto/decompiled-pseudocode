/*
 * XREFs of PopBlockSessionSwitch @ 0x1407FE700
 * Callers:
 *     PoSessionBuiltinPanelState @ 0x1405DC0A0 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x1405DC12C (PoSessionEngagementUpdate.c)
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1407FE640 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 *     PopScreenOff @ 0x140997374 (PopScreenOff.c)
 *     PopScreenOn @ 0x1409973C0 (PopScreenOn.c)
 *     PoSessionPowerControl @ 0x14099CD30 (PoSessionPowerControl.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PoBlockConsoleSwitch @ 0x1407FE7DC (PoBlockConsoleSwitch.c)
 *     PopDispatchStateCallout @ 0x1407FE82C (PopDispatchStateCallout.c)
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
    result = PoBlockConsoleSwitch(&v5);
    *a2 = result;
  }
  else
  {
    v4 = *a2;
    LODWORD(v6) = 7;
    return PopDispatchStateCallout(&v5, &v4);
  }
  return result;
}
