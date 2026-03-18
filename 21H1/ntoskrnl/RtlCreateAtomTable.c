/*
 * XREFs of RtlCreateAtomTable @ 0x14069F7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x1402E50E0 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
