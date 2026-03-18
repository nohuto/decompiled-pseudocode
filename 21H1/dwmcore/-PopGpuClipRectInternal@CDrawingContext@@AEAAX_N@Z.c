/*
 * XREFs of ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1800CE830
 * Callers:
 *     ?RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000C020 (-RenderLayer@CFilterEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBUD2D_SIZE_F@@@Z @ 0x18000E158 (-RenderEffect@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@AEBV-$TMilRect_@MUMilR.c)
 *     ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18002FF54 (-ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18006BCD8 (-RenderDirtyRegion@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompose.c)
 *     ?DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z @ 0x18008F7C8 (-DrawVisual@CDrawingContext@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x1800C3530 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18017A588 (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x180188CCC (-RenderComposeTop@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x1801909C0 (-RenderComposeTop@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x180190C9C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x1801949A8 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z @ 0x1800301E4 (-PopGpuClipFromScope@CScopedClipStack@@QEAAX_N@Z.c)
 *     ?Pop@?$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@CDrawingContext@@@Z @ 0x180071964 (-Pop@-$CWatermarkStack@UStackStateEntry@CDrawingContext@@$0EA@$01$09@@QEAA_NPEAUStackStateEntry@.c)
 */

void __fastcall CDrawingContext::PopGpuClipRectInternal(CDrawingContext *this, char a2)
{
  char v2; // al
  CDrawingContext *v3; // r10
  __int64 v4; // r10
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = this;
  if ( a2 )
  {
    CWatermarkStack<CDrawingContext::StackStateEntry,64,2,10>::Pop((int *)this + 94, &v5);
    v2 = (_DWORD)v5 == 3;
  }
  CScopedClipStack::PopGpuClipFromScope((CDrawingContext *)((char *)v3 + 936), v2);
  *(_BYTE *)(v4 + 5954) = 1;
}
