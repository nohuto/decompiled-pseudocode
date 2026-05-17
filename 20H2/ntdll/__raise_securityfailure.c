/*
 * XREFs of __raise_securityfailure @ 0x18008C364
 * Callers:
 *     __report_securityfailure @ 0x18008C4FC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009C9E0 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
