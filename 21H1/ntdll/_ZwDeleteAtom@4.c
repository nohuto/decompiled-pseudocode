/*
 * XREFs of _ZwDeleteAtom@4 @ 0x4B2F3670
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwDeleteAtom(RTL_ATOM Atom)
{
  return Wow64SystemServiceCall();
}
