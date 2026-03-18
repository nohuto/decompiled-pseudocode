/*
 * XREFs of ??0CManipulationTelemetryData@InteractionLatencyTelemetry@@QEAA@PEAVCComposition@@I@Z @ 0x1801F1B0C
 * Callers:
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTelemetry@@XZ @ 0x1801F2304 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@InteractionLatencyTeleme.c)
 * Callees:
 *     <none>
 */

InteractionLatencyTelemetry::CManipulationTelemetryData *__fastcall InteractionLatencyTelemetry::CManipulationTelemetryData::CManipulationTelemetryData(
        InteractionLatencyTelemetry::CManipulationTelemetryData *this,
        struct CComposition *a2,
        int a3)
{
  char *v6; // rcx
  InteractionLatencyTelemetry::CManipulationTelemetryData *result; // rax

  *(_QWORD *)this = &InteractionLatencyTelemetry::CManipulationTelemetryData::`vftable';
  *((_DWORD *)this + 2) = 0;
  v6 = (char *)this + 200;
  *((_DWORD *)v6 + 4) = 0;
  v6[20] = 0;
  *((_QWORD *)v6 + 1) = v6;
  *(_QWORD *)v6 = v6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
  *((_QWORD *)this + 34) = a2;
  result = this;
  *((_DWORD *)this + 70) = a3;
  return result;
}
