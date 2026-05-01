/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180060908
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x1800528D8 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x180335C30 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z @ 0x18006092C (-get@-$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAAPEAVStartWindowTelemetry@@P6AXXZ@Z.c)
 */

char __fastcall StartWindowTelemetry::IsEnabled(__int64 a1)
{
  wil::TraceLoggingProvider *v1; // rax

  v1 = (wil::TraceLoggingProvider *)wil::details::static_lazy<StartWindowTelemetry>::get(
                                      a1,
                                      _lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
  return wil::TraceLoggingProvider::IsEnabled_(v1, 0);
}
