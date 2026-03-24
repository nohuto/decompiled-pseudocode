/*
 * XREFs of ?IsValid@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x1800233BC
 * Callers:
 *     ?UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@@_K_NAEB_KIAEBU_LUID@@2PEAPEAUTouchUpdateInfo@1@@Z @ 0x180022BDC (-UpdateInteractionProgress@CTelemetryTouchLatencyAnalysis@@QEAAJPEBUTOUCH_TELEMETRY_UPDATE_INFO@.c)
 *     ?IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x180023390 (-IsNewInteraction@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 *     ?IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z @ 0x1801601C4 (-IsStartInertia@CMouseKeyboardInfo@CTelemetryTouchLatencyAnalysis@@QEBAH_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo::IsValid(
        CTelemetryTouchLatencyAnalysis::CMouseKeyboardInfo *this,
        unsigned __int64 a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // ecx

  v3 = 1;
  if ( a2 < *((_QWORD *)this + 2) || ((*(_DWORD *)this - 522) & 0xFFFFFFFB) != 0 || a2 - *((_QWORD *)this + 2) > 4 )
  {
    v4 = *(_DWORD *)this;
    if ( (v4 < 0x100 || v4 > 0x101 && v4 - 513 > 1) && ((v4 - 522) & 0xFFFFFFFB) != 0 )
      return 0;
    if ( a2 - *((_QWORD *)this + 2) > 0xA )
      return 0;
  }
  return v3;
}
