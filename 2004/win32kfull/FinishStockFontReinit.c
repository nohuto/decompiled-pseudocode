/*
 * XREFs of FinishStockFontReinit @ 0x1C000AD80
 * Callers:
 *     <none>
 * Callees:
 *     GreSetLFONTOwner @ 0x1C000B940 (GreSetLFONTOwner.c)
 *     FinishStockFontInit @ 0x1C000DD20 (FinishStockFontInit.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C000FD24 (-bSetStockFont@@YAHPEAXHH@Z.c)
 *     hfontInitDefaultGuiFont @ 0x1C039434C (hfontInitDefaultGuiFont.c)
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
