/*
 * XREFs of KdDisableDebugger @ 0x1403CFB90
 * Callers:
 *     NtSystemDebugControl @ 0x1407CFD70 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1CBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1403CFBA8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
