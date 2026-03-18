/*
 * XREFs of ??$_Construct_n_copies_of_ty@U_Value_init_tag@std@@@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18020AAA4
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18020ACFC (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18005D888 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@0AEAV?$allocator@UDepthGraphNode@@@0@@Z @ 0x18020AB60 (--$_Destroy_range@V-$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@0AEAV-$alloca.c)
 */

void __fastcall std::vector<DepthGraphNode>::_Construct_n_copies_of_ty<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi

  if ( a2 )
  {
    v2 = a2;
    if ( a2 > 0x492492492492492LL )
      std::_Xlength_error("vector<T> too long");
    v4 = 56 * a2;
    v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(56 * a2);
    *a1 = v5;
    a1[1] = v5;
    a1[2] = v4 + v5;
    v7 = v5 + 40;
    v6 = v4 + v5;
    v8 = v4 + v5;
    do
    {
      *(_QWORD *)(v7 - 16) = 0LL;
      *(_QWORD *)(v7 - 8) = 0LL;
      *(_QWORD *)v7 = 0LL;
      *(_DWORD *)(v7 + 8) = 0;
      *(_BYTE *)(v7 - 24) = 1;
      v7 += 56LL;
      --v2;
    }
    while ( v2 );
    std::_Destroy_range<std::allocator<DepthGraphNode>>(v6, v6);
    a1[1] = v8;
  }
}
