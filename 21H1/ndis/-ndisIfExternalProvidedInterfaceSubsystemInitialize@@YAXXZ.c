/*
 * XREFs of ?ndisIfExternalProvidedInterfaceSubsystemInitialize@@YAXXZ @ 0x1C010867C
 * Callers:
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x1C0145038 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void ndisIfExternalProvidedInterfaceSubsystemInitialize(void)
{
  KeInitializeSpinLock(&qword_1C00E5E48);
  qword_1C00E5E40 = (__int64)&qword_1C00E5E38;
  qword_1C00E5E38 = (__int64)&qword_1C00E5E38;
}
