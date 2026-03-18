/*
 * XREFs of ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C001CCB4
 * Callers:
 *     FinishStockFontReinit @ 0x1C00233E0 (FinishStockFontReinit.c)
 *     FinishStockFontInit @ 0x1C00234B0 (FinishStockFontInit.c)
 *     bInitStockFontsInternal @ 0x1C039353C (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C0393918 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C039532C (bInitSystemFont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockFont(void *a1, int a2, int a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r11
  void **v5; // rdx

  v3 = 0;
  if ( a1 )
  {
    v4 = a2;
    if ( a3 )
      v5 = gahStockObjects96;
    else
      v5 = gahStockObjects;
    v5[v4] = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
