/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x14063F338
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140558910 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402EF0CC (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402EF304 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 */

char __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = (int)a1;
  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 1u);
}
