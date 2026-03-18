/*
 * XREFs of ??1TouchUpdateInfo@InteractionLatencyTelemetry@@QEAA@XZ @ 0x18001A968
 * Callers:
 *     ??_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z @ 0x18001A93C (--_GTouchUpdateInfo@InteractionLatencyTelemetry@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall InteractionLatencyTelemetry::TouchUpdateInfo::~TouchUpdateInfo(
        InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis **this)
{
  if ( this[26] )
    InteractionLatencyTelemetry::CTelemetryTouchLatencyAnalysis::UnreferenceScenario(
      this[26],
      (unsigned __int64)*this,
      0xFFFFFFFFFFFFFFFFuLL);
}
