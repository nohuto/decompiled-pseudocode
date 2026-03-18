/*
 * XREFs of _NtUserSetWindowsHookAW@12 @ 0x16A673
 * Callers:
 *     <none>
 * Callees:
 *     _zzzSetWindowsHookEx@24 @ 0x13290 (_zzzSetWindowsHookEx@24.c)
 */

int __stdcall NtUserSetWindowsHookAW(int a1, int a2, char a3)
{
  _DWORD *v3; // eax
  int v4; // esi

  EnterCrit(0, 1);
  v3 = zzzSetWindowsHookEx(0, 0, _gptiCurrent, a1, a2, a3);
  v4 = (int)v3;
  if ( v3 )
  {
    if ( !v3[5] && (byte_2510CD[a1] & 8) == 0 )
      v4 = 0;
    if ( v4 != -1 && v4 )
      v4 = *(_DWORD *)v4;
  }
  else
  {
    v4 = -1;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
