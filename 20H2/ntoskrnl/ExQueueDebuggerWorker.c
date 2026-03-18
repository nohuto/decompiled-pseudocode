/*
 * XREFs of ExQueueDebuggerWorker @ 0x1403C625C
 * Callers:
 *     KdExitDebugger @ 0x1409BA190 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140A6DA34 (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x14027F670 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
