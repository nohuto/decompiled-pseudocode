/*
 * XREFs of CcFreeWorkQueueEntry @ 0x14029EB6C
 * Callers:
 *     CcPostWorkQueueAsyncRead @ 0x140248F44 (CcPostWorkQueueAsyncRead.c)
 *     CcWorkerThread @ 0x140249690 (CcWorkerThread.c)
 *     CcCachemapUninitWorkerThread @ 0x140249D40 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x14024A910 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x14029E760 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1402B4EC0 (CcMapAndCopyInToCache.c)
 *     CcWaitForUninitializeCacheMap @ 0x1403154B0 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x14032ADE0 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x1403B6310 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1403EFA24 (CcSerializeWithLazyWriter.c)
 * Callees:
 *     CcDereferencePartition @ 0x14029EBDC (CcDereferencePartition.c)
 *     RtlpInterlockedPushEntrySList @ 0x140405300 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
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
