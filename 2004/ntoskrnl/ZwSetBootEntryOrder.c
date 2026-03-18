/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403F66A0
 * Callers:
 *     BiSetBootEntryOrder @ 0x14096F5DC (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetBootEntryOrder(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
