/*
 * XREFs of ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0211A1C
 * Callers:
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0211A1C (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxUpdateThreadsWindows @ 0x1C0213ACC (xxxUpdateThreadsWindows.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C010B5D0 (ThreadLockExchangeAlways.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0211A1C (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0242114 (xxxRedrawHungWindow.c)
 */

void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND *a1, HRGN a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v7; // rcx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF

  v8[2] = 0LL;
  xxxRedrawHungWindow(a1);
  if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 2) != 0 )
  {
    v6 = *((_QWORD *)a1 + 14);
    v7 = gptiCurrent;
    v8[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v8;
    v8[1] = 0LL;
    while ( v6 )
    {
      ThreadLockExchangeAlways(v6, (__int64)v8);
      xxxUpdateOtherThreadsWindows((struct tagWND *)v6, a2);
      v6 = *(_QWORD *)(v6 + 88);
    }
    ThreadUnlock1(v7, v4, v5);
  }
}
