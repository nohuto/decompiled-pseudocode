/*
 * XREFs of __raise_securityfailure @ 0x18008C964
 * Callers:
 *     __report_securityfailure @ 0x18008CAFC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009CEA0 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
