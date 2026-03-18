/*
 * XREFs of ?RenderThreadStartTime@CManipulationTelemetryData@@UEAAX_K@Z @ 0x1800DE6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationTelemetryData::RenderThreadStartTime(CManipulationTelemetryData *this, __int64 a2)
{
  *((_QWORD *)this + 21) = a2;
}
