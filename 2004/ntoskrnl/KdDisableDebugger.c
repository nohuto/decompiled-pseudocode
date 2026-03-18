/*
 * XREFs of KdDisableDebugger @ 0x1403CC490
 * Callers:
 *     NtSystemDebugControl @ 0x1407BD0B0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1403CC4A8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
