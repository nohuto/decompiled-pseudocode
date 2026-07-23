/*
 * XREFs of CmThawRegistry @ 0x140872490
 * Callers:
 *     NtThawRegistry @ 0x140869B40 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x140872250 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x140872670 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     KeCancelTimer @ 0x1402819B0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     CmpEnableLazyFlush @ 0x1403A7558 (CmpEnableLazyFlush.c)
 *     HvMarkBaseBlockDirty @ 0x14061C16C (HvMarkBaseBlockDirty.c)
 *     CmpGetNextActiveHive @ 0x140667750 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x1406679BC (CmpLockRegistryExclusive.c)
 *     CmpUnlockRegistry @ 0x14070D2B0 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmThawRegistry()
{
  unsigned int v0; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct _EX_RUNDOWN_REF *i; // rcx
  __int64 v6; // rax
  __int64 *NextActiveHive; // rax
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v0 = 0;
  KeCancelTimer(&CmpFreezeThawTimer);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
  {
    CmpLockRegistryExclusive();
    if ( CmpFreezeThawState == 1 )
    {
      for ( i = 0LL; ; i = (struct _EX_RUNDOWN_REF *)v8 )
      {
        NextActiveHive = CmpGetNextActiveHive(i);
        v8 = (__int64)NextActiveHive;
        if ( !NextActiveHive )
          break;
        v6 = NextActiveHive[8];
        if ( !*(_DWORD *)(v6 + 164) )
        {
          *(_OWORD *)(v6 + 112) = *(_OWORD *)(v6 + 4056);
          *(_OWORD *)(*(_QWORD *)(v8 + 64) + 148LL) = *(_OWORD *)(*(_QWORD *)(v8 + 64) + 4040LL);
          *(_OWORD *)(*(_QWORD *)(v8 + 64) + 128LL) = *(_OWORD *)(*(_QWORD *)(v8 + 64) + 4072LL);
          *(_DWORD *)(*(_QWORD *)(v8 + 64) + 164LL) = 1836346738;
          if ( (*(_DWORD *)(v8 + 4152) & 0x300) != 0x100 && !*(_DWORD *)(v8 + 104) )
          {
            ExAcquirePushLockExclusiveEx(v8 + 80, 0LL);
            HvMarkBaseBlockDirty(v8);
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 80), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v8 + 80);
            KeAbPostRelease(v8 + 80);
          }
        }
      }
      while ( (__int64 *)CmpFreezeThawWaitListHead != &CmpFreezeThawWaitListHead )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
        v9 = CmpFreezeThawWaitListHead;
        if ( *(__int64 **)(CmpFreezeThawWaitListHead + 8) != &CmpFreezeThawWaitListHead
          || (v10 = *(_QWORD *)CmpFreezeThawWaitListHead,
              *(_QWORD *)(*(_QWORD *)CmpFreezeThawWaitListHead + 8LL) != CmpFreezeThawWaitListHead) )
        {
          __fastfail(3u);
        }
        CmpFreezeThawWaitListHead = *(_QWORD *)CmpFreezeThawWaitListHead;
        *(_QWORD *)(v10 + 8) = &CmpFreezeThawWaitListHead;
        ExReleasePushLockEx((ULONG_PTR)&CmpFreezeListLock, 0LL);
        KeSetEvent((PRKEVENT)(v9 + 16), 0, 0);
      }
      CmpFreezeThawState = 0;
      CmpEnableLazyFlush(2);
    }
    else
    {
      v0 = -1073741431;
    }
    CmpUnlockRegistry();
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
    return (unsigned int)-1073741431;
  }
  return v0;
}
