/*
 * XREFs of ExpWorkQueueManagerStart @ 0x1407AFEA4
 * Callers:
 *     ExpPartitionStart @ 0x1407AFDF4 (ExpPartitionStart.c)
 *     ExpNodeHotAddProcessorWorker @ 0x1409527C0 (ExpNodeHotAddProcessorWorker.c)
 * Callees:
 *     ExpPartitionCreateSystemThread @ 0x1406CFA54 (ExpPartitionCreateSystemThread.c)
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
