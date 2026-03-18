/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403FB270
 * Callers:
 *     BiSetBootEntryOrder @ 0x1409753AC (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
