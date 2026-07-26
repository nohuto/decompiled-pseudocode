/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C010864C
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145088 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E5F38);
  qword_1C00E5F30 = (__int64)&qword_1C00E5F28;
  qword_1C00E5F28 = (__int64)&qword_1C00E5F28;
}
