/*
 * XREFs of ?UpdateOnManipulationThread@CManipulationTelemetryData@@UEAAXAEBUManipulationThreadTelemetryData@@@Z @ 0x1800DD2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CManipulationTelemetryData::UpdateOnManipulationThread(
        CManipulationTelemetryData *this,
        const struct ManipulationThreadTelemetryData *a2)
{
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)a2;
  *(_OWORD *)((char *)this + 40) = *((_OWORD *)a2 + 1);
  *(_OWORD *)((char *)this + 56) = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)this + 72) = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)this + 88) = *((_OWORD *)a2 + 4);
}
