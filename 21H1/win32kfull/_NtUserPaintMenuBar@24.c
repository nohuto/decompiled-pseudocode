/*
 * XREFs of _NtUserPaintMenuBar@24 @ 0xB5B14
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _xxxPaintMenuBar@24 @ 0xB5BC0 (_xxxPaintMenuBar@24.c)
 */

int __stdcall NtUserPaintMenuBar(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v10; // ecx
  int v11; // [esp+8h] [ebp-Ch] BYREF
  int v12; // [esp+Ch] [ebp-8h]
  int v13; // [esp+10h] [ebp-4h]

  v6 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  EnterCrit(0, 1);
  v7 = ValidateHwnd(a1);
  v8 = v7;
  if ( v7 )
  {
    v11 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v11;
    v12 = v7;
    HMLockObject(v7);
    if ( (*(_BYTE *)(*(_DWORD *)(v8 + 20) + 23) & 0xC0) != 0x40 )
    {
      if ( (a6 & 0xFFFFFFFE) != 0 )
      {
        v10 = 1004;
        goto LABEL_12;
      }
      if ( a3 >= 0 && a4 >= 0 && a5 >= 0 )
      {
        v6 = xxxPaintMenuBar(v8, a2, a3, a4, a5, a6);
LABEL_8:
        ThreadUnlock1();
        goto LABEL_9;
      }
    }
    v10 = 87;
LABEL_12:
    UserSetLastError((struct _NT_TIB *)v10);
    goto LABEL_8;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit();
  return v6;
}
