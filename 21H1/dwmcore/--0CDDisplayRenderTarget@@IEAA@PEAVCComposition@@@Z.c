/*
 * XREFs of ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016EB3C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x1800D7614 (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0IOverlayMonitorTarget@@QEAA@XZ @ 0x1800D77B0 (--0IOverlayMonitorTarget@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800D7904 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CDDisplayRenderTarget *__fastcall CDDisplayRenderTarget::CDDisplayRenderTarget(
        CDDisplayRenderTarget *this,
        struct CComposition *a2)
{
  struct IOverlayMonitorTarget *v3; // r10
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CDDisplayRenderTarget *result; // rax

  *((_QWORD *)this + 9) = &CLegacyStereoRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CDDisplayRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 2333) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 2336) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 2335) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2336) + 4LL) + 18688) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  IOverlayMonitorTarget::IOverlayMonitorTarget((CDDisplayRenderTarget *)((char *)this + 136));
  *((_QWORD *)this + 8) = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)this = &CDDisplayRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)v3 = &CDDisplayRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CDDisplayRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget'};
  v4 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 18568;
  v5 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 18584;
  v6 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v6 + 68) = v6 - 18608;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  COverlayContext::COverlayContext((CDDisplayRenderTarget *)((char *)this + 176), v3);
  *((_QWORD *)this + 2283) = 0LL;
  *((_QWORD *)this + 2284) = 0LL;
  *((_QWORD *)this + 2285) = 0LL;
  *((_QWORD *)this + 2286) = 0LL;
  *((_DWORD *)this + 4594) = 0;
  *((_DWORD *)this + 4611) = 0;
  *((_DWORD *)this + 4628) = 0;
  *((_DWORD *)this + 4574) = 1;
  *((_DWORD *)this + 4629) = DisplayId::None;
  *((_DWORD *)this + 4646) = 0;
  *((_QWORD *)this + 2325) = 0LL;
  *((_QWORD *)this + 2326) = 0LL;
  *(_QWORD *)((char *)this + 18588) = 0LL;
  *((_DWORD *)this + 4654) = 3;
  *(_QWORD *)((char *)this + 92) = 3LL;
  result = this;
  *((_DWORD *)this + 4649) = 0;
  *((_DWORD *)this + 4655) = 0x10000;
  *((_BYTE *)this + 18624) = 0;
  *((_DWORD *)this + 22) = 87;
  return result;
}
