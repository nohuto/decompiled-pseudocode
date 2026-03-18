/*
 * XREFs of IoClearActivityIdThread @ 0x1402E5400
 * Callers:
 *     PiDqIrpQueryCreate @ 0x1406A0E7C (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14074BA90 (PiDqObjectManagerServiceActionQueue.c)
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
