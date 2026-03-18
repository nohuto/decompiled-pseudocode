/*
 * XREFs of _NtUserModifyWindowTouchCapability@12 @ 0x1670FA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SetTouchWindowFlags@8 @ 0x14A05E (__SetTouchWindowFlags@8.c)
 */

int __stdcall NtUserModifyWindowTouchCapability(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // ecx
  int v5; // ecx
  int v6; // edx

  v3 = 0;
  EnterCrit(0, 1);
  v4 = ValidateHwnd(a1);
  if ( v4 )
  {
    if ( (a2 & 0xFFFFFFFC) != 0 )
    {
      v5 = 1004;
LABEL_4:
      UserSetLastError((struct _NT_TIB *)v5);
      goto LABEL_11;
    }
    if ( _gptiCurrent != *(_DWORD *)(v4 + 8) )
    {
      v5 = 5;
      goto LABEL_4;
    }
    if ( a3 )
      v6 = a2 | 0x10000;
    else
      v6 = 0;
    v3 = _SetTouchWindowFlags(v4, v6);
  }
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return v3;
}
