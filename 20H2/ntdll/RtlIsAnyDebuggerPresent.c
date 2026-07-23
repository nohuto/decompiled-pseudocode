/*
 * XREFs of RtlIsAnyDebuggerPresent @ 0x1800FF510
 * Callers:
 *     RtlQueryProcessLockInformation @ 0x1800D83C0 (RtlQueryProcessLockInformation.c)
 *     RtlAssert @ 0x1800ED9A0 (RtlAssert.c)
 *     RtlReportCriticalFailure @ 0x1800FF5DC (RtlReportCriticalFailure.c)
 *     RtlUnhandledExceptionFilter2 @ 0x180100AE0 (RtlUnhandledExceptionFilter2.c)
 *     RtlpReportHeapFailure @ 0x18010B148 (RtlpReportHeapFailure.c)
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
