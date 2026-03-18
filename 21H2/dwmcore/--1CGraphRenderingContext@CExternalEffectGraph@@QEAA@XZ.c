/*
 * XREFs of ??1CGraphRenderingContext@CExternalEffectGraph@@QEAA@XZ @ 0x180058880
 * Callers:
 *     ?Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z @ 0x180058738 (-Render@CExternalEffectGraph@@QEAAJPEAVCDrawingContext@@AEBUEffectInput@@PEAU3@@Z.c)
 * Callees:
 *     ?clear_region@?$vector_facade@UEffectInput@@V?$buffer_impl@UEffectInput@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800588EC (-clear_region@-$vector_facade@UEffectInput@@V-$buffer_impl@UEffectInput@@$03$00Vliberal_expansio.c)
 *     ?PopLayer@CDrawingContext@@QEAAJXZ @ 0x1800D5448 (-PopLayer@CDrawingContext@@QEAAJXZ.c)
 */

void __fastcall CExternalEffectGraph::CGraphRenderingContext::~CGraphRenderingContext(CDrawingContext **this)
{
  CExternalEffectGraph::CGraphRenderingContext *v2; // rcx

  if ( *((_DWORD *)this + 9) != -1 )
    CDrawingContext::PopLayer(*this);
  v2 = this[6];
  if ( 0x4EC4EC4EC4EC4EC5LL * ((this[7] - v2) >> 3) )
  {
    detail::vector_facade<EffectInput,detail::buffer_impl<EffectInput,4,1,detail::liberal_expansion_policy>>::clear_region(this + 6);
    v2 = this[6];
  }
  this[6] = 0LL;
  if ( v2 == (CExternalEffectGraph::CGraphRenderingContext *)(this + 9) )
    v2 = 0LL;
  DefaultHeap::Free(v2);
}
