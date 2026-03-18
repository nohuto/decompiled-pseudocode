/*
 * XREFs of ??1CExternalEffectGraph@@MEAA@XZ @ 0x180031618
 * Callers:
 *     ??1CBlurRenderingGraph@@EEAA@XZ @ 0x1800314FC (--1CBlurRenderingGraph@@EEAA@XZ.c)
 * Callees:
 *     ??1CBlurredBackdropCache@@QEAA@XZ @ 0x18003153C (--1CBlurredBackdropCache@@QEAA@XZ.c)
 *     ?clear_region@?$vector_facade@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@V?$buffer_impl@V?$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@@@Z@std@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180031750 (-clear_region@-$vector_facade@V-$function@$$A6AJPEAVCGraphRenderingContext@CExternalEffectGraph@.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 */

void __fastcall CExternalEffectGraph::~CExternalEffectGraph(CExternalEffectGraph *this)
{
  char *v1; // rbx
  char *v3; // rcx

  v1 = (char *)this + 512;
  v3 = (char *)*((_QWORD *)this + 64);
  if ( (__int64)(*((_QWORD *)v1 + 1) - (_QWORD)v3) >> 6 )
  {
    detail::vector_facade<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,detail::buffer_impl<std::function<long (CExternalEffectGraph::CGraphRenderingContext *)>,16,1,detail::liberal_expansion_policy>>::clear_region(v1);
    v3 = *(char **)v1;
  }
  *(_QWORD *)v1 = 0LL;
  if ( v3 == v1 + 24 )
    v3 = 0LL;
  DefaultHeap::Free(v3);
  CBlurredBackdropCache::~CBlurredBackdropCache((CExternalEffectGraph *)((char *)this + 216));
  CBrushRenderingGraph::~CBrushRenderingGraph(this);
}
