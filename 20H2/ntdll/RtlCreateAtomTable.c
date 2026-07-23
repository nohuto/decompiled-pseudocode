/*
 * XREFs of RtlCreateAtomTable @ 0x18004CCC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, (__int64)AtomTableHandle, AtomTableHandle);
}
