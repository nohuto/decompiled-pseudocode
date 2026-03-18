/*
 * XREFs of IcInitGlobalState @ 0x1C008F3F0
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEDC4 (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C0081548 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
