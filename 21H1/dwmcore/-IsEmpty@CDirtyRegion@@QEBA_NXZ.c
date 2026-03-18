/*
 * XREFs of ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180069EBC
 * Callers:
 *     ?PreCompute@CVisualTree@@IEAAJXZ @ 0x180069908 (-PreCompute@CVisualTree@@IEAAJXZ.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180069B08 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 *     ?GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ @ 0x180069E80 (-GetDirtyRegion@CDesktopTree@@QEBAPEBVCDirtyRegion@@XZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z @ 0x18006B030 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@@Z.c)
 *     ?AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z @ 0x18006BA60 (-AddInvalidRects@CLegacyRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?CalcOcclusion@CDirtyRegion@@QEBAJXZ @ 0x1800D3664 (-CalcOcclusion@CDirtyRegion@@QEBAJXZ.c)
 *     ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800D39C0 (-GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E6ADC (-Render@CRemoteAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7730 (-Render@CLocalAppRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x180258D00 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirtyRegion::IsEmpty(CDirtyRegion *this)
{
  bool result; // al
  int v2; // edx
  float *i; // rcx

  result = 1;
  if ( !*((_BYTE *)this + 4456) )
  {
    if ( *((_BYTE *)this + 4458) )
      return *((_DWORD *)this + 713) == 0;
    v2 = 0;
    for ( i = (float *)((char *)this + 1612); *(i - 1) <= *(i - 3) || *i <= *(i - 2); i += 4 )
    {
      if ( (unsigned int)++v2 >= 8 )
        return result;
    }
  }
  return 0;
}
