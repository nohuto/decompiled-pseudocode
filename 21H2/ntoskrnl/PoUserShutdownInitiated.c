/*
 * XREFs of PoUserShutdownInitiated @ 0x1407757F0
 * Callers:
 *     PopPowerInformationInternal @ 0x14066C534 (PopPowerInformationInternal.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14035BF80 (PsIsCurrentThreadInServerSilo.c)
 *     PpmBeginHighPerfRequest @ 0x1403A7B20 (PpmBeginHighPerfRequest.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     PopTransitionCheckpoint @ 0x140775938 (PopTransitionCheckpoint.c)
 *     PopReleasePolicyLock @ 0x140991044 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140991084 (PopAcquirePolicyLock.c)
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
    if ( qword_140C543F8 )
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
        v6 = ((__int64 (*)(void))qword_140C543F8)();
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
