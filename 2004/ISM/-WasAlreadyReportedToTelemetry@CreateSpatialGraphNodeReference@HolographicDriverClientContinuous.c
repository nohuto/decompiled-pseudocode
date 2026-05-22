/*
 * XREFs of ?WasAlreadyReportedToTelemetry@CreateSpatialGraphNodeReference@HolographicDriverClientContinuousTrace@@MEAA_NJ@Z @ 0x1800965B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference::WasAlreadyReportedToTelemetry(
        HolographicDriverClientContinuousTrace::CreateSpatialGraphNodeReference *this,
        int a2)
{
  bool v2; // zf

  v2 = `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen == a2;
  `wil::TraceLoggingProvider::WasAlreadyReportedToTelemetry'::`2'::s_lastFailureSeen = a2;
  return v2;
}
