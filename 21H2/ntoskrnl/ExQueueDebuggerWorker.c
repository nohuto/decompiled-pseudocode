/*
 * XREFs of ExQueueDebuggerWorker @ 0x1402DA7E4
 * Callers:
 *     KdExitDebugger @ 0x140A6F900 (KdExitDebugger.c)
 *     ExpWorkerInitialization @ 0x140B240EC (ExpWorkerInitialization.c)
 * Callees:
 *     KeInsertQueueDpc @ 0x140345170 (KeInsertQueueDpc.c)
 */

char ExQueueDebuggerWorker()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&ExpDebuggerWork, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = KeInsertQueueDpc(&ExpDebuggerDpc, 0LL, 0LL);
  return v0;
}
