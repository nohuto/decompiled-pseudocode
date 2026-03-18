/*
 * XREFs of CmFreezeRegistry @ 0x140918C40
 * Callers:
 *     NtFreezeRegistry @ 0x14090E7A0 (NtFreezeRegistry.c)
 * Callees:
 *     CmpDisableLazyFlush @ 0x14025E900 (CmpDisableLazyFlush.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiSetTimerEx @ 0x1402E2D20 (KiSetTimerEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmpFlushHive @ 0x1406885A4 (CmpFlushHive.c)
 *     HvMarkBaseBlockDirty @ 0x1406CA514 (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x14071B350 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14071B6EC (CmpLockRegistryExclusive.c)
 *     CmThawRegistry @ 0x140918E48 (CmThawRegistry.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall CmFreezeRegistry(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebp
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *i; // rax
  struct _EX_RUNDOWN_REF *v13; // rdi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *j; // rcx
  __int64 *NextActiveHive; // rax
  struct _EX_RUNDOWN_REF *v22; // rdi

  v3 = a1;
  v4 = 0;
  if ( (unsigned __int8)CmpAcquireShutdownRundown(a1, a2, a3) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState )
    {
      v4 = -1073741431;
      CmpUnlockRegistry(v6, v5, v7, v8);
    }
    else
    {
      for ( i = CmpGetNextActiveHive(0LL); ; i = CmpGetNextActiveHive(v13) )
      {
        v13 = (struct _EX_RUNDOWN_REF *)i;
        if ( !i )
          break;
        if ( (i[20] & 3) == 0 )
        {
          *(_OWORD *)(i[8] + 4056) = *(_OWORD *)(i[8] + 112);
          *(_OWORD *)(i[8] + 4040) = *(_OWORD *)(i[8] + 148);
          *(_OWORD *)(i[8] + 4072) = *(_OWORD *)(i[8] + 128);
          *(_OWORD *)(i[8] + 112) = 0LL;
          *(_OWORD *)(i[8] + 148) = 0LL;
          *(_OWORD *)(i[8] + 128) = 0LL;
          *(_DWORD *)(i[8] + 164) = 0;
          if ( (i[514] & 0x300) != 0x100 && !*((_DWORD *)i + 26) )
          {
            ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 10), 0LL);
            HvMarkBaseBlockDirty((__int64)v13);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&v13[10], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(&v13[10]);
            KeAbPostRelease((ULONG_PTR)&v13[10]);
          }
        }
      }
      v14 = CmFreezeThawTimeoutInSeconds;
      CmpFreezeThawState = 1;
      if ( v3 )
        v14 = v3;
      KiSetTimerEx((unsigned __int64)&CmpFreezeThawTimer, -10000000LL * v14, 0, 0, (__int64)&CmpFreezeThawDpc);
      CmpDisableLazyFlush(2u);
      CmpUnlockRegistry(v16, v15, v17, v18);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      for ( j = 0LL; ; j = v22 )
      {
        NextActiveHive = CmpGetNextActiveHive(j);
        v22 = (struct _EX_RUNDOWN_REF *)NextActiveHive;
        if ( !NextActiveHive )
          break;
        if ( (NextActiveHive[20] & 3) == 0 )
        {
          v4 = CmpFlushHive((ULONG_PTR)NextActiveHive, 0xDu);
          if ( v4 < 0 )
          {
            ExReleaseRundownProtection(v22 + 205);
            CmThawRegistry();
            v4 = -1073741491;
            break;
          }
        }
      }
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    }
    CmpReleaseShutdownRundown(v10, v9, v11);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)v4;
}
