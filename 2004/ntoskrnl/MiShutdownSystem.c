/*
 * XREFs of MiShutdownSystem @ 0x1409ACF48
 * Callers:
 *     MmShutdownSystem @ 0x1409AD310 (MmShutdownSystem.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14020ACF0 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x1402749E0 (ExfTryToWakePushLock.c)
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
 *     MmUnlockPagableImageSection @ 0x14034B7D0 (MmUnlockPagableImageSection.c)
 *     CcNotifyWriteBehind @ 0x1403843E4 (CcNotifyWriteBehind.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x1405300F8 (MiFlushAllFilesystemPages.c)
 *     MmReleaseLoadLock @ 0x1406A8DA0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8E00 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x1406F6300 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x140760F74 (MiFreeLoadedImportList.c)
 *     MiDeletePagingFiles @ 0x1408CCF9C (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x1409AD100 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409ADB50 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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

  if ( !dword_140C4E4C4 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C50F90, 0LL);
    dword_140C4E4C4 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C50F90, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C50F90);
    KeAbPostRelease((ULONG_PTR)&qword_140C50F90);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeSetEvent(&stru_140C50BE8, 0, 0);
    if ( byte_140C4E4C2 == 1 )
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
