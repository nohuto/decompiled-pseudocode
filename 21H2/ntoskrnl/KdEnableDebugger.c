/*
 * XREFs of KdEnableDebugger @ 0x140510F80
 * Callers:
 *     KdpStub @ 0x140261854 (KdpStub.c)
 *     NtSystemDebugControl @ 0x1407CFD70 (NtSystemDebugControl.c)
 *     KiVerifyXcpt15 @ 0x140A1C320 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x140A1CBA0 (KiFilterFiberContext.c)
 * Callees:
 *     KdEnableDebuggerWithLock @ 0x140510FBC (KdEnableDebuggerWithLock.c)
 *     KeRelaxTimingConstraints @ 0x1405121D8 (KeRelaxTimingConstraints.c)
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
