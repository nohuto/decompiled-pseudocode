/*
 * XREFs of ?xxxSendNCPaint@@YGXPAUtagWND@@PAUHRGN__@@@Z @ 0x73CC0
 * Callers:
 *     _xxxBeginPaint@8 @ 0x7140C (_xxxBeginPaint@8.c)
 *     ?xxxSendChildNCPaint@@YGXPAUtagWND@@@Z @ 0x715FC (-xxxSendChildNCPaint@@YGXPAUtagWND@@@Z.c)
 *     _xxxInternalDoSyncPaint@8 @ 0x734E0 (_xxxInternalDoSyncPaint@8.c)
 *     _xxxSimpleDoSyncPaint@4 @ 0xA4A1C (_xxxSimpleDoSyncPaint@4.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 */

void __fastcall xxxSendNCPaint(_DWORD *a1, unsigned int a2)
{
  SetOrClrWF(0, (int)a1, 0x108u, 1);
  if ( a1 == *(_DWORD **)(*(_DWORD *)(_gptiCurrent + 236) + 64) && (*(_BYTE *)(a1[5] + 8) & 0x40) == 0 )
  {
    SetOrClrWF(1, (int)a1, 0x40u, 1);
    a2 = 1;
    SetOrClrWF(0, (int)a1, 0x101u, 1);
  }
  if ( *(char *)(a1[5] + 14) < 0 )
  {
    SetOrClrWF(0, (int)a1, 0x680u, 1);
    a2 = 1;
  }
  if ( a2 )
    xxxSendMessage(a1, a2, 0);
}
