/*
 * XREFs of ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CC130
 * Callers:
 *     ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A9074 (-OnEndSession@Usage@PTPTelemetry@@SAX_J@Z.c)
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A9640 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     memset @ 0x1C00D2E00 (memset.c)
 *     ?TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z @ 0x1C01AA5B0 (-TraceLoggingPTPGestureUsageEvent@@YAXPEBUtagTPTELEMSTATE@@@Z.c)
 *     ?TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z @ 0x1C01AA934 (-TraceLoggingPTPUsageDetailsEvent@@YAXPEBUtagTPTELEMSTATE@@_J@Z.c)
 */

void PTPTelemetry::Usage::HandlePTPTelemetry(void)
{
  if ( dword_1C0259AEC )
  {
    TraceLoggingPTPGestureUsageEvent((const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState);
    if ( qword_1C0259AF0 > 0 || qword_1C0259B08 > 0 || dword_1C0259AA0 || dword_1C0259AA8 )
      TraceLoggingPTPUsageDetailsEvent(
        (const struct tagTPTELEMSTATE *)&PTPTelemetry::Usage::gTPTelemState,
        gliQpcFreq.QuadPart);
    memset(&PTPTelemetry::Usage::gTPTelemState, 0, 0x90uLL);
  }
}
