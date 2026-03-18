/*
 * XREFs of ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x180048904
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x180045CD0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x18004873C (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x1800488C4 (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18004A72C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x1800B8C10 (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x1800B8DF4 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020EDB4 (ModuleFailFastForHRESULT.c)
 */

struct CBrush *__fastcall CBrushRenderingGraph::GetNamedInput(CBrushRenderingGraph *this, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  return *(struct CBrush **)(*((_QWORD *)this + 2) + 24LL * a2);
}
