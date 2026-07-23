/*
 * XREFs of VsmEnclaveTelemetryInitOnce @ 0x1800D0480
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A9C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 __fastcall VsmEnclaveTelemetryInitOnce(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  __int64 result; // rax

  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((ULONGLONG *)&dword_180166590);
  result = 1LL;
  VSMEnclaveProvidersRegistered = 1;
  return result;
}
