/*
 * XREFs of ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A
 * Callers:
 *     _GreRealizeDefaultPalette@8 @ 0x12656 (_GreRealizeDefaultPalette@8.c)
 *     ?vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z @ 0x213E8 (-vAccNotify@@YGXPAU_SURFOBJ@@KPAX@Z.c)
 *     _GreCreateCompatibleBitmapInternal@24 @ 0x21480 (_GreCreateCompatibleBitmapInternal@24.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ @ 0x4E10E (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QAEHXZ.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     _GrePolyTextOutW@16 @ 0x564DC (_GrePolyTextOutW@16.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z @ 0x5A4E6 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@H@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z @ 0x5A622 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QAEHPAVXDCOBJ@@HH@Z.c)
 *     _DEVLOCKOBJ_bDisposeTrgDcoWrap@4 @ 0x5A8B0 (_DEVLOCKOBJ_bDisposeTrgDcoWrap@4.c)
 *     ?bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ @ 0x5A8D8 (-bDisposeTrgDcoWorker@DEVLOCKOBJ@@QAEHXZ.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     _GreDrawStream@12 @ 0x5C150 (_GreDrawStream@12.c)
 *     _GreGetRandomRgn@12 @ 0x5D7A0 (_GreGetRandomRgn@12.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _NtGdiGetDCObject@8 @ 0x78A34 (_NtGdiGetDCObject@8.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     _GreGetDIBColorTable@16 @ 0x7B6B4 (_GreGetDIBColorTable@16.c)
 *     _DEVLOCKOBJ_bPrepareTrgDcoWrap@8 @ 0x838D0 (_DEVLOCKOBJ_bPrepareTrgDcoWrap@8.c)
 *     _vAccNotifyDeleteSurfaceWrap@4 @ 0x9A326 (_vAccNotifyDeleteSurfaceWrap@4.c)
 *     _GreGetBoundsRect@12 @ 0xAD1EA (_GreGetBoundsRect@12.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreRealizePalette@4 @ 0xBF88E (_GreRealizePalette@4.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _GreSetDIBColorTable@16 @ 0xC11D0 (_GreSetDIBColorTable@16.c)
 *     ?vProfileDriver@PDEVOBJ@@QAEXXZ @ 0xE4A94 (-vProfileDriver@PDEVOBJ@@QAEXXZ.c)
 *     _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED (_GreSpDwmSyncCaptureSurfaceBits@28.c)
 *     _GreWindowResizeComplete@8 @ 0x1CEAC5 (_GreWindowResizeComplete@8.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     _GreDeleteWnd@4 @ 0x1E6F47 (_GreDeleteWnd@4.c)
 *     ?bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z @ 0x1F4909 (-bDelete@COLORTRANSFORMOBJ@@QAEHAAVXDCOBJ@@H@Z.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z @ 0x1F4A5E (-hCreate@COLORTRANSFORMOBJ@@QAEPAXAAVXDCOBJ@@PAUtagLOGCOLORSPACEW@@PAXK2K2K@Z.c)
 *     ?RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z @ 0x1FAE71 (-RedirAlphaBlend@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAU_BLENDOBJ@@@Z.c)
 *     ?RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x1FAFE2 (-RedirBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@.c)
 *     ?RedirDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z @ 0x1FB1A9 (-RedirDrawEscape@@YGKPAU_SURFOBJ@@KPAU_CLIPOBJ@@PAU_RECTL@@KPAX@Z.c)
 *     ?RedirDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSSTATE@@@Z @ 0x1FB2C8 (-RedirDrawStream@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@KPAXPAU_DSS.c)
 *     ?RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z @ 0x1FB445 (-RedirFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@KK@Z.c)
 *     ?RedirGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PAU_POINTL@@K@Z @ 0x1FB57B (-RedirGradientFill@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_TRIVERTEX@@KPAXKPAU_RECTL@@PA.c)
 *     ?RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z @ 0x1FB6CD (-RedirLineTo@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_BRUSHOBJ@@JJJJPAU_RECTL@@K@Z.c)
 *     ?RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOBJ@@PAX@Z @ 0x1FB819 (-RedirNineGrid@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3PAUNINEGRID@@PAU_BLENDOB.c)
 *     ?RedirPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_POINTFIX@@PAU_RECTL@@4K@Z @ 0x1FB996 (-RedirPlgBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PA.c)
 *     ?RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x1FBB44 (-RedirStretchBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL.c)
 *     ?RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAU_BRUSHOBJ@@K@Z @ 0x1FBCEC (-RedirStretchBltROP@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POI.c)
 *     ?RedirStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_LINEATTRS@@4PAU_POINTL@@KK@Z @ 0x1FBEAA (-RedirStrokeAndFillPath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@P.c)
 *     ?RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POINTL@@PAU_LINEATTRS@@K@Z @ 0x1FBFF6 (-RedirStrokePath@@YGHPAU_SURFOBJ@@PAU_PATHOBJ@@PAU_CLIPOBJ@@PAU_XFORMOBJ@@PAU_BRUSHOBJ@@PAU_POIN.c)
 *     ?RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1FC132 (-RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5.c)
 *     ?RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z @ 0x1FC284 (-RedirTransparentBlt@@YGHPAU_SURFOBJ@@0PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@3KK@Z.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiOffsetClipRgn@12 @ 0x1FED41 (_NtGdiOffsetClipRgn@12.c)
 *     _NtGdiPtVisible@12 @ 0x1FEEF2 (_NtGdiPtVisible@12.c)
 *     _GreCreateBitmapFromDxSurface@28 @ 0x2012E7 (_GreCreateBitmapFromDxSurface@28.c)
 *     ?GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z @ 0x21B680 (-GreCheckBitmapBits@@YGHPAUHDC__@@PAXPAU_DEVBITMAPINFO@@1PAE@Z.c)
 *     ?GreSetICMMode@@YGHPAUHDC__@@KK@Z @ 0x21BB11 (-GreSetICMMode@@YGHPAUHDC__@@KK@Z.c)
 *     ?iSetMapMode@DC@@QAEHH@Z @ 0x21CB7F (-iSetMapMode@DC@@QAEHH@Z.c)
 *     _GreSetSystemPaletteUse@8 @ 0x21E4BA (_GreSetSystemPaletteUse@8.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QAEJXZ @ 0x222762 (-ipfdDevMaxGet@XDCOBJ@@QAEJXZ.c)
 *     _GreDescribePixelFormat@16 @ 0x222832 (_GreDescribePixelFormat@16.c)
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AAEXXZ @ 0x5E708 (-RestoreAttributesHelper@XDCOBJ@@AAEXXZ.c)
 */

void __thiscall DLODCOBJ::vUnlock(DLODCOBJ *this)
{
  int v2; // eax
  int *v3; // ecx
  int v4; // edx
  int v5; // edi
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = *(_DWORD *)this;
  if ( *(_DWORD *)this )
  {
    if ( *((_BYTE *)this + 12) )
    {
      *(_DWORD *)(v2 + 28) &= ~2u;
      v2 = *(_DWORD *)this;
      *((_BYTE *)this + 12) = 0;
    }
    if ( v2 )
    {
      v3 = (int *)v2;
      if ( *((_DWORD *)this + 1) )
      {
        v3 = (int *)v2;
        if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper(this);
          *(_DWORD *)(*(_DWORD *)this + 32) &= ~2u;
          v3 = *(int **)this;
          *((_DWORD *)this + 1) = 0;
        }
      }
      v4 = *((_DWORD *)this + 2);
      v6 = 0;
      v5 = *v3;
      HmgDecrementExclusiveReferenceCountEx(v3, v4, &v6);
      if ( v6 )
        bDeleteDCInternalEx(v5, 0);
    }
  }
  *(_DWORD *)this = 0;
}
