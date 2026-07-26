/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C0108614
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145088 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E4B38);
  qword_1C00E4B30 = (__int64)&qword_1C00E4B28;
  qword_1C00E4B28 = &qword_1C00E4B28;
}
