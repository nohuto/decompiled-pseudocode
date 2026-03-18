/*
 * XREFs of ?TimeoutOverdueScenarios@CTelemetryTouchLatencyAnalysis@@QEAAX_K@Z @ 0x18001BBE0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180059EC0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z @ 0x180013248 (-RetireScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@_N1@Z.c)
 *     ?TimeoutOverdueScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatencyAnalysis@@_K1@Z @ 0x180162D18 (-TimeoutOverdueScenario@InteractionTraceProvider@@SAXAEBUTouchScenarioInfo@CTelemetryTouchLatenc.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::TimeoutOverdueScenarios(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2)
{
  const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *v4; // rbx
  __int64 v5; // rsi
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)this )
  {
    QueryPerformanceCounter((LARGE_INTEGER *)&v6);
    v4 = (CTelemetryTouchLatencyAnalysis *)((char *)this + 8);
    v5 = 10LL;
    do
    {
      if ( *((_QWORD *)v4 + 4) )
      {
        if ( (unsigned int)((v6 - *((_QWORD *)v4 + 48)) / (qword_180345400 / 0x3E8uLL)) >= 0xFA0 )
        {
          InteractionTraceProvider::TimeoutOverdueScenario(v4, v6, a2);
          CTelemetryTouchLatencyAnalysis::RetireScenario(this, (LARGE_INTEGER *)v4, 1, 1);
        }
      }
      v4 = (const struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *)((char *)v4 + 408);
      --v5;
    }
    while ( v5 );
  }
}
