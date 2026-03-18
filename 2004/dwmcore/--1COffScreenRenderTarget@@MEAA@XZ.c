/*
 * XREFs of ??1COffScreenRenderTarget@@MEAA@XZ @ 0x1801868E8
 * Callers:
 *     ??_ECOffScreenRenderTarget@@MEAAPEAXI@Z @ 0x1801869E0 (--_ECOffScreenRenderTarget@@MEAAPEAXI@Z.c)
 *     ??1CCaptureRenderTarget@@MEAA@XZ @ 0x180188874 (--1CCaptureRenderTarget@@MEAA@XZ.c)
 *     ??1CIndirectSwapchainRenderTarget@@EEAA@XZ @ 0x18018AA08 (--1CIndirectSwapchainRenderTarget@@EEAA@XZ.c)
 *     ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18018C508 (--1CMagnifierRenderTarget@@EEAA@XZ.c)
 *     ??1CVisualCapture@@UEAA@XZ @ 0x1801F2BC8 (--1CVisualCapture@@UEAA@XZ.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009955C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18009B990 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ @ 0x180186F70 (-ReleaseRenderTargets@COffScreenRenderTarget@@MEAAXXZ.c)
 */

void __fastcall COffScreenRenderTarget::~COffScreenRenderTarget(COffScreenRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = &COffScreenRenderTarget::`vftable';
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &COffScreenRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &COffScreenRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &COffScreenRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 1816;
  v3 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 1832;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 68) = *(_DWORD *)(*((_QWORD *)this + 9) + 12LL)
                                                                          - 1856;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 18));
  *((_QWORD *)this + 18) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  COffScreenRenderTarget::ReleaseRenderTargets(this);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 1776);
  COcclusionContext::~COcclusionContext((void **)this + 23);
  CRenderTarget::~CRenderTarget(this);
}
