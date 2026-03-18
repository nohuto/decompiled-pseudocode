/*
 * XREFs of ??1CRenderTargetBitmap@@MEAA@XZ @ 0x180066264
 * Callers:
 *     ??_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z @ 0x180065890 (--_GCScratchRenderTargetBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECRenderTargetBitmap@@MEAAPEAXI@Z @ 0x1800658D0 (--_ECRenderTargetBitmap@@MEAAPEAXI@Z.c)
 *     ??_GCDecodeBitmap@@UEAAPEAXI@Z @ 0x1801163E0 (--_GCDecodeBitmap@@UEAAPEAXI@Z.c)
 *     ??_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z @ 0x1802A76E0 (--_ECStereoRenderTargetBitmap@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ @ 0x180066388 (-ReleaseDeviceTarget@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x180067C88 (--1CDeviceResource@@MEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::~CRenderTargetBitmap(CRenderTargetBitmap *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx

  *(_QWORD *)this = &CRenderTargetBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 10) = &CRenderTargetBitmap::`vftable';
  *((_QWORD *)this + 15) = &CScratchRenderTargetBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CRenderTargetBitmap::`vftable'{for `IBitmapRealization'};
  v2 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v2 + 12) = v2 - 144;
  v3 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 160;
  v4 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 176;
  v5 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 200;
  v6 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 224;
  CRenderTargetBitmap::ReleaseDeviceTarget(this);
  v7 = *((_QWORD *)this + 17);
  if ( v7 )
  {
    v8 = *(int *)(*(_QWORD *)(v7 + 8) + 4LL) + v7 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  CDeviceResource::~CDeviceResource((CRenderTargetBitmap *)((char *)this + 80));
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
