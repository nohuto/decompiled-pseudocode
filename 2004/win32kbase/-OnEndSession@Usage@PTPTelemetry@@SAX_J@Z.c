/*
 * XREFs of ?OnEndSession@Usage@PTPTelemetry@@SAX_J@Z @ 0x1C01A3314
 * Callers:
 *     ?OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z @ 0x1C01A38E0 (-OnTelemetryOutput@CPTPProcessor@@UEAAXPEBUPTPTelemetryOutput@@@Z.c)
 * Callees:
 *     ?HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ @ 0x1C00CC9E0 (-HandlePTPTelemetry@Usage@PTPTelemetry@@SAXXZ.c)
 */

void __fastcall PTPTelemetry::Usage::OnEndSession(__int64 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v3; // rbx

  if ( qword_1C024CCE8 > 0 )
  {
    if ( qword_1C024CCF0 )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    }
    else
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      qword_1C024CCF0 = PerformanceCounter.QuadPart;
    }
    qword_1C024CD00 = PerformanceCounter.QuadPart;
  }
  v3 = 1000 * a1 / gliQpcFreq.QuadPart;
  if ( v3 - PTPTelemetry::Usage::gmsLastTelemetrySentTime > 0xEA60 )
  {
    PTPTelemetry::Usage::HandlePTPTelemetry();
    PTPTelemetry::Usage::gmsLastTelemetrySentTime = v3;
  }
}
