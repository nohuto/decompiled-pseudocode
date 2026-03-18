/*
 * XREFs of ??1DCOBJ@@QAE@XZ @ 0x5E67A
 * Callers:
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreCreateDIBitmapReal@52 @ 0x76A92 (_GreCreateDIBitmapReal@52.c)
 *     _NtGdiGetWidthTable@28 @ 0x85948 (_NtGdiGetWidthTable@28.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 *     _NtGdiAddEmbFontToDC@8 @ 0x1D9099 (_NtGdiAddEmbFontToDC@8.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     _GreGetKerningPairs@12 @ 0x1EBB0B (_GreGetKerningPairs@12.c)
 *     _GrePolyDraw@16 @ 0x1FFFA3 (_GrePolyDraw@16.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 *     _NtGdiGetPath@16 @ 0x21186F (_NtGdiGetPath@16.c)
 *     _NtGdiColorCorrectPalette@24 @ 0x21BFC4 (_NtGdiColorCorrectPalette@24.c)
 *     _NtGdiConvertMetafileRect@8 @ 0x21D8F8 (_NtGdiConvertMetafileRect@8.c)
 *     _NtGdiScaleViewportExtEx@24 @ 0x21DB0F (_NtGdiScaleViewportExtEx@24.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 *     _NtGdiEnumObjects@16 @ 0x21F2D2 (_NtGdiEnumObjects@16.c)
 *     _NtGdiGetETM@8 @ 0x22132A (_NtGdiGetETM@8.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 * Callees:
 *     <none>
 */

void __thiscall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_DWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
