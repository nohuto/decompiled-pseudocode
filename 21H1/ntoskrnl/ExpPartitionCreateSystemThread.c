/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1406553F4
 * Callers:
 *     ExpCreateWorkerThread @ 0x140655318 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x1407ACD44 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x140655448 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}
