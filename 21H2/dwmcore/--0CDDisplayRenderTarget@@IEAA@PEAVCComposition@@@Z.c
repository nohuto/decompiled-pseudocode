/*
 * XREFs of ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019C760
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x18001C8D4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x18001CA0C (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0IOverlayMonitorTarget@@QEAA@XZ @ 0x18001D384 (--0IOverlayMonitorTarget@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001D4E0 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CDDisplayRenderTarget *__fastcall CDDisplayRenderTarget::CDDisplayRenderTarget(
        CDDisplayRenderTarget *this,
        struct CComposition *a2)
{
  __int64 v2; // r11
  _QWORD *v3; // r11
  struct IOverlayMonitorTarget *v4; // r10
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r11
  __int64 v9; // r11
  CDDisplayRenderTarget *result; // rax

  *((_QWORD *)this + 10) = &CLegacyStereoRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 19) = &CDDisplayRenderTarget::`vbtable'{for `IMonitorTarget'};
  *((_QWORD *)this + 2327) = &CInk::`vbtable'{for `IContent'};
  *((_QWORD *)this + 2330) = &CDDisplaySwapChain::`vbtable'{for `IDeviceResource'};
  *((_QWORD *)this + 2329) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2330) + 4LL) + 18640) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  CRenderTarget::CRenderTarget(this, a2);
  IOverlayMonitorTarget::IOverlayMonitorTarget((IOverlayMonitorTarget *)(v2 + 144));
  v3[9] = &CDDisplayRenderTarget::`vftable'{for `IVisualTreeClient'};
  *v3 = &CDDisplayRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)v4 = &CDDisplayRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[10] + 4LL) + 80) = &CDDisplayRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[10] + 8LL) + 80) = &CDDisplayRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v3 + *(int *)(v3[10] + 12LL) + 80) = &CDDisplayRenderTarget::`vftable'{for `IRenderTarget'};
  v5 = *(int *)(v3[10] + 4LL);
  *(_DWORD *)((char *)v3 + v5 + 76) = v5 - 18512;
  v6 = *(int *)(v3[10] + 8LL);
  *(_DWORD *)((char *)v3 + v6 + 76) = v6 - 18528;
  v7 = *(int *)(v3[10] + 12LL);
  *(_DWORD *)((char *)v3 + v7 + 76) = v7 - 18552;
  v3[20] = 0LL;
  v3[21] = 0LL;
  v3[22] = 0LL;
  COverlayContext::COverlayContext((COverlayContext *)(v3 + 23), v4);
  CMonitorTransform::CMonitorTransform((CMonitorTransform *)(v8 + 18152));
  *(_QWORD *)(v9 + 18420) = 0LL;
  *(_QWORD *)(v9 + 18428) = 0LL;
  *(_QWORD *)(v9 + 18408) = 0LL;
  *(_DWORD *)(v9 + 18416) = 0;
  *(_QWORD *)(v9 + 18444) = 0LL;
  *(_DWORD *)(v9 + 18452) = 0;
  *(_QWORD *)(v9 + 18456) = 0LL;
  *(_QWORD *)(v9 + 18464) = 0LL;
  *(_QWORD *)(v9 + 18472) = 0LL;
  *(_QWORD *)(v9 + 18480) = 0LL;
  *(_QWORD *)(v9 + 18488) = 0LL;
  *(_QWORD *)(v9 + 18496) = 0LL;
  *(_QWORD *)(v9 + 18436) = 3LL;
  *(_QWORD *)(v9 + 18504) = v9 + 18512;
  *(_DWORD *)(v9 + 18512) = 0;
  result = (CDDisplayRenderTarget *)v9;
  *(_WORD *)(v9 + 18576) = 0;
  *(_BYTE *)(v9 + 18578) = 0;
  *(_DWORD *)(v9 + 112) = 87;
  *(_QWORD *)(v9 + 116) = 3LL;
  return result;
}
