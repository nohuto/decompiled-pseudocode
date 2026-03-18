/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403F5410
 * Callers:
 *     BiSetBootEntryOrder @ 0x14096E23C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
