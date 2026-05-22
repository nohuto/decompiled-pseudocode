/*
 * XREFs of ?StopTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJW4StopTrackingReason@234@@Z @ 0x18016F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ??4?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1800CE4A4 (--4-$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV01.c)
 *     ?ClearDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXXZ @ 0x1800D6BEC (-ClearDynamicNodeInfo@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAX.c)
 *     ?ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z @ 0x18016B800 (-ControllerNodeStopTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKI@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::StopTracking(
        __int64 a1,
        int a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  if ( a2 == 1 )
    Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::ClearDynamicNodeInfo((RTL_SRWLOCK *)a1);
  v8 = 0LL;
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 80));
  Microsoft::WRL::ComPtr<Windows::Internal::Holographic::ISpatialGraphNodeReference>::operator=(
    &v8,
    (__int64 *)(a1 + 88));
  if ( *(_BYTE *)(a1 + 456) )
  {
    *(_BYTE *)(a1 + 457) = 0;
  }
  else
  {
    *(_WORD *)(a1 + 1176) = 0;
    *(_WORD *)(a1 + 1084) = 0;
    *(_WORD *)(a1 + 1124) = 0;
    *(_BYTE *)(a1 + 1126) = 0;
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v4) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v5,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStopTracking_(v6, *(_DWORD *)(a1 + 8), a2);
    }
  }
  if ( a1 != -80 )
    ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 80));
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v8);
  return 0LL;
}
