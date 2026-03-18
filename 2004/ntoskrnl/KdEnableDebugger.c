/*
 * XREFs of KdEnableDebugger @ 0x14050B8E0
 * Callers:
 *     KdpStub @ 0x1402E5EC4 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1407BD0B0 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A18320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A18BA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x14050B91C (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x14050CB38 (KeRelaxTimingConstraints.c)
 */

NTSTATUS KdEnableDebugger(void)
{
  unsigned __int8 v0; // al
  __int64 v1; // rcx
  unsigned int v2; // edi
  NTSTATUS v3; // ebx

  v0 = KeRelaxTimingConstraints(1LL);
  LOBYTE(v1) = 1;
  v2 = v0;
  v3 = KdEnableDebuggerWithLock(v1);
  KeRelaxTimingConstraints(v2);
  return v3;
}
