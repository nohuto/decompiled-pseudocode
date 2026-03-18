/*
 * XREFs of ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800B6DF8
 * Callers:
 *     ?PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180009ED0 (-PrepareForDrawing@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009E650 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800B6D88 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180190158 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180177318 (-GetTopByReference@-$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOpt.c)
 */

char __fastcall CComposition::IsOverdrawHeatMapEnabled(CComposition *this)
{
  _DWORD *v1; // rcx
  char v2; // cl
  _DWORD *TopByReference; // rax

  v1 = (_DWORD *)((char *)this + 960);
  if ( !*v1 )
    return 0;
  TopByReference = (_DWORD *)CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(v1);
  v2 = 1;
  if ( *TopByReference != 1 )
    return 0;
  return v2;
}
