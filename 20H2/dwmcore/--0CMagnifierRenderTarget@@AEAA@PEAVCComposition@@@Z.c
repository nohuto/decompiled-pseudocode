/*
 * XREFs of ??0CMagnifierRenderTarget@@AEAA@PEAVCComposition@@@Z @ 0x18018A73C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800ACC98 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180184B3C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CMagnifierRenderTarget *__fastcall CMagnifierRenderTarget::CMagnifierRenderTarget(
        CMagnifierRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CMagnifierRenderTarget *result; // rax
  const char *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v8 = 28;
  *((_QWORD *)this + 9) = &CMagnifierRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 271) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 274) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 273) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 274) + 4LL) + 2192) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  v7 = "DWM Rendertarget (magnifier)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v7);
  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable';
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CMagnifierRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CMagnifierRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CMagnifierRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 2072;
  v4 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 2088;
  v5 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 2112;
  *((_QWORD *)this + 266) = 0LL;
  *((_QWORD *)this + 261) = 0LL;
  *((_QWORD *)this + 262) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 263) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 264) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 265) = 0x3FF0000000000000LL;
  result = this;
  *((_BYTE *)this + 128) = 1;
  return result;
}
