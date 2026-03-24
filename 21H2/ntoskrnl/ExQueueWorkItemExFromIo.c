/*
 * XREFs of ExQueueWorkItemExFromIo @ 0x1405B6F68
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140507180 (IoQueueWorkItemToNode.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E6E8 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E730 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemExFromIo(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 1u);
}
