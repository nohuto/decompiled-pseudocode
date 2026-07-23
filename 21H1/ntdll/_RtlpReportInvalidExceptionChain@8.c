/*
 * XREFs of _RtlpReportInvalidExceptionChain@8 @ 0x4B366649
 * Callers:
 *     _RtlDispatchException@8 @ 0x4B2E8F8C (_RtlDispatchException@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlReportException@12 @ 0x4B33A4D0 (_RtlReportException@12.c)
 */

NTSTATUS __fastcall RtlpReportInvalidExceptionChain(_EXCEPTION_RECORD *a1, _CONTEXT *a2)
{
  size_t v5; // [esp-4h] [ebp-64h]
  EXCEPTION_RECORD ExceptionRecord; // [esp+8h] [ebp-58h] BYREF

  LODWORD(v5) = 80;
  memset(&ExceptionRecord, 0, v5);
  ExceptionRecord.ExceptionAddress = a1->ExceptionAddress;
  ExceptionRecord.ExceptionCode = -1073740791;
  ExceptionRecord.ExceptionFlags = 8;
  ExceptionRecord.ExceptionRecord = a1;
  ExceptionRecord.NumberParameters = 1;
  ExceptionRecord.ExceptionInformation[0] = 21;
  return RtlReportException(&ExceptionRecord, a2, 0xFu);
}
