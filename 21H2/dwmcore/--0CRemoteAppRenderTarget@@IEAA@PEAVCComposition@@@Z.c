/*
 * XREFs of ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C1DD8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001D4E0 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CRemoteAppRenderTarget *__fastcall CRemoteAppRenderTarget::CRemoteAppRenderTarget(
        CRemoteAppRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // al

  *((_QWORD *)this + 10) = &CRemoteAppRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 20) = &CRemoteAppRenderTarget::`vbtable';
  *((_QWORD *)this + 41) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 44) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 43) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 44) + 4LL) + 352) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  *(_QWORD *)(v2 + 152) = &IBitmapUnlock::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 160) + 4LL) + v2 + 160) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)v2 = &CRemoteAppRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)(v2 + 72) = &CRemoteAppRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)(v2 + 144) = &CRemoteAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(v2 + 152) = &CRemoteAppRenderTarget::`vftable'{for `IVailRenderTarget'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 4LL) + v2 + 80) = &CSynchronousSuperWetInk::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 8LL) + v2 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v2 + 80) + 12LL) + v2 + 80) = &CRemoteAppRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*(_QWORD *)(v2 + 80) + 4LL);
  *(_DWORD *)(v3 + v2 + 76) = v3 - 224;
  v4 = *(int *)(*(_QWORD *)(v2 + 80) + 8LL);
  *(_DWORD *)(v4 + v2 + 76) = v4 - 240;
  v5 = *(int *)(*(_QWORD *)(v2 + 80) + 12LL);
  *(_DWORD *)(v5 + v2 + 76) = v5 - 264;
  *(_QWORD *)(v2 + 168) = 0LL;
  *(_DWORD *)(v2 + 248) = 0;
  *(_QWORD *)(v2 + 264) = 0LL;
  *(_QWORD *)(v2 + 272) = 0LL;
  *(_QWORD *)(v2 + 176) = 0LL;
  *(_DWORD *)(v2 + 252) = 96;
  *(_QWORD *)(v2 + 256) = 0LL;
  *(_QWORD *)(v2 + 280) = 0LL;
  *(_DWORD *)(v2 + 288) = 1;
  *(_WORD *)(v2 + 292) = 0;
  *(_BYTE *)(v2 + 294) = 0;
  *(_DWORD *)(v2 + 116) = 3;
  *(_BYTE *)(v2 + 140) = 1;
  *(_QWORD *)(v2 + 184) = 1065353216LL;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 200) = 0;
  *(_QWORD *)(v2 + 204) = 1065353216LL;
  *(_QWORD *)(v2 + 212) = 0LL;
  *(_DWORD *)(v2 + 220) = 0;
  *(_QWORD *)(v2 + 224) = 1065353216LL;
  *(_QWORD *)(v2 + 232) = 0LL;
  *(_DWORD *)(v2 + 240) = 0;
  *(_DWORD *)(v2 + 244) = 1065353216;
  v6 = *(_BYTE *)(v2 + 249) & 0xD7;
  *(_BYTE *)(v2 + 248) = 85;
  *(_BYTE *)(v2 + 249) = v6 | 0x17;
  return (CRemoteAppRenderTarget *)v2;
}
