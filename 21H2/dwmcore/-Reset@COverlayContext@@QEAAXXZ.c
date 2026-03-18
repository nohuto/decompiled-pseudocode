/*
 * XREFs of ?Reset@COverlayContext@@QEAAXXZ @ 0x1800C68E4
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18008E77C (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N2@Z @ 0x1800BC2AC (-ApplyConfiguration@COverlayContext@@QEAAJAEBVCDirtyRegion@@PEAV-$vector@PEBVCVisual@@V-$allocat.c)
 *     ?ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ @ 0x1800C6870 (-ReleaseSwapChain@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ??1COverlayContext@@QEAA@XZ @ 0x1800C69B8 (--1COverlayContext@@QEAA@XZ.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801C9814 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ?DisableHardwareCursor@COverlayContext@@AEAAXXZ @ 0x1800B998C (-DisableHardwareCursor@COverlayContext@@AEAAXXZ.c)
 *     ?clear@?$vector_facade@VOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@VOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800B9BE8 (-clear@-$vector_facade@VOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@VOverlayPlaneInfo@COver.c)
 *     ?Reset@CDirectFlipInfo@@QEAAXXZ @ 0x1800BCA94 (-Reset@CDirectFlipInfo@@QEAAXXZ.c)
 *     ?ClearDirectFlip@COverlayContext@@AEAAXXZ @ 0x1800C6990 (-ClearDirectFlip@COverlayContext@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::Reset(COverlayContext *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rbx
  __int64 v4; // rbp

  v1 = (__int64 *)((char *)this + 7304);
  v3 = *((_QWORD *)this + 913);
  v4 = *((_QWORD *)this + 914);
  while ( v3 != v4 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v3 + 16) + 264LL))(
      *(_QWORD *)(v3 + 16),
      *(_QWORD *)(v3 + 24));
    v3 += 224LL;
  }
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 11);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear((__int64 *)this + 462);
  detail::vector_facade<COverlayContext::OverlayPlaneInfo,detail::buffer_impl<COverlayContext::OverlayPlaneInfo,16,1,detail::liberal_expansion_policy>>::clear(v1);
  COverlayContext::DisableHardwareCursor(this);
  *((_DWORD *)this + 2820) = 0;
  *((_WORD *)this + 5512) = 0;
  *((_BYTE *)this + 11296) = 0;
  *(_WORD *)((char *)this + 11305) = 0;
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 11040));
  COverlayContext::ClearDirectFlip(this);
  *(_WORD *)((char *)this + 11303) = 0;
  *((_BYTE *)this + 11302) = 0;
}
