/*
 * XREFs of PtrToUlong @ 0x1403189F0
 * Callers:
 *     NtTraceControl @ 0x1405F56E0 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
