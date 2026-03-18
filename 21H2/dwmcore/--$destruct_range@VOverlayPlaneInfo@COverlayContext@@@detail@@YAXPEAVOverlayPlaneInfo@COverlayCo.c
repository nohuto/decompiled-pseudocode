/*
 * XREFs of ??$destruct_range@VOverlayPlaneInfo@COverlayContext@@@detail@@YAXPEAVOverlayPlaneInfo@COverlayContext@@0@Z @ 0x18001D1D8
 * Callers:
 *     ?reserve_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x180008224 (-reserve_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneI.c)
 *     ?clear_region@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18001D154 (-clear_region@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInf.c)
 * Callees:
 *     ??_GOverlayPlaneInfo@COverlayContext@@QEAAPEAXI@Z @ 0x18000E77C (--_GOverlayPlaneInfo@COverlayContext@@QEAAPEAXI@Z.c)
 */

COverlayContext::OverlayPlaneInfo *__fastcall detail::destruct_range<COverlayContext::OverlayPlaneInfo>(
        COverlayContext::OverlayPlaneInfo *this,
        COverlayContext::OverlayPlaneInfo *a2)
{
  COverlayContext::OverlayPlaneInfo *v3; // rbx
  COverlayContext::OverlayPlaneInfo *result; // rax

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      result = COverlayContext::OverlayPlaneInfo::`scalar deleting destructor'(v3);
      v3 = (COverlayContext::OverlayPlaneInfo *)((char *)v3 + 224);
    }
    while ( v3 != a2 );
  }
  return result;
}
