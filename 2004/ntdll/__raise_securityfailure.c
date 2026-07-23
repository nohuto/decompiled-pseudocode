/*
 * XREFs of __raise_securityfailure @ 0x18008C264
 * Callers:
 *     __report_securityfailure @ 0x18008C3FC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009C740 (RtlUnhandledExceptionFilter.c)
 */

NTSTATUS __fastcall _raise_securityfailure(_EXCEPTION_POINTERS *a1)
{
  RtlUnhandledExceptionFilter(a1);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073740791);
}
