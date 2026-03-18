/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x1800249C8
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x180025DB0 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x18016E820 (--_GCDDisplayRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x180024A88 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180024ABC (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180032D04 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180044474 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
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
