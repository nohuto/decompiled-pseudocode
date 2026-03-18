/*
 * XREFs of ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C00CF9DC
 * Callers:
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 * Callees:
 *     ThreadLockExchangeAlways @ 0x1C00D71E0 (ThreadLockExchangeAlways.c)
 *     ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106AE0 (-xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z.c)
 */

void __fastcall xxxSendChildNCPaint(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 i; // rbx
  __int64 v5; // rax
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  v6[2] = 0LL;
  v3 = gptiCurrent;
  v6[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v6;
  v6[1] = 0LL;
  for ( i = *((_QWORD *)a1 + 14); i; i = *(_QWORD *)(i + 88) )
  {
    v5 = *(_QWORD *)(i + 40);
    if ( !*(_QWORD *)(v5 + 136) && (*(_BYTE *)(v5 + 17) & 8) != 0 )
    {
      ThreadLockExchangeAlways(i, v6);
      xxxSendNCPaint((struct tagWND *)i, (HRGN)1);
    }
  }
  ThreadUnlock1(a1, v3, a3);
}
