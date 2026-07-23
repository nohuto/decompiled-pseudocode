/*
 * XREFs of RtlRaiseExceptionForReturnAddressHijack @ 0x1800A1B10
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseException @ 0x180051020 (RtlRaiseException.c)
 */

void RtlRaiseExceptionForReturnAddressHijack(void)
{
  EXCEPTION_RECORD ExceptionRecord; // [rsp+20h] [rbp-B0h] BYREF

  ExceptionRecord.ExceptionCode = -2147483597;
  memset(&ExceptionRecord.ExceptionFlags, 0, 24);
  RtlRaiseException(&ExceptionRecord);
}
