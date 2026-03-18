/*
 * XREFs of ??1CVisualCapture@@UEAA@XZ @ 0x1801F0D88
 * Callers:
 *     ??_GCVisualCapture@@UEAAPEAXI@Z @ 0x1801F0E50 (--_GCVisualCapture@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CVisualCapture@@UEAAXXZ @ 0x1801B3F40 (-UnRegisterNotifiers@CVisualCapture@@UEAAXXZ.c)
 */

void __fastcall CVisualCapture::~CVisualCapture(CVisualCapture *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CVisualCapture::`vftable';
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CVisualCapture::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CVisualCapture::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CVisualCapture::`vftable'{for `IRenderTarget'};
  v2 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v2 + 68) = v2 - 1872;
  v3 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v3 + 68) = v3 - 1888;
  v4 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 1912;
  CVisualCapture::UnRegisterNotifiers((struct CResource **)this);
  v5 = (void *)*((_QWORD *)this + 240);
  if ( v5 )
    CloseHandle(v5);
  COffScreenRenderTarget::~COffScreenRenderTarget(this);
}
