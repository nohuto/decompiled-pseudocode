/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x18004532C
 * Callers:
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x1800452F0 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??_ECGDIBitmapRealization@@UEAAPEAXI@Z @ 0x1800D6DB0 (--_ECGDIBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECDxHandleAdvancedDirectFlipBitmapRealization@@UEAAPEAXI@Z @ 0x180260C70 (--_ECDxHandleAdvancedDirectFlipBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x180261F90 (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180039EB0 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x18006AF70 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x18006C84C (--1CDeviceResource@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDxHandleBitmapRealization::~CDxHandleBitmapRealization(CDxHandleBitmapRealization *this)
{
  CDeviceResource *v2; // rsi
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rcx
  CRenderTargetBitmap *v13; // rcx

  v2 = (CDxHandleBitmapRealization *)((char *)this + 288);
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 36) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 41) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
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
  v8 = *((_DWORD *)this + 62);
  if ( v8 != DisplayId::None && v8 != DisplayId::All )
    --*((_DWORD *)g_pComposition + 70);
  if ( *((_BYTE *)this + 364) )
  {
    v9 = (void *)*((_QWORD *)this + 28);
    if ( v9 )
      CloseHandle(v9);
  }
  v10 = *((_QWORD *)this + 43);
  if ( v10 )
  {
    v11 = v10 + 16 + *(int *)(*(_QWORD *)(v10 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 48LL))(
      v11,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
  }
  v12 = *((_QWORD *)this + 44);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)this + 43);
  CDeviceResource::~CDeviceResource(v2);
  v13 = (CRenderTargetBitmap *)*((_QWORD *)this + 32);
  if ( v13 )
    CRenderTargetBitmap::Release(v13);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
