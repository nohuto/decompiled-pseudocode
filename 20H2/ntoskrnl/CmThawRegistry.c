/*
 * XREFs of CmThawRegistry @ 0x140874AE0
 * Callers:
 *     NtThawRegistry @ 0x14086BDB0 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x1408748A0 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x140874CC0 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     KeCancelTimer @ 0x1402479F0 (KeCancelTimer.c)
 *     CmpEnableLazyFlush @ 0x1403A6B48 (CmpEnableLazyFlush.c)
 *     CmpUnlockRegistry @ 0x140616950 (CmpUnlockRegistry.c)
 *     HvMarkBaseBlockDirty @ 0x1406DD19C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x140701140 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1407013AC (CmpLockRegistryExclusive.c)
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
              ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 80));
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
