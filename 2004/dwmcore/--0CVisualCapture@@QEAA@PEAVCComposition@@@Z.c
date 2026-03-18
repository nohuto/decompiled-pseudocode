/*
 * XREFs of ??0CVisualCapture@@QEAA@PEAVCComposition@@@Z @ 0x1801F2AB0
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800A51E8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801867BC (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 */

CVisualCapture *__fastcall CVisualCapture::CVisualCapture(CVisualCapture *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CVisualCapture *result; // rax
  const char *v7; // [rsp+20h] [rbp-18h] BYREF
  int v8; // [rsp+28h] [rbp-10h]

  v8 = 32;
  *((_QWORD *)this + 9) = &CVisualCapture::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 246) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 249) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 248) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 249) + 4LL) + 1992) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  v7 = "DWM Rendertarget (VisualCapture)";
  COffScreenRenderTarget::COffScreenRenderTarget(this, a2, (const struct CResourceTag *)&v7);
  *(_QWORD *)this = &CVisualCapture::`vftable';
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CVisualCapture::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CVisualCapture::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 1872;
  v4 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 1888;
  v5 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 1912;
  *((_DWORD *)this + 31) = 0;
  *((_BYTE *)this + 128) = 1;
  return result;
}
