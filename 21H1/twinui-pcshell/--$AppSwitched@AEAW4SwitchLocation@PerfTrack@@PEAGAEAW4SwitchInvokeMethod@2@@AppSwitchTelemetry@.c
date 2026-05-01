/*
 * XREFs of ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x180384FB4
 * Callers:
 *     ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x1803851E0 (-SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4Swi.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18005F164 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x180385118 (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 *     ?get@?$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfTrack@@P6AXXZ@Z @ 0x180385264 (-get@-$static_lazy@VAppSwitchTelemetry@PerfTrack@@@details@wil@@QEAAPEAVAppSwitchTelemetry@PerfT.c)
 */

char __fastcall PerfTrack::AppSwitchTelemetry::AppSwitched<enum PerfTrack::SwitchLocation &,unsigned short *,enum PerfTrack::SwitchInvokeMethod &>(
        unsigned int *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  wil::TraceLoggingProvider *v6; // rax
  char result; // al
  __int64 v8; // rcx
  __int64 v9; // rcx

  v6 = (wil::TraceLoggingProvider *)wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::get(
                                      a1,
                                      _lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
  result = wil::TraceLoggingProvider::IsEnabled_(v6, 0);
  if ( result )
  {
    wil::details::static_lazy<PerfTrack::AppSwitchTelemetry>::get(
      v8,
      _lambda_2ca303a503a9bc4bb017c32a5a335e85_::_lambda_invoker_cdecl_);
    return PerfTrack::AppSwitchTelemetry::AppSwitched_(v9, *a1, *a2, *a3);
  }
  return result;
}
