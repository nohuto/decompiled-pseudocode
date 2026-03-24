/*
 * XREFs of MiShutdownSystem @ 0x1409AFDB8
 * Callers:
 *     MmShutdownSystem @ 0x1409B0180 (MmShutdownSystem.c)
 * Callees:
 *     MiAllocatePool @ 0x14025AD70 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MmUnlockPagableImageSection @ 0x14031AA10 (MmUnlockPagableImageSection.c)
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     CcNotifyWriteBehind @ 0x140384670 (CcNotifyWriteBehind.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x1405355C8 (MiFlushAllFilesystemPages.c)
 *     MmReleaseLoadLock @ 0x1406D1110 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406D1170 (MmAcquireLoadLock.c)
 *     MmLockPagableSectionByHandle @ 0x1406EF0C0 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x140773614 (MiFreeLoadedImportList.c)
 *     MiDeletePagingFiles @ 0x1408D059C (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x1409AFF70 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x1409B09C0 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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

  if ( !dword_140C4E6C4 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C51190, 0LL);
    dword_140C4E6C4 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C51190, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&qword_140C51190);
    KeAbPostRelease((ULONG_PTR)&qword_140C51190);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    KeSetEvent(&stru_140C50DE8, 0, 0);
    if ( byte_140C4E6C2 == 1 )
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
