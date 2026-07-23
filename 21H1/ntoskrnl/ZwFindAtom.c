/*
 * XREFs of ZwFindAtom @ 0x1403F25B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwFindAtom(PWSTR AtomName, ULONG Length, PRTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(AtomName);
}
