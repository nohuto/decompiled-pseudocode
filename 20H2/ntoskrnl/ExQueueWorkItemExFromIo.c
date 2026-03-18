/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x1405B5538
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140505600 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402D49F8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402D4A18 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1u);
}
