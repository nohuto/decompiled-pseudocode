/*
 * XREFs of _NtUserQueryBSDRWindow@0 @ 0x167D1F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserQueryBSDRWindow()
{
  int v0; // esi

  v0 = 0;
  EnterCrit(0, 1);
  if ( gspwndBSDR )
    v0 = *(_DWORD *)gspwndBSDR;
  UserSessionSwitchLeaveCrit();
  return v0;
}
