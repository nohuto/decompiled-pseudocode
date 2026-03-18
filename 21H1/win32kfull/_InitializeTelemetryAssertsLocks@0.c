/*
 * XREFs of _InitializeTelemetryAssertsLocks@0 @ 0xEAA08
 * Callers:
 *     _InitializeTelemetryAssertsKMByName@4 @ 0xEA95C (_InitializeTelemetryAssertsKMByName@4.c)
 * Callees:
 *     <none>
 */

int __stdcall InitializeTelemetryAssertsLocks()
{
  struct _FAST_MUTEX *PoolWithTag; // eax

  PoolWithTag = (struct _FAST_MUTEX *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x20u, 0x74727341u);
  g_AssertFastMutex = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  PoolWithTag->Owner = 0;
  PoolWithTag->Count = 1;
  PoolWithTag->Contention = 0;
  KeInitializeEvent(&PoolWithTag->Event, SynchronizationEvent, 0);
  return 0;
}
