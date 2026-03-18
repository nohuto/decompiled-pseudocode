/*
 * XREFs of ExpWorkQueueManagerStart @ 0x1407ACD44
 * Callers:
 *     ExpPartitionStart @ 0x1407ACC94 (ExpPartitionStart.c)
 *     ExpNodeHotAddProcessorWorker @ 0x140951420 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExpPartitionCreateSystemThread @ 0x1406553F4 (ExpPartitionCreateSystemThread.c)
 */

__int64 __fastcall ExpWorkQueueManagerStart(__int64 a1, __int64 a2, int a3)
{
  unsigned int SystemThread; // ecx

  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), 1LL, 0LL) )
  {
    return 0;
  }
  else
  {
    SystemThread = ExpPartitionCreateSystemThread(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), a3);
    _InterlockedExchange64((volatile __int64 *)(a1 + 264), 0LL);
  }
  return SystemThread;
}
