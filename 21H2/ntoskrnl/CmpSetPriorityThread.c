/*
 * XREFs of CmpSetPriorityThread @ 0x1402D25EC
 * Callers:
 *     CmpDoFileWrite @ 0x1406715BC (CmpDoFileWrite.c)
 * Callees:
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 */

KPRIORITY __fastcall CmpSetPriorityThread(struct _KTHREAD *a1, KPRIORITY a2)
{
  return KeSetPriorityThread(a1, a2);
}
