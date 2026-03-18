/*
 * XREFs of EtwpGetCurrentSiloState @ 0x1405A4B64
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093A910 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwpGetCurrentSiloState()
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
}
