/*
 * XREFs of MiShutdownSystem @ 0x1409B2EB8
 * Callers:
 *     MmShutdownSystem @ 0x1409B3280 (MmShutdownSystem.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14031C790 (MmUnlockPagableImageSection.c)
 *     CcNotifyWriteBehind @ 0x140386514 (CcNotifyWriteBehind.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x140533AC8 (MiFlushAllFilesystemPages.c)
 *     MmLockPagableSectionByHandle @ 0x1405D6560 (MmLockPagableSectionByHandle.c)
 *     MmReleaseLoadLock @ 0x1406592C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x140659320 (MmAcquireLoadLock.c)
 *     MiFreeLoadedImportList @ 0x14076F584 (MiFreeLoadedImportList.c)
 *     MiDeletePagingFiles @ 0x1408D2DDC (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x1409B3070 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B3AC0 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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

  if ( !dword_140C4E544 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51010, 0LL);
    dword_140C4E544 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51010, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C51010);
    KeAbPostRelease((ULONG_PTR)&qword_140C51010);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeSetEvent(&stru_140C50C68, 0, 0);
    if ( byte_140C4E542 == 1 )
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
    MiDeletePagingFiles((__int64)&MiSystemPartition);
  }
  return 1;
}
