/*
 * XREFs of ExpPartitionCreateSystemThread @ 0x1406EDEF8
 * Callers:
 *     ExpCreateWorkerThread @ 0x1406EDE1C (ExpCreateWorkerThread.c)
 *     ExpWorkQueueManagerStart @ 0x1407BDDE4 (ExpWorkQueueManagerStart.c)
 * Callees:
 *     ExpNodeCreateSystemThread @ 0x1406EDF4C (ExpNodeCreateSystemThread.c)
 */

__int64 __fastcall ExpPartitionCreateSystemThread(__int64 a1, int a2, int a3)
{
  return ExpNodeCreateSystemThread(a2, a2, a3, *(_QWORD *)(*(_QWORD *)a1 + 112LL));
}
