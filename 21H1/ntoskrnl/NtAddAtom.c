/*
 * XREFs of NtAddAtom @ 0x1409522C0
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406CF0B0 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
