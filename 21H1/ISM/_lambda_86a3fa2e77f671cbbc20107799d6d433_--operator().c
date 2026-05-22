/*
 * XREFs of _lambda_86a3fa2e77f671cbbc20107799d6d433_::operator() @ 0x1800D6898
 * Callers:
 *     wil::details::lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___::_lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___ @ 0x1800D5EEC (wil--details--lambda_call__lambda_86a3fa2e77f671cbbc20107799d6d433___--_lambda_call__lambda_86a3.c)
 *     ?SubscribeToStateStream@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEAAJXZ @ 0x1800DA5C0 (-SubscribeToStateStream@SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@MEA.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800C66D8 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7344 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@J@Z @ 0x1800D91EC (-SpatialObjectSubscribeToStateStream_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAE.c)
 */

void __fastcall lambda_86a3fa2e77f671cbbc20107799d6d433_::operator()(_QWORD *a1)
{
  int *v1; // rbx
  const struct _GUID *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v5; // rcx
  _BYTE v6[16]; // [rsp+20h] [rbp-28h] BYREF

  v1 = (int *)a1[1];
  v2 = (const struct _GUID *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(*a1 + 120LL) + 48LL))(
                               *(_QWORD *)(*a1 + 120LL),
                               v6);
  if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v3) )
  {
    wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
      v4,
      _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
    SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectSubscribeToStateStream_(v5, v2, *v1);
  }
}
