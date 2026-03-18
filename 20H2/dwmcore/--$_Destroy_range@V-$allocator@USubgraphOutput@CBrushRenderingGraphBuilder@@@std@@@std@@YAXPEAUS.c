/*
 * XREFs of ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@0AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800CDF5C
 * Callers:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180055F84 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@USubgraphOutput@CBrushRenderingGraphBuilde.c)
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180056FBC (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18004F3A0 (--3@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFragmentInput@CRenderingTechniqueFragment@@0AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x180055A9C (--$_Destroy_range@V-$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAXPEAUFr.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800CFC44 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 *v4; // rbx
  void *v5; // rcx
  void *v6; // rsi

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(__int64 **)(v3 + 8);
      if ( v4 )
      {
        v5 = (void *)v4[14];
        if ( v5 )
          operator delete(v5);
        v6 = (void *)v4[4];
        if ( v6 )
        {
          std::_Destroy_range<std::allocator<CRenderingTechniqueFragment::FragmentInput>>(v4[4], v4[5]);
          std::_Deallocate<16,0>(v6, (v4[6] - (_QWORD)v6) & 0xFFFFFFFFFFFFFFF0uLL);
          v4[4] = 0LL;
          v4[5] = 0LL;
          v4[6] = 0LL;
        }
        Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease(v4);
        operator delete(v4);
      }
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
