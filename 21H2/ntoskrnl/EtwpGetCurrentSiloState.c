/*
 * XREFs of EtwpGetCurrentSiloState @ 0x14045F8A6
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 EtwpGetCurrentSiloState()
{
  return *((_QWORD *)PsGetCurrentServerSiloGlobals() + 108);
}
