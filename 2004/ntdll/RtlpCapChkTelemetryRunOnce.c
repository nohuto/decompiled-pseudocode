/*
 * XREFs of RtlpCapChkTelemetryRunOnce @ 0x180085220
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A8C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 RtlpCapChkTelemetryRunOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180164590);
  RtlpPerformanceCounterFrequency = MEMORY[0x7FFE0300];
  return 1LL;
}
