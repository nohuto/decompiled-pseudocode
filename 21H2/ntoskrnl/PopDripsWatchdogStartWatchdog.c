/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408EF6B4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F01AC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x140414300 (memset.c)
 *     PopCalculateIdleInformation @ 0x140570650 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EF644 (PopDripsWatchdogScheduleNextTimer.c)
 */

_QWORD *PopDripsWatchdogStartWatchdog()
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int32 v1; // eax
  signed __int32 v2; // ett
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v10 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopDripsWatchdogContext, 1u);
  if ( (dword_140C21468 & 2) != 0 )
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
      PopCalculateIdleInformation((__int64)&v9);
      v4 = PopWdiCurrentScenarioInstanceId;
      if ( (dword_140C21524 & 1) != 0 )
      {
        dword_140C21534 = 0;
        qword_140C21528 = 0LL;
        xmmword_140C21558 = v9;
        dword_140C21538 = PopDripsWatchdogDebounceTickInterval;
        qword_140C21540 = v3;
        qword_140C21548 = v3;
        xmmword_140C21568 = v10;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C21470);
      }
      if ( (dword_140C2162C & 1) != 0 )
      {
        memset(&unk_140C21630, 0, 0x50uLL);
        dword_140C21654 = dword_140C23C84;
        xmmword_140C21660 = v9;
        qword_140C21658 = qword_140C4FFA8;
        xmmword_140C21670 = v10;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C21578);
      }
      dword_140C21468 |= 4u;
      qword_140C21688 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
}
