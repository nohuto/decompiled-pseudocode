/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x18002E884
 * Callers:
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800252B8 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x18002E7C4 (--1COverlayContext@@QEAA@XZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18006CE20 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x1800931CC (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18002FC44 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800932D0 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800E0638 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18017BE00 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  char *v1; // rsi
  struct COverlayContext::OverlayPlaneInfo *v3; // rbx
  struct COverlayContext::OverlayPlaneInfo *v4; // rbp

  v1 = (char *)this + 7312;
  v3 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 914);
  v4 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 915);
  while ( v3 != v4 )
  {
    COverlayContext::EnsureIndependentFlipState(this, v3, 0);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v3 + 2) + 176LL))(*((_QWORD **)v3 + 2)) )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v3 + 2) + 168LL))(*((_QWORD **)v3 + 2), 0LL);
    v3 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v3 + 224);
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 96);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((char *)this + 3704);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  *((_DWORD *)this + 2852) = 0;
  *((_WORD *)this + 5516) = 0;
  *(_WORD *)((char *)this + 11425) = 0;
  *((_BYTE *)this + 11416) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11176));
  COverlayContext::ClearDirectFlip(this);
  *((_BYTE *)this + 11424) = 0;
  *((_BYTE *)this + 11422) = 0;
}
