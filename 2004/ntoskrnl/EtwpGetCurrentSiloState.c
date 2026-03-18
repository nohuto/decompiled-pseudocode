/*
 * XREFs of EtwpGetCurrentSiloState @ 0x1405A5254
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093BBB0 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwpGetCurrentSiloState()
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
}
