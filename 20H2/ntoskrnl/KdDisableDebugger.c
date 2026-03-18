/*
 * XREFs of KdDisableDebugger @ 0x1403CF0B0
 * Callers:
 *     NtSystemDebugControl @ 0x1407CB940 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A1E320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1EBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1403CF0C8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
