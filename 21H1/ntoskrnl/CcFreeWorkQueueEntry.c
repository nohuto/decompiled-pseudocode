/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14023175C
 * Callers:
 *     CcUninitializeCacheMap @ 0x140231350 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x1402326E4 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x140233E00 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x1402344B0 (CcCachemapUninitWorkerThread.c)
 *     CcPostWorkQueueAsyncRead @ 0x140235324 (CcPostWorkQueueAsyncRead.c)
 *     CcMapAndCopyInToCache @ 0x14027BC80 (CcMapAndCopyInToCache.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403065D4 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x14031C6D0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B2B50 (CcAsyncReadWorker.c)
 * Callees:
 *     CcDereferencePartition @ 0x1402317CC (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x1403FDDA0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
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
