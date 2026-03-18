/*
 * XREFs of ?Reset@COverlayContext@@IEAAXXZ @ 0x1800D48E8
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18003BAB0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18006CE10 (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800D47F4 (--1COverlayContext@@QEAA@XZ.c)
 *     ?OnSwapChainCreated@COverlayContext@@QEAAJXZ @ 0x1800D5948 (-OnSwapChainCreated@COverlayContext@@QEAAJXZ.c)
 * Callees:
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18006B98C (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x18006CF14 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800D4990 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x180180180 (-EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  _QWORD *v1; // rsi
  struct COverlayContext::OverlayPlaneInfo *v3; // rbx
  struct COverlayContext::OverlayPlaneInfo *v4; // rbp
  __int64 v5; // rdx

  v1 = (_QWORD *)((char *)this + 7312);
  v3 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 914);
  v4 = (struct COverlayContext::OverlayPlaneInfo *)*((_QWORD *)this + 915);
  while ( v3 != v4 )
  {
    COverlayContext::EnsureIndependentFlipState(this, v3, 0);
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(**((_QWORD **)v3 + 2) + 176LL))(*((_QWORD **)v3 + 2)) )
      (*(void (__fastcall **)(_QWORD *, _QWORD))(**((_QWORD **)v3 + 2) + 168LL))(*((_QWORD **)v3 + 2), 0LL);
    v3 = (struct COverlayContext::OverlayPlaneInfo *)((char *)v3 + 224);
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 12);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((_QWORD *)this + 463);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  *((_DWORD *)this + 2852) = 0;
  *((_WORD *)this + 5516) = 0;
  *((_WORD *)this + 5712) = 0;
  *((_BYTE *)this + 11416) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11176), v5);
  COverlayContext::ClearDirectFlip(this);
  *((_BYTE *)this + 11423) = 0;
  *((_BYTE *)this + 11421) = 0;
}
