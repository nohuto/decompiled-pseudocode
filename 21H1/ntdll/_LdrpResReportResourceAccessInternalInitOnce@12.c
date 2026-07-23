/*
 * XREFs of _LdrpResReportResourceAccessInternalInitOnce@12 @ 0x4B2AE030
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

LOGICAL __thiscall LdrpResReportResourceAccessInternalInitOnce(void *this, PRTL_RUN_ONCE a2, PVOID a3, PVOID *a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_4B3A3318, (int)this);
  dword_4B3A65EC = (unsigned __int16)(__rdtsc() >> 4);
  return 1;
}
