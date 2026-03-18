/*
 * XREFs of FinishStockFontReinit @ 0x1C00233E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C001CCB4 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     FinishStockFontInit @ 0x1C00234B0 (FinishStockFontInit.c)
 *     GreSetLFONTOwner @ 0x1C0024440 (GreSetLFONTOwner.c)
 *     hfontInitDefaultGuiFont @ 0x1C039334C (hfontInitDefaultGuiFont.c)
 */

__int64 __fastcall FinishStockFontReinit(INT c)
{
  void *inited; // rax
  __int64 result; // rax

  GreSetLFONTOwner(gahStockObjects[17], 2147483650LL);
  GreDeleteObject(gahStockObjects[17]);
  gahStockObjects[17] = 0LL;
  GreSetLFONTOwner(gahStockObjects96[17], 2147483650LL);
  GreDeleteObject(gahStockObjects96[17]);
  gahStockObjects96[17] = 0LL;
  inited = (void *)hfontInitDefaultGuiFont(0xFFFFFFFFLL);
  bSetStockFont(inited, 17, 0);
  result = FinishStockFontInit(c);
  gbFinishDefGUIFontInit = 0;
  return result;
}
