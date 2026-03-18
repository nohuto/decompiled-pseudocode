/*
 * XREFs of VrpUnloadDifferencingHive @ 0x1405CCC78
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C9E2C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x1405CCBC4 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14087FF60 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x1403F6EA0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1403F6EC0 (ZwUnloadKey2.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405CCE40 (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405CCFD4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405CD014 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1405CD064 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CD250 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(PCUNICODE_STRING String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rbx
  struct _KTHREAD *v5; // rax
  volatile signed __int64 *v6; // rdi
  char v7; // al
  char v8; // r14
  char v9; // cl
  __int64 v10; // rdx
  int v11; // esi
  struct _KTHREAD *v12; // rax
  char v13; // bp
  signed __int64 v15; // rax
  unsigned __int64 i; // rdx
  signed __int64 v17; // rtt
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int128 v19; // [rsp+30h] [rbp-38h]
  __int128 v20; // [rsp+40h] [rbp-28h]

  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v4 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    v5 = KeGetCurrentThread();
    --v5->KernelApcDisable;
    v6 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(v4) )
    {
      v7 = VrpBecomeDiffHiveEntryTransitionOwner(v4);
      *(_DWORD *)(v4 + 56) &= ~1u;
      v8 = v7;
      v9 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
      KeAbPostRelease(v4 + 24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *((_QWORD *)&v18 + 1) = 0LL;
      LODWORD(v18) = 48;
      v20 = 0LL;
      DWORD2(v19) = 576;
      *(_QWORD *)&v19 = String1;
      v11 = ZwUnloadKey((__int64)&v18, v10);
      if ( v11 < 0 )
        v11 = ZwUnloadKey2((__int64)&v18, 1LL);
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v11 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v15 = *(_QWORD *)(v4 + 16);
          for ( i = v15 + 1; ; i = v15 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v17 = v15;
            v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v15);
            if ( v17 == v15 )
              break;
          }
        }
      }
      if ( v8 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v4);
    }
    else
    {
      v11 = 0;
    }
    v13 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
    KeAbPostRelease(v4 + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((PVOID)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v11;
}
