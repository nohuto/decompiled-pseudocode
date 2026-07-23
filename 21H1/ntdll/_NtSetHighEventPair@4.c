/*
 * XREFs of _NtSetHighEventPair@4 @ 0x4B2F42A0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtSetHighEventPair(HANDLE EventPairHandle)
{
  return Wow64SystemServiceCall();
}
