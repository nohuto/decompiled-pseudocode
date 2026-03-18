/*
 * XREFs of ?Ready@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC030
 * Callers:
 *     ?Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1800BB56C (-Render@CLegacyRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 *     ?Present@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1800BCFA4 (-Present@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?Present@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x1801C890C (-Present@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z @ 0x1801C8C7C (-Render@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@_NPEA_N@Z.c)
 * Callees:
 *     ?Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z @ 0x1800BC0BC (-Update@CTargetStats@@QEAA_N_KPEAVIOverlaySwapChain@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CTargetStats::Ready(CTargetStats *this, unsigned __int64 a2, struct IOverlaySwapChain *a3)
{
  int v6; // ecx
  char v7; // di

  CTargetStats::Update(this, a2, a3);
  v6 = *((_DWORD *)this + 1);
  v7 = 0;
  if ( !v6 )
    return 1;
  if ( v6 != 1 )
    return 0;
  if ( *((_QWORD *)this + 2) > *((_QWORD *)this + 6)
    || a2 - *((_QWORD *)this + 6) > (*(__int64 (__fastcall **)(struct IOverlaySwapChain *))(*(_QWORD *)a3 + 72LL))(a3) )
  {
    return 1;
  }
  return v7;
}
