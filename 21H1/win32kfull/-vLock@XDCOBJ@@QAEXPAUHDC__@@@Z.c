/*
 * XREFs of ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410
 * Callers:
 *     _GreGetSystemPaletteUse@4 @ 0x125E2 (_GreGetSystemPaletteUse@4.c)
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     _GreGetCharSet@4 @ 0x496EA (_GreGetCharSet@4.c)
 *     _GreGetTextFaceW@16 @ 0x49888 (_GreGetTextFaceW@16.c)
 *     _GreGetDIBitsInternal@36 @ 0x4B3C0 (_GreGetDIBitsInternal@36.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     _GrePolyTextOutW@16 @ 0x564DC (_GrePolyTextOutW@16.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     _NtGdiPolyPatBlt@20 @ 0x56AE8 (_NtGdiPolyPatBlt@20.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ??0DCOBJ@@QAE@PAUHDC__@@@Z @ 0x579AC (--0DCOBJ@@QAE@PAUHDC__@@@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z @ 0x59880 (-bLock@DEVLOCKBLTOBJ@@QAEHAAVXDCOBJ@@0H@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z @ 0x5DF78 (-UntrapAppContainerRenderingWorker@@YGXAAPAUHDC__@@AAPAUHSURF__@@1PBK@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?NtGdiFlushUserBatchInternal@@YGXPAX@Z @ 0x5EBA0 (-NtGdiFlushUserBatchInternal@@YGXPAX@Z.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     _GreSetBrushOrg@16 @ 0x721EA (_GreSetBrushOrg@16.c)
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _NtGdiGetDCObject@8 @ 0x78A34 (_NtGdiGetDCObject@8.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreExcludeClipRect@20 @ 0x79558 (_GreExcludeClipRect@20.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _GreGetDIBColorTable@16 @ 0x7B6B4 (_GreGetDIBColorTable@16.c)
 *     _DEVLOCKOBJ_bPrepareTrgDcoWrap@8 @ 0x838D0 (_DEVLOCKOBJ_bPrepareTrgDcoWrap@8.c)
 *     _GreGetTextCharsetInfo@12 @ 0x83EE0 (_GreGetTextCharsetInfo@12.c)
 *     _GreGetFontUnicodeRanges@8 @ 0x840D4 (_GreGetFontUnicodeRanges@8.c)
 *     _GreGetTextMetricsW@8 @ 0x84442 (_GreGetTextMetricsW@8.c)
 *     _NtGdiQueryFontAssocInfo@4 @ 0x84476 (_NtGdiQueryFontAssocInfo@4.c)
 *     _GreFontIsLinked@4 @ 0x84558 (_GreFontIsLinked@4.c)
 *     _GreGetGlyphIndicesW@24 @ 0x8564C (_GreGetGlyphIndicesW@24.c)
 *     _GreGetGlyphOutlineInternal@32 @ 0x85B86 (_GreGetGlyphOutlineInternal@32.c)
 *     _GreGetOutlineTextMetricsInternalW@16 @ 0x85F6E (_GreGetOutlineTextMetricsInternalW@16.c)
 *     _GreGetCharABCWidthsW@24 @ 0x866BE (_GreGetCharABCWidthsW@24.c)
 *     _ulGetFontData@20 @ 0x86AB0 (_ulGetFontData@20.c)
 *     _GreEnumFonts@28 @ 0x888D8 (_GreEnumFonts@28.c)
 *     _NtGdiGetDCDword@12 @ 0x8E686 (_NtGdiGetDCDword@12.c)
 *     _GreSetBkMode@8 @ 0x90470 (_GreSetBkMode@8.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 *     _GreSetBkColor@8 @ 0x90F50 (_GreSetBkColor@8.c)
 *     _GreSetStretchBltMode@8 @ 0x9100E (_GreSetStretchBltMode@8.c)
 *     _GreGetDCDpiScaleValue@4 @ 0x91320 (_GreGetDCDpiScaleValue@4.c)
 *     ?bSaveRegion@@YGHAAVDCOBJ@@J@Z @ 0x9309C (-bSaveRegion@@YGHAAVDCOBJ@@J@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     _GreBeginGdiRenderingToDxSurface@12 @ 0xA5D46 (_GreBeginGdiRenderingToDxSurface@12.c)
 *     _GreSetMetaRgn@4 @ 0xA9410 (_GreSetMetaRgn@4.c)
 *     _GreSetBoundsRect@12 @ 0xAC258 (_GreSetBoundsRect@12.c)
 *     _GreGetBoundsRect@12 @ 0xAD1EA (_GreGetBoundsRect@12.c)
 *     _GreSetTextAlign@8 @ 0xB66FA (_GreSetTextAlign@8.c)
 *     _GreSetViewportOrg@16 @ 0xB675E (_GreSetViewportOrg@16.c)
 *     _GreGetTextAlign@4 @ 0xB687C (_GreGetTextAlign@4.c)
 *     _DxgkEngWatchVisRgnChange@8 @ 0xB9C66 (_DxgkEngWatchVisRgnChange@8.c)
 *     _DxgkEngAcquireStableVisRgn@4 @ 0xBA404 (_DxgkEngAcquireStableVisRgn@4.c)
 *     _NtGdiRectangle@20 @ 0xBB870 (_NtGdiRectangle@20.c)
 *     _GreRectangle@20 @ 0xBB904 (_GreRectangle@20.c)
 *     _NtGdiLineTo@12 @ 0xBBAF6 (_NtGdiLineTo@12.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     ?vLockForDPIScaledClipping@DLODCOBJ@@QAEXPAUHDC__@@@Z @ 0xBDADA (-vLockForDPIScaledClipping@DLODCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     _GreSetDIBColorTable@16 @ 0xC11D0 (_GreSetDIBColorTable@16.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _GreGetTextColor@4 @ 0xC1E50 (_GreGetTextColor@4.c)
 *     _GreGetBkColor@4 @ 0xC1E8E (_GreGetBkColor@4.c)
 *     _GreGetCharWidthInfo@8 @ 0xC3E8C (_GreGetCharWidthInfo@8.c)
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 *     _GreGetDeviceGammaRamp@8 @ 0xD0F8E (_GreGetDeviceGammaRamp@8.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreOffsetClipRgn@12 @ 0xE7DDC (_GreOffsetClipRgn@12.c)
 *     _GreGetRealizationInfo@8 @ 0xF6E26 (_GreGetRealizationInfo@8.c)
 *     _GreSelectFontInternal@12 @ 0xF7EBA (_GreSelectFontInternal@12.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 *     ?SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z @ 0x1CCEEA (-SpDdCreateFullscreenSprite@@YGJPAUHDC__@@KPAPAXPAPAU1@@Z.c)
 *     ?SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z @ 0x1CD2E0 (-SpDdDestroyFullscreenSprite@@YGJPAUHDC__@@PAX@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z @ 0x1CD3D4 (-SpDdNotifyFullscreenSpriteUpdate@@YGJPAUHDC__@@PAX@Z.c)
 *     _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED (_GreSpDwmSyncCaptureSurfaceBits@28.c)
 *     _NtGdiGetMonitorID@12 @ 0x1D1907 (_NtGdiGetMonitorID@12.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 *     _DxgkEngColorFillViaGDI@20 @ 0x1D4198 (_DxgkEngColorFillViaGDI@20.c)
 *     ?GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z @ 0x1D7212 (-GreDoBanding@@YGHPAUHDC__@@HPAU_POINTL@@PAUtagSIZE@@@Z.c)
 *     ?GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z @ 0x1D7882 (-GreGetPerBandInfo@@YGKPAUHDC__@@PAU_PERBANDINFO@@@Z.c)
 *     ?GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z @ 0x1D7909 (-GreStartDocInternal@@YGHPAUHDC__@@PAU_DOCINFOW@@PAHH@Z.c)
 *     ?LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z @ 0x1D7B4D (-LookUpWndobjs@@YGHPAVDCOBJ@@0PAPAUHDC__@@H@Z.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 *     _GreExtEscape@24 @ 0x1D8C5F (_GreExtEscape@24.c)
 *     _GreForceUFIMapping@8 @ 0x1D8D49 (_GreForceUFIMapping@8.c)
 *     _GreGetUFI@28 @ 0x1D8D94 (_GreGetUFI@28.c)
 *     _NtGdiAddRemoteMMInstanceToDC@12 @ 0x1D9196 (_NtGdiAddRemoteMMInstanceToDC@12.c)
 *     _NtGdiEndPage@4 @ 0x1D93FF (_NtGdiEndPage@4.c)
 *     _NtGdiGetLinkedUFIs@12 @ 0x1D9578 (_NtGdiGetLinkedUFIs@12.c)
 *     _NtGdiRemoveMergeFont@8 @ 0x1D97B0 (_NtGdiRemoveMergeFont@8.c)
 *     _NtGdiSetLinkedUFIs@12 @ 0x1D985F (_NtGdiSetLinkedUFIs@12.c)
 *     _NtGdiStartPage@4 @ 0x1D9D27 (_NtGdiStartPage@4.c)
 *     ?bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z @ 0x1DCEF2 (-bSetPreviewRectContent@@YGHPAU_SPRITESTATE@@PBU_RECTL@@@Z.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF (_NtGdiAddRemoteFontToDC@16.c)
 *     _GreGetAspectRatioFilter@8 @ 0x1EBA7A (_GreGetAspectRatioFilter@8.c)
 *     _GreSetFontXform@12 @ 0x1EBDFB (_GreSetFontXform@12.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 *     ?bPrepareDCForXfer@XFERDCOBJ@@SGHPAUHDC__@@K@Z @ 0x1FD069 (-bPrepareDCForXfer@XFERDCOBJ@@SGHPAUHDC__@@K@Z.c)
 *     _GreGetBrushOrg@8 @ 0x1FD3AA (_GreGetBrushOrg@8.c)
 *     _GreGetColorAdjustment@8 @ 0x1FD3EF (_GreGetColorAdjustment@8.c)
 *     _GreScaleRgn@8 @ 0x1FD560 (_GreScaleRgn@8.c)
 *     _GreScaleValues@12 @ 0x1FD676 (_GreScaleValues@12.c)
 *     _GreSetColorAdjustment@8 @ 0x1FD788 (_GreSetColorAdjustment@8.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiInvertRgn@8 @ 0x1FEC75 (_NtGdiInvertRgn@8.c)
 *     _NtGdiOffsetClipRgn@12 @ 0x1FED41 (_NtGdiOffsetClipRgn@12.c)
 *     _NtGdiPtVisible@12 @ 0x1FEEF2 (_NtGdiPtVisible@12.c)
 *     _GreGetHFONT@4 @ 0x1FF06B (_GreGetHFONT@4.c)
 *     _NtGdiComputeXformCoefficients@4 @ 0x1FF0AA (_NtGdiComputeXformCoefficients@4.c)
 *     _NtGdiGetAndSetDCDword@16 @ 0x1FF0F9 (_NtGdiGetAndSetDCDword@16.c)
 *     _bUMPD@4 @ 0x1FF2C8 (_bUMPD@4.c)
 *     ?GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z @ 0x1FF302 (-GrePolyBezierInternal@@YGHPAUHDC__@@PAUtagPOINT@@K@Z.c)
 *     _GreAngleArc@24 @ 0x1FF67A (_GreAngleArc@24.c)
 *     _GreMoveTo@16 @ 0x1FFBFA (_GreMoveTo@16.c)
 *     _GrePolyBezier@12 @ 0x1FFD2A (_GrePolyBezier@12.c)
 *     _GrePolyBezierTo@12 @ 0x1FFDFC (_GrePolyBezierTo@12.c)
 *     _GrePolyPolygon@20 @ 0x200428 (_GrePolyPolygon@20.c)
 *     _GrePolyPolygonInternal@20 @ 0x20050A (_GrePolyPolygonInternal@20.c)
 *     _GrePolyPolyline@20 @ 0x2006C0 (_GrePolyPolyline@20.c)
 *     _GrePolyPolylineInternal@20 @ 0x2007A2 (_GrePolyPolylineInternal@20.c)
 *     _GrePolylineTo@12 @ 0x2009B9 (_GrePolylineTo@12.c)
 *     _NtGdiEllipse@20 @ 0x200B61 (_NtGdiEllipse@20.c)
 *     _NtGdiRoundRect@28 @ 0x200D84 (_NtGdiRoundRect@28.c)
 *     _GreResetDCInternal@20 @ 0x201023 (_GreResetDCInternal@20.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z @ 0x206DB5 (-ComputeEUDCLogfont@RFONTOBJ@@QAEXPAU_EUDCLOGFONT@@AAVXDCOBJ@@@Z.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x2087AC (-vInitEUDCRemote@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     _GreGetMiterLimit@8 @ 0x2113EF (_GreGetMiterLimit@8.c)
 *     _GreSetMiterLimit@12 @ 0x211440 (_GreSetMiterLimit@12.c)
 *     _NtGdiAbortPath@4 @ 0x2114CD (_NtGdiAbortPath@4.c)
 *     _NtGdiBeginPath@4 @ 0x21154D (_NtGdiBeginPath@4.c)
 *     _NtGdiCloseFigure@4 @ 0x2115FD (_NtGdiCloseFigure@4.c)
 *     _NtGdiEndPath@4 @ 0x21168A (_NtGdiEndPath@4.c)
 *     _NtGdiFillPath@4 @ 0x2116F1 (_NtGdiFillPath@4.c)
 *     _NtGdiFlattenPath@4 @ 0x2117E2 (_NtGdiFlattenPath@4.c)
 *     _NtGdiPathToRegion@4 @ 0x211A5D (_NtGdiPathToRegion@4.c)
 *     _NtGdiSelectClipPath@8 @ 0x211B56 (_NtGdiSelectClipPath@8.c)
 *     _NtGdiStrokeAndFillPath@4 @ 0x211C98 (_NtGdiStrokeAndFillPath@4.c)
 *     _NtGdiStrokePath@4 @ 0x211DC5 (_NtGdiStrokePath@4.c)
 *     _NtGdiWidenPath@4 @ 0x211EC9 (_NtGdiWidenPath@4.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 *     ?GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z @ 0x21B680 (-GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z.c)
 *     ?GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x21B794 (-GreCreateColorTransform@@YGPAXPAUHDC__@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 *     ?GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z @ 0x21B852 (-GreDeleteColorTransform@@YGHPAUHDC__@@PAX@Z.c)
 *     ?GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z @ 0x21B8CC (-GreIcmQueryBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAXPAK4PAH@Z.c)
 *     ?GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z @ 0x21BA5A (-GreIcmSetBrushBitmap@@YGHPAUHDC__@@PAUHBRUSH__@@PAUtagBITMAPINFO@@PAX@Z.c)
 *     ?GreSetICMMode@@YGHPAUHDC__@@KK@Z @ 0x21BB11 (-GreSetICMMode@@YGHPAUHDC__@@KK@Z.c)
 *     _NtGdiSetColorSpace@8 @ 0x21C67C (_NtGdiSetColorSpace@8.c)
 *     _GreGetDeviceWidth@4 @ 0x21D522 (_GreGetDeviceWidth@4.c)
 *     _GreGetMapMode@4 @ 0x21D568 (_GreGetMapMode@4.c)
 *     _GreGetTransform@12 @ 0x21D5A2 (_GreGetTransform@12.c)
 *     _GreMirrorWindowOrg@4 @ 0x21D659 (_GreMirrorWindowOrg@4.c)
 *     _GreScaleWindowExtEx@24 @ 0x21D696 (_GreScaleWindowExtEx@24.c)
 *     _GreSetWindowOrg@16 @ 0x21D7A5 (_GreSetWindowOrg@16.c)
 *     _NtGdiModifyWorldTransform@12 @ 0x21DA7A (_NtGdiModifyWorldTransform@12.c)
 *     _NtGdiSetSizeDevice@12 @ 0x21DC5E (_NtGdiSetSizeDevice@12.c)
 *     _NtGdiSetVirtualResolution@20 @ 0x21DCCC (_NtGdiSetVirtualResolution@20.c)
 *     _NtGdiUpdateTransform@4 @ 0x21DD84 (_NtGdiUpdateTransform@4.c)
 *     _GreCreateHalftonePalette@4 @ 0x21E27D (_GreCreateHalftonePalette@4.c)
 *     _GreGetSystemPaletteEntries@16 @ 0x21E38F (_GreGetSystemPaletteEntries@16.c)
 *     _GreSetSystemPaletteUse@8 @ 0x21E4BA (_GreSetSystemPaletteUse@8.c)
 *     _IsDCCurrentPalette@4 @ 0x21E7FE (_IsDCCurrentPalette@4.c)
 *     _NtGdiResizePalette@8 @ 0x21E909 (_NtGdiResizePalette@8.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 *     _NtGdiMakeInfoDC@8 @ 0x220E50 (_NtGdiMakeInfoDC@8.c)
 *     _GreGetTextCharacterExtra@4 @ 0x22267D (_GreGetTextCharacterExtra@4.c)
 *     _GreSetTextCharacterExtra@8 @ 0x2226B7 (_GreSetTextCharacterExtra@8.c)
 *     _NtGdiSetTextJustification@12 @ 0x222705 (_NtGdiSetTextJustification@12.c)
 *     _GreDescribePixelFormat@16 @ 0x222832 (_GreDescribePixelFormat@16.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 *     _GreSetGraphicsMode@8 @ 0x226087 (_GreSetGraphicsMode@8.c)
 *     _GreSetDIBitsInternal@40 @ 0x226CEF (_GreSetDIBitsInternal@40.c)
 * Callees:
 *     ?vMarkTransformDirty@DC@@QAEXXZ @ 0x1CDA19 (-vMarkTransformDirty@DC@@QAEXXZ.c)
 */

void __thiscall XDCOBJ::vLock(XDCOBJ *this, HDC a2)
{
  int v3; // eax
  struct _DC_ATTR *UserAttr; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edi

  v3 = HmgLockEx(a2, 1, *((_DWORD *)this + 2));
  *(_DWORD *)this = v3;
  if ( v3 )
  {
    if ( *((_DWORD *)this + 2) )
    {
      if ( (*(_DWORD *)(*(_DWORD *)(v3 + 36) + 24) & 0x8000) == 0
        || (v7 = *(_DWORD *)(v3 + 1844), v7 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_DWORD *)this + 8));
        *(_DWORD *)this = 0;
        return;
      }
    }
    if ( (*(_BYTE *)(*(_DWORD *)this + 32) & 2) == 0 )
    {
      if ( !*((_DWORD *)this + 2) )
      {
        UserAttr = XDCOBJ::GetUserAttr(this);
        if ( UserAttr )
        {
          if ( !DC::SaveAttributes(*(DC **)this, UserAttr) )
          {
            v5 = 0;
LABEL_9:
            v6 = *(_DWORD *)this;
            if ( v5 )
            {
              if ( (*(_BYTE *)(v6 + 520) & 4) != 0 )
                DC::vMarkTransformDirty((DC *)v6);
            }
            else
            {
              _InterlockedDecrement((volatile signed __int32 *)(v6 + 8));
              *(_DWORD *)this = 0;
            }
            return;
          }
        }
      }
      *(_DWORD *)(*(_DWORD *)this + 32) |= 2u;
      *((_DWORD *)this + 1) = 1;
    }
    v5 = 1;
    goto LABEL_9;
  }
  if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    PsGetWin32KFilterSet();
}
