/*
 * XREFs of ExQueueWorkItemEx @ 0x1402FACC0
 * Callers:
 *     KeTerminateThread @ 0x1402F9A38 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x1402FCA20 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14056F580 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402B7B10 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402B9C18 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402B9C38 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
