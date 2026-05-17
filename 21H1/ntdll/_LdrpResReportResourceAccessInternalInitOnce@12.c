/*
 * XREFs of _LdrpResReportResourceAccessInternalInitOnce@12 @ 0x4B2AE030
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

int __thiscall LdrpResReportResourceAccessInternalInitOnce(void *this, int a2, int a3, int a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(this);
  dword_4B3A65EC = (unsigned __int16)(__rdtsc() >> 4);
  return 1;
}
