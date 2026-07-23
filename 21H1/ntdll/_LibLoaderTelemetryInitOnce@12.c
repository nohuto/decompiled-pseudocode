/*
 * XREFs of _LibLoaderTelemetryInitOnce@12 @ 0x4B2ADCF0
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

LOGICAL __thiscall LibLoaderTelemetryInitOnce(void *this, PRTL_RUN_ONCE a2, PVOID a3, PVOID *a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_4B3A32F0, (int)this);
  return 1;
}
