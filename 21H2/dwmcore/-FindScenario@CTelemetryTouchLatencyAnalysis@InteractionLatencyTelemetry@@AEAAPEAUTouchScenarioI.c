/*
 * XREFs of ?FindScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAPEAUTouchScenarioInfo@2@_K@Z @ 0x18001B5A8
 * Callers:
 *     ?BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_BEGIN_INFO@@_KPEBG1IAEBU_LUID@@_N@Z @ 0x180015B80 (-BeginAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBU.c)
 *     ?EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB_K@Z @ 0x180019708 (-EndAnalyzingInteraction@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAX_K0AEB.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18001A14C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBU.c)
 *     ?UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTOUCH_TELEMETRY_UPDATE_INFO@@PEAUTouchUpdateInfo@2@_K@Z @ 0x18001A5B8 (-UpdateLastTelemetryInfo@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAXPEBUTO.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 *     ?UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z @ 0x18001B508 (-UnreferenceScenario@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_K0@Z.c)
 *     ?AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAEBUTELEMETRY_INTERACTION_FRAME_TIMES@@III0@Z @ 0x18001B5E8 (-AnalyzeLatencyInformation@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@AEAAX_KAE.c)
 * Callees:
 *     <none>
 */

struct InteractionLatencyTelemetry::TouchScenarioInfo *__fastcall InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::FindScenario(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *this,
        __int64 a2)
{
  struct InteractionLatencyTelemetry::TouchScenarioInfo *result; // rax
  char *v3; // r9
  unsigned int v4; // r8d

  result = 0LL;
  v3 = (char *)this + 16;
  v4 = 0;
  while ( !*((_DWORD *)v3 + 36) || *(_QWORD *)v3 != a2 )
  {
    ++v4;
    v3 += 512;
    if ( v4 >= 0xA )
      return result;
  }
  return (InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis *)((char *)this + 512 * (unsigned __int64)v4 + 8);
}
