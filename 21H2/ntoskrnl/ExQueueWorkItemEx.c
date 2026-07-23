/*
 * XREFs of ExQueueWorkItemEx @ 0x1402681A8
 * Callers:
 *     PopFxResidentTimeoutDpcRoutine @ 0x140247C60 (PopFxResidentTimeoutDpcRoutine.c)
 *     KeTerminateThread @ 0x140266490 (KeTerminateThread.c)
 *     PopPepIdleTimeoutDpcRoutine @ 0x140574C00 (PopPepIdleTimeoutDpcRoutine.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x1402E2F38 (ExpValidateWorkItem.c)
 *     ExpTypeToPriority @ 0x1402E2F80 (ExpTypeToPriority.c)
 *     ExpQueueWorkItem @ 0x1402E5CF0 (ExpQueueWorkItem.c)
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
