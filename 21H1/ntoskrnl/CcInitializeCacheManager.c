/*
 * XREFs of CcInitializeCacheManager @ 0x140A397E8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A382A8 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExFreeHeapPool @ 0x14024C790 (ExFreeHeapPool.c)
 *     ExGenRandom @ 0x1402A9670 (ExGenRandom.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1403779C0 (ExInitializeNPagedLookasideListInternal.c)
 *     CcCreatePartition @ 0x1403BD8B8 (CcCreatePartition.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 *     FsRtlIsMobileOS @ 0x1406ED990 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x14077EE70 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x140787FE0 (PoRegisterCoalescingCallback.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x1407A44A0 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExInitializeSystemLookasideList @ 0x140997D24 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 *     CcInitializeBcbProfiler @ 0x140A18354 (CcInitializeBcbProfiler.c)
 */

char CcInitializeCacheManager()
{
  int v0; // edi
  PVOID PoolWithTag; // rax
  _DWORD *Partition; // rax
  _DWORD *v3; // rsi
  PVOID v4; // rax
  int v10; // ecx
  unsigned int v11; // ebx
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v13; // rdx
  int v14; // ecx
  int v15; // eax
  int v17; // eax

  v0 = (unsigned __int8)dword_140CFB19C;
  CcMasterLock = 0LL;
  CcChangeSharedCacheMapFileLock = 0LL;
  CcMaxNestingLevel = 2;
  CcMaxAsyncReadWorkerThreads = 100;
  if ( (_BYTE)dword_140CFB19C )
  {
    v17 = 500;
  }
  else
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
    CcMaxNumberCompleteAsyncReadExWorkItems = 50;
    if ( !FsRtlIsMobileOS() )
      goto LABEL_5;
    v17 = 9;
  }
  CcMaxNumberCompleteAsyncReadExWorkItems = v17;
  if ( !v0 )
  {
LABEL_5:
    CcMaxCachemapUninitWorkerThreads = 4;
    goto LABEL_6;
  }
  CcMaxCachemapUninitWorkerThreads = 8;
LABEL_6:
  CcDbgNumberOfFailedHighPriorityMappingsDueToMmResources = 0;
  CcDbgNumberOfFailedHighPriorityMappingsDueToCcResources = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2800uLL, 0x61566343u);
  CcVacbArrays = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x34u, 0x9045FuLL, 0xFFFFFFFFC000009AuLL, 0LL, 0LL);
  memset(PoolWithTag, 0, 0x2800uLL);
  qword_140C48798 = (__int64)&CcVacbFreeList;
  CcVacbFreeList = (__int64)&CcVacbFreeList;
  CcMinimumFreeHighPriorityVacbs = 128;
  CcGlobalPartitionLock = 0LL;
  Partition = CcCreatePartition();
  v3 = Partition;
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x4016CuLL, 0LL, 0LL, 0LL);
  *((_QWORD *)PspSystemPartition + 1) = Partition;
  CcSystemPartitionDirtyPageStatistics = (__int64)(Partition + 160);
  CcSystemPartitionDirtyPageThresholds = (__int64)(Partition + 166);
  CcPartitionCount = 1;
  _mm_lfence();
  CcInitializeBcbProfiler();
  v4 = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  if ( v4 )
  {
    ExFreeHeapPool((ULONG_PTR)v4);
    ExGenRandom(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  CcBcbTrimNotificationListLock.Count = 1;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcIdleDelayTick = 0x989680 / KeMaximumIncrement;
  qword_140C487F8 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_140C48808 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  if ( !v3[50] )
  {
    CcAggressiveZeroThreshold = 4;
    CcMaxLazyWritePages = v0 != 0 ? 2048 : 256;
    CcExtraWBThreadDelay = v0 != 0 ? 5000000 : 10000000;
  }
  if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
    CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
  v10 = 5;
  CcAggressiveZeroCount = 0;
  CcCoalescingFlushEvent = 1;
  if ( CcAzure_SoftThrottleDelayInMs )
    v10 = CcAzure_SoftThrottleDelayInMs;
  byte_140C48862 = 6;
  CcSoftThrottleDelay = v10;
  qword_140C48870 = (__int64)&qword_140C48868;
  qword_140C48868 = (__int64)&qword_140C48868;
  dword_140C48864 = 0;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    136,
    1800889155,
    v0 != 0 ? 256 : 128,
    (__int64)&ExSystemLookasideListHead);
  CcMaxWorklessLazywriteScans = 1;
  v11 = 0;
  for ( CcMaxZeroTransferSize = v0 != 0 ? 0x2000000 : 0x100000; v11 < (unsigned int)KeNumberProcessors_0; ++v11 )
  {
    if ( (int)CcInitializeProcessor(KiProcessorBlock[v11]) < 0 )
      KeBugCheckEx(0x34u, 0x209uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  }
  CcDbgNumberOfFailedWorkQueueEntryAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcBitmapLookasideList, 0LL, 0LL, 512, 1024, 1833067331, 0, 0);
  CcDbgNumberOfFailedBitmapAllocations = 0;
  ExInitializeNPagedLookasideListInternal((__int64)&CcVacbLevelLookasideList, 0LL, 0LL, 512, 1032, 1817600835, 0, 0);
  ExInitializeNPagedLookasideListInternal(
    (__int64)&CcVacbLevelWithBcbListHeadsLookasideList,
    0LL,
    0LL,
    512,
    2056,
    1817600835,
    0,
    0);
  CcExternalCacheListLock = 0LL;
  qword_140C48898 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  if ( CcRemoteFileDPInlineFlushThreshold != -1 )
  {
    if ( (unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
      || (NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject((unsigned __int16 **)PspSystemPartition),
          v13 > NumberOfPhysicalPagesForPartitionObject) )
    {
      CcRemoteFileDPInlineFlushThreshold = 1310720;
    }
  }
  v14 = CcUnmapBehindLength;
  if ( (unsigned int)(CcUnmapBehindLength - 1) > 0x7F )
    v14 = 8;
  CcUnmapBehindLength = v14 << 20;
  if ( !CcAzure_LargeWriteSize
    || (v15 = CcAzure_LargeWriteSize << 10, CcAzure_LargeWriteSize << 10 <= (unsigned int)CcAzure_LargeWriteSize) )
  {
    v15 = 0;
  }
  CcAzure_LargeWriteSize = v15;
  if ( (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct >= 0x65 )
    CcAzure_SoftThrottleLargeWriteAtPct = 0;
  if ( (unsigned int)CcAzure_LazyWriterPercentageOfNumProcs >= 0x65 )
    CcAzure_LazyWriterPercentageOfNumProcs = 0;
  qword_140C48770 = 0LL;
  CcTestControlData = 0LL;
  if ( (int)PoRegisterCoalescingCallback((unsigned __int64)CcCoalescingCallBack, 1, &CcCoalescingRegistration, 0LL) < 0 )
    KeBugCheckEx(0x34u, 0x29BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  CcInitializationComplete = 1;
  return 1;
}
