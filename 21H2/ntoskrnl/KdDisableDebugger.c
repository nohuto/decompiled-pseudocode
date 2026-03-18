/*
 * XREFs of KdDisableDebugger @ 0x140565360
 * Callers:
 *     NtSystemDebugControl @ 0x1406DC120 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140AD6320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140AD6B90 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x140565378 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
