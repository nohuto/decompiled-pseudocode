/*
 * XREFs of _VsmEnclaveTelemetryInitOnce@12 @ 0x4B330EF0
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

int __thiscall VsmEnclaveTelemetryInitOnce(void *this, int a2, int a3, int a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_4B3A3368, (int)this);
  VSMEnclaveProvidersRegistered = 1;
  return 1;
}
