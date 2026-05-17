/*
 * XREFs of _NtSetHighWaitLowEventPair@4 @ 0x4B2F42B0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall NtSetHighWaitLowEventPair(int a1)
{
  return Wow64SystemServiceCall();
}
