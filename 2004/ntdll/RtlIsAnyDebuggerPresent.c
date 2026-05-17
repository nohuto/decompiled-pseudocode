/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800FF000
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D8020 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800ED490 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF0CC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x1801005D0 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x18010AC38 (RtlpReportHeapFailure.c)
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
