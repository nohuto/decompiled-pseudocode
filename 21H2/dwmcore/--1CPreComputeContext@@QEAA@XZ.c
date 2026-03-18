/*
 * XREFs of ??1CPreComputeContext@@QEAA@XZ @ 0x180019C48
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x18002E810 (-Initialize@CComposition@@MEAAJXZ.c)
 *     ??1CVisualTree@@UEAA@XZ @ 0x180063EB4 (--1CVisualTree@@UEAA@XZ.c)
 *     ?Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z @ 0x18008F144 (-Clean@CVisualTree@@IEAAJPEAVCPreComputeContext@@@Z.c)
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x1800A24D0 (-CleanTrees@CComposition@@IEAAJXZ.c)
 *     ??1CComposition@@MEAA@XZ @ 0x18019233C (--1CComposition@@MEAA@XZ.c)
 * Callees:
 *     ??1CLightStack@@QEAA@XZ @ 0x180049AB0 (--1CLightStack@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?clear@?$vector_facade@VSubTreeContext@CPreComputeContext@@V?$buffer_impl@VSubTreeContext@CPreComputeContext@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800CFA78 (-clear@-$vector_facade@VSubTreeContext@CPreComputeContext@@V-$buffer_impl@VSubTreeContext@CPreCo.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVisualCollection@@QEAV1@AEAV?$allocator@VCDepthSortedVisualCollection@@@0@@Z @ 0x1801920CC (--$_Destroy_range@V-$allocator@VCDepthSortedVisualCollection@@@std@@@std@@YAXPEAVCDepthSortedVis.c)
 */

void __fastcall CPreComputeContext::~CPreComputeContext(void **this)
{
  CDepthSortedVisualCollection *v2; // rcx
  void *v3; // rcx
  bool v4; // zf

  DefaultHeap::Free(this[238]);
  v2 = (CDepthSortedVisualCollection *)this[229];
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<CDepthSortedVisualCollection>>(v2);
    std::_Deallocate<16,0>(this[229], 8 * (((_BYTE *)this[231] - (_BYTE *)this[229]) >> 3));
    this[229] = 0LL;
    this[230] = 0LL;
    this[231] = 0LL;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 225);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 221);
  DefaultHeap::Free(this[219]);
  CLightStack::~CLightStack((CLightStack *)(this + 187));
  DefaultHeap::Free(this[185]);
  DefaultHeap::Free(this[181]);
  DefaultHeap::Free(this[177]);
  DefaultHeap::Free(this[173]);
  detail::vector_facade<CPreComputeContext::SubTreeContext,detail::buffer_impl<CPreComputeContext::SubTreeContext,3,1,detail::liberal_expansion_policy>>::clear(this);
  v3 = *this;
  v4 = *this == this + 3;
  *this = 0LL;
  if ( v4 )
    v3 = 0LL;
  DefaultHeap::Free(v3);
}
