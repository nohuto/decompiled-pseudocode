/*
 * XREFs of ZwUmsThreadYield @ 0x1403FBA30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwUmsThreadYield(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
