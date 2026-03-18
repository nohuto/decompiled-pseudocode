/*
 * XREFs of CcDereferencePartition @ 0x1402317CC
 * Callers:
 *     CcForEachPartition @ 0x140202D30 (CcForEachPartition.c)
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14023175C (CcFreeWorkQueueEntry.c)
 *     CcDeleteSharedCacheMap @ 0x14023372C (CcDeleteSharedCacheMap.c)
 *     CcWorkerThread @ 0x140233E00 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402344B0 (CcCachemapUninitWorkerThread.c)
 *     CcZeroData @ 0x1402C0D40 (CcZeroData.c)
 *     CcCompleteAsyncReadWorker @ 0x14031C6D0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B2B50 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B50D0 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1403BDF18 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x1404E4970 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1404E4C20 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1404E5D10 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1404E65B0 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1404E6EF0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 968), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1000), 0, 0);
  }
  return v2;
}
