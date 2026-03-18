/*
 * XREFs of CcDereferencePartition @ 0x14029EBDC
 * Callers:
 *     CcZeroData @ 0x140240A60 (CcZeroData.c)
 *     CcDeleteSharedCacheMap @ 0x140247C98 (CcDeleteSharedCacheMap.c)
 *     CcWorkerThread @ 0x140249690 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140249D40 (CcCachemapUninitWorkerThread.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x14029EB6C (CcFreeWorkQueueEntry.c)
 *     CcCompleteAsyncReadWorker @ 0x14032ADE0 (CcCompleteAsyncReadWorker.c)
 *     CcForEachPartition @ 0x14033B8A0 (CcForEachPartition.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B89A0 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1403C2720 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x1404E84B0 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1404E8760 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1404E9850 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1404EA0F0 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1404EAA30 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140219280 (KeSetEvent.c)
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
