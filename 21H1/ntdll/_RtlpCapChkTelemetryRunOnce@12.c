/*
 * XREFs of _RtlpCapChkTelemetryRunOnce@12 @ 0x4B2F2670
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

LOGICAL __thiscall RtlpCapChkTelemetryRunOnce(void *this, PRTL_RUN_ONCE a2, PVOID a3, PVOID *a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((char *)&dword_4B3A3430, (int)this);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1;
}
