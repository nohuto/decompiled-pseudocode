/*
 * XREFs of _ZwSetLowEventPair@4 @ 0x4B2F43C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwSetLowEventPair(HANDLE EventPairHandle)
{
  return Wow64SystemServiceCall();
}
