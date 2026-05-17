/*
 * XREFs of _RtlWerpReportException@24 @ 0x4B33AB60
 * Callers:
 *     <none>
 * Callees:
 *     _ReportExceptionInternal@24 @ 0x4B33A3B1 (_ReportExceptionInternal@24.c)
 */

int __stdcall RtlWerpReportException(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5, _DWORD *a6)
{
  return ReportExceptionInternal(a1, a2, a3, a4, a5, a6);
}
