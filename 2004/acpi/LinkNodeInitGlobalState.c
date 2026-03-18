/*
 * XREFs of LinkNodeInitGlobalState @ 0x1C008F3D0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEDC4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 LinkNodeInitGlobalState()
{
  qword_1C0081618 = (__int64)&LinkNodeListHead;
  LinkNodeListHead = (__int64)&LinkNodeListHead;
  return 0LL;
}
