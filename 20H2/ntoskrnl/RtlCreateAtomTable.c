/*
 * XREFs of RtlCreateAtomTable @ 0x1406F32B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14033BB70 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __fastcall RtlCreateAtomTable(unsigned int a1, _QWORD *a2)
{
  return RtlCreateAtomTableEx(a1, 0, a2);
}
