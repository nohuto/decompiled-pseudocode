/*
 * XREFs of ?Set@CDDisplayCachedScanout@@QEAAXIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@Core@Display@Devices@Windows@@PEAUIDisplayScanout@4567@@Z @ 0x18028E358
 * Callers:
 *     ?FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027ADB4 (-FindCachedDesktopScanout@CDDisplaySwapChain@@IEAAJ_NAEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPE.c)
 *     ?FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAPEAUIDisplayScanout@Core@Display@Devices@Windows@@@Z @ 0x18027AF28 (-FindCachedGeneralScanout@CDDisplaySwapChain@@IEAAJ_NIPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAP.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplayCachedScanout@@QEAU12@AEAV?$allocator@UPlane@CDDisplayCachedScanout@@@0@@Z @ 0x180279934 (--$_Destroy_range@V-$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@YAXPEAUPlane@CDDisplay.c)
 *     ??$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@?$vector@UPlane@CDDisplayCachedScanout@@V?$allocator@UPlane@CDDisplayCachedScanout@@@std@@@std@@QEAAPEAUPlane@CDDisplayCachedScanout@@QEAU23@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18028DECC (--$_Emplace_reallocate@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@AEAPEAUIDisplaySurface@Core@Display.c)
 *     ??0Plane@CDDisplayCachedScanout@@QEAA@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x18028E0B0 (--0Plane@CDDisplayCachedScanout@@QEAA@AEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@PEAUIDisplaySurface@.c)
 */

void __fastcall CDDisplayCachedScanout::Set(
        CDDisplayCachedScanout *this,
        unsigned int a2,
        const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *a3,
        struct Windows::Devices::Display::Core::IDisplaySurface *a4,
        struct Windows::Devices::Display::Core::IDisplayScanout *a5)
{
  __int64 v5; // rsi
  struct Windows::Devices::Display::Core::IDisplaySurface *v7; // rbp
  struct Windows::Devices::Display::Core::IDisplayScanout *v9; // rcx
  __int64 v10; // rdi
  struct Windows::Devices::Display::Core::IDisplaySurface *v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = a4;
  v5 = a2;
  v7 = a4;
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout::Plane>>(*(_QWORD *)this, *((_QWORD *)this + 1));
  *((_QWORD *)this + 1) = *(_QWORD *)this;
  if ( (_DWORD)v5 )
  {
    do
    {
      if ( *((_QWORD *)this + 1) == *((_QWORD *)this + 2) )
      {
        std::vector<CDDisplayCachedScanout::Plane>::_Emplace_reallocate<_DXGI_PRESENT_MULTIPLANE_OVERLAY const &,Windows::Devices::Display::Core::IDisplaySurface * &>(
          (__int64 *)this,
          *((_QWORD *)this + 1),
          a3,
          &v11);
        v7 = v11;
      }
      else
      {
        CDDisplayCachedScanout::Plane::Plane(*((CDDisplayCachedScanout::Plane **)this + 1), a3, v7);
        *((_QWORD *)this + 1) += 80LL;
      }
      a3 = (const struct _DXGI_PRESENT_MULTIPLANE_OVERLAY *)((char *)a3 + 136);
      --v5;
    }
    while ( v5 );
  }
  v9 = a5;
  v10 = *((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = a5;
  if ( v9 )
    (*(void (__fastcall **)(struct Windows::Devices::Display::Core::IDisplayScanout *))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
}
