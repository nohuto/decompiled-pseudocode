/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003A514
 * Callers:
 *     ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x180006B10 (-RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003A490 (-RestoreState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEAUEffectInput@@@Z @ 0x18003AA30 (-GetBackdropImageFromRenderTarget@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 *     ?RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180191420 (-RestoreState@CColorSpaceLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180192AD0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180192C84 (-CopyAndTransform@CGammaBlendLayer@@IEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x180193ECC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x18003A550 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v1 = CD2DContext::FlushD2D((CD2DContext *)(*((_QWORD *)this + 5) + 16LL), (CDrawingContext *)((char *)this + 24));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x96Fu, 0LL);
  return v3;
}
