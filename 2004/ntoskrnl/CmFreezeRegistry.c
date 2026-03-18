/*
 * XREFs of CmFreezeRegistry @ 0x14086ED48
 * Callers:
 *     NtFreezeRegistry @ 0x140864E80 (NtFreezeRegistry.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     KiSetTimerEx @ 0x1402C90A0 (KiSetTimerEx.c)
 *     CmpDisableLazyFlush @ 0x140360F5C (CmpDisableLazyFlush.c)
 *     CmpUnlockRegistry @ 0x1405F3D20 (CmpUnlockRegistry.c)
 *     CmpFlushHive @ 0x14061F888 (CmpFlushHive.c)
 *     CmpGetNextActiveHive @ 0x14063FE90 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1406400FC (CmpLockRegistryExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x14070ADAC (HvMarkBaseBlockDirty.c)
 *     CmThawRegistry @ 0x14086EF88 (CmThawRegistry.c)
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
