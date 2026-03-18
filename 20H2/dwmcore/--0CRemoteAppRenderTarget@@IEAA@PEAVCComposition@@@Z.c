/*
 * XREFs of ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180185480
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800330FC (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::CRemoteAppRenderTarget(
        CRemoteAppRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRemoteAppRenderTarget *result; // rax

  *((_QWORD *)this + 9) = &CRemoteAppRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 19) = &CRemoteAppRenderTarget::`vbtable';
  *((_QWORD *)this + 40) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 43) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 42) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 43) + 4LL) + 344) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 144) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 152) + 4LL) + v2 + 152) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CRemoteAppRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 64) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 136) = &CRemoteAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v2 + 144) = &CRemoteAppRenderTarget::`vftable'{for `IVailRenderTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 4LL) + v2 + 72) = &CRemoteAppRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 8LL) + v2 + 72) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 72) + 12LL) + v2 + 72) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 72) + 4LL);
  *(_DWORD *)(v3 + v2 + 68) = v3 - 224;
  v4 = *(int *)(*(_QWORD *)(v2 + 72) + 8LL);
  *(_DWORD *)(v4 + v2 + 68) = v4 - 240;
  v5 = *(int *)(*(_QWORD *)(v2 + 72) + 12LL);
  result = (CRemoteAppRenderTarget *)v2;
  *(_DWORD *)(v5 + v2 + 68) = v5 - 264;
  *(_QWORD *)(v2 + 160) = 0LL;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_QWORD *)(v2 + 244) = 1065353216LL;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_QWORD *)(v2 + 272) = 0LL;
  *(_BYTE *)(v2 + 280) = 0;
  *(_DWORD *)(v2 + 92) = 3;
  *(_BYTE *)(v2 + 128) = 1;
  *(_QWORD *)(v2 + 184) = 1065353216LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 200) = 0;
  *(_QWORD *)(v2 + 204) = 1065353216LL;
  *(_QWORD *)(v2 + 212) = 0LL;
  *(_DWORD *)(v2 + 220) = 0;
  *(_QWORD *)(v2 + 224) = 1065353216LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_DWORD *)(v2 + 240) = 0;
  *(_WORD *)(v2 + 248) = 32085;
  return result;
}
