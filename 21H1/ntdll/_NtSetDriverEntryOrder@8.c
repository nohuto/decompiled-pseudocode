/*
 * XREFs of _NtSetDriverEntryOrder@8 @ 0x4B2F4280
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetDriverEntryOrder(PULONG Ids, ULONG Count)
{
  return Wow64SystemServiceCall();
}
