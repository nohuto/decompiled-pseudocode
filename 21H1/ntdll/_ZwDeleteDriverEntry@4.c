/*
 * XREFs of _ZwDeleteDriverEntry@4 @ 0x4B2F3690
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwDeleteDriverEntry(ULONG Id)
{
  return Wow64SystemServiceCall();
}
