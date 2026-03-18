/*
 * XREFs of _xxxRestoreDesktopsMonitorsAndWindowsRects@8 @ 0xD23F0
 * Callers:
 *     _xxxRemoteReconnect@4 @ 0xD18BC (_xxxRemoteReconnect@4.c)
 * Callees:
 *     _PopAndFreeW32ThreadLock@4 @ 0x3C354 (_PopAndFreeW32ThreadLock@4.c)
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     _xxxRestoreMonitorsAndWindowsRects@8 @ 0x146391 (_xxxRestoreMonitorsAndWindowsRects@8.c)
 */

int __stdcall xxxRestoreDesktopsMonitorsAndWindowsRects(int a1, _DWORD **a2)
{
  int v2; // esi
  _DWORD *i; // ebx
  _DWORD *j; // esi
  _DWORD *v6; // ecx
  _DWORD *v7; // eax
  _DWORD v8[3]; // [esp+Ch] [ebp-1Ch] BYREF
  _DWORD v9[3]; // [esp+18h] [ebp-10h] BYREF
  int v10; // [esp+24h] [ebp-4h]

  v2 = 0;
  v10 = 0;
  memset(v8, 0, sizeof(v8));
  for ( i = *(_DWORD **)(a1 + 8); i && v2 >= 0; i = (_DWORD *)i[4] )
  {
    for ( j = *a2; ; j = (_DWORD *)*j )
    {
      if ( j == a2 )
      {
        v2 = v10;
        goto LABEL_7;
      }
      v6 = (_DWORD *)*j;
      if ( (_DWORD *)j[5] == i )
        break;
    }
    memset(v9, 0, sizeof(v9));
    if ( (_DWORD *)v6[1] != j || (v7 = (_DWORD *)j[1], (_DWORD *)*v7 != j) )
      __fastfail(3u);
    *v7 = v6;
    v6[1] = v7;
    PushW32ThreadLock((int)j, v8, (int)DeleteMonitorsAndWindowsSnapShot);
    PushW32ThreadLock((int)i, v9, (int)UserDereferenceObject);
    ObfReferenceObject(i);
    v2 = xxxRestoreMonitorsAndWindowsRects(j, i);
    v10 = v2;
    PopAndFreeW32ThreadLock((int)v9);
    PopAndFreeAlwaysW32ThreadLock((int)v8);
LABEL_7:
    ;
  }
  return v2;
}
