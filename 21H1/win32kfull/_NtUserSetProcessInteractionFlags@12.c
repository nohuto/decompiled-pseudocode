/*
 * XREFs of _NtUserSetProcessInteractionFlags@12 @ 0x169B69
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  _BYTE *CurrentProcessWin32Process; // eax

  EnterCrit(0, 1);
  CurrentProcessWin32Process = (_BYTE *)PsGetCurrentProcessWin32Process();
  CurrentProcessWin32Process[625] = a1;
  CurrentProcessWin32Process[624] = a2;
  CurrentProcessWin32Process[626] = a3;
  UserSessionSwitchLeaveCrit();
  return 1;
}
