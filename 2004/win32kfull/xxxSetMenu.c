/*
 * XREFs of xxxSetMenu @ 0x1C0149934
 * Callers:
 *     NtUserSetMenu @ 0x1C0149760 (NtUserSetMenu.c)
 * Callees:
 *     xxxSetWindowPos @ 0x1C006A658 (xxxSetWindowPos.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C01116BC (-LockWndMenuWorker@@YAPEAXPEAUtagWND@@_NAEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 */

__int64 __fastcall xxxSetMenu(struct tagWND *a1, _QWORD **a2, __int64 a3)
{
  int v3; // edi

  v3 = a3;
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 )
  {
    UserSetLastError(1436LL, (__int64)a2, a3);
    return 0LL;
  }
  else
  {
    LockWndMenuWorker((__int64)a1, 0, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0x20) == 0 )
    {
      if ( v3 )
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 55);
    }
    return 1LL;
  }
}
