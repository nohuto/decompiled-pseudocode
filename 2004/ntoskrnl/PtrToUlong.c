/*
 * XREFs of PtrToUlong @ 0x1403565E0
 * Callers:
 *     NtTraceControl @ 0x14068D910 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
