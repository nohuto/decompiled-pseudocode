/*
 * XREFs of PopUserPresentSet @ 0x1403A5644
 * Callers:
 *     PopSetSystemState @ 0x1403A5600 (PopSetSystemState.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x1402D49A0 (ExQueueWorkItem.c)
 *     PopSetNotificationWork @ 0x140362C50 (PopSetNotificationWork.c)
 *     PopResetIdleTime @ 0x140364434 (PopResetIdleTime.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14088B590 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall PopUserPresentSet(int a1)
{
  void *v1; // rdi
  __int32 v2; // esi

  v1 = (void *)a1;
  if ( (PopSimulate & 0x40000) != 0 )
    DbgkWerCaptureLiveKernelDump(L"UserPresenceSet", PopFullWake, 0LL, 0LL, 0LL, 0);
  if ( byte_140C23301 == 3 )
  {
    _InterlockedOr(&PopPendingUserPresenceDuringSystemSleep, 1u);
    _InterlockedExchange(&PopPendingUserPresenceMonitorOnReason, (__int32)v1);
  }
  else
  {
    v2 = _InterlockedExchange(&PopUserPresentSetStatus, 1);
    if ( _InterlockedCompareExchange(&dword_140C23D54, 0, 0) )
    {
      if ( !v2 )
      {
        _InterlockedExchange(&PopUserPresentSetStatus, 0);
        KeSetEvent(&PopUserPresentCompletedEvent, 0, 0);
      }
    }
    else
    {
      if ( (PopFullWake & 3) == 0 )
      {
        _InterlockedOr(&PopFullWake, 2u);
        PopSetNotificationWork(1u);
      }
      PopResetIdleTime();
      if ( !v2 )
      {
        PopUserPresentWorkItem.Parameter = v1;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        PopUserPresentWorkItem.List.Flink = 0LL;
        ExQueueWorkItem(&PopUserPresentWorkItem, DelayedWorkQueue);
      }
    }
  }
}
