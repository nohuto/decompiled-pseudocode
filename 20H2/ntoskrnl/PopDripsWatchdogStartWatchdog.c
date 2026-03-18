/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408F1D54
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408F284C (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopCalculateIdleInformation @ 0x14056EA00 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408F1CE4 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140C212A8 & 2) != 0 )
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
      if ( (dword_140C21364 & 1) != 0 )
      {
        dword_140C21374 = 0;
        qword_140C21368 = 0LL;
        xmmword_140C21398 = v6;
        dword_140C21378 = PopDripsWatchdogDebounceTickInterval;
        qword_140C21380 = v3;
        qword_140C21388 = v3;
        xmmword_140C213A8 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C212B0);
      }
      if ( (dword_140C2146C & 1) != 0 )
      {
        memset(&unk_140C21470, 0, 0x50uLL);
        dword_140C21494 = dword_140C23604;
        xmmword_140C214A0 = v6;
        qword_140C21498 = qword_140C4FDE8;
        xmmword_140C214B0 = v7;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C213B8);
      }
      dword_140C212A8 |= 4u;
      qword_140C214C8 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
