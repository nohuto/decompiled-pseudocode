/*
 * XREFs of ??1CDxHandleBitmapRealization@@MEAA@XZ @ 0x1800659A4
 * Callers:
 *     ??_ECGDIBitmapRealization@@UEAAPEAXI@Z @ 0x1800F1310 (--_ECGDIBitmapRealization@@UEAAPEAXI@Z.c)
 *     ??_ECDxHandleBitmapRealization@@MEAAPEAXI@Z @ 0x1800F35A0 (--_ECDxHandleBitmapRealization@@MEAAPEAXI@Z.c)
 *     ??1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ @ 0x1802A33EC (--1CDxHandleAdvancedDirectFlipBitmapRealization@@UEAA@XZ.c)
 *     ??1CDxHandleStereoBitmapRealization@@MEAA@XZ @ 0x1802A468C (--1CDxHandleStereoBitmapRealization@@MEAA@XZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001EBC0 (--1-$com_ptr_t@VCVisual@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1CDeviceResource@@MEAA@XZ @ 0x180067C88 (--1CDeviceResource@@MEAA@XZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ @ 0x18007E4F4 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices@Windows@@@Z @ 0x180287B8C (-NotifyRealizationBitmapReleased@CDDisplayManager@@QEAAXPEAUIDisplaySurface@Core@Display@Devices.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  CDDisplayManager *v11; // rcx
  __int64 v12; // rcx
  void *v13; // rcx
  __int64 v14; // rcx

  v2 = (CDxHandleBitmapRealization *)((char *)this + 320);
  *(_QWORD *)this = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *((_QWORD *)this + 40) = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *((_QWORD *)this + 45) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 12LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 16LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 20LL) + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
  v3 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v3 + 12) = v3 - 392;
  v4 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v4 + 12) = v4 - 408;
  v5 = *(int *)(*((_QWORD *)this + 2) + 12LL);
  *(_DWORD *)((char *)this + v5 + 12) = v5 - 424;
  v6 = *(int *)(*((_QWORD *)this + 2) + 16LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 448;
  v7 = *(int *)(*((_QWORD *)this + 2) + 20LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 472;
  v8 = *((_DWORD *)this + 70);
  if ( v8 != DisplayId::None && v8 != DisplayId::All )
    --*((_DWORD *)g_pComposition + 108);
  if ( *((_BYTE *)this + 396) )
  {
    v13 = (void *)*((_QWORD *)this + 31);
    if ( v13 )
      CloseHandle(v13);
  }
  v9 = *((_QWORD *)this + 47);
  if ( v9 )
  {
    v10 = v9 + 16 + *(int *)(*(_QWORD *)(v9 + 16) + 8LL);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 48LL))(
      v10,
      (char *)this + *(int *)(*((_QWORD *)this + 2) + 4LL) + 16);
  }
  v11 = (CDDisplayManager *)*((_QWORD *)this + 48);
  if ( v11 )
  {
    CDDisplayManager::NotifyRealizationBitmapReleased(
      v11,
      *((struct Windows::Devices::Display::Core::IDisplaySurface **)this + 48));
    v14 = *((_QWORD *)this + 48);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  wil::com_ptr_t<CVisual,wil::err_returncode_policy>::~com_ptr_t<CVisual,wil::err_returncode_policy>((__int64 *)this + 47);
  CDeviceResource::~CDeviceResource(v2);
  v12 = *((_QWORD *)this + 36);
  if ( v12 )
    CMILRefCountBaseT<IUnknown>::InternalRelease(v12);
  CD2DBitmapCache::~CD2DBitmapCache(this);
}
