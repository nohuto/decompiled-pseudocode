/*
 * XREFs of ?RenderThreadStartTime@CManipulationTelemetryData@InteractionLatencyTelemetry@@UEAAX_K@Z @ 0x1800FAF70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::RenderThreadStartTime(
        InteractionLatencyTelemetry::CManipulationTelemetryData *this,
        __int64 a2)
{
  *((_QWORD *)this + 33) = a2;
}
