/*
 * XREFs of _lambda_8af77e303c344d221a281039b3d8ff10_::operator() @ 0x1800D6558
 * Callers:
 *     wil::details::lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___::_lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___ @ 0x1800D59BC (wil--details--lambda_call__lambda_8af77e303c344d221a281039b3d8ff10___--_lambda_call__lambda_8af7.c)
 *     ?EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAAJPEAUISpatialGraphDriverClient@Holographic@34@PEAUDynamicNodeInfo@634@@Z @ 0x1800D70F4 (-EnsureDynamicNodeInfo@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@IEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C6188 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C6DF4 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SpatialObjectEnsureDynamicNodeInfoFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800D894C (-SpatialObjectEnsureDynamicNodeInfoFailed_@SpatialInteractionTrace@SpatialInteractionDevices@@QE.c)
 *     ?SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@0@Z @ 0x1800D89C8 (-SpatialObjectEnsureDynamicNodeInfo_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEB.c)
 */

void __fastcall lambda_8af77e303c344d221a281039b3d8ff10_::operator()(_QWORD *a1)
{
  int *v1; // rbx
  __int64 (__fastcall *v2)(_QWORD, _BYTE *); // rax
  const struct _GUID *v3; // rbx
  const struct _GUID *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v7; // rcx
  const struct _GUID *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v11; // rcx
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (int *)a1[1];
  v2 = *(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*a1 + 120LL) + 48LL);
  if ( *v1 < 0 )
  {
    v8 = (const struct _GUID *)v2(*(_QWORD *)(*a1 + 120LL), v12);
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v9) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v10,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectEnsureDynamicNodeInfoFailed_(v11, v8, *v1);
    }
  }
  else
  {
    v3 = (const struct _GUID *)a1[2];
    v4 = (const struct _GUID *)v2(*(_QWORD *)(*a1 + 120LL), v12);
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v5) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v6,
        _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectEnsureDynamicNodeInfo_(v7, v4, v3);
    }
  }
}
