/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800330FC
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180032B20 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800DF9A0 (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1800E9998 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18016A200 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x180184B3C (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180185480 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CLocalAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x180189CBC (--0CLocalAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x180254B34 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRenderTarget *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  *((_QWORD *)this + 8) = &IVisualTreeClient::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CRenderTarget::`vftable';
  *((_QWORD *)this + 8) = &CCaptureRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 72;
  v4 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 88;
  v5 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 112;
  *((_QWORD *)this + 10) = 0LL;
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 64) = 256;
  *((_DWORD *)this + 22) = 28;
  *(_QWORD *)((char *)this + 92) = 3LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 1065353216;
  return result;
}
