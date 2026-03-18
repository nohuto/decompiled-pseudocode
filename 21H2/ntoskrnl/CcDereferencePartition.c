/*
 * XREFs of CcDereferencePartition @ 0x140276728
 * Callers:
 *     CcCompleteAsyncReadWorker @ 0x140242F10 (CcCompleteAsyncReadWorker.c)
 *     CcCachemapUninitWorkerThread @ 0x140275000 (CcCachemapUninitWorkerThread.c)
 *     CcDeleteSharedCacheMap @ 0x140275338 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     CcFreeWorkQueueEntry @ 0x1402766A0 (CcFreeWorkQueueEntry.c)
 *     CcZeroData @ 0x14029BD20 (CcZeroData.c)
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 *     CcForEachPartition @ 0x140363C8C (CcForEachPartition.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 *     CcQueueLazyWriteScanThread @ 0x1403C7DE0 (CcQueueLazyWriteScanThread.c)
 *     CcInitializeAsyncReadForNodeHelper @ 0x1403D0750 (CcInitializeAsyncReadForNodeHelper.c)
 *     CcRemoveExternalCache @ 0x140539BC4 (CcRemoveExternalCache.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     CcPostDeferredWrites @ 0x14053A100 (CcPostDeferredWrites.c)
 *     CcUnmapInactiveViews @ 0x14053B3F8 (CcUnmapInactiveViews.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x14053BFB8 (CcDeletePrivateVolumeCacheMap.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14053D730 (CcQuickLazyWriteScanForVolume.c)
 *     CcDeletePartition @ 0x14053DAFC (CcDeletePartition.c)
 *     CcAsyncReadWorkerThread @ 0x14053E700 (CcAsyncReadWorkerThread.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

char __fastcall CcDereferencePartition(__int64 a1)
{
  signed __int64 v1; // rax
  char v2; // bl
  bool v3; // cc
  signed __int64 v4; // rax

  v1 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1232), 0xFFFFFFFFFFFFFFFFuLL);
  v2 = 0;
  v3 = v1 <= 1;
  v4 = v1 - 1;
  if ( v3 )
  {
    if ( v4 )
      __fastfail(0xEu);
    v2 = 1;
    KeSetEvent((PRKEVENT)(a1 + 1264), 0, 0);
  }
  return v2;
}
