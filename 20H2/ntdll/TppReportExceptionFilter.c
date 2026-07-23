/*
 * XREFs of TppReportExceptionFilter @ 0x1801126BC
 * Callers:
 *     TpCheckTerminateWorker @ 0x1800546A0 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18011263C (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800DCCF0 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
