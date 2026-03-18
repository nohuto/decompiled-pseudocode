/*
 * XREFs of ?DestroyTooltipBitmap@@YAXPEAUtagTOOLTIPWND@@@Z @ 0x1C00BAC6C
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00BB110 (xxxTooltipWndProc.c)
 *     ?CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z @ 0x1C0243330 (-CreateTooltipBitmap@@YAHPEAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DestroyTooltipBitmap(struct tagTOOLTIPWND *a1)
{
  __int64 StockObject; // rax

  if ( *((_QWORD *)a1 + 3) )
  {
    StockObject = GreGetStockObject(21LL);
    GreSelectBitmap(*((_QWORD *)a1 + 2), StockObject);
    GreDeleteObject(*((_QWORD *)a1 + 3));
    *((_QWORD *)a1 + 3) = 0LL;
  }
}
