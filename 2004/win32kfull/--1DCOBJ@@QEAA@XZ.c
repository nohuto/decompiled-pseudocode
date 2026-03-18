/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C0078350
 * Callers:
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     NtGdiGetRandomRgn @ 0x1C0076170 (NtGdiGetRandomRgn.c)
 *     NtGdiGetWidthTable @ 0x1C00DEA40 (NtGdiGetWidthTable.c)
 *     NtGdiSetMetaRgn @ 0x1C00FC210 (NtGdiSetMetaRgn.c)
 *     NtGdiGetETM @ 0x1C0132240 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0132834 (GreGetKerningPairs.c)
 *     NtGdiFastPolyPolyline @ 0x1C0136400 (NtGdiFastPolyPolyline.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015A504 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015AE98 (GreExtSelectClipRgnInternal.c)
 *     GreSaveDCInternal @ 0x1C015B034 (GreSaveDCInternal.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027D7F0 (NtGdiAddEmbFontToDC.c)
 *     GrePolyDraw @ 0x1C02A0C38 (GrePolyDraw.c)
 *     NtGdiGetPath @ 0x1C02ADF30 (NtGdiGetPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C02AF3F0 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02B01B0 (NtGdiMirrorWindowOrg.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B6800 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C02B7350 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02B7520 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C02B78FC (GreCreateHalftonePalette.c)
 *     NtGdiEnumObjects @ 0x1C02B8DF0 (NtGdiEnumObjects.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
