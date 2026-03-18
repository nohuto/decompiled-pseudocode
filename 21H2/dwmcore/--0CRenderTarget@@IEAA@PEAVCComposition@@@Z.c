/*
 * XREFs of ??0CRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001D4E0
 * Callers:
 *     ??0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18001C6B8 (--0CLegacyRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1800FD574 (--0CRemoteRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x18019C760 (--0CDDisplayRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z @ 0x1801C0F98 (--0COffScreenRenderTarget@@IEAA@PEAVCComposition@@AEBVCResourceTag@@@Z.c)
 *     ??0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z @ 0x1801C1DD8 (--0CRemoteAppRenderTarget@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z @ 0x1801E0CD8 (--0CDDARenderTarget@@IEAA@PEAUIDXGIOutputDWM@@AEBVRenderTargetInfo@@@Z.c)
 *     ??0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z @ 0x1802997C4 (--0CHolographicInteropTarget@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     <none>
 */

CRenderTarget *__fastcall CRenderTarget::CRenderTarget(CRenderTarget *this, struct CComposition *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  CRenderTarget *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CNotificationResource::`vftable';
  *((_QWORD *)this + 9) = &IVisualTreeClient::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &ILegacySwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)this = &CRenderTarget::`vftable';
  *((_QWORD *)this + 9) = &CRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &CRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &CRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &CRenderTarget::`vftable'{for `IRenderTarget'};
  v3 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 72;
  v4 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v4 + 76) = v4 - 88;
  v5 = *(int *)(*((_QWORD *)this + 10) + 12LL);
  *(_DWORD *)((char *)this + v5 + 76) = v5 - 112;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  result = this;
  *((_WORD *)this + 70) = 256;
  *((_DWORD *)this + 28) = 28;
  *(_QWORD *)((char *)this + 116) = 3LL;
  *(_QWORD *)((char *)this + 124) = 0LL;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 1065353216;
  return result;
}
