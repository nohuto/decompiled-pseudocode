/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403F66A0
 * Callers:
 *     BiSetBootEntryOrder @ 0x14096F5DC (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
