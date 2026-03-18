/*
 * XREFs of ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484
 * Callers:
 *     GreEnumFonts @ 0x1C001E36C (GreEnumFonts.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0023EE8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     GreGetTextMetricsW @ 0x1C0024D94 (GreGetTextMetricsW.c)
 *     GreGetTextExtentW @ 0x1C0024ECC (GreGetTextExtentW.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00252E8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C00264BC (GreGetGlyphOutlineInternal.c)
 *     GreGetRandomRgn @ 0x1C00385F0 (GreGetRandomRgn.c)
 *     NtGdiGetWidthTable @ 0x1C005EBE0 (NtGdiGetWidthTable.c)
 *     GreExcludeClipRect @ 0x1C0067A70 (GreExcludeClipRect.c)
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C0084C10 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     GreExtEscape @ 0x1C008BEF0 (GreExtEscape.c)
 *     GreGetDIBColorTable @ 0x1C008C660 (GreGetDIBColorTable.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     GreRectVisible @ 0x1C009775C (GreRectVisible.c)
 *     GreGradientFill @ 0x1C0097F44 (GreGradientFill.c)
 *     GreGetTextCharsetInfo @ 0x1C009D574 (GreGetTextCharsetInfo.c)
 *     GreStretchDIBitsInternal @ 0x1C009FCF0 (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00A76A0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreGetCharABCWidthsW @ 0x1C00F1738 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00F70D4 (GreGetCharWidthW.c)
 *     GreGetDCDpiScaleValue @ 0x1C00FE8B4 (GreGetDCDpiScaleValue.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 *     GreSetWindowOrg @ 0x1C0104A3C (GreSetWindowOrg.c)
 *     GreSetViewportOrg @ 0x1C0104B50 (GreSetViewportOrg.c)
 *     GreSetMiterLimit @ 0x1C0106C0C (GreSetMiterLimit.c)
 *     GreSetBoundsRect @ 0x1C0108B24 (GreSetBoundsRect.c)
 *     GreFontIsLinked @ 0x1C0108F48 (GreFontIsLinked.c)
 *     NtGdiQueryFontAssocInfo @ 0x1C010A630 (NtGdiQueryFontAssocInfo.c)
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z @ 0x1C010B23C (-bPrepareDCForXfer@XFERDCOBJ@@SAHPEAUHDC__@@K@Z.c)
 *     GreBeginGdiRenderingToDxSurface @ 0x1C010CAB8 (GreBeginGdiRenderingToDxSurface.c)
 *     NtGdiSetVirtualResolution @ 0x1C010E350 (NtGdiSetVirtualResolution.c)
 *     NtGdiSetSizeDevice @ 0x1C01103A0 (NtGdiSetSizeDevice.c)
 *     GreRealizePalette @ 0x1C01134BC (GreRealizePalette.c)
 *     GreGetCharWidthInfo @ 0x1C0114AF4 (GreGetCharWidthInfo.c)
 *     GreSetDIBitsInternal @ 0x1C0118A2C (GreSetDIBitsInternal.c)
 *     GreRealizeDefaultPalette @ 0x1C0121FD0 (GreRealizeDefaultPalette.c)
 *     GreOffsetClipRgn @ 0x1C0122D60 (GreOffsetClipRgn.c)
 *     GreGetSystemPaletteUse @ 0x1C0123848 (GreGetSystemPaletteUse.c)
 *     NtGdiFrameRgn @ 0x1C01336A0 (NtGdiFrameRgn.c)
 *     NtGdiGetETM @ 0x1C0134190 (NtGdiGetETM.c)
 *     GreGetKerningPairs @ 0x1C0134784 (GreGetKerningPairs.c)
 *     NtGdiRoundRect @ 0x1C0137D50 (NtGdiRoundRect.c)
 *     GrePolyPolyline @ 0x1C0137F50 (GrePolyPolyline.c)
 *     GrePolyPolylineInternal @ 0x1C0138014 (GrePolyPolylineInternal.c)
 *     NtGdiFastPolyPolyline @ 0x1C0138350 (NtGdiFastPolyPolyline.c)
 *     NtGdiFillPath @ 0x1C0138F10 (NtGdiFillPath.c)
 *     GrePolylineTo @ 0x1C0139010 (GrePolylineTo.c)
 *     NtGdiCloseFigure @ 0x1C0139220 (NtGdiCloseFigure.c)
 *     NtGdiRectangle @ 0x1C01392C0 (NtGdiRectangle.c)
 *     GreRectangle @ 0x1C0139384 (GreRectangle.c)
 *     GrePolyBezierTo @ 0x1C01397C0 (GrePolyBezierTo.c)
 *     NtGdiSelectClipPath @ 0x1C01399C0 (NtGdiSelectClipPath.c)
 *     GrePolyPolygon @ 0x1C0139C50 (GrePolyPolygon.c)
 *     GrePolyPolygonInternal @ 0x1C0139D14 (GrePolyPolygonInternal.c)
 *     NtGdiLineTo @ 0x1C013A190 (NtGdiLineTo.c)
 *     NtGdiFillRgn @ 0x1C013B480 (NtGdiFillRgn.c)
 *     ?NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013D8B8 (-NtGdiInvertRgnInternal@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     NtGdiInvertRgn @ 0x1C013DC50 (NtGdiInvertRgn.c)
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0141AB8 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     NtGdiStartPage @ 0x1C0141E00 (NtGdiStartPage.c)
 *     NtGdiBeginPath @ 0x1C0147940 (NtGdiBeginPath.c)
 *     ?GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z @ 0x1C0147C00 (-GreDoBanding@@YAHPEAUHDC__@@HPEAU_POINTL@@PEAUtagSIZE@@@Z.c)
 *     NtGdiEndPath @ 0x1C0148210 (NtGdiEndPath.c)
 *     ?GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z @ 0x1C0149728 (-GreGetPerBandInfo@@YAKPEAUHDC__@@PEAU_PERBANDINFO@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C014B4C0 (NtGdiTransparentBlt.c)
 *     NtGdiOffsetClipRgn @ 0x1C014BFA0 (NtGdiOffsetClipRgn.c)
 *     GreResetDCInternal @ 0x1C014F87C (GreResetDCInternal.c)
 *     GreGetFontUnicodeRanges @ 0x1C0150CB8 (GreGetFontUnicodeRanges.c)
 *     GreGetMiterLimit @ 0x1C015105C (GreGetMiterLimit.c)
 *     GreGetBrushOrg @ 0x1C0152D8C (GreGetBrushOrg.c)
 *     GreScaleWindowExtEx @ 0x1C0155BB8 (GreScaleWindowExtEx.c)
 *     ?bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU_RECTL@@@Z @ 0x1C0159470 (-bSpUpdateShape@@YAHPEAVSPRITE@@KPEAUHDC__@@1KPEAU_BLENDFUNCTION@@PEAU_POINTL@@PEAUtagSIZE@@PEAU.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015D634 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     GreExtSelectClipRgnInternal @ 0x1C015E358 (GreExtSelectClipRgnInternal.c)
 *     GreSaveDCInternal @ 0x1C015E520 (GreSaveDCInternal.c)
 *     GreGetTransform @ 0x1C015EF14 (GreGetTransform.c)
 *     GreGetTextExtentExW @ 0x1C015EFE8 (GreGetTextExtentExW.c)
 *     GreSpDwmSyncCaptureSurfaceBits @ 0x1C026F8FC (GreSpDwmSyncCaptureSurfaceBits.c)
 *     DxgkEngAcquireStableVisRgn @ 0x1C02762D0 (DxgkEngAcquireStableVisRgn.c)
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 *     DxgkEngColorFillViaGDI @ 0x1C0276CC0 (DxgkEngColorFillViaGDI.c)
 *     DxgkEngWatchVisRgnChange @ 0x1C02773B0 (DxgkEngWatchVisRgnChange.c)
 *     GreDrawEscape @ 0x1C027BD84 (GreDrawEscape.c)
 *     NtGdiAddEmbFontToDC @ 0x1C027C280 (NtGdiAddEmbFontToDC.c)
 *     NtGdiEndPage @ 0x1C027C650 (NtGdiEndPage.c)
 *     GreGetAspectRatioFilter @ 0x1C028A780 (GreGetAspectRatioFilter.c)
 *     GrePlgBlt @ 0x1C028CF70 (GrePlgBlt.c)
 *     ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584 (-GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z.c)
 *     GreGetColorAdjustment @ 0x1C029E0D8 (GreGetColorAdjustment.c)
 *     GreScaleRgn @ 0x1C029E2A4 (GreScaleRgn.c)
 *     GreScaleValues @ 0x1C029E3E0 (GreScaleValues.c)
 *     GreSetColorAdjustment @ 0x1C029E510 (GreSetColorAdjustment.c)
 *     NtGdiPtVisible @ 0x1C029EB90 (NtGdiPtVisible.c)
 *     ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C029EDB0 (-GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z.c)
 *     GreAngleArc @ 0x1C029F010 (GreAngleArc.c)
 *     GrePolyBezier @ 0x1C029F6E0 (GrePolyBezier.c)
 *     GrePolyDraw @ 0x1C029F7E8 (GrePolyDraw.c)
 *     NtGdiEllipse @ 0x1C029FCB0 (NtGdiEllipse.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029FFCC (GreCreateBitmapFromDxSurface.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C02A6BC8 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     NtGdiAbortPath @ 0x1C02AC7B0 (NtGdiAbortPath.c)
 *     NtGdiFlattenPath @ 0x1C02AC850 (NtGdiFlattenPath.c)
 *     NtGdiGetPath @ 0x1C02AC940 (NtGdiGetPath.c)
 *     NtGdiPathToRegion @ 0x1C02ACBC0 (NtGdiPathToRegion.c)
 *     NtGdiStrokeAndFillPath @ 0x1C02ACD20 (NtGdiStrokeAndFillPath.c)
 *     NtGdiStrokePath @ 0x1C02ACEB0 (NtGdiStrokePath.c)
 *     NtGdiWidenPath @ 0x1C02AD010 (NtGdiWidenPath.c)
 *     NtGdiGetDeviceWidth @ 0x1C02ADE70 (NtGdiGetDeviceWidth.c)
 *     NtGdiMirrorWindowOrg @ 0x1C02AEC30 (NtGdiMirrorWindowOrg.c)
 *     NtGdiArcInternal @ 0x1C02B0210 (NtGdiArcInternal.c)
 *     NtGdiColorCorrectPalette @ 0x1C02B5280 (NtGdiColorCorrectPalette.c)
 *     NtGdiConvertMetafileRect @ 0x1C02B5DD0 (NtGdiConvertMetafileRect.c)
 *     NtGdiScaleViewportExtEx @ 0x1C02B5FA0 (NtGdiScaleViewportExtEx.c)
 *     GreCreateHalftonePalette @ 0x1C02B635C (GreCreateHalftonePalette.c)
 *     GreGetSystemPaletteEntries @ 0x1C02B64E0 (GreGetSystemPaletteEntries.c)
 *     GreSetDIBColorTable @ 0x1C02B65A0 (GreSetDIBColorTable.c)
 *     GreSetSystemPaletteUse @ 0x1C02B6800 (GreSetSystemPaletteUse.c)
 *     IsDCCurrentPalette @ 0x1C02B6BE0 (IsDCCurrentPalette.c)
 *     NtGdiUpdateColors @ 0x1C02B6F90 (NtGdiUpdateColors.c)
 *     NtGdiEnumObjects @ 0x1C02B7890 (NtGdiEnumObjects.c)
 *     NtGdiExtFloodFill @ 0x1C02B8910 (NtGdiExtFloodFill.c)
 *     NtGdiSetTextJustification @ 0x1C02BB200 (NtGdiSetTextJustification.c)
 *     GreDescribePixelFormat @ 0x1C02BB3D8 (GreDescribePixelFormat.c)
 *     NtGdiSetPixelFormat @ 0x1C02BB580 (NtGdiSetPixelFormat.c)
 *     NtGdiSwapBuffers @ 0x1C02BB7C0 (NtGdiSwapBuffers.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

DCOBJ *__fastcall DCOBJ::DCOBJ(DCOBJ *this, HDC a2)
{
  HDC v3; // rcx
  int v4; // esi
  __int64 v5; // rax
  struct _DC_ATTR *UserAttr; // rax
  __int64 v7; // rcx
  int v9; // ebx

  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  v3 = a2;
  v4 = 1;
  LOBYTE(a2) = 1;
  v5 = HmgLockEx(v3, a2, 0LL);
  *(_QWORD *)this = v5;
  if ( v5 )
  {
    if ( *((_DWORD *)this + 3) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v5 + 48) + 40LL) & 0x8000) == 0
        || (v9 = *(_DWORD *)(v5 + 2096), v9 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 12LL));
LABEL_20:
        *(_QWORD *)this = 0LL;
        return this;
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)this + 44LL) & 2) == 0 )
    {
      if ( *((_DWORD *)this + 3)
        || (UserAttr = XDCOBJ::GetUserAttr(this)) == 0LL
        || DC::SaveAttributes(*(DC **)this, UserAttr) )
      {
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
        *((_DWORD *)this + 2) = 1;
      }
      else
      {
        v4 = 0;
      }
    }
    v7 = *(_QWORD *)this;
    if ( !v4 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v7 + 12));
      goto LABEL_20;
    }
    if ( (*(_DWORD *)(v7 + 520) & 4) != 0 )
      DC::vMarkTransformDirty((DC *)v7);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  return this;
}
