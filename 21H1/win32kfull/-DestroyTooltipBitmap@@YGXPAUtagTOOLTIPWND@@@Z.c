/*
 * XREFs of ?DestroyTooltipBitmap@@YGXPAUtagTOOLTIPWND@@@Z @ 0xD4BE4
 * Callers:
 *     _xxxTooltipWndProc@16 @ 0xE4592 (_xxxTooltipWndProc@16.c)
 *     ?CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z @ 0x1A073D (-CreateTooltipBitmap@@YGHPAUtagTOOLTIPWND@@II@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall DestroyTooltipBitmap(_DWORD *this)
{
  int StockObject; // eax

  if ( this[4] )
  {
    StockObject = GreGetStockObject(21);
    GreSelectBitmap(this[3], StockObject);
    GreDeleteObject(this[4]);
    this[4] = 0;
  }
}
