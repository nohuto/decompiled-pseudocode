/*
 * XREFs of VrpUnloadDifferencingHive @ 0x1405CB8A8
 * Callers:
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1405C8A5C (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpCleanupNamespace @ 0x1405CB7F4 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x14087EC70 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140260BA0 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x1403F5C10 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1403F5C30 (ZwUnloadKey2.c)
 *     VrpDereferenceDiffHiveEntry @ 0x1405CBA70 (VrpDereferenceDiffHiveEntry.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1405CBC04 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405CBC44 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x1405CBC94 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CBE80 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *v8; // rax
  volatile signed __int64 *v9; // rdi
  char v10; // al
  char v11; // r14
  char v12; // cl
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // esi
  struct _KTHREAD *v17; // rax
  char v18; // bp
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  signed __int64 v23; // rax
  unsigned __int64 i; // rdx
  signed __int64 v25; // rtt
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  if ( v4 )
  {
    v8 = KeGetCurrentThread();
    --v8->KernelApcDisable;
    v9 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    if ( (unsigned __int8)VrpDecrementDiffHiveEntryHardRefCount(v4) )
    {
      v10 = VrpBecomeDiffHiveEntryTransitionOwner(v4);
      *(_DWORD *)(v4 + 56) &= ~1u;
      v11 = v10;
      v12 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v12 & 2) != 0 && (v12 & 4) == 0 )
        ExfTryToWakePushLock(v4 + 24);
      KeAbPostRelease(v4 + 24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v13, v14, v15);
      TargetKey.RootDirectory = 0LL;
      TargetKey.Length = 48;
      *(_OWORD *)&TargetKey.SecurityDescriptor = 0LL;
      TargetKey.Attributes = 576;
      TargetKey.ObjectName = String1;
      v16 = ZwUnloadKey(&TargetKey);
      if ( v16 < 0 )
        v16 = ZwUnloadKey2(&TargetKey, 1u);
      v17 = KeGetCurrentThread();
      --v17->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v16 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v23 = *(_QWORD *)(v4 + 16);
          for ( i = v23 + 1; ; i = v23 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v25 = v23;
            v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v23);
            if ( v25 == v23 )
              break;
          }
        }
      }
      if ( v11 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v4);
    }
    else
    {
      v16 = 0;
    }
    v18 = _InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock(v4 + 24);
    KeAbPostRelease(v4 + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v19, v20, v21);
    VrpDereferenceDiffHiveEntry((PVOID)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v16;
}
