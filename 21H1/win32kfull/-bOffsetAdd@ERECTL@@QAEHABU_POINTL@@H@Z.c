/*
 * XREFs of ?bOffsetAdd@ERECTL@@QAEHABU_POINTL@@H@Z @ 0x53E36
 * Callers:
 *     ?vSpAdjustSpriteDirtyAccum@@YGXPAVSPRITE@@PAU_RECTL@@1PAU_POINTL@@2@Z @ 0x11EEC (-vSpAdjustSpriteDirtyAccum@@YGXPAVSPRITE@@PAU_RECTL@@1PAU_POINTL@@2@Z.c)
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?bClipSrcDstRects@@YG_NQAU_RECTL@@0PAU1@1@Z @ 0x4F3C2 (-bClipSrcDstRects@@YG_NQAU_RECTL@@0PAU1@1@Z.c)
 *     _GreRectVisible@8 @ 0x53700 (_GreRectVisible@8.c)
 *     ?ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z @ 0x53A9C (-ExtTextOutRect@@YGHAAVXDCOBJ@@PAUtagRECT@@@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ?bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z @ 0x590DC (-bSpDwmValidateSurface@@YGHAAVXDCOBJ@@HHHH@Z.c)
 *     ?iSelect@DC@@QAEHPAVREGION@@H@Z @ 0x5A6CE (-iSelect@DC@@QAEHPAVREGION@@H@Z.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     ?bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z @ 0x79928 (-bBitBlt@BLTRECORD@@QAEHAAVDCOBJ@@0K@Z.c)
 *     ?iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z @ 0x7A3DE (-iSelectTightenRao@DC@@QAEHPAVREGION@@H@Z.c)
 *     ?bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x7AB9E (-bStretch@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?vInitStrDDAClip@@YGXPAU_RECTL@@0000@Z @ 0x93A92 (-vInitStrDDAClip@@YGXPAU_RECTL@@0000@Z.c)
 *     ?bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_RECTL@@@Z @ 0x9F6DC (-bSpUpdateSprite@@YGHPAVSPRITE@@PAUHDC__@@PAU_POINTL@@PAUtagSIZE@@12KPAU_BLENDFUNCTION@@KPAU_REC.c)
 *     _NtGdiGetPixel@12 @ 0xBFE70 (_NtGdiGetPixel@12.c)
 *     _NtGdiSetPixel@16 @ 0xC0162 (_NtGdiSetPixel@16.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z @ 0x1D3470 (-InternalSpritesCollision@@YGHPAUHDEV__@@PAUHWND__@@PAUHRGN__@@@Z.c)
 *     _DxgkEngBltViaGDI@52 @ 0x1D3921 (_DxgkEngBltViaGDI@52.c)
 *     ?bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4@Z @ 0x1DDCF1 (-bSpCreateShape@@YGHPAVSPRITE@@PAU_POINTL@@PAU_SURFOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAVPALETTE@@KK4.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     ?vOffset@EWNDOBJ@@QAEXJJ@Z @ 0x1E6899 (-vOffset@EWNDOBJ@@QAEXJJ@Z.c)
 *     _GreSetClientRgn@12 @ 0x1E7093 (_GreSetClientRgn@12.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z @ 0x1EC095 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@0KE@Z.c)
 *     ?bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z @ 0x1EC6D3 (-bRotate@BLTRECORD@@QAEHAAVDCOBJ@@AAVSURFMEM@@1KK@Z.c)
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

int __thiscall ERECTL::bOffsetAdd(ERECTL *this, const struct _POINTL *a2, int a3)
{
  __int64 x; // kr00_8
  __int64 y; // kr08_8

  if ( a3 )
  {
    x = a2->x;
    if ( (unsigned __int64)(x + *(int *)this + 0x80000000LL) >> 32 )
      return 0;
    if ( (unsigned __int64)(x + *((int *)this + 2) + 0x80000000LL) >> 32 )
      return 0;
    y = a2->y;
    if ( (unsigned __int64)(y + *((int *)this + 1) + 0x80000000LL) >> 32
      || (unsigned __int64)(y + *((int *)this + 3) + 0x80000000LL) >> 32 )
    {
      return 0;
    }
  }
  *(_DWORD *)this += a2->x;
  *((_DWORD *)this + 2) += a2->x;
  *((_DWORD *)this + 1) += a2->y;
  *((_DWORD *)this + 3) += a2->y;
  return 1;
}
