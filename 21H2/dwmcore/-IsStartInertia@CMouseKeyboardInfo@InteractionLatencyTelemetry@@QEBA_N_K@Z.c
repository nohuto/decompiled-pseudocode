/*
 * XREFs of ?IsStartInertia@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001A1DC
 * Callers:
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18001A14C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAHPEBU.c)
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@2@@Z @ 0x18001AE6C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@InteractionLatencyTelemetry@@QEAAJPEBU.c)
 * Callees:
 *     ?IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z @ 0x18001ABCC (-IsValid@CMouseKeyboardInfo@InteractionLatencyTelemetry@@QEBA_N_K@Z.c)
 */

char __fastcall InteractionLatencyTelemetry::CMouseKeyboardInfo::IsStartInertia(
        InteractionLatencyTelemetry::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  int v2; // ebx
  char v3; // r11
  char v4; // al

  v2 = *(_DWORD *)this;
  if ( InteractionLatencyTelemetry::CMouseKeyboardInfo::IsValid(this, a2) )
  {
    if ( v2 == 257 || v2 == 514 )
      return 1;
  }
  else
  {
    v4 = v3;
    if ( ((v2 - 522) & 0xFFFFFFFB) == 0 )
      return 1;
    return v4;
  }
  return v3;
}
