/*
 * XREFs of ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800FD574
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001D4E0 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CRemoteRenderTarget *__fastcall CRemoteRenderTarget::CRemoteRenderTarget(
        CRemoteRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRemoteRenderTarget *result; // rax

  *((_QWORD *)this + 10) = &CRemoteRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CRemoteRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 53) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 56) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 55) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 56) + 4LL) + 448) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 144) = &IMonitorTarget::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 4LL) + v2 + 152) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 8LL) + v2 + 152) = &CProcessAttributionObserver::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 12LL) + v2 + 152) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)v2 = &CRemoteRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 72) = &CRemoteRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 144) = &CRemoteRenderTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 4LL) + v2 + 80) = &CRemoteRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 8LL) + v2 + 80) = &CRemoteRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 12LL) + v2 + 80) = &CRemoteRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 80) + 4LL);
  *(_DWORD *)(v3 + v2 + 76) = v3 - 320;
  v4 = *(int *)(*(_QWORD *)(v2 + 80) + 8LL);
  *(_DWORD *)(v4 + v2 + 76) = v4 - 336;
  v5 = *(int *)(*(_QWORD *)(v2 + 80) + 12LL);
  *(_DWORD *)(v5 + v2 + 76) = v5 - 360;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 184) = 0LL;
  *(_DWORD *)(v2 + 280) = 0;
  *(_QWORD *)(v2 + 200) = 0LL;
  *(_QWORD *)(v2 + 208) = 0LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_QWORD *)(v2 + 296) = 0LL;
  *(_DWORD *)(v2 + 304) = 0;
  *(_QWORD *)(v2 + 284) = 0LL;
  *(_DWORD *)(v2 + 292) = 0;
  *(_QWORD *)(v2 + 312) = v2 + 320;
  *(_DWORD *)(v2 + 320) = 0;
  *(_WORD *)(v2 + 384) = 0;
  *(_BYTE *)(v2 + 386) = 0;
  *(_DWORD *)(v2 + 136) = 1065353216;
  *(_DWORD *)(v2 + 112) = 87;
  result = (CRemoteRenderTarget *)v2;
  *(_QWORD *)(v2 + 116) = 3LL;
  return result;
}
