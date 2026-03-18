/*
 * XREFs of ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18015FCA4
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x18000399C (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K@Z @ 0x18015FBFC (-IsManipulationStateChange@CTelemetryTouchLatencyAnalysis@@QEAAHPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 * Callees:
 *     ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x18000417C (-IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsStartInertia(
        CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  int v2; // ebx
  unsigned int v3; // r11d
  unsigned int v4; // ecx

  v2 = *(_DWORD *)this;
  if ( (unsigned int)CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(this, a2) )
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
