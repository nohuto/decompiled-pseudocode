/*
 * XREFs of ExQueueWorkItemEx @ 0x1402EEBC0
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x1402519B0 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x1402F00BC (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x14045E5B0 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpQueueWorkItem @ 0x1402EF0CC (ExpQueueWorkItem.c)
 *     ExpTypeToPriority @ 0x1402EF304 (ExpTypeToPriority.c)
 *     ExpValidateWorkItem @ 0x140346210 (ExpValidateWorkItem.c)
 */

__int64 __fastcall ExQueueWorkItemEx(ULONG_PTR a1, unsigned int a2, int a3)
{
  int v5; // esi
  int v6; // eax

  v5 = a1;
  ExpValidateWorkItem(a1);
  v6 = ExpTypeToPriority(a2);
  return ExpQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), v5, v6, a3, 0);
}
