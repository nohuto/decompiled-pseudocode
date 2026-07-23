/*
 * XREFs of PeriodicCaptureStateTimerCallback @ 0x14093FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1402A58B0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 */

void __fastcall PeriodicCaptureStateTimerCallback(__int64 a1, unsigned int *a2)
{
  if ( ExAcquireRundownProtectionCacheAwareEx(
         *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a2 + 135) + 448LL) + 8LL * *a2),
         1u) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(*((_QWORD *)a2 + 133) + 32LL), NormalWorkQueue);
  }
}
