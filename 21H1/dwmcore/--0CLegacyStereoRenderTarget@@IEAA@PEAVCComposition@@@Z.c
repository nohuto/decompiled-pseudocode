/*
 * XREFs of ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016F2DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18007F9A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800D7330 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLegacyStereoRenderTarget *__fastcall CLegacyStereoRenderTarget::CLegacyStereoRenderTarget(
        CLegacyStereoRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CLegacyStereoRenderTarget *result; // rax

  *((_QWORD *)this + 9) = &CLegacyStereoRenderTarget::`vbtable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 18) = &CDDisplayRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 2333) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 2336) = &CLocalAppRenderTarget::`vbtable'{for `IRenderTarget'};
  *((_QWORD *)this + 2335) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2336) + 4LL) + 18688) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CLegacyRenderTarget::CLegacyRenderTarget(this, a2, 0);
  *(_QWORD *)this = &CLegacyStereoRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 8) = &CLegacyStereoRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 17) = &CLegacyStereoRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CLegacyStereoRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CLegacyStereoRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CLegacyStereoRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 18568;
  v4 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 18584;
  v5 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  result = this;
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 18608;
  *((_QWORD *)this + 2327) = 0LL;
  *((_BYTE *)this + 18624) = 0;
  return result;
}
