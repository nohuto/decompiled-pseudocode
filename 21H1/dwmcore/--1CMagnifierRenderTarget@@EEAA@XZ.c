/*
 * XREFs of ??1CMagnifierRenderTarget@@EEAA@XZ @ 0x18018F1F8
 * Callers:
 *     ??_GCMagnifierRenderTarget@@EEAAPEAXI@Z @ 0x18018F310 (--_GCMagnifierRenderTarget@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x1800323F0 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CMagnifierRenderTarget::~CMagnifierRenderTarget(CMagnifierRenderTarget *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  CRenderTargetBitmap *v4; // rax
  CRenderTargetBitmap *v5; // rcx

  *(_QWORD *)this = &CMagnifierRenderTarget::`vftable';
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CMagnifierRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CMagnifierRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CMagnifierRenderTarget::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 2072;
  v3 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 2088;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 68) = *(_DWORD *)(*((_QWORD *)this + 9) + 12LL)
                                                                          - 2112;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 266));
  v4 = (CRenderTargetBitmap *)*((_QWORD *)this + 266);
  v5 = 0LL;
  *((_QWORD *)this + 266) = 0LL;
  if ( v4 )
  {
    CRenderTargetBitmap::Release(v4);
    v5 = (CRenderTargetBitmap *)*((_QWORD *)this + 266);
  }
  if ( v5 )
    CRenderTargetBitmap::Release(v5);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
