/*
 * XREFs of EtwpGetCurrentSiloState @ 0x1405A8CF4
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x1409419E0 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x14023CD40 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwpGetCurrentSiloState()
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
}
