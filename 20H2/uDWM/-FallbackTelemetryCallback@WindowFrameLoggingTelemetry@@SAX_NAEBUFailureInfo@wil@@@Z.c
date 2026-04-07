/*
 * XREFs of ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180006DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemetry@@P6AXXZ@Z @ 0x180006E2C (-get@-$static_lazy@VWindowFrameLoggingTelemetry@@@details@wil@@QEAAPEAVWindowFrameLoggingTelemet.c)
 */

void __fastcall WindowFrameLoggingTelemetry::FallbackTelemetryCallback(_BOOL8 a1, const struct wil::FailureInfo *a2)
{
  bool v3; // di
  wil::TraceLoggingProvider *v4; // rax

  v3 = a1;
  v4 = (wil::TraceLoggingProvider *)wil::details::static_lazy<WindowFrameLoggingTelemetry>::get(
                                      a1,
                                      _lambda_522324fbb5dde8754aa82d91ec00ee97_::_lambda_invoker_cdecl_);
  wil::TraceLoggingProvider::OnErrorReported(v4, v3, a2);
}
