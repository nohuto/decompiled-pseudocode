/*
 * XREFs of xxxRestoreDesktopsMonitorsAndWindowsRects @ 0x1C0157AC0
 * Callers:
 *     xxxRemoteReconnect @ 0x1C0156B10 (xxxRemoteReconnect.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00D8200 (PopAndFreeW32ThreadLock.c)
 *     xxxRestoreMonitorsAndWindowsRects @ 0x1C01D796C (xxxRestoreMonitorsAndWindowsRects.c)
 */

__int64 __fastcall xxxRestoreDesktopsMonitorsAndWindowsRects(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rdi
  int v3; // ebp
  _QWORD *v5; // rbx
  _QWORD **v7; // rax
  _QWORD *v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  __int64 v12; // [rsp+48h] [rbp-10h]

  v2 = *(_QWORD **)(a1 + 16);
  v3 = 0;
  v11 = 0LL;
  v12 = 0LL;
  while ( v2 && v3 >= 0 )
  {
    v5 = *a2;
    if ( *a2 != a2 )
    {
      while ( 1 )
      {
        v7 = (_QWORD **)*v5;
        if ( (_QWORD *)v5[5] == v2 )
          break;
        v5 = (_QWORD *)*v5;
        if ( v7 == a2 )
          goto LABEL_5;
      }
      v9 = 0LL;
      v10 = 0LL;
      if ( v7[1] != v5 || (v8 = (_QWORD *)v5[1], (_QWORD *)*v8 != v5) )
        __fastfail(3u);
      *v8 = v7;
      v7[1] = v8;
      PushW32ThreadLock((__int64)v5, &v11, (__int64)DeleteMonitorsAndWindowsSnapShot);
      PushW32ThreadLock((__int64)v2, &v9, UserDereferenceObject);
      ObfReferenceObject(v2);
      v3 = xxxRestoreMonitorsAndWindowsRects(v5, v2);
      PopAndFreeW32ThreadLock((__int64)&v9);
      PopAndFreeAlwaysW32ThreadLock((__int64)&v11);
    }
LABEL_5:
    v2 = (_QWORD *)v2[4];
  }
  return (unsigned int)v3;
}
