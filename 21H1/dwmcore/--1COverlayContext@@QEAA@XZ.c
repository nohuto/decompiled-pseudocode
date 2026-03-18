/*
 * XREFs of ??1COverlayContext@@QEAA@XZ @ 0x1800D47F4
 * Callers:
 *     ??1CLegacyRenderTarget@@MEAA@XZ @ 0x1800D71D8 (--1CLegacyRenderTarget@@MEAA@XZ.c)
 *     ??_GCDDisplayRenderTarget@@UEAAPEAXI@Z @ 0x1801713B0 (--_GCDDisplayRenderTarget@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003AF68 (--3@YAXPEAX@Z.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B98C (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180096BB0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800BBA38 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1CDirectFlipInfo@@QEAA@XZ @ 0x1800D48B4 (--1CDirectFlipInfo@@QEAA@XZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x1800D48E8 (-Reset@COverlayContext@@IEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(void **this)
{
  COverlayContext *v2; // rcx
  COverlayContext *v3; // rcx
  COverlayContext *v4; // rcx

  COverlayContext::Reset((COverlayContext *)this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)(this + 1422));
  FastRegion::CRegion::FreeMemory(this + 1413);
  CDirectFlipInfo::~CDirectFlipInfo((CDirectFlipInfo *)(this + 1397));
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 914);
  v2 = (COverlayContext *)this[914];
  this[914] = 0LL;
  if ( v2 == (COverlayContext *)(this + 917) )
    v2 = 0LL;
  operator delete(v2);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 463);
  v3 = (COverlayContext *)this[463];
  this[463] = 0LL;
  if ( v3 == (COverlayContext *)(this + 466) )
    v3 = 0LL;
  operator delete(v3);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(this + 12);
  v4 = (COverlayContext *)this[12];
  this[12] = 0LL;
  if ( v4 == (COverlayContext *)(this + 15) )
    v4 = 0LL;
  operator delete(v4);
}
