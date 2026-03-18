/*
 * XREFs of ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x1801B21B8
 * Callers:
 *     ?PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D85D0 (-PostRestoreState@CColorSpaceLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801D9DF0 (-PostRestoreState@CTreeEffectLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801DC5B0 (-ApplyState@CGammaBlendLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x1801DC790 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIDeviceTexture@@AEBUMilPointAn.c)
 *     ?RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z @ 0x1801DDAB0 (-RenderLayer@CResampleLayer@@EEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x180278C80 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 */

__int64 __fastcall CDrawingContext::FlushD2D(CDrawingContext *this)
{
  int v1; // eax
  __int64 v2; // rcx
  unsigned int v3; // ebx

  v1 = CD2DContext::FlushD2D((CD2DContext *)(*((_QWORD *)this + 5) + 16LL), (CDrawingContext *)((char *)this + 24));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, v1, 0xA01u);
  return v3;
}
