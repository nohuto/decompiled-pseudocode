/*
 * XREFs of NtAddAtom @ 0x140953660
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406F03B0 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
