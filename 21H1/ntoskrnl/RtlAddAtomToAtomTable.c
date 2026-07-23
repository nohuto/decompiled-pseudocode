/*
 * XREFs of RtlAddAtomToAtomTable @ 0x1406E8960
 * Callers:
 *     <none>
 * Callees:
 *     RtlAddAtomToAtomTableEx @ 0x1402A8F50 (RtlAddAtomToAtomTableEx.c)
 */

NTSTATUS __cdecl RtlAddAtomToAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  return RtlAddAtomToAtomTableEx((__int64)AtomTableHandle, AtomName, Atom, 0);
}
