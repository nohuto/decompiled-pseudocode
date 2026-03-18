/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C008E450
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C00807D8 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
