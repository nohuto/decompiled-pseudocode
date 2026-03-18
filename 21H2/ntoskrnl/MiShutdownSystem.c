/*
 * XREFs of MiShutdownSystem @ 0x140A69FD8
 * Callers:
 *     MmShutdownSystem @ 0x140A6A3E0 (MmShutdownSystem.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x140241620 (MmUnlockPagableImageSection.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CcNotifyWriteBehind @ 0x14038A808 (CcNotifyWriteBehind.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MiFlushAllFilesystemPages @ 0x14058DCA8 (MiFlushAllFilesystemPages.c)
 *     MmLockPagableSectionByHandle @ 0x1406BC300 (MmLockPagableSectionByHandle.c)
 *     MiFreeLoadedImportList @ 0x1406EB3D4 (MiFreeLoadedImportList.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiDeletePagingFiles @ 0x14096F240 (MiDeletePagingFiles.c)
 *     MiZeroAllPageFiles @ 0x140A6A1B0 (MiZeroAllPageFiles.c)
 *     MiDeleteAllHardwareEnclaves @ 0x140A6A570 (MiDeleteAllHardwareEnclaves.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char MiShutdownSystem()
{
  struct _KTHREAD *CurrentThread; // rdi
  bool v1; // zf
  struct _KTHREAD *Lock; // rax
  PVOID *v3; // rbx
  __int64 v4; // rbp
  _QWORD *v5; // rdi
  SIZE_T v6; // r14
  PVOID Pool; // rax
  PVOID v8; // rsi
  PVOID v9; // rcx

  if ( !dword_140C529C4 )
  {
    CcNotifyWriteBehind();
    MiFlushAllFilesystemPages();
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140C553A8, 0LL);
    dword_140C529C4 = 1;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140C553A8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(qword_140C553A8);
    KeAbPostRelease((ULONG_PTR)qword_140C553A8);
    v1 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v1 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    KeSetEvent(&stru_140C54FE8, 0, 0);
    if ( byte_140C529C2 )
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
    v3 = (PVOID *)PsLoadedModuleList;
    v4 = (__int64)Lock;
    while ( v3 != &PsLoadedModuleList )
    {
      v5 = v3[17];
      if ( v5 != (_QWORD *)1 && v5 != (_QWORD *)-2LL && ((unsigned __int8)v5 & 1) == 0 )
      {
        v6 = 8LL * *v5 + 8;
        Pool = MiAllocatePool(64, v6, 0x54446D4Du);
        v8 = Pool;
        if ( !Pool )
        {
          PopShutdownCleanly = 0;
          break;
        }
        memmove(Pool, v5, v6);
        MiFreeLoadedImportList(v5);
        v3[17] = v8;
      }
      v9 = v3[10];
      if ( v9 )
      {
        ExFreePoolWithTag(v9, 0);
        v3[10] = 0LL;
      }
      v3 = (PVOID *)*v3;
    }
    MmReleaseLoadLock(v4);
    MiDeletePagingFiles((__int64)&MiSystemPartition);
  }
  return 1;
}
