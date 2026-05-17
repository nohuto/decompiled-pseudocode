/*
 * XREFs of _ZwSetLowEventPair@4 @ 0x4B2F43C0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwSetLowEventPair(int a1)
{
  return Wow64SystemServiceCall();
}
