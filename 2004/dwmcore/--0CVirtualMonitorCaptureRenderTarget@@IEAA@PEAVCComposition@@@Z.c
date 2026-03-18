/*
 * XREFs of ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016CF58
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016BAD0 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CVirtualMonitorCaptureRenderTarget *result; // rax

  *((_QWORD *)this + 9) = &CVirtualMonitorCaptureRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 274) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 277) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 276) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 277) + 4LL) + 2216) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CCaptureRenderTarget::CCaptureRenderTarget(this, a2, 0);
  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 235) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 2096;
  v4 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 2112;
  v5 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 2136;
  *((_QWORD *)this + 268) = 0LL;
  *((_BYTE *)this + 2152) = 1;
  return result;
}
