/*
 * XREFs of CmpSetPriorityThread @ 0x140321DCC
 * Callers:
 *     CmpDoFileWrite @ 0x140663CFC (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
