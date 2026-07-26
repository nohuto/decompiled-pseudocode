/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C0108644
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145038 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E4A10);
  qword_1C00E4A08 = (__int64)&qword_1C00E4A00;
  qword_1C00E4A00 = &qword_1C00E4A00;
}
