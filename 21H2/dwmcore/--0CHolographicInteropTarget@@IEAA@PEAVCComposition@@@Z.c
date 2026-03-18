/*
 * XREFs of ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802997C4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z @ 0x180299AC8 (-Create@CHolographicInteropTarget@@SAJPEAVCComposition@@PEAU_LUID@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001D4E0 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CHolographicInteropTarget *__fastcall CHolographicInteropTarget::CHolographicInteropTarget(
        CHolographicInteropTarget *this,
        struct CComposition *a2)
{
  _QWORD *v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 10) = &CHolographicInteropTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CHolographicInteropTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 34) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 37) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 36) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 37) + 4LL) + 296) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  v2[18] = &IMonitorTarget::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v2[19] + 4LL) + 152) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(v2[19] + 8LL) + 152) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)((char *)v2 + *(int *)(v2[19] + 12LL) + 152) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *v2 = &CHolographicInteropTarget::`vftable'{for `CRenderTarget'};
  v2[9] = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  v2[18] = &CHolographicInteropTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)((char *)v2 + *(int *)(v2[10] + 4LL) + 80) = &CHolographicInteropTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v2 + *(int *)(v2[10] + 8LL) + 80) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v2 + *(int *)(v2[10] + 12LL) + 80) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(v2[10] + 4LL);
  *(_DWORD *)((char *)v2 + v3 + 76) = v3 - 168;
  v4 = *(int *)(v2[10] + 8LL);
  *(_DWORD *)((char *)v2 + v4 + 76) = v4 - 184;
  v5 = *(int *)(v2[10] + 12LL);
  *(_DWORD *)((char *)v2 + v5 + 76) = v5 - 208;
  v2[22] = 0LL;
  v2[24] = 0LL;
  *(_QWORD *)((char *)v2 + 204) = 0LL;
  *(_QWORD *)((char *)v2 + 212) = 0LL;
  return (CHolographicInteropTarget *)v2;
}
