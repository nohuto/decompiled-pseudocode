/*
 * XREFs of ?GetOcclusionContext@CDirtyRegion@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800D39C0
 * Callers:
 *     ?Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800E7EC4 (-Render@CRemoteRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z @ 0x18018ACDC (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@@Z.c)
 *     ?RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z @ 0x18018ED90 (-RenderDirtyRegion@CLocalAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTree@@PEBVCDirtyRegion@@IIPEAVIRenderTargetBitmap@@PEAVCDrawingContext@@@Z @ 0x180258AB4 (-RenderDirtyRegion@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@PEAVCVisualTr.c)
 * Callees:
 *     ?IsEmpty@CDirtyRegion@@QEBA_NXZ @ 0x180069EBC (-IsEmpty@CDirtyRegion@@QEBA_NXZ.c)
 *     ?IsCurrent@COcclusionContext@@QEBA_NXZ @ 0x180069F1C (-IsCurrent@COcclusionContext@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@details@wil@@QEAA_NXZ @ 0x1800E75F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_2103c_29643259@@@detail.c)
 */

const struct COcclusionContext *__fastcall CDirtyRegion::GetOcclusionContext(CDirtyRegion *this)
{
  __int64 v2; // rbx
  bool IsCurrent; // al
  __int64 v4; // r8
  __int64 v5; // r8

  v2 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_2103c_29643259>::GetImpl'::`2'::impl) )
  {
    IsCurrent = COcclusionContext::IsCurrent((CDirtyRegion *)((char *)this + 16));
    return (const struct COcclusionContext *)(v4 & -(__int64)IsCurrent);
  }
  else if ( !CDirtyRegion::IsEmpty(this) && COcclusionContext::IsCurrent((CDirtyRegion *)((char *)this + 16)) )
  {
    return (const struct COcclusionContext *)v5;
  }
  return (const struct COcclusionContext *)v2;
}
