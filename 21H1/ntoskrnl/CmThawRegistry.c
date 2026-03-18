/*
 * XREFs of CmThawRegistry @ 0x14086D4C8
 * Callers:
 *     NtThawRegistry @ 0x140865070 (NtThawRegistry.c)
 *     CmFreezeRegistry @ 0x14086D288 (CmFreezeRegistry.c)
 *     CmpFreezeThawWorker @ 0x14086D6B0 (CmpFreezeThawWorker.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CmpEnableLazyFlush @ 0x1403A3FC8 (CmpEnableLazyFlush.c)
 *     CmpUnlockRegistry @ 0x140629290 (CmpUnlockRegistry.c)
 *     CmpGetNextActiveHive @ 0x140690FA0 (CmpGetNextActiveHive.c)
 *     CmpLockRegistryExclusive @ 0x14069120C (CmpLockRegistryExclusive.c)
 *     HvMarkBaseBlockDirty @ 0x1406E6EEC (HvMarkBaseBlockDirty.c)
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
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown) )
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
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&CmpShutdownRundown);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v11, v12, v13);
  }
  else
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v2, v3, v4);
    return (unsigned int)-1073741431;
  }
  return v0;
}
