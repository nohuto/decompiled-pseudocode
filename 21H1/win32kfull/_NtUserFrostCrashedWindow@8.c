/*
 * XREFs of _NtUserFrostCrashedWindow@8 @ 0x1618EA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxFrostCrashedWindow@8 @ 0x170644 (_xxxFrostCrashedWindow@8.c)
 */

int __stdcall NtUserFrostCrashedWindow(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v5; // [esp+Ch] [ebp+8h]

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  v5 = v3;
  if ( v3 )
  {
    if ( a2 )
    {
      if ( !ValidateHwnd(a2) )
      {
        UserSetLastError((struct _NT_TIB *)0x578);
        goto LABEL_7;
      }
      v3 = v5;
    }
    v2 = xxxFrostCrashedWindow(v3, a2);
  }
LABEL_7:
  UserSessionSwitchLeaveCrit();
  return v2;
}
