/*
 * XREFs of MiShutdownSystem @ 0x1409AC0E8
 * Callers:
 *     MmShutdownSystem @ 0x1409AC4B0 (MmShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     MmUnlockPagableImageSection @ 0x14030E2F0 (MmUnlockPagableImageSection.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     CcNotifyWriteBehind @ 0x14037FB4C (CcNotifyWriteBehind.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x14052FAA8 (MiFlushAllFilesystemPages.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x140704530 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x14075EC84 (MiFreeLoadedImportList.c)
 *     MiDeletePagingFiles @ 0x1408CBC4C (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x1409AC2A0 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ACCF0 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  struct _KTHREAD *Lock; // rax
  PVOID *v5; // rbx
  __int64 v6; // rbp
  _QWORD *v7; // rdi
  SIZE_T v8; // r14
  PVOID Pool; // rax
  PVOID v10; // rsi
  PVOID v11; // rcx

  if ( !dword_140C4E604 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51090, 0LL);
    dword_140C4E604 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51090, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51090);
    KeAbPostRelease((ULONG_PTR)&qword_140C51090);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v1, v2, v3);
    KeSetEvent(&stru_140C50CE8, 0, 0);
    if ( byte_140C4E602 == 1 )
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
    v5 = (PVOID *)PsLoadedModuleList;
    v6 = (__int64)Lock;
    while ( v5 != &PsLoadedModuleList )
    {
      v7 = v5[17];
      if ( v7 != (_QWORD *)1 && v7 != (_QWORD *)-2LL && ((unsigned __int8)v7 & 1) == 0 )
      {
        v8 = 8LL * *v7 + 8;
        Pool = MiAllocatePool(64, v8, 0x54446D4Du);
        v10 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v7, v8);
        MiFreeLoadedImportList(v7);
        v5[17] = v10;
      }
      v11 = v5[10];
      if ( v11 )
      {
        ExFreePoolWithTag(v11, 0);
        v5[10] = 0LL;
      }
      v5 = (PVOID *)*v5;
    }
    MmReleaseLoadLock(v6);
    MiDeletePagingFiles((__int64)&MiSystemPartition);
  }
  return 1;
}
