/*
 * XREFs of ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x180265634
 * Callers:
 *     ??_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z @ 0x1802657F0 (--_GCDxHandleYUVBitmapRealization@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18005FB60 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x18006143C (--1CDeviceResource@@MEAA@XZ.c)
 *     ?Release@CMILPoolResource@@UEAAKXZ @ 0x1800D52D0 (-Release@CMILPoolResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ @ 0x18026659C (-ReleaseTexture@CDxHandleYUVBitmapRealization@@IEAAXXZ.c)
 */

void __fastcall CDxHandleYUVBitmapRealization::~CDxHandleYUVBitmapRealization(CDxHandleYUVBitmapRealization *this)
{
  CDeviceResource *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  void *v10; // rcx
  __int64 v11; // rcx
  CMILPoolResource *v12; // rcx
  CRenderTargetBitmap *v13; // rcx

  v2 = (CDxHandleYUVBitmapRealization *)((char *)this + 288);
  *(_QWORD *)this = &CDxHandleYUVBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CDxHandleYUVBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 41) = &CDxHandleYUVBitmapRealization::`vftable'{for `IYUVSwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 24LL) + 16) = &CDxHandleYUVBitmapRealization::`vftable'{for `ISwapChainRealization'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 360;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 376;
  v5 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 392;
  v6 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 416;
  v7 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 440;
  v8 = *(int *)(*((_QWORD *)this + 2) + 24LL);
  *(_DWORD *)((char *)this + v8 + 12) = v8 - 464;
  v9 = *((_DWORD *)this + 62);
  if ( v9 != DisplayId::None && v9 != DisplayId::All )
    --*((_DWORD *)g_pComposition + 70);
  v10 = (void *)*((_QWORD *)this + 28);
  if ( v10 )
    CloseHandle(v10);
  CDxHandleYUVBitmapRealization::ReleaseTexture(this);
  v11 = *((_QWORD *)this + 44);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = (CMILPoolResource *)*((_QWORD *)this + 43);
  if ( v12 )
    CMILPoolResource::Release(v12);
  CDeviceResource::~CDeviceResource(v2);
  v13 = (CRenderTargetBitmap *)*((_QWORD *)this + 32);
  if ( v13 )
    CRenderTargetBitmap::Release(v13);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
