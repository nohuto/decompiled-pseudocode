/*
 * XREFs of CmThawRegistry @ 0x140872330
 * Callers:
 *     NtThawRegistry @ 0x1408699E0 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x1408720F0 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x140872510 (CmpFreezeThawWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     KeCancelTimer @ 0x140260240 (KeCancelTimer.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     CmpEnableLazyFlush @ 0x1403A7408 (CmpEnableLazyFlush.c)
 *     CmpGetNextActiveHive @ 0x140672520 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14067278C (CmpLockRegistryExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x1406BCFEC (HvMarkBaseBlockDirty.c)
 *     CmpUnlockRegistry @ 0x1406F5ED0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmThawRegistry()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v3; // rax
  __int64 *NextActiveHive; // rax
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState == 1 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v5 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v5 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v3 = NextActiveHive[8];
        if ( !*(_DWORD *)(v3 + 164) )
        {
          *(_OWORD *)(v3 + 112) = *(_OWORD *)(v3 + 4056);
          *(_OWORD *)(*(_QWORD *)(v5 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v5 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v5 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v5 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v5 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v5 + 4152) & 0x300) != 0x100 && !*(_DWORD *)(v5 + 104) )
          {
            ExAcquirePushLockExclusiveEx(v5 + 80, 0LL);
            HvMarkBaseBlockDirty(v5);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v5 + 80);
            KeAbPostRelease(v5 + 80);
          }
        }
      }
      while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
        v6 = CmpFreezeThawWaitListHead;
        if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
          || (v7 = *(_QWORD *)CmpFreezeThawWaitListHead,
              *(_QWORD *)(*(_QWORD *)CmpFreezeThawWaitListHead + 8LL) != CmpFreezeThawWaitListHead) )
        {
          __fastfail(3u);
        }
        CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
        *(_QWORD *)(v7 + 8) = &CmpFreezeThawWaitListHead;
        ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
        KeSetEvent((PRKEVENT)(v6 + 16), 0, 0);
      }
      CmpFreezeThawState = 0;
      CmpEnableLazyFlush(2);
    }
    else
    {
      v0 = -1073741431;
    }
    CmpUnlockRegistry();
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    return (unsigned int)-1073741431;
  }
  return v0;
}
