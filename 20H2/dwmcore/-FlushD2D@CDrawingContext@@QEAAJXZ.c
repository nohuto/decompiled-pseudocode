/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18004DDB4
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180006500 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18004C300 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18004DD30 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18018F7A0 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180190E50 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180191004 (-CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18019224C (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18004DDF0 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  v1 = CD2DContext::FlushD2D((CD2DContext *)(*((_QWORD *)this + 5) + 16LL), (CDrawingContext *)((char *)this + 24));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x983u, 0LL);
  return v3;
}
