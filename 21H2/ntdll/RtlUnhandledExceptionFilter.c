/*
 * XREFs of RtlUnhandledExceptionFilter @ 0x18009CEA0
 * Callers:
 *     __raise_securityfailure @ 0x18008C964 (__raise_securityfailure.c)
 *     __report_gsfailure @ 0x18008C990 (__report_gsfailure.c)
 * Callees:
 *     <none>
 */

LONG __cdecl RtlUnhandledExceptionFilter(PEXCEPTION_POINTERS ExceptionPointers)
{
  return RtlUnhandledExceptionFilter2(ExceptionPointers, (ULONG)&Flags);
}
