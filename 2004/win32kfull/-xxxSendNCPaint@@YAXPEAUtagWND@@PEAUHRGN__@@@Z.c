/*
 * XREFs of ?xxxSendNCPaint@@YAXPEAUtagWND@@PEAUHRGN__@@@Z @ 0x1C0106850
 * Callers:
 *     xxxSimpleDoSyncPaint @ 0x1C006CB10 (xxxSimpleDoSyncPaint.c)
 *     xxxBeginPaint @ 0x1C008B1A8 (xxxBeginPaint.c)
 *     ?xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z @ 0x1C008EC60 (-xxxSendChildNCPaint@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     xxxSendMessage @ 0x1C009BB64 (xxxSendMessage.c)
 *     SetOrClrWF @ 0x1C00A2698 (SetOrClrWF.c)
 */

void __fastcall xxxSendNCPaint(struct tagWND *a1, unsigned __int64 a2)
{
  SetOrClrWF(0, (__int64)a1, 0x108u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL)
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
