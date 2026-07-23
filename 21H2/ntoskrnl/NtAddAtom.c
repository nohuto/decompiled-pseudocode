/*
 * XREFs of NtAddAtom @ 0x140956E70
 * Callers:
 *     <none>
 * Callees:
 *     NtAddAtomEx @ 0x1405FEBB0 (NtAddAtomEx.c)
 */

NTSTATUS __cdecl NtAddAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return NtAddAtomEx(AtomName, Length, Atom, 0);
}
