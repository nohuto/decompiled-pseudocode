/*
 * XREFs of NtUserSetCoreWindow @ 0x1C003A2E0
 * Callers:
 *     <none>
 * Callees:
 *     SetWindowSubtreeCoreWindowStatus @ 0x1C003BF28 (SetWindowSubtreeCoreWindowStatus.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0064D28 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

__int64 __fastcall NtUserSetCoreWindow(HWND a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  struct tagWND *v9; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  v9 = 0LL;
  if ( (unsigned int)ValidateHWNDND(a1, &v9) )
  {
    SetOrClrWF(a2, v9, 56065LL, 1LL);
    SetWindowSubtreeCoreWindowStatus(v9, a2);
    v4 = 1LL;
  }
  else
  {
    UserSetLastError(87LL);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v4;
}
