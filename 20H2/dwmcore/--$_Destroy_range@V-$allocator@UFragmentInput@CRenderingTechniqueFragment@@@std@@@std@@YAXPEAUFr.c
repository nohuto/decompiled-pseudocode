/*
 * XREFs of ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180055A9C
 * Callers:
 *     ?Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composition@UI@Windows@@@Z @ 0x18001E2F8 (-Build@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAUIEffectInstance@Composit.c)
 *     ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@PEAU12@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180056780 (--$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@PEAU12@V-$allocator@UFragm.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800567D8 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ?Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z @ 0x180056ACC (-Build@CBrushRenderingGraphBuilder@@AEAAJPEAVCBrush@@@Z.c)
 *     ??_GCRenderingTechniqueFragment@@QEAAPEAXI@Z @ 0x180056E30 (--_GCRenderingTechniqueFragment@@QEAAPEAXI@Z.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ?CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z @ 0x180057C80 (-CheckFragmentSize@CBrushRenderingGraphBuilder@@IEAAJPEAVCRenderingTechniqueFragment@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@0AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800CDF5C (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ?AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x18020B0B8 (-AddNineGridBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCNineGridBrush@@_NPEAPEAVCRenderingTechn.c)
 * Callees:
 *     ??1?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x180056664 (--1-$unique_ptr@VCRenderingTechniqueFragment@@U-$default_delete@VCRenderingTechniqueFragment@@@s.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<CRenderingTechniqueFragment>::~unique_ptr<CRenderingTechniqueFragment>(v3 + 8);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
