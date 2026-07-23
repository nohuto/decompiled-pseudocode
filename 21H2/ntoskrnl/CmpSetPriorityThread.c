/*
 * XREFs of CmpSetPriorityThread @ 0x1402509BC
 * Callers:
 *     CmpDoFileWrite @ 0x1406A362C (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
