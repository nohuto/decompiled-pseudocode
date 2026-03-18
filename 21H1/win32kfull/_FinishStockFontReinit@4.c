/*
 * XREFs of _FinishStockFontReinit@4 @ 0xD9D62
 * Callers:
 *     <none>
 * Callees:
 *     _GreSetLFONTOwner@8 @ 0xDAE1E (_GreSetLFONTOwner@8.c)
 *     _FinishStockFontInit@4 @ 0xDBAB4 (_FinishStockFontInit@4.c)
 *     ?bSetStockFont@@YGHPAXHH@Z @ 0xDBF22 (-bSetStockFont@@YGHPAXHH@Z.c)
 *     _hfontInitDefaultGuiFont@4 @ 0x2927A4 (_hfontInitDefaultGuiFont@4.c)
 */

int __stdcall FinishStockFontReinit(int a1)
{
  int result; // eax
  int v2; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  GreSetLFONTOwner(gahStockObjects[17], -2147483646);
  GreDeleteObject(gahStockObjects[17]);
  gahStockObjects[17] = 0;
  GreSetLFONTOwner(gahStockObjects96[17], -2147483646);
  GreDeleteObject(gahStockObjects96[17]);
  gahStockObjects96[17] = 0;
  hfontInitDefaultGuiFont(-1);
  bSetStockFont(0, v2, savedregs);
  result = FinishStockFontInit(a1);
  gbFinishDefGUIFontInit = 0;
  return result;
}
