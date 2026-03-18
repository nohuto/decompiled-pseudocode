/*
 * XREFs of CmFreezeRegistry @ 0x1408748A0
 * Callers:
 *     NtFreezeRegistry @ 0x14086A8A0 (NtFreezeRegistry.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KiSetTimerEx @ 0x140247520 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x140331D5C (CmpDisableLazyFlush.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x1406504C8 (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x1406DD19C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
 *     CmThawRegistry @ 0x140874AE0 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v6; // rdi
  int v7; // eax
  struct _KTHREAD *v8; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v10; // rax
  struct _EX_RUNDOWN_REF *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v17; // [rsp+20h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v2 = -1073741431;
      CmpUnlockRegistry();
    }
    else
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v6 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v6 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[20] & 3) == 0 )
        {
          *(_OWORD *)(NextActiveHive[8] + 4056) = *(_OWORD *)(NextActiveHive[8] + 112);
          *(_OWORD *)(NextActiveHive[8] + 4040) = *(_OWORD *)(NextActiveHive[8] + 148);
          *(_OWORD *)(NextActiveHive[8] + 4072) = *(_OWORD *)(NextActiveHive[8] + 128);
          *(_OWORD *)(NextActiveHive[8] + 112) = 0LL;
          *(_OWORD *)(NextActiveHive[8] + 148) = 0LL;
          *(_OWORD *)(NextActiveHive[8] + 128) = 0LL;
          *(_DWORD *)(NextActiveHive[8] + 164) = 0;
          if ( (NextActiveHive[519] & 0x300) != 0x100 && !*((_DWORD *)NextActiveHive + 26) )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(NextActiveHive + 10), 0LL);
            HvMarkBaseBlockDirty(v6);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock((volatile signed __int64 *)(v6 + 80));
            KeAbPostRelease(v6 + 80);
          }
        }
      }
      v7 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( a1 )
        v7 = a1;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v7, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry();
      v8 = KeGetCurrentThread();
      --v8->KernelApcDisable;
      for ( j = 0LL; ; j = v11 )
      {
        v10 = CmpGetNextActiveHive(j);
        v11 = (struct _EX_RUNDOWN_REF *)v10;
        if ( !v10 )
          break;
        if ( (v10[20] & 3) == 0 )
        {
          v2 = CmpFlushHive((ULONG_PTR)v10, 0xDu);
          if ( v2 < 0 )
          {
            ExReleaseRundownProtection_0(v11 + 204);
            CmThawRegistry(v13, v12, v14, v15, v17);
            v2 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v2;
}
