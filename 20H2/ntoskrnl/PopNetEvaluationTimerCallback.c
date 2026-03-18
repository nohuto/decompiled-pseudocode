/*
 * XREFs of PopNetEvaluationTimerCallback @ 0x140576C70
 * Callers:
 *     <none>
 * Callees:
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 */

char PopNetEvaluationTimerCallback()
{
  signed __int32 v0; // eax

  v0 = _InterlockedCompareExchange(&PopNetGracePeriodState, 2, 1);
  if ( v0 == 1 )
    LOBYTE(v0) = PopQueueWorkItem((__int64)&unk_140C208C8, DelayedWorkQueue);
  return v0;
}
