/*
 * XREFs of RtlCreateAtomTable @ 0x1406F32B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCreateAtomTableEx @ 0x14033BB70 (RtlCreateAtomTableEx.c)
 */

NTSTATUS __cdecl RtlCreateAtomTable(ULONG NumberOfBuckets, PVOID *AtomTableHandle)
{
  return RtlCreateAtomTableEx(NumberOfBuckets, 0, AtomTableHandle);
}
