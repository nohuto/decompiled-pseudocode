/*
 * XREFs of ??0CManipulationTelemetryData@@QEAA@PEAVCComposition@@I@Z @ 0x1801C5E6C
 * Callers:
 *     ?GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ @ 0x1801C63C4 (-GetTelemetryDataNoRef@CInteraction@@QEAAPEAUIManipulationTelemetryData@@XZ.c)
 * Callees:
 *     <none>
 */

CManipulationTelemetryData *__fastcall CManipulationTelemetryData::CManipulationTelemetryData(
        CManipulationTelemetryData *this,
        struct CComposition *a2,
        int a3)
{
  char *v6; // rcx
  CManipulationTelemetryData *result; // rax

  *(_QWORD *)this = &CManipulationTelemetryData::`vftable'{for `IManipulationTelemetryData'};
  *((_QWORD *)this + 1) = &CManipulationTelemetryData::`vftable'{for `CMILRefCountBase'};
  *((_DWORD *)this + 4) = 0;
  v6 = (char *)this + 104;
  *((_DWORD *)v6 + 4) = 0;
  v6[20] = 0;
  *((_QWORD *)v6 + 1) = v6;
  *(_QWORD *)v6 = v6;
  InitializeCriticalSection((LPCRITICAL_SECTION)(v6 + 24));
  *((_QWORD *)this + 22) = a2;
  result = this;
  *((_DWORD *)this + 46) = a3;
  return result;
}
