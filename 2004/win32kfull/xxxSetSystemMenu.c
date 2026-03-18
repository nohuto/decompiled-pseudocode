/*
 * XREFs of xxxSetSystemMenu @ 0x1C0148738
 * Callers:
 *     NtUserSetSystemMenu @ 0x1C01485D0 (NtUserSetSystemMenu.c)
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     _DestroyMenu @ 0x1C00AF380 (_DestroyMenu.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01116BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     MNPositionSysMenu @ 0x1C01487A8 (MNPositionSysMenu.c)
 */

__int64 __fastcall xxxSetSystemMenu(__int64 a1, _QWORD **a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rdx

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 30LL) & 8) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 160);
    if ( LockWndMenuWorker(a1, 1u, a2) )
      DestroyMenu(v5);
    v6 = a2[2];
    if ( !v6 )
      v6 = (_QWORD *)**a2;
    MNPositionSysMenu(a1, v6);
    return 1LL;
  }
  else
  {
    UserSetLastError(1437LL, (__int64)a2, a3);
    return 0LL;
  }
}
