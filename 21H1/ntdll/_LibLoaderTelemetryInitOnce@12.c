/*
 * XREFs of _LibLoaderTelemetryInitOnce@12 @ 0x4B2ADCF0
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

int __thiscall LibLoaderTelemetryInitOnce(void *this, int a2, int a3, int a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(this);
  return 1;
}
