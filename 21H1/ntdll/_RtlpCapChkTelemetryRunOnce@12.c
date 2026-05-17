/*
 * XREFs of _RtlpCapChkTelemetryRunOnce@12 @ 0x4B2F2670
 * Callers:
 *     <none>
 * Callees:
 *     _TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12 @ 0x4B2AE0E1 (_TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation@12.c)
 */

int __thiscall RtlpCapChkTelemetryRunOnce(void *this, int a2, int a3, int a4)
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(&dword_4B3A3430, (int)this);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1;
}
