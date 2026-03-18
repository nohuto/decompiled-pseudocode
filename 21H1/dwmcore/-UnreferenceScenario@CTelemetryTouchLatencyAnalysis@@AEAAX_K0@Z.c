/*
 * XREFs of ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAX_K0@Z @ 0x1800242C8
 * Callers:
 *     ??_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z @ 0x18001F6C8 (--_GTouchUpdateInfo@CTelemetryTouchLatencyAnalysis@@QEAAPEAXI@Z.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18003B5A0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 * Callees:
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z @ 0x180024300 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@@AEAAXPEAUTouchScenarioInfo@1@@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z @ 0x1800245B8 (-FindScenario@CTelemetryTouchLatencyAnalysis@@AEAAPEAUTouchScenarioInfo@1@_K@Z.c)
 */

void __fastcall CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
        CTelemetryTouchLatencyAnalysis *this,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  struct CTelemetryTouchLatencyAnalysis::TouchScenarioInfo *Scenario; // rax
  CTelemetryTouchLatencyAnalysis *v5; // r11

  Scenario = CTelemetryTouchLatencyAnalysis::FindScenario(this, a2);
  if ( Scenario )
  {
    if ( a3 >= *((_QWORD *)Scenario + 25) )
      CTelemetryTouchLatencyAnalysis::UnreferenceScenario(v5, Scenario);
  }
}
