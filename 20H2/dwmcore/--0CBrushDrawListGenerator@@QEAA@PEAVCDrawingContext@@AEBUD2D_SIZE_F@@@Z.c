/*
 * XREFs of ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x18009F57C
 * Callers:
 *     ?GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListBrush@@@Z @ 0x180007A70 (-GetReceiverMaskInputBrush@CProjectedShadowReceiver@@QEAAJPEAVCDrawingContext@@PEAPEAVCDrawListB.c)
 *     ?GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180008640 (-GetBrushParameters@CNineGridBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800640C0 (-GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x18009F508 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C1A64 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1800C5300 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801B4A84 (-Draw@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBU.c)
 *     ?GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801BB7E0 (-GenerateDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLi.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DF874 (-GenerateDrawList@CParticleEmitterVisual@@IEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18025ED4C (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800DB030 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 */

CBrushDrawListGenerator *__fastcall CBrushDrawListGenerator::CBrushDrawListGenerator(
        CBrushDrawListGenerator *this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3)
{
  char *v3; // rdi
  __int64 v4; // xmm0_8
  __int64 v6; // rsi
  CBrushDrawListGenerator *result; // rax

  *(_QWORD *)this = a2;
  v3 = (char *)this + 40;
  v4 = (__int64)*a3;
  *((_DWORD *)this + 4) = 0;
  v6 = 4LL;
  *((_QWORD *)this + 1) = v4;
  *(_OWORD *)((char *)this + 20) = _xmm;
  do
  {
    wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v3);
    v3 += 8;
    --v6;
  }
  while ( v6 );
  *((_DWORD *)this + 18) = 0;
  result = this;
  *((_BYTE *)this + 76) = 0;
  return result;
}
