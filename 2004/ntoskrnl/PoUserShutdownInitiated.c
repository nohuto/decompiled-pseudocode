/*
 * XREFs of PoUserShutdownInitiated @ 0x140763080
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     PsIsCurrentThreadInServerSilo @ 0x140205DF0 (PsIsCurrentThreadInServerSilo.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     KeInitializeDpc @ 0x1402E3AC0 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1402F9130 (KeInitializeTimerEx.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     PpmBeginHighPerfRequest @ 0x1403A4D10 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x1407631B8 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
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
    if ( qword_140C541B8 )
    {
      PopAcquirePolicyLock(v1);
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock(v3, v2);
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140C23F24 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140C23F24 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock(v3, v2);
        v4 = ((__int64 (*)(void))qword_140C541B8)();
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
