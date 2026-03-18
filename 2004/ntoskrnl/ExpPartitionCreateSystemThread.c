/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1406CFA54
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406CF978 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x1407AFEA4 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1406CFAA8 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}
