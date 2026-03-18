/*
 * XREFs of IoSetActivityIdThread @ 0x1402E53E0
 * Callers:
 *     IopSynchronousServiceTail @ 0x1405FD780 (IopSynchronousServiceTail.c)
 *     PiDqIrpQueryCreate @ 0x1406A0E7C (PiDqIrpQueryCreate.c)
 *     PnpDeviceEventWorker @ 0x14070A0D0 (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074BA90 (PiDqObjectManagerServiceActionQueue.c)
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
