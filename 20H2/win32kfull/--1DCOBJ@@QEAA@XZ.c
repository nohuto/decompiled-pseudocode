/*
 * XREFs of ??1DCOBJ@@QEAA@XZ @ 0x1C00A4750
 * Callers:
 *     NtGdiGetWidthTable @ 0x1C005EBE0 (NtGdiGetWidthTable.c)
 *     GreExcludeClipRect @ 0x1C0067A70 (GreExcludeClipRect.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     NtGdiGetRandomRgn @ 0x1C00A11E0 (NtGdiGetRandomRgn.c)
 *     NtGdiSetMetaRgn @ 0x1C00F73B0 (NtGdiSetMetaRgn.c)
 *     NtGdiGetETM @ 0x1C0134190 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0134784 (GreGetKerningPairs.c)
 *     NtGdiFastPolyPolyline @ 0x1C0138350 (NtGdiFastPolyPolyline.c)
 *     NtGdiSelectClipPath @ 0x1C01399C0 (NtGdiSelectClipPath.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiOffsetClipRgn @ 0x1C014BFA0 (NtGdiOffsetClipRgn.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015E358 (GreExtSelectClipRgnInternal.c)
 *     GreSaveDCInternal @ 0x1C015E520 (GreSaveDCInternal.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027C280 (NtGdiAddEmbFontToDC.c)
 *     GrePolyDraw @ 0x1C029F7E8 (GrePolyDraw.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiFlattenPath @ 0x1C02AC850 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AC940 (NtGdiGetPath.c)
 *     NtGdiWidenPath @ 0x1C02AD010 (NtGdiWidenPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C02ADE70 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02AEC30 (NtGdiMirrorWindowOrg.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B5280 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C02B5DD0 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02B5FA0 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C02B635C (GreCreateHalftonePalette.c)
 *     NtGdiEnumObjects @ 0x1C02B7890 (NtGdiEnumObjects.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall DCOBJ::~DCOBJ(DCOBJ *this)
{
  if ( *(_QWORD *)this )
    XDCOBJ::vUnlockFast(this);
}
