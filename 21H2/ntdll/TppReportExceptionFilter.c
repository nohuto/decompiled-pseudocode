/*
 * XREFs of TppReportExceptionFilter @ 0x18011255C
 * Callers:
 *     TpCheckTerminateWorker @ 0x18004EC90 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x1801124DC (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800DCAA0 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 *a1)
{
  RtlReportException(*a1, a1[1], 3u);
  return 0LL;
}
