/*
 * XREFs of IoClearActivityIdThread @ 0x1402DE990
 * Callers:
 *     PiDqObjectManagerServiceActionQueue @ 0x140775990 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqIrpQueryCreate @ 0x1407768EC (PiDqIrpQueryCreate.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IoClearActivityIdThread(struct _LIST_ENTRY *a1)
{
  struct _KTHREAD *result; // rax

  result = KeGetCurrentThread();
  result[1].WaitBlock[1].WaitListEntry.Flink = a1;
  return result;
}
