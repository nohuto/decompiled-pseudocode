/*
 * XREFs of ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUMilRectF@@@Z @ 0x18004D6D8
 * Callers:
 *     ?GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z @ 0x1800160A0 (-GetDirtyRegion@CCompositionSurfaceBitmap@@UEAAPEBVCRegion@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x1800303C0 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?GetSize@CCachedVisualImage@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180033B30 (-GetSize@CCachedVisualImage@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H_N5PEAU_D3DCOLORVALUE@@@Z @ 0x180048ABC (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETDIRTYRECT@@PEBXI@Z @ 0x1800766C4 (-ProcessSetDirtyRect@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_SETD.c)
 *     ?GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@PEA_N2@Z @ 0x1800B81C0 (-GetEffectiveBounds@CWindowNode@@AEBAJPEBVCShape@@PEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@.c)
 *     ?NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D3CA8 (-NotifyRenderedRect@CRemoteRenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@PEAU_MARGINS@@H@Z @ 0x1800E9624 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVI_ea_1800E9624.c)
 *     ?CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisual@@PEAVCCompositionSurfaceInfo@@PEAVISwapChainRealization@@PEBVCMILMatrix@@PEBVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@@Z @ 0x1801872B4 (-CheckAndRecordOverlayCandidateForContext@COcclusionContext@@QEAAJPEAVCOverlayContext@@PEAVCVisu.c)
 *     ?DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180188878 (-DesktopRectToRenderTargetRect@CLegacyRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DRec.c)
 *     ?NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180188C08 (-NotifyRenderedRect@CLegacyRenderTarget@@AEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoint.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180188CCC (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018A514 (-NotifyRenderedRect@CRemoteAppRenderTarget@@IEAAXPEAVISwapChain@@PEBV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18018A94C (-RailMultimonRenderAndPresent@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EB44 (-NotifyRenderedRect@CLocalAppRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180190374 (-DesktopRectToRenderTargetRect@CDDisplayRenderTarget@@IEAAX_NAEBV-$TMilRect_@MUMilRectF@@UMil3DR.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x180190554 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPoi.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801909C0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180191960 (-RenderComposeTop@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18019D11C (-NotifyRenderedRect@CDDARenderTarget@@IEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAnd.c)
 *     ?GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA?AV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@V2@@Z @ 0x18019FFB8 (-GetPrefilteredRect@CSecondaryD2DBitmap@@IEBA-AV-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@R.c)
 * Callees:
 *     ?PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z @ 0x18004ED44 (-PixelAlign@@YAHMW4Enum@PixelAlignMode@@@Z.c)
 */

_DWORD *__fastcall PixelAlign(int *a1, _DWORD *a2)
{
  __m128 v2; // xmm3
  int *v3; // r8
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // r8
  __int64 v7; // r9
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  double v10; // xmm5_8
  __m128 v11; // xmm4
  int v12; // eax
  __m128 v13; // xmm3
  int v14; // eax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  __m128 v18; // xmm0
  __m128 v19; // xmm2
  __m128 v20; // rt1
  __m128 v21; // xmm2
  __m128 v22; // rt1
  __m128 v23; // xmm2
  __m128 v24; // rt1
  float v25; // [rsp+40h] [rbp+8h]
  float v26; // [rsp+40h] [rbp+8h]
  float v27; // [rsp+40h] [rbp+8h]

  v2 = (__m128)(unsigned int)*a2;
  v3 = a1;
  if ( (*a2 & 0x7FFFFFFFu) > 0x497FFFF0 )
  {
    v19 = 0LL;
    v19.m128_f32[0] = (float)(int)v2.m128_f32[0] - v2.m128_f32[0];
    v20.m128_f32[0] = FLOAT_N0_5;
    v4 = (int)v2.m128_f32[0] - _mm_cmple_ss(v19, v20).m128_u32[0];
  }
  else
  {
    v25 = v2.m128_f32[0] + 6291456.25;
    v4 = (int)(LODWORD(v25) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v2.m128_f32[0] - (float)v4) & _xmm) > 0.00390625 )
  {
    a1 = (int *)(unsigned int)(int)v2.m128_f32[0];
    v16.m128_f32[0] = (float)(int)a1;
    v4 = (_DWORD)a1 + _mm_cmplt_ss(v2, v16).m128_u32[0];
  }
  *v3 = v4;
  v5 = PixelAlign(a1, 0LL);
  v11.m128_i32[0] = *(_DWORD *)(v7 + 8);
  v6[1] = v5;
  if ( (v8 & v11.m128_i32[0]) > v9 )
  {
    v21 = 0LL;
    v21.m128_f32[0] = (float)(int)v11.m128_f32[0] - v11.m128_f32[0];
    v22.m128_f32[0] = FLOAT_N0_5;
    v12 = (int)v11.m128_f32[0] - _mm_cmple_ss(v21, v22).m128_u32[0];
  }
  else
  {
    v26 = v11.m128_f32[0] + v10;
    v12 = (int)(LODWORD(v26) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v11.m128_f32[0] - (float)v12) & _xmm) > 0.00390625 )
  {
    v17 = 0LL;
    v17.m128_f32[0] = (float)(int)v11.m128_f32[0];
    v12 = (int)v11.m128_f32[0] - _mm_cmplt_ss(v17, v11).m128_u32[0];
  }
  v13.m128_i32[0] = *(_DWORD *)(v7 + 12);
  v6[2] = v12;
  if ( (v8 & v13.m128_i32[0]) > v9 )
  {
    v23 = 0LL;
    v23.m128_f32[0] = (float)(int)v13.m128_f32[0] - v13.m128_f32[0];
    v24.m128_f32[0] = FLOAT_N0_5;
    v14 = (int)v13.m128_f32[0] - _mm_cmple_ss(v23, v24).m128_u32[0];
  }
  else
  {
    v27 = v13.m128_f32[0] + v10;
    v14 = (int)(LODWORD(v27) << 10) >> 11;
  }
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v13.m128_f32[0] - (float)v14) & _xmm) > 0.00390625 )
  {
    v18 = 0LL;
    v18.m128_f32[0] = (float)(int)v13.m128_f32[0];
    v14 = (int)v13.m128_f32[0] - _mm_cmplt_ss(v18, v13).m128_u32[0];
  }
  v6[3] = v14;
  return v6;
}
