/*
 * XREFs of RtlCreateAtomTable @ 0x1405D0390
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x140201810 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
