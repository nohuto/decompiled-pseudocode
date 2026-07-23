/*
 * XREFs of RtlDereferenceAtomTable @ 0x14034966C
 * Callers:
 *     SepDereferenceLowBoxNumberEntry @ 0x140697B98 (SepDereferenceLowBoxNumberEntry.c)
 * Callees:
 *     RtlDestroyAtomTable @ 0x1406F1B30 (RtlDestroyAtomTable.c)
 */

NTSTATUS __fastcall RtlDereferenceAtomTable(void *a1)
{
  return RtlDestroyAtomTable(a1);
}
