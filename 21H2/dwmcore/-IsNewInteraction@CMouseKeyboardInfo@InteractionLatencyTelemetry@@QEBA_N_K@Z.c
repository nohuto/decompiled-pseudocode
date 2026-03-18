/*
 * XREFs of ?IsNewInteraction@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABA0
 * Callers:
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18001A14C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBU.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     ?IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABCC (-IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 */

char __fastcall InteractionLatencyTelemetry::CMouseKeyboardInfo::IsNewInteraction(
        InteractionLatencyTelemetry::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  char v3; // r11

  if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsValid(this, a2)
    && (*(_DWORD *)this == 256 || *(_DWORD *)this == 513 || *(_DWORD *)this == 522 || *(_DWORD *)this == 526) )
  {
    return 1;
  }
  return v3;
}
