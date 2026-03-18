/*
 * XREFs of CmpSetPriorityThread @ 0x14035F77C
 * Callers:
 *     CmpDoFileWrite @ 0x14061E5DC (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1402EBF90 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
