/*
 * XREFs of TppReportExceptionFilter @ 0x1801121AC
 * Callers:
 *     TpCheckTerminateWorker @ 0x180054650 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18011212C (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800DC950 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
