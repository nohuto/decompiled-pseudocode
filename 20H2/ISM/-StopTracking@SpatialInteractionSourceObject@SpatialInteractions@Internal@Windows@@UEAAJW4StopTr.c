/*
 * XREFs of ?StopTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x1800D9FC0
 * Callers:
 *     ?StopTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x1800DCC20 (-StopTracking@SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@UEAAJW.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6188 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6DF4 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ClearDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x1800D6B5C (-ClearDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAX.c)
 *     ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800D87D4 (-SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV-$C.c)
 *     ?SpatialObjectStoppedTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@I@Z @ 0x1800D8C20 (-SpatialObjectStoppedTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::StopTracking(
        __int64 a1,
        int a2)
{
  const struct _GUID *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v10[16]; // [rsp+28h] [rbp-20h] BYREF

  if ( a2 == 1 )
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::ClearDynamicNodeInfo((RTL_SRWLOCK *)a1);
  v9 = 0LL;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(a1, &v9);
  v4 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 120) + 48LL))(
                               *(_QWORD *)(a1 + 120),
                               v10);
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v5) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v6,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStoppedTracking_(v7, v4, a2);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  return 0LL;
}
