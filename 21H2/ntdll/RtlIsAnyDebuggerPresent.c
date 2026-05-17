/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800FF3B0
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D8170 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800ED830 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF47C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100980 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x18010AFE8 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

unsigned __int8 RtlIsAnyDebuggerPresent()
{
  unsigned __int8 result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
