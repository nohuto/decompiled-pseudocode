/*
 * XREFs of ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18001A14C
 * Callers:
 *     ?TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_UPDATE_INFO@@@Z @ 0x18001AC20 (-TelemetryUpdateTouchLatencyAnalysis@CPartitionVerticalBlankScheduler@@UEAAJAEBUTOUCH_TELEMETRY_.c)
 * Callees:
 *     ?IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001A1DC (-IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABA0 (-IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 *     ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8 (-FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioI.c)
 */

__int64 __fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::IsManipulationStateChange(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        const struct TOUCH_TELEMETRY_UPDATE_INFO *a2,
        unsigned __int64 a3)
{
  unsigned int v5; // ebx
  struct InteractionLatencyTelemetry::TouchScenarioInfo *Scenario; // rax
  __int64 v7; // rcx
  __int64 v8; // rdi
  InteractionLatencyTelemetry::CMouseKeyboardInfo *v9; // rbp

  v5 = 0;
  Scenario = InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(this, *(_QWORD *)a2);
  if ( Scenario )
  {
    v8 = *((_QWORD *)Scenario + 22);
    if ( !v8 && *((_BYTE *)Scenario + 193) && !*((_WORD *)a2 + 94) )
      return 1;
    v9 = (InteractionLatencyTelemetry::CMouseKeyboardInfo *)(v7 + 6912);
    if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsStartInertia(
           (InteractionLatencyTelemetry::CMouseKeyboardInfo *)(v7 + 6912),
           a3)
      || v8 && (*((_WORD *)a2 + 94) || InteractionLatencyTelemetry::CMouseKeyboardInfo::IsNewInteraction(v9, a3)) )
    {
      return 1;
    }
  }
  return v5;
}
