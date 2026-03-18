/*
 * XREFs of ?CheckIfDisposed@CBrushRenderingGraph@@IEBAXXZ @ 0x180055274
 * Callers:
 *     ?GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z @ 0x180054228 (-GetSurfaceTransform@CBrushRenderingGraph@@IEBAPEBUD2D_MATRIX_3X2_F@@I@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18005464C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z @ 0x180055214 (-IsBackdropInput@CBrushRenderingGraph@@IEBA_NI@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CBrushRenderingGraph::CheckIfDisposed(CBrushRenderingGraph *this)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
}
