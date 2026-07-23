/*
 * XREFs of _TppReportExceptionFilter@4 @ 0x4B384919
 * Callers:
 *     _TpCheckTerminateWorker@4 @ 0x4B2EB4D0 (_TpCheckTerminateWorker@4.c)
 *     _TppRaiseInvalidParameter@0 @ 0x4B3848BD (_TppRaiseInvalidParameter@0.c)
 * Callees:
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

int __thiscall TppReportExceptionFilter(int this)
{
  RtlReportException(*(PEXCEPTION_RECORD *)this, *(PCONTEXT *)(this + 4), 3u);
  return 0;
}
