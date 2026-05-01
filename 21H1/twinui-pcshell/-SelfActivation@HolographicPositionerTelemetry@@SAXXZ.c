/*
 * XREFs of ?SelfActivation@HolographicPositionerTelemetry@@SAXXZ @ 0x18021FCF4
 * Callers:
 *     ?_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180221E7C (-_HandleSelfActivation@HolographicPositioner@@AEAAJPEAUIPropertySet@Collections@Foundation@Windo.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180022ED4 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x180223A8C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

void __fastcall HolographicPositionerTelemetry::SelfActivation(__int64 a1)
{
  _DWORD *v1; // rcx
  __int64 v2; // rcx
  struct _EVENT_DATA_DESCRIPTOR v3; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_DWORD **)(wil::details::static_lazy<HolographicPositionerProvider>::get(
                      a1,
                      _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v1 > 4u )
  {
    if ( tlgKeywordOn((__int64)v1, 0x400000000000LL) )
      tlgWriteTransfer_EventWriteTransfer(v2, (unsigned __int8 *)dword_1804E1197, 0LL, 0LL, 2u, &v3);
  }
}
