/*
 * XREFs of WerpThreadId @ 0x1800DDCB8
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCB70 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD040 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009DAE0 (ZwQueryInformationThread.c)
 */

__int64 WerpThreadId()
{
  int InformationThread; // eax
  unsigned int v1; // ecx
  unsigned int v3; // [rsp+48h] [rbp-20h]

  InformationThread = ZwQueryInformationThread();
  v1 = v3;
  if ( InformationThread < 0 )
    return 0;
  return v1;
}
