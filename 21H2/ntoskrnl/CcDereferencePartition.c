/*
 * XREFs of CcDereferencePartition @ 0x1402F6D2C
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x1402CC2D0 (CcCompleteAsyncReadWorker.c)
 *     CcZeroData @ 0x1402E82C0 (CcZeroData.c)
 *     CcWorkerThread @ 0x1402F31F0 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402F38A0 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x1402F3DDC (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1402F6CBC (CcFreeWorkQueueEntry.c)
 *     CcForEachPartition @ 0x1402F8C10 (CcForEachPartition.c)
 *     CcAsyncReadWorker @ 0x1403B7950 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403B93A0 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncRead @ 0x1403C2F70 (CcInitializeAsyncRead.c)
 *     CcDeferWrite @ 0x1404EA040 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x1404EA2F0 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x1404EB3E0 (CcUnmapInactiveViews.c)
 *     CcDeletePartition @ 0x1404EBC80 (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x1404EC5C0 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1403435A0 (KeSetEvent.c)
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
