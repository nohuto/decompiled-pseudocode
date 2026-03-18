/*
 * XREFs of PopDripsWatchdogStartWatchdog @ 0x1408EAEC4
 * Callers:
 *     PopPdcIdleResiliencyCallback @ 0x1408EB9BC (PopPdcIdleResiliencyCallback.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopCalculateIdleInformation @ 0x14056A980 (PopCalculateIdleInformation.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1408EAE54 (PopDripsWatchdogScheduleNextTimer.c)
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
  if ( (dword_140C213E8 & 2) != 0 )
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
      if ( (dword_140C214A4 & 1) != 0 )
      {
        dword_140C214B4 = 0;
        qword_140C214A8 = 0LL;
        xmmword_140C214D8 = v9;
        dword_140C214B8 = PopDripsWatchdogDebounceTickInterval;
        qword_140C214C0 = v3;
        qword_140C214C8 = v3;
        xmmword_140C214E8 = v10;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C213F0);
      }
      if ( (dword_140C215AC & 1) != 0 )
      {
        memset(&unk_140C215B0, 0, 0x50uLL);
        dword_140C215D4 = dword_140C23704;
        xmmword_140C215E0 = v9;
        qword_140C215D8 = qword_140C4FEA8;
        xmmword_140C215F0 = v10;
        PopDripsWatchdogScheduleNextTimer((__int64)&unk_140C214F8);
      }
      dword_140C213E8 |= 4u;
      qword_140C21608 = v4;
    }
  }
  ExReleaseResourceLite(&PopDripsWatchdogContext);
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
}
