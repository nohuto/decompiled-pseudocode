/*
 * XREFs of EtwpGetCurrentSiloState @ 0x1405AA724
 * Callers:
 *     NtTraceControl @ 0x1405EAF60 (NtTraceControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938560 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F1B0 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwpGetCurrentSiloState(__int64 a1, __int64 a2)
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
}
