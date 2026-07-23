/*
 * XREFs of VrpUnloadDifferencingHive @ 0x1405D32D8
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405CFFEC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x1405D3224 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140885AB0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140220C00 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x1403FBA70 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1403FBA90 (ZwUnloadKey2.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405D34A0 (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405D3634 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405D3674 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1405D36C4 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405D38B0 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rbx
  struct _KTHREAD *v5; // rax
  volatile signed __int64 *v6; // rdi
  char v7; // al
  char v8; // r14
  char v9; // cl
  NTSTATUS v10; // esi
  struct _KTHREAD *v11; // rax
  char v12; // bp
  signed __int64 v14; // rax
  unsigned __int64 i; // rdx
  signed __int64 v16; // rtt
  OBJECT_ATTRIBUTES TargetKey; // [rsp+20h] [rbp-48h] BYREF

  memset(&TargetKey, 0, sizeof(TargetKey));
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
      TargetKey.RootDirectory = 0LL;
      TargetKey.Length = 48;
      *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
      TargetKey.Attributes = 576;
      TargetKey.ObjectName = String1;
      v10 = ZwUnloadKey(&TargetKey);
      if ( v10 < 0 )
        v10 = ZwUnloadKey2(&TargetKey, 1u);
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v10 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v14 = *(_QWORD *)(v4 + 16);
          for ( i = v14 + 1; ; i = v14 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v16 = v14;
            v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v14);
            if ( v16 == v14 )
              break;
          }
        }
      }
      if ( v8 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v4);
    }
    else
    {
      v10 = 0;
    }
    v12 = _InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
    KeAbPostRelease(v4 + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((PVOID)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v10;
}
