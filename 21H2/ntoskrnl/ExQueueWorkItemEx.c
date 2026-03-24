/*
 * XREFs of ExQueueWorkItemEx @ 0x14027A208
 * Callers:
 *     KeTerminateThread @ 0x1402784F0 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1402C9380 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x1405749C0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14023E6E8 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x14023E730 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402414A0 (ExpQueueWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
