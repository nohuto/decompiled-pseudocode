/*
 * XREFs of PtrToUlong @ 0x1402EB730
 * Callers:
 *     NtTraceControl @ 0x140620910 (NtTraceControl.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 * Callees:
 *     <none>
 */

unsigned int __stdcall PtrToUlong(const void *p)
{
  return (unsigned int)p;
}
