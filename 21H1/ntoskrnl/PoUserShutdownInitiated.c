/*
 * XREFs of PoUserShutdownInitiated @ 0x1407617A0
 * Callers:
 *     PopPowerInformationInternal @ 0x14070C7D4 (PopPowerInformationInternal.c)
 * Callees:
 *     KeInitializeDpc @ 0x140204F10 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x140236270 (KiSetTimerEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14025ED10 (PsIsCurrentThreadInServerSilo.c)
 *     PopQueueWorkItem @ 0x140322ED4 (PopQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x140355110 (KeInitializeTimerEx.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4590 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x1407618D8 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x14098C054 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C094 (PopAcquirePolicyLock.c)
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
    if ( qword_140C542B8 )
    {
      PopAcquirePolicyLock(v1);
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock(v3, v2);
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140C2418C )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140C2418C = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock(v3, v2);
        v4 = ((__int64 (*)(void))qword_140C542B8)();
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
