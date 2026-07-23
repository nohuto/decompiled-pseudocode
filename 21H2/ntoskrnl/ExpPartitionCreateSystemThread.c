/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1406A72E4
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406A7208 (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x1407C2704 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1406A7338 (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}
