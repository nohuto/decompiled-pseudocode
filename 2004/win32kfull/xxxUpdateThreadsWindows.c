/*
 * XREFs of xxxUpdateThreadsWindows @ 0x1C0213ACC
 * Callers:
 *     xxxSetLayeredWindow @ 0x1C0028B2C (xxxSetLayeredWindow.c)
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 *     xxxUpdateWindows @ 0x1C02431D0 (xxxUpdateWindows.c)
 * Callees:
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x1C00F0110 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ThreadLockExchangeAlways @ 0x1C010B5D0 (ThreadLockExchangeAlways.c)
 *     ?xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0211A1C (-xxxUpdateOtherThreadsWindows@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

__int64 __fastcall xxxUpdateThreadsWindows(__int64 a1, __int64 a2, HRGN a3)
{
  __int64 v4; // rbx
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[2] = 0LL;
  v4 = a2;
  v7[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v7;
  for ( v7[1] = 0LL; v4; v4 = *(_QWORD *)(v4 + 88) )
  {
    ThreadLockExchangeAlways(v4, (__int64)v7);
    if ( *(_QWORD *)(v4 + 16) == a1 )
      xxxInternalUpdateWindow((struct tagWND *)v4, 1u);
    else
      xxxUpdateOtherThreadsWindows((struct tagWND *)v4, a3);
  }
  return ThreadUnlock1(a1, a2, a3);
}
