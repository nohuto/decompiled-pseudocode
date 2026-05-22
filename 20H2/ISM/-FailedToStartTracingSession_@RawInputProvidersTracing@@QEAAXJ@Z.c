/*
 * XREFs of ?FailedToStartTracingSession_@RawInputProvidersTracing@@QEAAXJ@Z @ 0x180093088
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180094780 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180035138 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x18008FE60 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::FailedToStartTracingSession_(RawInputProvidersTracing *this, int a2)
{
  _QWORD *v3; // rax
  __int64 v4; // r10
  int v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         (__int64)this,
         _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v3[1] > 4u && tlgKeywordOn(v3[1], 0x400000000000LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801C9636, 0LL, 0LL, 3u, &v6);
  }
}
