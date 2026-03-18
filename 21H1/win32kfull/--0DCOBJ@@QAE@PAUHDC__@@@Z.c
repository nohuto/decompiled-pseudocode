/*
 * XREFs of ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC
 * Callers:
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _NtGdiGetWidthTable@28 @ 0x85948 (_NtGdiGetWidthTable@28.c)
 *     ?bEndDocInternal@@YGHPAUHDC__@@KG@Z @ 0xF6AD2 (-bEndDocInternal@@YGHPAUHDC__@@KG@Z.c)
 *     _GreExtSelectClipRgnInternal@16 @ 0xF7316 (_GreExtSelectClipRgnInternal@16.c)
 *     _GreSaveDCInternal@8 @ 0xF7458 (_GreSaveDCInternal@8.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     _NtGdiAddEmbFontToDC@8 @ 0x1D9099 (_NtGdiAddEmbFontToDC@8.c)
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _NtGdiGetPath@16 @ 0x21186F (_NtGdiGetPath@16.c)
 *     _NtGdiColorCorrectPalette@24 @ 0x21BFC4 (_NtGdiColorCorrectPalette@24.c)
 *     _NtGdiConvertMetafileRect@8 @ 0x21D8F8 (_NtGdiConvertMetafileRect@8.c)
 *     _NtGdiScaleViewportExtEx@24 @ 0x21DB0F (_NtGdiScaleViewportExtEx@24.c)
 *     _NtGdiEnumObjects@16 @ 0x21F2D2 (_NtGdiEnumObjects@16.c)
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 */

DCOBJ *__thiscall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  XDCOBJ::vLock(this, a2);
  return this;
}
