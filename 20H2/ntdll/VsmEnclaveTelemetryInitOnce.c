/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800D0500
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045ADC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 VsmEnclaveTelemetryInitOnce()
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180166590);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
