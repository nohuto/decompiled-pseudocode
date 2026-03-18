/*
 * XREFs of ?CheckIfDisposed@CBrushRenderingGraph@@AEBAXXZ @ 0x1800478FC
 * Callers:
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180046094 (-GetSurfaceTransform@CBrushRenderingGraph@@AEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraph::CheckIfDisposed(CBrushRenderingGraph *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
}
