/*
 * XREFs of IoSetActivityIdThread @ 0x140273430
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1405D243C (PiDqIrpQueryCreate.c)
 *     PnpDeviceEventWorker @ 0x140648C30 (PnpDeviceEventWorker.c)
 *     IopSynchronousServiceTail @ 0x140675860 (IopSynchronousServiceTail.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074FEB0 (PiDqObjectManagerServiceActionQueue.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall IoSetActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  struct _LIST_ENTRY *result; // rax

  CurrentThread = KeGetCurrentThread();
  result = CurrentThread[1].WaitBlock[1].WaitListEntry.Flink;
  CurrentThread[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
