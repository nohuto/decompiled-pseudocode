/*
 * XREFs of KdDisableDebugger @ 0x1403CB6D0
 * Callers:
 *     NtSystemDebugControl @ 0x1407B9F40 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdDisableDebuggerWithLock @ 0x1403CB6E8 (KdDisableDebuggerWithLock.c)
 */

NTSTATUS KdDisableDebugger(void)
{
  return KdDisableDebuggerWithLock();
}
