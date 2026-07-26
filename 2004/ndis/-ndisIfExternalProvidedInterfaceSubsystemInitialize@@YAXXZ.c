/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C01085EC
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145064 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E5F78);
  qword_1C00E5F70 = (__int64)&qword_1C00E5F68;
  qword_1C00E5F68 = (__int64)&qword_1C00E5F68;
}
