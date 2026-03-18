/*
 * XREFs of ExQueueWorkItemEx @ 0x1402D5148
 * Callers:
 *     KeTerminateThread @ 0x1402D602C (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140328120 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140572FB0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x14028DAE0 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402D49F8 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x1402D4A18 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
