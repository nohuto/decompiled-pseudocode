/*
 * XREFs of NtUserQueryBSDRWindow @ 0x1C02012B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 NtUserQueryBSDRWindow()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rbx

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( gspwndBSDR )
    v3 = *(_QWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit(v1, v0, v2);
  return v3;
}
