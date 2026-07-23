/*
 * XREFs of _RtlUnhandledExceptionFilter@4 @ 0x4B3078D0
 * Callers:
 *     ___raise_securityfailure @ 0x4B2F4B30 (___raise_securityfailure.c)
 *     ___report_gsfailure @ 0x4B2F4B4B (___report_gsfailure.c)
 * Callees:
 *     _RtlUnhandledExceptionFilter2@8 @ 0x4B3686E0 (_RtlUnhandledExceptionFilter2@8.c)
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&dword_4B2850A4);
}
