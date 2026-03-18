/*
 * XREFs of CcFreeWorkQueueEntry @ 0x1402766A0
 * Callers:
 *     CcWaitForUninitializeCacheMap @ 0x14023AFD8 (CcWaitForUninitializeCacheMap.c)
 *     CcCompleteAsyncReadWorker @ 0x140242F10 (CcCompleteAsyncReadWorker.c)
 *     CcCachemapUninitWorkerThread @ 0x140275000 (CcCachemapUninitWorkerThread.c)
 *     CcWriteBehind @ 0x140275FC0 (CcWriteBehind.c)
 *     CcUninitializeCacheMap @ 0x1402761B0 (CcUninitializeCacheMap.c)
 *     CcMapAndCopyInToCache @ 0x1402BD970 (CcMapAndCopyInToCache.c)
 *     CcPostWorkQueueAsyncRead @ 0x1402F5AEC (CcPostWorkQueueAsyncRead.c)
 *     CcWorkerThread @ 0x14035D970 (CcWorkerThread.c)
 *     CcAsyncReadWorker @ 0x1403C4AE0 (CcAsyncReadWorker.c)
 *     CcSerializeWithLazyWriter @ 0x1404171F4 (CcSerializeWithLazyWriter.c)
 *     CcQuickLazyWriteScanForVolume @ 0x14053D730 (CcQuickLazyWriteScanForVolume.c)
 * Callees:
 *     CcDereferencePartition @ 0x140276728 (CcDereferencePartition.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

int __fastcall CcFreeWorkQueueEntry(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v3; // rdi
  _SLIST_ENTRY *Next; // rbx
  _GENERAL_LOOKASIDE *P; // rcx
  signed __int64 v6; // rax
  signed __int64 v7; // rax
  bool v8; // cc

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = *((_QWORD *)&ListEntry[8].Next + 1);
  Next = ListEntry[9].Next;
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
  LODWORD(v6) = CcDereferencePartition(v3);
  if ( Next )
  {
    v7 = _InterlockedExchangeAdd64((volatile signed __int64 *)&Next->Next + 1, 0xFFFFFFFFFFFFFFFFuLL);
    v8 = v7 <= 1;
    v6 = v7 - 1;
    if ( v8 )
    {
      if ( v6 )
        __fastfail(0xEu);
      LODWORD(v6) = KeSetEvent((PRKEVENT)&Next[75], 0, 0);
    }
  }
  return v6;
}
