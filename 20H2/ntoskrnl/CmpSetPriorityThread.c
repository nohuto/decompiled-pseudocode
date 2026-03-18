/*
 * XREFs of CmpSetPriorityThread @ 0x1403304EC
 * Callers:
 *     CmpDoFileWrite @ 0x14064F21C (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402DAB40 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
