/*
 * XREFs of ___raise_securityfailure @ 0x4B2F4B30
 * Callers:
 *     ___report_securityfailure @ 0x4B2F4C46 (___report_securityfailure.c)
 * Callees:
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _RtlUnhandledExceptionFilter@4 @ 0x4B3078D0 (_RtlUnhandledExceptionFilter@4.c)
 */

NTSTATUS __cdecl __raise_securityfailure(PEXCEPTION_POINTERS ExceptionPointers)
{
  RtlUnhandledExceptionFilter(ExceptionPointers);
  return ZwTerminateProcess((HANDLE)0xFFFFFFFF, -1073740791);
}
