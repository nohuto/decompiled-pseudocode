/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CC9E0
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A3314 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A38E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00D3880 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01A4850 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01A4BD4 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void PTPTelemetry::Usage::HandlePTPTelemetry(void)
{
  if ( dword_1C0253B2C )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState);
    if ( qword_1C0253B30 > 0 || qword_1C0253B48 > 0 || dword_1C0253AE0 || dword_1C0253AE8 )
      TraceLoggingPTPUsageDetailsEvent(
        (const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState,
        gliQpcFreq.QuadPart);
    memset(&PTPTelemetry::Usage::gTPTelemState, 0, 0x90uLL);
  }
}
