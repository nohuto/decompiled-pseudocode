/*
 * XREFs of CcDereferencePartition @ 0x1402C45FC
 * Callers:
 *     CcZeroData @ 0x140267D10 (CcZeroData.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1402C458C (CcFreeWorkQueueEntry.c)
 *     CcDeleteSharedCacheMap @ 0x1402C655C (CcDeleteSharedCacheMap.c)
 *     CcWorkerThread @ 0x1402C6C30 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402C72E0 (CcCachemapUninitWorkerThread.c)
 *     CcForEachPartition @ 0x140343DA0 (CcForEachPartition.c)
 *     CcCompleteAsyncReadWorker @ 0x14035A2B0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B4950 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B5F00 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1403BEEA8 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x1404E4F20 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1404E51D0 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1404E62C0 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1404E6B60 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1404E74A0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x140286AD0 (KeSetEvent.c)
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
