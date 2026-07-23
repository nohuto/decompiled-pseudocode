/*
 * XREFs of ZwDeleteAtom @ 0x1403F4FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwDeleteAtom(RTL_ATOM Atom)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Atom);
}
