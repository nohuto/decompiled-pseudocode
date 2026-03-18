/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CBBF0
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A0F94 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A1560 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00D3740 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01A24D0 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01A2854 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void PTPTelemetry::Usage::HandlePTPTelemetry(void)
{
  if ( dword_1C0251B2C )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState);
    if ( qword_1C0251B30 > 0 || qword_1C0251B48 > 0 || dword_1C0251AE0 || dword_1C0251AE8 )
      TraceLoggingPTPUsageDetailsEvent(
        (const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState,
        gliQpcFreq.QuadPart);
    memset(&PTPTelemetry::Usage::gTPTelemState, 0, 0x90uLL);
  }
}
