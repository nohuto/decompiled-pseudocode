/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x180024ABC
 * Callers:
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800249C8 (--1COverlayContext@@QEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x180025BAC (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180059110 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18007DF2C (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 * Callees:
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x180024B64 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180032D04 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18007E030 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18017D580 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
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
  *((_WORD *)this + 5712) = 0;
  *((_BYTE *)this + 11416) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11176));
  COverlayContext::ClearDirectFlip(this);
  *((_BYTE *)this + 11423) = 0;
  *((_BYTE *)this + 11421) = 0;
}
