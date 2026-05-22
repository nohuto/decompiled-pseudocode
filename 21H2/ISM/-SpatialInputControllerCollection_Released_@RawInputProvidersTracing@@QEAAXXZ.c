/*
 * XREFs of ?SpatialInputControllerCollection_Released_@RawInputProvidersTracing@@QEAAXXZ @ 0x180095C64
 * Callers:
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180094D80 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x1800902C0 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 */

void __fastcall RawInputProvidersTracing::SpatialInputControllerCollection_Released_(RawInputProvidersTracing *this)
{
  _QWORD *v1; // rax
  ULONG v2; // edx
  __int64 v3; // r10
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF

  v1 = wil::details::static_lazy<RawInputProvidersTracing>::get(
         (__int64)this,
         _lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v1[1] > 4u && tlgKeywordOn(v1[1], 2LL) )
    tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_1801CAB0B, 0LL, 0LL, v2, &v4);
}
