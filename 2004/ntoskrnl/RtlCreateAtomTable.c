/*
 * XREFs of RtlCreateAtomTable @ 0x1405D0390
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140201810 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
