/*
 * XREFs of _NtUserSetWindowLong@16 @ 0x3EEB2
 * Callers:
 *     <none>
 * Callees:
 *     _DesktopVerifyHeapRange@12 @ 0x1D77C (_DesktopVerifyHeapRange@12.c)
 *     _xxxSetWindowLong@20 @ 0x3EF3C (_xxxSetWindowLong@20.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetWindowLong(int a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // eax
  int v6; // edi
  int v8; // [esp+8h] [ebp-Ch] BYREF
  int v9; // [esp+Ch] [ebp-8h]
  int v10; // [esp+10h] [ebp-4h]

  v4 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwndEx(a1, 1, 1);
  v6 = v5;
  if ( v5 )
  {
    v8 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v8;
    v9 = v5;
    HMLockObject(v5);
    if ( PsGetWin32KFilterSet() == 5 )
    {
      if ( a2 != -21 )
      {
        UserSetLastError(87);
        goto LABEL_4;
      }
      DesktopVerifyHeapRange(*(_DWORD *)(v6 + 12), *(_DWORD *)(v6 + 20), 204);
    }
    v4 = xxxSetWindowLong(a3, a4, 1);
LABEL_4:
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
