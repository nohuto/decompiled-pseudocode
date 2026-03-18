/*
 * XREFs of ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001C6B8
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800BE0A8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019CF04 (--0CLegacyStereoRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CMonitorTransform@@QEAA@XZ @ 0x18001C8D4 (--0CMonitorTransform@@QEAA@XZ.c)
 *     ??0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z @ 0x18001CA0C (--0COverlayContext@@QEAA@PEAVIOverlayMonitorTarget@@@Z.c)
 *     ??0IOverlayMonitorTarget@@QEAA@XZ @ 0x18001D384 (--0IOverlayMonitorTarget@@QEAA@XZ.c)
 *     ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001D4E0 (--0CRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 */

CLegacyRenderTarget *__fastcall CLegacyRenderTarget::CLegacyRenderTarget(
        CLegacyRenderTarget *this,
        struct CComposition *a2,
        int a3)
{
  __int64 v3; // r11
  _QWORD *v4; // r11
  struct IOverlayMonitorTarget *v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // r11
  __int64 v10; // r11
  CLegacyRenderTarget *result; // rax

  if ( a3 )
  {
    *((_QWORD *)this + 10) = &CLegacyRenderTarget::`vbtable'{for `IVisualTreeClient'};
    *((_QWORD *)this + 19) = &CLegacyRenderTarget::`vbtable'{for `IMonitorTarget'};
    *((_QWORD *)this + 2334) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 2337) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
    *((_QWORD *)this + 2336) = &IOverlayMonitorTarget::`vftable'{for `IRenderTarget'};
    *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2337) + 4LL) + 18696) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  }
  CRenderTarget::CRenderTarget(this, a2);
  IOverlayMonitorTarget::IOverlayMonitorTarget((IOverlayMonitorTarget *)(v3 + 144));
  v4[9] = &CLegacyRenderTarget::`vftable'{for `IVisualTreeClient'};
  *v4 = &CLegacyRenderTarget::`vftable'{for `CRenderTarget'};
  *(_QWORD *)v5 = &CLegacyRenderTarget::`vftable'{for `IOverlayMonitorTarget'};
  *(_QWORD *)((char *)v4 + *(int *)(v4[10] + 4LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)v4 + *(int *)(v4[10] + 8LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)v4 + *(int *)(v4[10] + 12LL) + 80) = &CLegacyRenderTarget::`vftable'{for `IRenderTarget'};
  v6 = *(int *)(v4[10] + 4LL);
  *(_DWORD *)((char *)v4 + v6 + 76) = v6 - 18568;
  v7 = *(int *)(v4[10] + 8LL);
  *(_DWORD *)((char *)v4 + v7 + 76) = v7 - 18584;
  v8 = *(int *)(v4[10] + 12LL);
  *(_DWORD *)((char *)v4 + v8 + 76) = v8 - 18608;
  v4[20] = 0LL;
  v4[21] = 0LL;
  v4[22] = 0LL;
  v4[23] = 0LL;
  COverlayContext::COverlayContext((COverlayContext *)(v4 + 24), v5);
  CMonitorTransform::CMonitorTransform((CMonitorTransform *)(v9 + 18160));
  *(_DWORD *)(v10 + 18416) = 0;
  *(_DWORD *)(v10 + 18420) = 3;
  *(_QWORD *)(v10 + 18436) = 0LL;
  *(_QWORD *)(v10 + 18444) = 0LL;
  *(_QWORD *)(v10 + 18424) = 0LL;
  *(_DWORD *)(v10 + 18432) = 0;
  *(_QWORD *)(v10 + 18452) = 0LL;
  *(_DWORD *)(v10 + 18460) = 0;
  *(_QWORD *)(v10 + 18464) = 0LL;
  *(_QWORD *)(v10 + 18472) = 0LL;
  *(_QWORD *)(v10 + 18480) = 0LL;
  *(_QWORD *)(v10 + 18488) = 0LL;
  *(_QWORD *)(v10 + 18496) = 0LL;
  *(_QWORD *)(v10 + 18504) = 0LL;
  *(_QWORD *)(v10 + 18512) = 0LL;
  *(_QWORD *)(v10 + 18520) = 0LL;
  *(_QWORD *)(v10 + 18528) = v10 + 18536;
  *(_DWORD *)(v10 + 18536) = 0;
  result = (CLegacyRenderTarget *)v10;
  *(_QWORD *)(v10 + 18600) = 0LL;
  *(_QWORD *)(v10 + 18608) = 0x10000LL;
  *(_BYTE *)(v10 + 18616) = 0;
  *(_QWORD *)(v10 + 18624) = 0LL;
  *(_QWORD *)(v10 + 18632) = 0LL;
  *(_DWORD *)(v10 + 136) = 1065353216;
  return result;
}
