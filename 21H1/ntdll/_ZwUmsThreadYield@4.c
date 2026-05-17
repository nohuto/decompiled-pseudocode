/*
 * XREFs of _ZwUmsThreadYield@4 @ 0x4B2F45D0
 * Callers:
 *     <none>
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwUmsThreadYield(int a1)
{
  return Wow64SystemServiceCall();
}
