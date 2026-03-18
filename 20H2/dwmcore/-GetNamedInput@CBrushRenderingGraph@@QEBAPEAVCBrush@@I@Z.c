/*
 * XREFs of ?GetNamedInput@CBrushRenderingGraph@@QEBAPEAVCBrush@@I@Z @ 0x180065C1C
 * Callers:
 *     ?HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18005A0D8 (-HasBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z @ 0x18005A2BC (-HasWindowBackdropInput@CRenderingTechniqueFragment@@QEBA_NPEBVCBrushRenderingGraph@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x180063718 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ?IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x180065BDC (-IsBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z @ 0x180065CA4 (-IsWindowBackdropInput@CBrushRenderingGraph@@AEBA_NI@Z.c)
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x1800C1A64 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18020CF74 (ModuleFailFastForHRESULT.c)
 */

struct CBrush *__fastcall CBrushRenderingGraph::GetNamedInput(CBrushRenderingGraph *this, unsigned int a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 200) )
    ModuleFailFastForHRESULT(2291662981LL, retaddr);
  return *(struct CBrush **)(*((_QWORD *)this + 2) + 24LL * a2);
}
