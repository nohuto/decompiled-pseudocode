/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1402C458C
 * Callers:
 *     CcMapAndCopyInToCache @ 0x140222C30 (CcMapAndCopyInToCache.c)
 *     CcUninitializeCacheMap @ 0x1402C4180 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x1402C5514 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x1402C6C30 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402C72E0 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402C8154 (CcPostWorkQueueAsyncRead.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403443D8 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x14035A2B0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B4950 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1403ECEF4 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     CcDereferencePartition @ 0x1402C45FC (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FF030 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
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
