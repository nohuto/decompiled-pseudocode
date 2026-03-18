/*
 * XREFs of ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x180024600
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180023E4C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18016456C (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18002462C (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsNewInteraction(
        CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  unsigned int v3; // r11d

  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(this, a2)
    && (*(_DWORD *)this == 256 || *(_DWORD *)this == 513 || *(_DWORD *)this == 522 || *(_DWORD *)this == 526) )
  {
    return 1;
  }
  return v3;
}
