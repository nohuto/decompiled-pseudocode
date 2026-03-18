/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801C10D8
 * Callers:
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801C11D0 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x1801C3EE0 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x1801C6480 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x1801C764C (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1802435A8 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180049B6C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800644D8 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x1801C1710 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &COffScreenRenderTarget::`vftable';
  *((_QWORD *)this + 9) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 4LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 8LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 80) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 10) + 4LL);
  *(_DWORD *)((char *)this + v2 + 76) = v2 - 1792;
  v3 = *(int *)(*((_QWORD *)this + 10) + 8LL);
  *(_DWORD *)((char *)this + v3 + 76) = v3 - 1808;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 10) + 12LL) + 76) = *(_DWORD *)(*((_QWORD *)this + 10) + 12LL)
                                                                           - 1832;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 19));
  *((_QWORD *)this + 19) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 18));
  *((_QWORD *)this + 18) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 220);
  COcclusionContext::~COcclusionContext((void **)this + 25);
  CRenderTarget::~CRenderTarget(this);
}
