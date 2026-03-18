/*
 * XREFs of IoSetActivityIdThread @ 0x1402401D0
 * Callers:
 *     IopSynchronousServiceTail @ 0x1406107D0 (IopSynchronousServiceTail.c)
 *     PiDqIrpQueryCreate @ 0x1406461E8 (PiDqIrpQueryCreate.c)
 *     PnpDeviceEventWorker @ 0x14064A080 (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14075EA90 (PiDqObjectManagerServiceActionQueue.c)
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
