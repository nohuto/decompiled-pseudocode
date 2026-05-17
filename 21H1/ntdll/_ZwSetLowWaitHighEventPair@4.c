/*
 * XREFs of _ZwSetLowWaitHighEventPair@4 @ 0x4B2F43D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetLowWaitHighEventPair(int a1)
{
  return Wow64SystemServiceCall();
}
