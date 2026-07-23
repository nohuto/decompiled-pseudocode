/*
 * XREFs of _NtDeleteBootEntry@4 @ 0x4B2F3680
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtDeleteBootEntry(ULONG Id)
{
  return Wow64SystemServiceCall();
}
