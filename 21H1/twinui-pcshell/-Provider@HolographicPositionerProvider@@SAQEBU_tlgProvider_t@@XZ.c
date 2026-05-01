/*
 * XREFs of ?Provider@HolographicPositionerProvider@@SAQEBU_tlgProvider_t@@XZ @ 0x18021F2AC
 * Callers:
 *     ??$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z @ 0x18009BE6C (--$UnexpectedBackgroundActivation@PEBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBG$$QEAI@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerProvider@@P6AXXZ@Z @ 0x180223A8C (-get@-$static_lazy@VHolographicPositionerProvider@@@details@wil@@QEAAPEAVHolographicPositionerPr.c)
 */

const struct _tlgProvider_t *__fastcall HolographicPositionerProvider::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<HolographicPositionerProvider>::get(
                                             a1,
                                             _lambda_c2de52b76b02464b55ca8bf6e2d5d141_::_lambda_invoker_cdecl_)
                                         + 8);
}
