/*
 * XREFs of ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18004D3F8
 * Callers:
 *     ?RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18001D978 (-RenderInternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@PEAUEffectStage@@AEBUInter.c)
 *     ?RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage@@AEBUIntermediateConfigurationInputs@1@PEAUEffectInput@@@Z @ 0x18004C688 (-RenderExternalEffect@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBU_GUID@@AEBUEffectStage.c)
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18004D3F8 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 * Callees:
 *     ?DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z @ 0x18004D3F8 (-DoesIntermediateContributeToSubgraph@CBrushRenderingGraph@@AEBA_NII@Z.c)
 *     ?IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ @ 0x1800C5F1C (-IsNoOp@CRenderingTechniqueFragment@@QEBA_NXZ.c)
 */

char __fastcall CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(
        CBrushRenderingGraph *this,
        unsigned int a2,
        unsigned int a3)
{
  bool DoesIntermediateContributeToSubgraph; // bl
  unsigned int v6; // esi
  __int64 v7; // rdi
  unsigned int v8; // r12d
  unsigned int *v9; // rdi
  __int64 v10; // r14

  DoesIntermediateContributeToSubgraph = 0;
  if ( a3 < a2 )
  {
    v6 = 0;
    v7 = *(_QWORD *)(*((_QWORD *)this + 18) + 8LL * a2);
    v8 = *(_DWORD *)(v7 + 60);
    if ( v8 )
    {
      v9 = (unsigned int *)(v7 + 68);
      do
      {
        if ( *((_BYTE *)v9 + 4) )
        {
          v10 = *v9;
          if ( (_DWORD)v10 == a3 )
            return 1;
          if ( CRenderingTechniqueFragment::IsNoOp(*(CRenderingTechniqueFragment **)(*(_QWORD *)(*((_QWORD *)this + 18)
                                                                                               + 8 * v10)
                                                                                   + 8LL)) )
            DoesIntermediateContributeToSubgraph = CBrushRenderingGraph::DoesIntermediateContributeToSubgraph(
                                                     this,
                                                     v10,
                                                     a3);
          if ( DoesIntermediateContributeToSubgraph )
            return DoesIntermediateContributeToSubgraph;
        }
        ++v6;
        v9 += 11;
      }
      while ( v6 < v8 );
    }
  }
  return DoesIntermediateContributeToSubgraph;
}
