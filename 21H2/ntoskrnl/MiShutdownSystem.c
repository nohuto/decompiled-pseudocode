/*
 * XREFs of MiShutdownSystem @ 0x1409B0CE8
 * Callers:
 *     MmShutdownSystem @ 0x1409B10B0 (MmShutdownSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x140325760 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     CcNotifyWriteBehind @ 0x1403847C0 (CcNotifyWriteBehind.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x140535808 (MiFlushAllFilesystemPages.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x1407064A0 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x1407737D4 (MiFreeLoadedImportList.c)
 *     MiDeletePagingFiles @ 0x1408D06FC (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x1409B0EA0 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B18F0 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *Lock; // rax
  PVOID *v2; // rbx
  __int64 v3; // rbp
  _QWORD *v4; // rdi
  SIZE_T v5; // r14
  PVOID Pool; // rax
  PVOID v7; // rsi
  PVOID v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // r9

  if ( !dword_140C4E704 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C511D0, 0LL);
    dword_140C4E704 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C511D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(qword_140C511D0);
    KeAbPostRelease((ULONG_PTR)qword_140C511D0);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeSetEvent(&stru_140C50E28, 0, 0);
    if ( byte_140C4E702 == 1 )
    {
      if ( (MiFlags & 4) == 0 )
        MmLockPagableSectionByHandle(ExPageLockHandle);
      MiZeroAllPageFiles();
      if ( (MiFlags & 4) == 0 )
        MmUnlockPagableImageSection(ExPageLockHandle);
    }
    MiDeleteAllHardwareEnclaves();
  }
  if ( PopShutdownCleanly )
  {
    Lock = MmAcquireLoadLock();
    v2 = (PVOID *)PsLoadedModuleList;
    v3 = (__int64)Lock;
    while ( v2 != &PsLoadedModuleList )
    {
      v4 = v2[17];
      if ( v4 != (_QWORD *)1 && v4 != (_QWORD *)-2LL && ((unsigned __int8)v4 & 1) == 0 )
      {
        v5 = 8LL * *v4 + 8;
        Pool = MiAllocatePool(64, v5, 0x54446D4Du);
        v7 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v4, v5);
        MiFreeLoadedImportList(v4);
        v2[17] = v7;
      }
      v8 = v2[10];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        v2[10] = 0LL;
      }
      v2 = (PVOID *)*v2;
    }
    MmReleaseLoadLock(v3);
    MiDeletePagingFiles((__int64)&MiSystemPartition, v9, v10, v11);
  }
  return 1;
}
