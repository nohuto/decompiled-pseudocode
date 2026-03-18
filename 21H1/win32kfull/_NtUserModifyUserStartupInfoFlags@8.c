/*
 * XREFs of _NtUserModifyUserStartupInfoFlags@8 @ 0x1670B1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall NtUserModifyUserStartupInfoFlags(int a1, int a2)
{
  int v2; // esi

  EnterCrit(0, 1);
  v2 = a2 & a1 | ~a1 & *(_DWORD *)(PsGetCurrentProcessWin32Process() + 452);
  *(_DWORD *)(PsGetCurrentProcessWin32Process() + 452) = v2;
  UserSessionSwitchLeaveCrit();
  return 1;
}
