/*
 * XREFs of _lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator() @ 0x180169EA4
 * Callers:
 *     wil::details::lambda_call__lambda_0ef360edd2b0e079ee5004fb777ac3fe___::_lambda_call__lambda_0ef360edd2b0e079ee5004fb777ac3fe___ @ 0x180169AA8 (wil--details--lambda_call__lambda_0ef360edd2b0e079ee5004fb777ac3fe___--_lambda_call__lambda_0ef3.c)
 *     ?StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x18016F2F0 (-StartTracking@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@UEAAJPEA.c)
 * Callees:
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6218 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6E84 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800D8864 (-SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV-$C.c)
 *     ?ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATIAL_TRACKING_STATE@@_NKAEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x18016B704 (-ControllerNodeStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXJKKW4SPATI.c)
 */

void __fastcall lambda_0ef360edd2b0e079ee5004fb777ac3fe_::operator()(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  _DWORD *v4; // r14
  _DWORD *v5; // r15
  char v6; // si
  unsigned int *v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  bool v11; // [rsp+28h] [rbp-30h]

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(
    *(_QWORD *)a1,
    *(__int64 **)(a1 + 8));
  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD **)(a1 + 32);
  v5 = *(_DWORD **)(a1 + 24);
  v6 = *(_BYTE *)(*(_QWORD *)a1 + 1013LL);
  v7 = *(unsigned int **)(a1 + 16);
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v8) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v9,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    LOBYTE(v10) = v6 != 0;
    v11 = v6 != 0;
    SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeStartTracking_(
      v10,
      *v7,
      *(unsigned int *)(v2 + 8),
      *(unsigned int *)(v2 + 12),
      *v5,
      v11,
      *v4,
      v3);
  }
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SetDeviceErrorStatus(
    *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **)a1,
    (**(int **)(a1 + 16) >> 31) & 0x82000009,
    (**(int **)(a1 + 16) >> 31) & 2);
}
