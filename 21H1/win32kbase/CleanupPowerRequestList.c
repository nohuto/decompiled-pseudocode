/*
 * XREFs of CleanupPowerRequestList @ 0x1C004D300
 * Callers:
 *     CleanupResources @ 0x1C004D1BC (CleanupResources.c)
 * Callees:
 *     ?CleanupPowerWatchdog@@YAXPEAPEAX@Z @ 0x1C004D36C (-CleanupPowerWatchdog@@YAXPEAPEAX@Z.c)
 *     ?UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ @ 0x1C005BC10 (-UnqueuePowerRequest@@YAPEAUtagPOWERREQUEST@@XZ.c)
 *     ?CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z @ 0x1C0125270 (-CancelPowerRequest@@YAXPEAUtagPOWERREQUEST@@@Z.c)
 */

void CleanupPowerRequestList()
{
  struct tagPOWERREQUEST *v0; // rax

  gbNoMorePowerCallouts = 1;
  if ( gpEventPowerRequest )
  {
    ObfDereferenceObject(gpEventPowerRequest);
    gpEventPowerRequest = 0LL;
  }
  if ( gpPowerRequestMutex )
  {
    while ( 1 )
    {
      v0 = UnqueuePowerRequest();
      if ( !v0 )
        break;
      CancelPowerRequest(v0);
    }
    CleanupPowerWatchdog(&gpRequestQueueWatchdog);
    CleanupPowerWatchdog(&gpRequestWorkerWatchdog);
  }
}
