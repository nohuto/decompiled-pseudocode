/*
 * XREFs of ExQueueDebuggerWorker @ 0x1403C2C2C
 * Callers:
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140A66D84 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14026DC50 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
