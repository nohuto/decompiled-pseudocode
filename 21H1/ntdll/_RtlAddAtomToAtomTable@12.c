/*
 * XREFs of _RtlAddAtomToAtomTable@12 @ 0x4B2E00D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlAddAtomToAtomTableEx@16 @ 0x4B2E00E8 (_RtlAddAtomToAtomTableEx@16.c)
 */

NTSTATUS __cdecl RtlAddAtomToAtomTable(PVOID AtomTableHandle, PWSTR AtomName, PRTL_ATOM Atom)
{
  int v3; // ecx

  return RtlAddAtomToAtomTableEx(Atom, v3);
}
