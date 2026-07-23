/*
 * XREFs of RtlDereferenceAtomTable @ 0x140203000
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x1405EE698 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1405D5B30 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
