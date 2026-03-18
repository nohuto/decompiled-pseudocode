/*
 * XREFs of CcInitializeCacheManager @ 0x140AFC9DC
 * Callers:
 *     Phase1InitializationDiscard @ 0x140AFBDF4 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeNPagedLookasideListInternal @ 0x140250C50 (ExInitializeNPagedLookasideListInternal.c)
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 *     CcCreatePartition @ 0x1403D0F2C (CcCreatePartition.c)
 *     Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled @ 0x140416F1C (Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled.c)
 *     Feature_Servicing_Cc_InsufVA__private_IsEnabled @ 0x1404170F8 (Feature_Servicing_Cc_InsufVA__private_IsEnabled.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     FsRtlIsMobileOS @ 0x1407FCB50 (FsRtlIsMobileOS.c)
 *     CcInitializeProcessor @ 0x140825358 (CcInitializeProcessor.c)
 *     PoRegisterCoalescingCallback @ 0x140832790 (PoRegisterCoalescingCallback.c)
 *     MmGetNumberOfPhysicalPagesForPartitionObject @ 0x14084D678 (MmGetNumberOfPhysicalPagesForPartitionObject.c)
 *     ExInitializeSystemLookasideList @ 0x140A57C10 (ExInitializeSystemLookasideList.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 *     CcInitializeBcbProfiler @ 0x140AD6354 (CcInitializeBcbProfiler.c)
 *     CcInitializeTelemetry @ 0x140AF2E9C (CcInitializeTelemetry.c)
 *     CcInitializeVacbs @ 0x140B31238 (CcInitializeVacbs.c)
 */

char __fastcall CcInitializeCacheManager(int a1)
{
  char result; // al
  int v3; // esi
  int v4; // eax
  void *Partition; // rax
  PVOID PoolWithTag; // rax
  int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 NumberOfPhysicalPagesForPartitionObject; // rax
  unsigned __int64 v15; // rdx
  int v16; // ecx
  int v17; // eax
  bool v18; // zf

  if ( (unsigned int)Feature_Servicing_CcTelemetryCrashOnHPEFix__private_IsEnabled() && a1 == 2 )
  {
    CcInitializeTelemetry(2);
    return 1;
  }
  v3 = (unsigned __int8)dword_140D051DC;
  CcMasterLock = 0LL;
  CcChangeSharedCacheMapFileLock = 0LL;
  CcMaxNestingLevel = 2;
  CcMaxAsyncReadWorkerThreads = 100;
  if ( (_BYTE)dword_140D051DC )
  {
    v4 = 500;
  }
  else
  {
    CcMaxAsyncReadWorkerThreads = 50;
    if ( FsRtlIsMobileOS() )
      CcMaxAsyncReadWorkerThreads = 10;
    CcMaxNumberCompleteAsyncReadExWorkItems = v3 + 50;
    if ( !FsRtlIsMobileOS() )
      goto LABEL_12;
    v4 = 9;
  }
  CcMaxNumberCompleteAsyncReadExWorkItems = v4;
  if ( !v3 )
  {
LABEL_12:
    CcMaxCachemapUninitWorkerThreads = 4;
    goto LABEL_13;
  }
  CcMaxCachemapUninitWorkerThreads = 8;
LABEL_13:
  if ( CcEnablePerVolumeLazyWriterOverride )
  {
    if ( CcEnablePerVolumeLazyWriterOverride == 1 )
      CcEnablePerVolumeLazyWriter = 1;
  }
  else
  {
    CcEnablePerVolumeLazyWriter = 0;
  }
  CcInitializeVacbs();
  CcGlobalPartitionLock = 0LL;
  CcNumberNumaNodes = (unsigned __int16)(KeNumberNodes - 1) + 1;
  Partition = CcCreatePartition();
  if ( !Partition )
    KeBugCheckEx(0x34u, 0x401DDuLL, 0LL, 0LL, 0LL);
  CcPartitionCount = 1;
  *((_QWORD *)PspSystemPartition + 1) = Partition;
  CcSystemPartitionDirtyPageStatistics = (__int64)Partition + 992;
  CcSystemPartitionDirtyPageThresholds = (__int64)Partition + 1016;
  _mm_lfence();
  CcInitializeBcbProfiler();
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8uLL, 0x58637044u);
  if ( PoolWithTag )
  {
    ExFreeHeapPool((ULONG_PTR)PoolWithTag);
    ExGenRandom(0);
    _RAX = 2147483656LL;
    __asm { cpuid }
  }
  CcBcbTrimNotificationListLock.Count = 1;
  CcBcbTrimNotificationListLock.Owner = 0LL;
  CcBcbTrimNotificationListLock.Contention = 0;
  LOWORD(CcBcbTrimNotificationListLock.Event.Header.Lock) = 1;
  CcIdleDelayTick = 0x989680u / KeMaximumIncrement;
  qword_140C49B38 = (__int64)&CcVolumeCacheMapList;
  CcVolumeCacheMapList = (__int64)&CcVolumeCacheMapList;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Blink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  CcBcbTrimNotificationListLock.Event.Header.WaitListHead.Flink = &CcBcbTrimNotificationListLock.Event.Header.WaitListHead;
  qword_140C49BA8 = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationList = (__int64)&CcBcbTrimNotificationList;
  CcBcbTrimNotificationListLock.Event.Header.Size = 6;
  CcBcbTrimNotificationListLock.Event.Header.SignalState = 0;
  CcAggressiveZeroThreshold = 4;
  CcMaxLazyWritePages = v3 != 0 ? 2048 : 256;
  CcExtraWBThreadDelay = v3 != 0 ? 5000000 : 10000000;
  if ( (unsigned int)(CcMaxLazyWritePagesOverride - 1) <= 0x7FFF )
    CcMaxLazyWritePages = CcMaxLazyWritePagesOverride;
  v12 = 5;
  CcAggressiveZeroCount = 0;
  CcCoalescingFlushEvent = 1;
  if ( CcAzure_SoftThrottleDelayInMs )
    v12 = CcAzure_SoftThrottleDelayInMs;
  byte_140C49BC2 = 6;
  CcSoftThrottleDelay = v12;
  qword_140C49BD0 = (__int64)&qword_140C49BC8;
  qword_140C49BC8 = (__int64)&qword_140C49BC8;
  dword_140C49BC4 = 0;
  ExInitializeSystemLookasideList(
    (__int64)&CcTwilightLookasideList,
    512,
    160,
    1800889155,
    v3 != 0 ? 256 : 128,
    (__int64)&ExSystemLookasideListHead);
  CcMaxWorklessLazywriteScans = 1;
  v13 = 0;
  for ( CcMaxZeroTransferSize = v3 != 0 ? 0x2000000 : 0x100000; v13 < (unsigned int)KeNumberProcessors_0; ++v13 )
  {
    if ( (int)CcInitializeProcessor(KiProcessorBlock[v13]) < 0 )
      KeBugCheckEx(0x34u, 0x273uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
  qword_140C49BF8 = (__int64)&CcExternalCacheList;
  CcExternalCacheList = (__int64)&CcExternalCacheList;
  if ( CcRemoteFileDPInlineFlushThreshold != -1 )
  {
    if ( (unsigned int)CcRemoteFileDPInlineFlushThreshold < 0x8000
      || (NumberOfPhysicalPagesForPartitionObject = MmGetNumberOfPhysicalPagesForPartitionObject((unsigned __int16 **)PspSystemPartition),
          v15 > NumberOfPhysicalPagesForPartitionObject) )
    {
      CcRemoteFileDPInlineFlushThreshold = 1310720;
    }
  }
  v16 = CcUnmapBehindLength;
  if ( (unsigned int)(CcUnmapBehindLength - 1) > 0x7F )
    v16 = 8;
  CcUnmapBehindLength = v16 << 20;
  if ( !CcAzure_LargeWriteSize
    || (v17 = CcAzure_LargeWriteSize << 10, CcAzure_LargeWriteSize << 10 <= (unsigned int)CcAzure_LargeWriteSize) )
  {
    v17 = 0;
  }
  CcAzure_LargeWriteSize = v17;
  if ( (unsigned int)CcAzure_SoftThrottleLargeWriteAtPct >= 0x65 )
    CcAzure_SoftThrottleLargeWriteAtPct = 0;
  if ( (unsigned int)CcAzure_LazyWriterPercentageOfNumProcs >= 0x65 )
    CcAzure_LazyWriterPercentageOfNumProcs = 0;
  CcInitializeTelemetry(1);
  qword_140C49AB0 = 0LL;
  CcTestControlData = 0LL;
  if ( (int)PoRegisterCoalescingCallback((__int64)CcCoalescingCallBack, 1, CcCoalescingRegistration, 0LL) < 0 )
    KeBugCheckEx(0x34u, 0x30BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v18 = (unsigned int)Feature_Servicing_Cc_InsufVA__private_IsEnabled() == 0;
  CcInitializationComplete = 1;
  result = 1;
  EnableFeatureServicing_CcInsufVAError = !v18;
  return result;
}
