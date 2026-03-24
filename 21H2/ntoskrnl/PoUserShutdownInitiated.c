/*
 * XREFs of PoUserShutdownInitiated @ 0x140775630
 * Callers:
 *     PopPowerInformationInternal @ 0x140678DF4 (PopPowerInformationInternal.c)
 * Callees:
 *     KiSetTimerEx @ 0x14025FD70 (KiSetTimerEx.c)
 *     KeInitializeTimerEx @ 0x140278AE0 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x14027B6B0 (KeInitializeDpc.c)
 *     PopQueueWorkItem @ 0x1402D3A34 (PopQueueWorkItem.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140351230 (PsIsCurrentThreadInServerSilo.c)
 *     PpmBeginHighPerfRequest @ 0x1403A79D0 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x140775778 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x14098F590 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098F5D0 (PopAcquirePolicyLock.c)
 */

char __fastcall PoUserShutdownInitiated(__int64 a1, __int64 a2)
{
  char result; // al
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  char v6; // bl

  result = PsIsCurrentThreadInServerSilo(a1, a2);
  if ( !result )
  {
    PopTransitionCheckpoint(7LL, 0LL);
    result = PopQueueWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, DelayedWorkQueue);
    if ( qword_140C543B8 )
    {
      PopAcquirePolicyLock(v3);
      if ( PopUserShutdownInProgress )
      {
        return PopReleasePolicyLock(v5, v4);
      }
      else
      {
        PopUserShutdownInProgress = 1;
        if ( !byte_140C241C4 )
        {
          PopUserShutdownDelayWorker.Parameter = 0LL;
          PopUserShutdownDelayWorker.List.Flink = 0LL;
          PopUserShutdownDelayWorker.WorkerRoutine = (void (__fastcall *)(void *))PopUserShutdownDelayWorkerCallback;
          KeInitializeTimerEx(&PopUserShutdownDelayTimer, NotificationTimer);
          KeInitializeDpc(&PopUserShutdownDelayDpc, (PKDEFERRED_ROUTINE)PopUserShutdownDelayDpcCallback, 0LL);
          byte_140C241C4 = 1;
        }
        PopBsdShutdownInProgress = 1;
        PopReleasePolicyLock(v5, v4);
        v6 = ((__int64 (*)(void))qword_140C543B8)();
        result = KiSetTimerEx(
                   (__int64)&PopUserShutdownDelayTimer,
                   -900000000LL,
                   0,
                   0,
                   (__int64)&PopUserShutdownDelayDpc);
        if ( v6 )
          return PpmBeginHighPerfRequest();
      }
    }
  }
  return result;
}
