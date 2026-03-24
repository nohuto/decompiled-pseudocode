/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x18002E7C4
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x180025DD4 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x18016CF50 (--_GCDDisplayRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18002E884 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002FC44 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800656F0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x18009478C (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009B114 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800E050C (--1CDirectFlipInfo@@QEAA@XZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext **this)
{
  COverlayContext *v2; // rcx
  COverlayContext *v3; // rcx
  COverlayContext *v4; // rcx

  COverlayContext::Reset((COverlayContext *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 1422);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 1413));
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 1397));
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 914);
  v2 = this[914];
  this[914] = 0LL;
  if ( v2 == (COverlayContext *)(this + 917) )
    v2 = 0LL;
  operator delete(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 463);
  v3 = this[463];
  this[463] = 0LL;
  if ( v3 == (COverlayContext *)(this + 466) )
    v3 = 0LL;
  operator delete(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 12);
  v4 = this[12];
  this[12] = 0LL;
  if ( v4 == (COverlayContext *)(this + 15) )
    v4 = 0LL;
  operator delete(v4);
}
