/*
 * XREFs of _NtWaitLowEventPair@4 @ 0x4B2F46D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl NtWaitLowEventPair(HANDLE EventPairHandle)
{
  return Wow64SystemServiceCall();
}
