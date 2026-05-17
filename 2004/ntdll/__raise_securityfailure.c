/*
 * XREFs of __raise_securityfailure @ 0x18008C264
 * Callers:
 *     __report_securityfailure @ 0x18008C3FC (__report_securityfailure.c)
 * Callees:
 *     RtlUnhandledExceptionFilter @ 0x18009C740 (RtlUnhandledExceptionFilter.c)
 */

__int64 _raise_securityfailure()
{
  RtlUnhandledExceptionFilter();
  return ZwTerminateProcess(-1LL, 3221226505LL);
}
