/*
 * XREFs of ?_Tidy@?$vector@UDepthGraphNode@@V?$allocator@UDepthGraphNode@@@std@@@std@@AEAAXXZ @ 0x18020B048
 * Callers:
 *     ?SortVisuals@CDepthSortingLayer@@QEAA_NPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@AEBV?$vector@VCVisualDepthGeometry@@V?$allocator@VCVisualDepthGeometry@@@std@@@3@@Z @ 0x18020ACFC (-SortVisuals@CDepthSortingLayer@@QEAA_NPEAV-$vector@PEAVCVisual@@V-$allocator@PEAVCVisual@@@std@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C4B6C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@0AEAV?$allocator@UDepthGraphNode@@@0@@Z @ 0x18020AB60 (--$_Destroy_range@V-$allocator@UDepthGraphNode@@@std@@@std@@YAXPEAUDepthGraphNode@@0AEAV-$alloca.c)
 */

void __fastcall std::vector<DepthGraphNode>::_Tidy(__int64 a1)
{
  void *v1; // rdi

  v1 = *(void **)a1;
  if ( *(_QWORD *)a1 )
  {
    std::_Destroy_range<std::allocator<DepthGraphNode>>(*(_QWORD **)a1, *(_QWORD **)(a1 + 8));
    std::_Deallocate<16,0>(v1, 56 * ((*(_QWORD *)(a1 + 16) - (_QWORD)v1) / 56LL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
