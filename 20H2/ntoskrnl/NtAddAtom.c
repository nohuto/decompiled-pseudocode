/*
 * XREFs of NtAddAtom @ 0x140959420
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1406C3EA0 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
