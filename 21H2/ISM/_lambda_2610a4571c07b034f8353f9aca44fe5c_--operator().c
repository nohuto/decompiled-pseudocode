/*
 * XREFs of _lambda_2610a4571c07b034f8353f9aca44fe5c_::operator() @ 0x1800D6290
 * Callers:
 *     wil::details::lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___::_lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___ @ 0x1800D5DDC (wil--details--lambda_call__lambda_2610a4571c07b034f8353f9aca44fe5c___--_lambda_call__lambda_2610.c)
 *     ?StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialGraphNodeReferenceFactory@Holographic@34@PEAUISpatialGraphDriverClient@634@PEAUHSTRING__@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800D95E0 (-StartTracking@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@UEAAJPEAUISp.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C65E8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV?$ComPtr@UISpatialGraphNodeReference@Holographic@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x1800D8C34 (-SetSourceNode@SpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@QEAAXAEAV-$C.c)
 *     ?SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@JW4SPATIAL_TRACKING_STATE@@AEBUDynamicNodeInfo@Holographic@Internal@Windows@@@Z @ 0x1800D8EA4 (-SpatialObjectStartTracking_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@.c)
 */

char __fastcall lambda_2610a4571c07b034f8353f9aca44fe5c_::operator()(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int *v4; // rsi
  unsigned int *v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // rcx
  char result; // al
  __int64 v9; // rcx
  __int64 v10; // rcx
  _BYTE v11[16]; // [rsp+30h] [rbp-28h] BYREF

  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::SetSourceNode(*a1, a1[1]);
  v2 = *a1;
  v3 = a1[4];
  v4 = (unsigned int *)a1[3];
  v5 = (unsigned int *)a1[2];
  v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(v2 + 120) + 48LL))(*(_QWORD *)(v2 + 120), v11);
  result = SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v7);
  if ( result )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v9,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    return SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectStartTracking_(v10, v6, *v5, *v4, v3);
  }
  return result;
}
