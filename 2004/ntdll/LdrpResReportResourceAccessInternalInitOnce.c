/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x1800839B0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LdrpResReportResourceAccessInternalInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180164450);
  dword_18016B190 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
