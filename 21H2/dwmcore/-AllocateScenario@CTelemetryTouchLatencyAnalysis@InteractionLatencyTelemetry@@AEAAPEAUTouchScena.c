/*
 * XREFs of ?AllocateScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@XZ @ 0x180015EA8
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBU.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenarioInfo@2@_N1@Z @ 0x180013B7C (-RetireScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAXPEAUTouchScenar.c)
 *     ?ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioInfo@2@@Z @ 0x1801D2E50 (-ForceRetireScenario@InteractionTraceProvider@InteractionLatencyTelemetry@@SAXAEBUTouchScenarioI.c)
 */

LARGE_INTEGER *__fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::AllocateScenario(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this)
{
  const struct InteractionLatencyTelemetry::TouchScenarioInfo *v2; // rsi
  unsigned int v3; // ecx
  unsigned __int64 *v4; // rdx
  LARGE_INTEGER *v5; // rdi
  LARGE_INTEGER *result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 8);
  v3 = 0;
  v4 = (unsigned __int64 *)((char *)this + 176);
  while ( *((_DWORD *)v4 - 4) )
  {
    v7 = *((_QWORD *)v2 + 21);
    if ( !v7 )
      v7 = *((_QWORD *)v2 + 22);
    v8 = *v4;
    if ( !*v4 )
      v8 = v4[1];
    if ( v7 > v8 )
      v2 = (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 512 * (unsigned __int64)v3 + 8);
    ++v3;
    v4 += 64;
    if ( v3 >= 0xA )
      goto LABEL_12;
  }
  v5 = (LARGE_INTEGER *)((char *)this + 512 * (unsigned __int64)v3 + 8);
  if ( v5 )
    goto LABEL_4;
LABEL_12:
  InteractionLatencyTelemetry::InteractionTraceProvider::ForceRetireScenario(v2);
  InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::RetireScenario(this, v2, 1, 0);
  v5 = (LARGE_INTEGER *)v2;
LABEL_4:
  v5[19].LowPart = 1;
  ++*(_DWORD *)this;
  QueryPerformanceCounter(&PerformanceCount);
  result = v5;
  v5[61] = PerformanceCount;
  return result;
}
