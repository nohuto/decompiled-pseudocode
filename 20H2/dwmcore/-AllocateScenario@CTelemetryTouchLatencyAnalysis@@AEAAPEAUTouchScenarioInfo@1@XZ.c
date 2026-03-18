/*
 * XREFs of ?AllocateScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@XZ @ 0x180004C4C
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x1800044E8 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x1800041CC (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?ForceRetireScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@@Z @ 0x18015DB3C (-ForceRetireScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAn.c)
 */

LARGE_INTEGER *__fastcall CTelemetryTouchLatencyAnalysis::AllocateScenario(CTelemetryTouchLatencyAnalysis *this)
{
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v2; // rsi
  unsigned int v3; // r8d
  unsigned __int64 *v4; // rdx
  LARGE_INTEGER *v5; // rdi
  LARGE_INTEGER *result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 8);
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
      v2 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 408 * v3 + 8);
    ++v3;
    v4 += 51;
    if ( v3 >= 0xA )
      goto LABEL_12;
  }
  v5 = (LARGE_INTEGER *)((char *)this + 408 * v3 + 8);
  if ( v5 )
    goto LABEL_4;
LABEL_12:
  InteractionTraceProvider::ForceRetireScenario(v2);
  CTelemetryTouchLatencyAnalysis::RetireScenario(this, (LARGE_INTEGER *)v2, 1, 0);
  v5 = (LARGE_INTEGER *)v2;
LABEL_4:
  v5[19].LowPart = 1;
  ++*(_DWORD *)this;
  QueryPerformanceCounter(&PerformanceCount);
  result = v5;
  v5[48] = PerformanceCount;
  return result;
}
