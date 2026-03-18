/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106AE0
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C00493A0 (xxxSimpleDoSyncPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C00CF9DC (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 *     xxxBeginPaint @ 0x1C00CFA68 (xxxBeginPaint.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057844 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00CB5EC (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, unsigned __int64 a2)
{
  SetOrClrWF(0, (__int64)a1, 0x108u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 432LL) + 120LL)
    && (*(_BYTE *)(*((_QWORD *)a1 + 5) + 16LL) & 0x40) == 0 )
  {
    SetOrClrWF(1, (__int64)a1, 0x40u, 1);
    a2 = 1LL;
    SetOrClrWF(0, (__int64)a1, 0x101u, 1);
  }
  if ( *(char *)(*((_QWORD *)a1 + 5) + 22LL) < 0 )
  {
    SetOrClrWF(0, (__int64)a1, 0x680u, 1);
    a2 = 1LL;
  }
  if ( a2 )
    xxxSendMessage((unsigned __int64)a1, 0x85u, a2, 0LL);
}
