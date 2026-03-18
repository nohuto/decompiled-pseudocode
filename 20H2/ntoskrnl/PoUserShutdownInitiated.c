/*
 * XREFs of PoUserShutdownInitiated @ 0x140771690
 * Callers:
 *     PopPowerInformationInternal @ 0x1406F9724 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140227380 (PsIsCurrentThreadInServerSilo.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x1402D6620 (KeInitializeTimerEx.c)
 *     PopQueueWorkItem @ 0x1403316F4 (PopQueueWorkItem.c)
 *     KeInitializeDpc @ 0x14033E040 (KeInitializeDpc.c)
 *     PpmBeginHighPerfRequest @ 0x1403A7110 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x1407717C8 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x140993044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140993084 (PopAcquirePolicyLock.c)
 */

char PoUserShutdownInitiated()
{
  char result; // al
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v4; // bl

  result = PsIsCurrentThreadInServerSilo();
  if ( !result )
  {
    PopTransitionCheckpoint(7LL, 0LL);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( qword_140C54238 )
    {
      PopAcquirePolicyLock(v1);
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock(v3, v2);
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140C23FF4 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140C23FF4 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock(v3, v2);
        v4 = ((__int64 (*)(void))qword_140C54238)();
        result = KiSetTimerEx(
                   (__int64)&PopUserShutdownDelayTimer,
                   -900000000LL,
                   0,
                   0,
                   (__int64)&PopUserShutdownDelayDpc);
        if ( v4 )
          return PpmBeginHighPerfRequest();
      }
    }
  }
  return result;
}
