/*
 * XREFs of EngSetLastError @ 0x1C003C4D0
 * Callers:
 *     ?createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z @ 0x1C0015DD4 (-createrec@EPATHOBJ@@IEAAHPEAVEXFORMOBJ@@PEAU_PATHDATAL@@PEAU_POINTFIX@@@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z @ 0x1C0019FB0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@0_K@Z.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C001D000 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     GrePtInRegion @ 0x1C001E180 (GrePtInRegion.c)
 *     ?bExpand@RGNOBJ@@QEAAHK@Z @ 0x1C0032EF0 (-bExpand@RGNOBJ@@QEAAHK@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C005142C (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     hdcOpenDCW @ 0x1C0069E20 (hdcOpenDCW.c)
 *     bDeleteDCInternalEx @ 0x1C006D2D0 (bDeleteDCInternalEx.c)
 *     ?bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z @ 0x1C006D360 (-bDeleteDCOBJ@@YAHAEAVXDCOBJ@@PEAKPEAH@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z @ 0x1C0076290 (-bXform@EXFORMOBJ@@QEAAHPEAVVECTORFL@@0_K@Z.c)
 *     GreExtCreateRegion @ 0x1C0076840 (GreExtCreateRegion.c)
 *     ?bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z @ 0x1C0078FF0 (-bOffset@RGNOBJ@@QEAAHPEAU_POINTL@@@Z.c)
 *     GreIntersectClipRect @ 0x1C00791E0 (GreIntersectClipRect.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C0079500 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     AllocateObject @ 0x1C007B100 (AllocateObject.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     GreCreateBitmap @ 0x1C0090E80 (GreCreateBitmap.c)
 *     GreCreatePatternBrushInternal @ 0x1C00A90C0 (GreCreatePatternBrushInternal.c)
 *     NtGdiCreateRectRgn @ 0x1C00A9630 (NtGdiCreateRectRgn.c)
 *     GreGetDeviceCaps @ 0x1C00AA530 (GreGetDeviceCaps.c)
 *     NtGdiGetRegionData @ 0x1C00AAF30 (NtGdiGetRegionData.c)
 *     GreGetRegionData @ 0x1C00AB040 (GreGetRegionData.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00C2860 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     ?bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C00C3BD0 (-bXformRound@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00C43F0 (-bCreate@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C4C40 (NtGdiPolyPolyDraw.c)
 *     bPolyPolygon @ 0x1C00C5130 (bPolyPolygon.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z @ 0x1C00C5580 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@PEAU_VECTORFX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z @ 0x1C00C76A0 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORFX@@PEAU_VECTORL@@_K@Z.c)
 *     GreRestoreDCInternal @ 0x1C00D03E0 (GreRestoreDCInternal.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z @ 0x1C0147270 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTFIX@@PEAU_POINTL@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z @ 0x1C01472E0 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@PEAU_POINTFIX@@_K@Z.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z @ 0x1C0147350 (-bXform@EXFORMOBJ@@QEAAHPEAU_VECTORL@@0_K@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C014A6C0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C014C0C0 (GreGetDpiDepDefaultGuiFont.c)
 *     NtGdiGetDeviceCapsAll @ 0x1C014C170 (NtGdiGetDeviceCapsAll.c)
 *     NtGdiGetAppliedDeviceGammaRamp @ 0x1C0152990 (NtGdiGetAppliedDeviceGammaRamp.c)
 *     GreCreateRectRgn @ 0x1C0155B80 (GreCreateRectRgn.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 *     ??0MALLOCOBJ@@QEAA@K@Z @ 0x1C015601C (--0MALLOCOBJ@@QEAA@K@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall EngSetLastError(ULONG iError)
{
  _DWORD *CurrentThreadTeb; // rax

  CurrentThreadTeb = PsGetCurrentThreadTeb();
  if ( CurrentThreadTeb )
    CurrentThreadTeb[26] = iError;
}
