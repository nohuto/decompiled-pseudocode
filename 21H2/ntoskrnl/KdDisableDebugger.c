/*
 * XREFs of KdDisableDebugger @ 0x1403CFA20
 * Callers:
 *     NtSystemDebugControl @ 0x1407CFC00 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A1B320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1BBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1403CFA38 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
