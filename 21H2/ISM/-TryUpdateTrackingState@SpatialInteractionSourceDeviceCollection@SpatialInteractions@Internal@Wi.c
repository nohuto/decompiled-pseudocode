/*
 * XREFs of ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D384C
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800CFFE8 (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     std::_Func_impl_no_alloc__lambda_3d4f76b690934c2777c3531f367d7e97__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D3CC0 (std--_Func_impl_no_alloc__lambda_3d4f76b690934c2777c3531f367d7e97__void_std--shared_ea_1800D3CC0.c)
 *     std::_Func_impl_no_alloc__lambda_3dd39dd98c03cde2644bdcb497ffed4e__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D3D00 (std--_Func_impl_no_alloc__lambda_3dd39dd98c03cde2644bdcb497ffed4e__void_std--shared_ea_1800D3D00.c)
 *     std::_Func_impl_no_alloc__lambda_e526ae9bd02f5319a142ce48117bd5e8__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800D3E10 (std--_Func_impl_no_alloc__lambda_e526ae9bd02f5319a142ce48117bd5e8__void_std--shared_ea_1800D3E10.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000ED04 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001054C (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009F654 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800CF304 (-ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z.c)
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CF92C (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800CFB74 (-EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        __int64 *a2)
{
  HSTRING v4; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v5; // rdx
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rbx
  __int64 v9; // r12
  __int64 v10; // rbx
  __int64 v11; // rcx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v12; // rdx
  int v13; // eax
  int v14; // ebx
  __int64 v15; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int64 v20; // [rsp+40h] [rbp-20h] BYREF
  HSTRING v21[3]; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  HSTRING string; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+48h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  string = 0LL;
  v4 = (HSTRING)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v21[1] = v4;
  v6 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(this, v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32F,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_15;
  }
  v8 = *((_QWORD *)this + 17);
  v9 = 0LL;
  if ( v8 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 17));
    v9 = v8;
    v20 = 0LL;
    v19 = v8;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
  }
  v10 = *((_QWORD *)this + 18);
  if ( v10 )
  {
    v24 = *((_QWORD *)this + 18);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v24);
    v24 = 0LL;
    v18 = v10;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v24);
  }
  v21[0] = *((HSTRING *)this + 19);
  Microsoft::WRL::Wrappers::HString::Set(&string, v21);
  if ( v4 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
  v11 = *a2;
  *(_BYTE *)(*a2 + 107) = 0;
  if ( !v9 || !v18 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v14 = *(_DWORD *)(*a2 + 8);
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v11) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v15,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeTrackingSkipped_(v16, v14);
    }
    goto LABEL_22;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, HSTRING, int))(*(_QWORD *)*a2 + 160LL))(
         *a2,
         v19,
         v18,
         string,
         1);
  if ( v7 < 0 )
    goto LABEL_23;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  v21[2] = v4;
  v13 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
          (struct _RTL_CRITICAL_SECTION *)this,
          v12);
  v7 = v13;
  if ( v13 >= 0 )
  {
    if ( v4 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    *(_BYTE *)(*a2 + 105) = 1;
LABEL_22:
    *(_BYTE *)(*a2 + 107) = 1;
    v7 = 0;
    goto LABEL_23;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x344,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v13);
LABEL_15:
  if ( v4 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v4);
LABEL_23:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v18);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v19);
  return (unsigned int)v7;
}
