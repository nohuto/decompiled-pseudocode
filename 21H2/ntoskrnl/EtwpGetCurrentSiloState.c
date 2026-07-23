/*
 * XREFs of EtwpGetCurrentSiloState @ 0x1405AA954
 * Callers:
 *     NtTraceControl @ 0x1406DA6C0 (NtTraceControl.c)
 *     EtwSetPerformanceTraceInformation @ 0x140938730 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetPrivateSessionTraceHandle @ 0x14093F380 (EtwpGetPrivateSessionTraceHandle.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall EtwpGetCurrentSiloState(__int64 a1, __int64 a2)
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals(a1, a2) + 108);
}
