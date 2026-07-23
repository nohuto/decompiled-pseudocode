/*
 * XREFs of CcDereferencePartition @ 0x140301A7C
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x14024A930 (CcCompleteAsyncReadWorker.c)
 *     CcZeroData @ 0x140299610 (CcZeroData.c)
 *     CcWorkerThread @ 0x1402FDF40 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402FE5F0 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x1402FEB2C (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x140301600 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x140301A0C (CcFreeWorkQueueEntry.c)
 *     CcForEachPartition @ 0x140303960 (CcForEachPartition.c)
 *     CcAsyncReadWorker @ 0x1403B7AC0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B9510 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1403C33A0 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x1404EA280 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1404EA530 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1404EB620 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1404EC800 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
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
