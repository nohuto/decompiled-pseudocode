/*
 * XREFs of PspEnumProcessesInJobHierarchy @ 0x14090B430
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 * Callees:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14068A3B8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 */

__int64 __fastcall PspEnumProcessesInJobHierarchy(_QWORD *a1, int a2, __int64 a3, int a4)
{
  return PspEnumJobsAndProcessesInJobHierarchy(a1, 0, 0, a2, a3, a4);
}
