/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1402F6CBC
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x1402B87C0 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x1402CC2D0 (CcCompleteAsyncReadWorker.c)
 *     CcWorkerThread @ 0x1402F31F0 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402F38A0 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x1402F6160 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x1402F68B0 (CcUninitializeCacheMap.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F8664 (CcPostWorkQueueAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x140331C70 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadWorker @ 0x1403B7950 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1403F03C4 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     CcDereferencePartition @ 0x1402F6D2C (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x140407970 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  Next = ListEntry[8].Next;
  P = CurrentPrcb->PPLookasideList[6].P;
  ++P->TotalFrees;
  if ( LOWORD(P->ListHead.Alignment) < P->Depth
    || (++P->FreeMisses, P = CurrentPrcb->PPLookasideList[6].L,
                         ++P->TotalFrees,
                         LOWORD(P->ListHead.Alignment) < P->Depth) )
  {
    RtlpInterlockedPushEntrySList(&P->ListHead, ListEntry);
  }
  else
  {
    ++P->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))P->FreeEx)(ListEntry);
  }
  return CcDereferencePartition(Next);
}
