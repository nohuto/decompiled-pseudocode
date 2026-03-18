/*
 * XREFs of IoSetActivityIdThread @ 0x1402DE9B0
 * Callers:
 *     IopParseDevice @ 0x14072B8B0 (IopParseDevice.c)
 *     IopSynchronousServiceTail @ 0x140731680 (IopSynchronousServiceTail.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140775990 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x1407768EC (PiDqIrpQueryCreate.c)
 *     PnpDeviceEventWorker @ 0x1407D5E30 (PnpDeviceEventWorker.c)
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
