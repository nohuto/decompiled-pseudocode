/*
 * XREFs of RtlDereferenceAtomTable @ 0x1402E12C8
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x14068D15C (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x14068CEA0 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
