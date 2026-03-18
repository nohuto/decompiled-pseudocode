/*
 * XREFs of _NtUserSetSystemTimer@12 @ 0x169D05
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SetSystemTimer@20 @ 0xCA7A8 (__SetSystemTimer@20.c)
 */

int __stdcall NtUserSetSystemTimer(int a1, char *a2, unsigned int a3)
{
  int v3; // esi
  unsigned int v4; // edi

  v3 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 8) == _gptiCurrent )
      v3 = _SetSystemTimer(v4, a2, a3, 0, 0);
    else
      UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
