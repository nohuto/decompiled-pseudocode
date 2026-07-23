/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800FF370
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D8130 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800ED7F0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF43C (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100940 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x18010AFA8 (RtlpReportHeapFailure.c)
 * Callees:
 *     <none>
 */

BOOLEAN RtlIsAnyDebuggerPresent(void)
{
  BOOLEAN result; // al

  result = NtCurrentPeb()->BeingDebugged;
  if ( !result )
    return (MEMORY[0x7FFE02D4] & 3) == 3;
  return result;
}
