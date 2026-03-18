/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800E8974
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x180036214 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800B6FA0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800ECD2C (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 */

void __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // r14
  unsigned __int64 v6; // rcx
  __int64 v7; // r14
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // rbp
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 i; // rdx
  __int64 v16; // rax

  v2 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = a1[1] - *a1;
  v6 = (a1[2] - *a1) >> 4;
  v7 = v5 >> 4;
  v8 = v6 >> 1;
  if ( v6 <= 0xFFFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = v10 + 16 * v7;
  v12 = a2 - v7;
  if ( a2 != v7 )
  {
    do
    {
      *(_DWORD *)v11 = -1;
      *(_QWORD *)(v11 + 8) = 0LL;
      v11 += 16LL;
      --v12;
    }
    while ( v12 );
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v11, v11);
  v13 = a1[1];
  v14 = v10;
  for ( i = *a1; i != v13; i += 16LL )
  {
    *(_DWORD *)v14 = *(_DWORD *)i;
    v16 = *(_QWORD *)(i + 8);
    *(_QWORD *)(i + 8) = 0LL;
    *(_QWORD *)(v14 + 8) = v16;
    v14 += 16LL;
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v14, v14);
  if ( *a1 )
  {
    std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(*a1, a1[1]);
    std::_Deallocate<16,0>((void *)*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = v10;
  a1[1] = v10 + 16 * a2;
  a1[2] = v10 + 16 * v2;
}
