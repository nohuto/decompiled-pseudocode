/*
 * XREFs of _NtQueryDriverEntryOrder@8 @ 0x4B2F3DC0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtQueryDriverEntryOrder(PULONG Ids, PULONG Count)
{
  return Wow64SystemServiceCall();
}
