/*
 * XREFs of ?OnNewSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A14F8
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A1560 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PTPTelemetry::Usage::OnNewSession(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( PTPTelemetry::Usage::gTPTelemTimings >= a1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    dword_1C024AD0C = 0;
    qword_1C024ACF8 = PerformanceCounter.QuadPart;
  }
  else
  {
    PTPTelemetry::Usage::gTPTelemTimings = KeQueryPerformanceCounter(0LL);
  }
}
