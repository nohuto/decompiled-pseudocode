/*
 * XREFs of ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800256D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180009414 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180009568 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@@XZ @ 0x1800253FC (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_tlgProvider_t@.c)
 *     atexit @ 0x1800CDB54 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback(
        char a1,
        const struct wil::FailureInfo *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  WINBOOL v6; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v7)
    && v6 )
  {
    qword_180198FE8 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    v7 = (wil::TraceLoggingProvider *)&qword_180198FE8;
    atexit(_lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_);
    qword_180198FF0 = (__int64)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    byte_180198FF8 = 0;
    dword_180198FFC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180198FE8 + 8))(&qword_180198FE8);
    InitOnceComplete(
      &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
      0,
      &qword_180198FE8);
  }
  if ( !a1 )
  {
    if ( *((_DWORD *)v7 + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(v7, a2, v4, v5);
    }
    else if ( *((_DWORD *)v7 + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(v7, a2, v4, v5);
    }
  }
}
