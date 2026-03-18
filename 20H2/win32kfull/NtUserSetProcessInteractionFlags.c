/*
 * XREFs of NtUserSetProcessInteractionFlags @ 0x1C0202460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall NtUserSetProcessInteractionFlags(char a1, char a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _BYTE *CurrentProcessWin32Process; // rax
  __int64 v10; // rcx

  EnterCrit(0LL, 1LL);
  CurrentProcessWin32Process = (_BYTE *)PsGetCurrentProcessWin32Process(v7, v6, v8);
  CurrentProcessWin32Process[1033] = a1;
  CurrentProcessWin32Process[1032] = a2;
  CurrentProcessWin32Process[1034] = a3;
  UserSessionSwitchLeaveCrit(v10);
  return 1LL;
}
