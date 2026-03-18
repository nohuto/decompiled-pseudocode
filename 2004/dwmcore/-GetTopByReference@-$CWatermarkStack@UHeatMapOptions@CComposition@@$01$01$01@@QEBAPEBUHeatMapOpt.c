/*
 * XREFs of ?GetTopByReference@?$CWatermarkStack@UHeatMapOptions@CComposition@@$01$01$01@@QEBAPEBUHeatMapOptions@CComposition@@XZ @ 0x180178FE8
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180055DC0 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800678C0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800C1908 (-IsTextureMemoryHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ @ 0x1800C1930 (-EnsureDrawListGenerator@CPrimitiveGroup@@AEAAJXZ.c)
 *     ?IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ @ 0x1800C19A0 (-IsOverdrawHeatMapEnabled@CComposition@@QEAA_NXZ.c)
 *     ?RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PEAVCDropShadow@@PEAVIRenderTargetBitmap@@@Z @ 0x180191DD8 (-RenderShadow@CTreeEffectLayer@@IEAAJAEBUD2D_POINT_2F@@AEBUD2D_SIZE_F@@MMPEAVCDrawingContext@@PE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CWatermarkStack<CComposition::HeatMapOptions,2,2,2>::GetTopByReference(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)a1 )
    return *(_QWORD *)(a1 + 16) + 24LL * (unsigned int)(*(_DWORD *)a1 - 1);
  return result;
}
