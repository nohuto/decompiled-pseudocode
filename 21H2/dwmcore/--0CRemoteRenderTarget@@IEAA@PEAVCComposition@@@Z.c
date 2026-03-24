/*
 * XREFs of ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800E3DF0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A2008 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180026508 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::CRemoteRenderTarget(
        CRemoteRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx

  *((_QWORD *)this + 9) = &CRemoteRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CRemoteRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 43) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 46) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 45) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 46) + 4LL) + 368) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 136) = &IMonitorTarget::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 144) + 4LL) + v2 + 144) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 144) + 8LL) + v2 + 144) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 144) + 12LL) + v2 + 144) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)v2 = &CRemoteRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 64) = &CRemoteRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 136) = &CRemoteRenderTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 4LL) + v2 + 72) = &CRemoteRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 8LL) + v2 + 72) = &CRemoteRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 12LL) + v2 + 72) = &CRemoteRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 72) + 4LL);
  *(_DWORD *)(v3 + v2 + 68) = v3 - 248;
  v4 = *(int *)(*(_QWORD *)(v2 + 72) + 8LL);
  *(_DWORD *)(v4 + v2 + 68) = v4 - 264;
  v5 = *(int *)(*(_QWORD *)(v2 + 72) + 12LL);
  *(_DWORD *)(v5 + v2 + 68) = v5 - 288;
  *(_QWORD *)(v2 + 152) = 0LL;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 220) = 0LL;
  *(_DWORD *)(v2 + 228) = 0;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_DWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 296) = 0;
  *(_DWORD *)(v2 + 300) = 1;
  *(_DWORD *)(v2 + 304) = 30;
  *(_WORD *)(v2 + 308) = 0;
  *(_DWORD *)(v2 + 124) = 1065353216;
  *(_DWORD *)(v2 + 88) = 87;
  *(_QWORD *)(v2 + 92) = 3LL;
  return (CRemoteRenderTarget *)v2;
}
