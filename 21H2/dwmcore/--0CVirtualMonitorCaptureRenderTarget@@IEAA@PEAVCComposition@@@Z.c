/*
 * XREFs of ??0CVirtualMonitorCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019D514
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019C514 (--0CCaptureRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CVirtualMonitorCaptureRenderTarget *__fastcall CVirtualMonitorCaptureRenderTarget::CVirtualMonitorCaptureRenderTarget(
        CVirtualMonitorCaptureRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CVirtualMonitorCaptureRenderTarget *result; // rax

  *((_QWORD *)this + 10) = &CVirtualMonitorCaptureRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 271) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 274) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 273) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 274) + 4LL) + 2192) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CCaptureRenderTarget::CCaptureRenderTarget(this, a2, 0);
  *(_QWORD *)this = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `COffScreenRenderTarget'};
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 233) = &CCaptureRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CVirtualMonitorCaptureRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 2064;
  v4 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 2080;
  v5 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 2104;
  *((_QWORD *)this + 257) = 0LL;
  *((_QWORD *)this + 265) = 0LL;
  *((_BYTE *)this + 2128) = 1;
  return result;
}
