/*
 * XREFs of _NtUserInternalGetWindowIcon@8 @ 0xC4A70
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __GetWindowIcon@8 @ 0xC4AB8 (__GetWindowIcon@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserInternalGetWindowIcon(int a1, unsigned int a2)
{
  int WindowIcon; // ebx
  int v3; // eax

  WindowIcon = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    if ( a2 > 2 )
      UserSetLastError((struct _NT_TIB *)0x57);
    else
      WindowIcon = _GetWindowIcon(v3);
  }
  UserSessionSwitchLeaveCrit();
  return WindowIcon;
}
