/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403FB270
 * Callers:
 *     BiSetBootEntryOrder @ 0x1409753AC (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
