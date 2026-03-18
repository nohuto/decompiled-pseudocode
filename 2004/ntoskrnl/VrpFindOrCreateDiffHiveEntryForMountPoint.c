/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1405CD0A4
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405CC858 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140207C80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1405CD250 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpAllocateDiffHiveEntry @ 0x1405CD3C0 (VrpAllocateDiffHiveEntry.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  _QWORD *DiffHiveEntry; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // rdx
  _QWORD *v10; // r14
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  DiffHiveEntry = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_8;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  DiffHiveEntry = (_QWORD *)VrpAllocateDiffHiveEntry(String1, a2);
  v10 = DiffHiveEntry;
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_8:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    DiffHiveEntry = 0LL;
    v15 = v10[1] & (-1LL << (dword_140C477C4 & 0x1F));
    v12 = qword_140C477C8;
    v13 = (37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_140C477C4 >> 5) - 1);
    *v10 = *(_QWORD *)(qword_140C477C8 + 8 * v13);
    *(_QWORD *)(v12 + 8 * v13) = v10;
    DiffHiveEntryForMountPointWithLock = (__int64)v10;
    ++gLoadedDiffHives;
  }
  *a3 = DiffHiveEntryForMountPointWithLock;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v4;
}
