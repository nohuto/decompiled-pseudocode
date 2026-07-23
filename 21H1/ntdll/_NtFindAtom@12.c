/*
 * XREFs of _NtFindAtom@12 @ 0x4B2F2AA0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  return Wow64SystemServiceCall();
}
