/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180083EB0
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A9C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall LdrpResReportResourceAccessInternalInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((ULONGLONG *)&dword_180166520);
  dword_18016D190 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
