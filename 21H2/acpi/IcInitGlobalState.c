/*
 * XREFs of IcInitGlobalState @ 0x1C008E470
 * Callers:
 *     AcpiIrqLibInitializeGlobalState @ 0x1C00BEA3C (AcpiIrqLibInitializeGlobalState.c)
 * Callees:
 *     <none>
 */

__int64 IcInitGlobalState()
{
  qword_1C00805F8 = (__int64)&IcListHead;
  IcListHead = (__int64)&IcListHead;
  return 0LL;
}
