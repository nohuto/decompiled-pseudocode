/*
 * XREFs of NtUserInternalGetWindowIcon @ 0x1C0008200
 * Callers:
 *     <none>
 * Callees:
 *     _GetWindowIcon @ 0x1C0008284 (_GetWindowIcon.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserInternalGetWindowIcon(__int64 a1, unsigned int a2)
{
  __int64 WindowIcon; // rdi
  __int64 v5; // rax

  EnterCrit(0LL, 1LL);
  WindowIcon = 0LL;
  gbValidateHandleForIL = 0;
  v5 = ValidateHwnd(a1);
  if ( v5 )
  {
    if ( a2 > 2 )
      UserSetLastError(87LL);
    else
      WindowIcon = GetWindowIcon(v5, a2);
  }
  UserSessionSwitchLeaveCrit();
  return WindowIcon;
}
