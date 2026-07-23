/*
 * XREFs of ZwSetBootEntryOrder @ 0x1403F5410
 * Callers:
 *     BiSetBootEntryOrder @ 0x14096E23C (BiSetBootEntryOrder.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetBootEntryOrder(PULONG Ids, ULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
