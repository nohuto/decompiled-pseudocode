/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408EF554
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F004C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14034BBA0 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x140414200 (memset.c)
 *     PopCalculateIdleInformation @ 0x140570410 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF4E4 (PopDripsWatchdogScheduleNextTimer.c)
 */

_QWORD *PopDripsWatchdogStartWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C21428 & 2) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsUmTestDeviceCount);
    v1 = PopDirectedDripsUmTestDeviceCount;
    do
    {
      v2 = v1;
      v1 = _InterlockedCompareExchange(&PopDirectedDripsUmTestDeviceCount, v1, v1);
    }
    while ( v2 != v1 );
    if ( !v1 )
    {
      v3 = MEMORY[0xFFFFF78000000008];
      PopCalculateIdleInformation((__int64)&v6);
      v4 = PopWdiCurrentScenarioInstanceId;
      if ( (dword_140C214E4 & 1) != 0 )
      {
        dword_140C214F4 = 0;
        qword_140C214E8 = 0LL;
        xmmword_140C21518 = v6;
        dword_140C214F8 = PopDripsWatchdogDebounceTickInterval;
        qword_140C21500 = v3;
        qword_140C21508 = v3;
        xmmword_140C21528 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C21430);
      }
      if ( (dword_140C215EC & 1) != 0 )
      {
        memset(&unk_140C215F0, 0, 0x50uLL);
        dword_140C21614 = dword_140C23664;
        xmmword_140C21620 = v6;
        qword_140C21618 = qword_140C4FF68;
        xmmword_140C21630 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C21538);
      }
      dword_140C21428 |= 4u;
      qword_140C21648 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
