/*
 * XREFs of ?ndisIfStackTableSubsystemInitialize@@YAXXZ @ 0x1C01085B4
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145064 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfStackTableSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E4B68);
  qword_1C00E4B60 = (__int64)&qword_1C00E4B58;
  qword_1C00E4B58 = &qword_1C00E4B58;
}
