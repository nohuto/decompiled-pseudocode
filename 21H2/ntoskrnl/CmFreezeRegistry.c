/*
 * XREFs of CmFreezeRegistry @ 0x140872250
 * Callers:
 *     NtFreezeRegistry @ 0x140868620 (NtFreezeRegistry.c)
 * Callees:
 *     CmpDisableLazyFlush @ 0x14025226C (CmpDisableLazyFlush.c)
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KiSetTimerEx @ 0x1402814E0 (KiSetTimerEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406A48D8 (CmpFlushHive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 *     CmThawRegistry @ 0x140872490 (CmThawRegistry.c)
 */

__int64 __fastcall CmFreezeRegistry(int a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 *NextActiveHive; // rax
  __int64 v9; // rdi
  int v10; // eax
  struct _KTHREAD *v11; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _EX_RUNDOWN_REF *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v26; // [rsp+20h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v2 = -1073741431;
      CmpUnlockRegistry();
    }
    else
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v9 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v9 = (__int64)NextActiveHive;
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
            HvMarkBaseBlockDirty(v9);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v9 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v9 + 80);
            KeAbPostRelease(v9 + 80);
          }
        }
      }
      v10 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( a1 )
        v10 = a1;
      KiSetTimerEx((__int64)&CmpFreezeThawTimer, -10000000LL * v10, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry();
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      for ( j = 0LL; ; j = v17 )
      {
        v13 = CmpGetNextActiveHive(j);
        v17 = (struct _EX_RUNDOWN_REF *)v13;
        if ( !v13 )
          break;
        if ( (v13[20] & 3) == 0 )
        {
          v2 = CmpFlushHive((ULONG_PTR)v13, 0xDu);
          if ( v2 < 0 )
          {
            ExReleaseRundownProtection(v17 + 204);
            CmThawRegistry(v19, v18, v20, v21, v26);
            v2 = -1073741491;
            break;
          }
        }
      }
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15, v16);
    }
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v22, v23, v24);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v2;
}
