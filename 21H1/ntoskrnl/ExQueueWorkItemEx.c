/*
 * XREFs of ExQueueWorkItemEx @ 0x140356CA0
 * Callers:
 *     KeTerminateThread @ 0x140355A18 (KeTerminateThread.c)
 *     PopFxResidentTimeoutDpcRoutine @ 0x140358A00 (PopFxResidentTimeoutDpcRoutine.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14056EF30 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x140224E90 (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x140226F98 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x140226FB8 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  int v6; // eax

  ExpValidateWorkItem(a1, a2);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), a1, v6, a3, 0);
}
