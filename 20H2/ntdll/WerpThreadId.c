/*
 * XREFs of WerpThreadId @ 0x1800DDF08
 * Callers:
 *     RtlReportExceptionEx @ 0x1800DCDC0 (RtlReportExceptionEx.c)
 *     RtlReportExceptionHelper @ 0x1800DD290 (RtlReportExceptionHelper.c)
 * Callees:
 *     ZwQueryInformationThread @ 0x18009D550 (ZwQueryInformationThread.c)
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
