/*
 * XREFs of ??1CHolographicInteropTarget@@MEAA@XZ @ 0x180255AEC
 * Callers:
 *     ??_GCHolographicInteropTarget@@MEAAPEAXI@Z @ 0x180255BF0 (--_GCHolographicInteropTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ @ 0x1801BAAA8 (-InternalRelease@-$ComPtr@VCD3DDevice@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseInteropTextures@CHolographicManager@@QEAAXXZ @ 0x180252310 (-ReleaseInteropTextures@CHolographicManager@@QEAAXXZ.c)
 */

void __fastcall CHolographicInteropTarget::~CHolographicInteropTarget(CHolographicInteropTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  void *v6; // rcx

  *(_QWORD *)this = &CHolographicInteropTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 17) = &CHolographicInteropTarget::`vftable'{for `IMonitorTarget'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CRadialGradientBrush::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CHolographicInteropTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CHolographicInteropTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 152;
  v3 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 168;
  v4 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 192;
  CHolographicManager::ReleaseInteropTextures(*((CHolographicManager **)this + 19));
  v5 = (void *)*((_QWORD *)this + 25);
  if ( v5 )
    CloseHandle(v5);
  v6 = (void *)*((_QWORD *)this + 26);
  if ( v6 )
    CloseHandle(v6);
  Microsoft::WRL::ComPtr<CD3DDevice>::InternalRelease((CD3DDevice **)this + 21);
  CRenderTarget::~CRenderTarget(this);
}
