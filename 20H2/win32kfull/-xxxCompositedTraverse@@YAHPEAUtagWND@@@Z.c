/*
 * XREFs of ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023DF28
 * Callers:
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023DF28 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 *     xxxCompositedPaint @ 0x1C023E150 (xxxCompositedPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C00D750C (ThreadLockExchange.c)
 *     ?xxxCompositedTraverse@@YAHPEAUtagWND@@@Z @ 0x1C023DF28 (-xxxCompositedTraverse@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxCompositedTraverse(struct tagWND *a1)
{
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v8; // r8
  int v9; // eax
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = *((_QWORD *)a1 + 5);
  v2 = 0;
  v11[2] = 0LL;
  if ( *(_QWORD *)(v1 + 136) || (*(_BYTE *)(v1 + 17) & 0x10) != 0 )
  {
    xxxSendMessage((unsigned __int64)a1, 0xFu, 0LL, 0LL);
    v2 = 1;
  }
  v4 = *((_QWORD *)a1 + 14);
  v5 = v4;
  while ( v4 )
  {
    v5 = v4;
    v4 = *(_QWORD *)(v4 + 88);
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v11;
  v11[1] = v5;
  if ( v5 )
  {
    HMLockObject(v5);
    do
    {
      v9 = xxxCompositedTraverse((struct tagWND *)v5);
      v5 = *(_QWORD *)(v5 + 96);
      if ( v9 )
        v2 = 1;
    }
    while ( ThreadLockExchange(v5, (__int64)v11) && v5 );
  }
  ThreadUnlock1(ThreadWin32Thread, v6, v8);
  return v2;
}
