/*
 * XREFs of __raise_securityfailure @ 0x18008C964
 * Callers:
 *     __report_securityfailure @ 0x18008CAFC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009CEA0 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall _raise_securityfailure(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
