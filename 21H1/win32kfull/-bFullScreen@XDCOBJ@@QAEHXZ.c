/*
 * XREFs of ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918
 * Callers:
 *     _GrePolyTextOutW@16 @ 0x564DC (_GrePolyTextOutW@16.c)
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z @ 0x57040 (-GrePolyPatBltInternal@@YGHAAVXDCOBJ@@KPAU_POLYPATBLT@@KKKKKK@Z.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     ?GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_BLENDFUNCTION@@KPAUtagRECT@@PAUtagMINIWINDOWINFO@@HH@Z @ 0x603A0 (-GreUpdateSpriteInternal@@YGHPAUHDEV__@@PAUHWND__@@PAXPAUHDC__@@PAUtagPOINT@@PAUtagSIZE@@34KPAU_.c)
 *     _GreStretchDIBitsInternal@64 @ 0x75662 (_GreStretchDIBitsInternal@64.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreExtTextOutRect@8 @ 0x78BA6 (_GreExtTextOutRect@8.c)
 *     _GreGetAppClipBox@8 @ 0x796EA (_GreGetAppClipBox@8.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _GreGetBoundsRect@12 @ 0xAD1EA (_GreGetBoundsRect@12.c)
 *     ?GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z @ 0xBB65A (-GreRectBlt@@YGHAAVDCOBJ@@PAVERECTL@@@Z.c)
 *     ?GreLineTo@@YGHPAUHDC__@@HH@Z @ 0xBBB84 (-GreLineTo@@YGHPAUHDC__@@HH@Z.c)
 *     _GreGradientFill@24 @ 0xBCEF0 (_GreGradientFill@24.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     _NtGdiFastPolyPolyline@16 @ 0xF7700 (_NtGdiFastPolyPolyline@16.c)
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 *     _GreDrawEscape@16 @ 0x1D89E6 (_GreDrawEscape@16.c)
 *     ?bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL@@@Z @ 0x1DE86D (-bSpUpdateShape@@YGHPAVSPRITE@@KPAUHDC__@@1KPAU_BLENDFUNCTION@@PAU_POINTL@@PAUtagSIZE@@PAU_RECTL.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z @ 0x1E4DD0 (-bStrokeAndOrFill@EPATHOBJ@@QAEHAAVXDCOBJ@@PAU_LINEATTRS@@PAVEXFORMOBJ@@K@Z.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 *     ?NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z @ 0x1FD92A (-NtGdiInvertRgnInternal@@YGHPAUHDC__@@PAUHRGN__@@@Z.c)
 *     _NtGdiFillRgn@12 @ 0x1FE14A (_NtGdiFillRgn@12.c)
 *     _NtGdiFrameRgn@20 @ 0x1FE62D (_NtGdiFrameRgn@20.c)
 *     _NtGdiUpdateColors@4 @ 0x21EB48 (_NtGdiUpdateColors@4.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 *     _NtGdiSwapBuffers@4 @ 0x222B79 (_NtGdiSwapBuffers@4.c)
 * Callees:
 *     ?bInFullScreen@DC@@QAEHXZ @ 0x79454 (-bInFullScreen@DC@@QAEHXZ.c)
 */

int __thiscall XDCOBJ::bFullScreen(DC **this)
{
  DC *v1; // ecx
  int v2; // edx

  v1 = *this;
  if ( !*((_DWORD *)v1 + 126) || DC::bInFullScreen(v1) )
    return 1;
  return v2;
}
