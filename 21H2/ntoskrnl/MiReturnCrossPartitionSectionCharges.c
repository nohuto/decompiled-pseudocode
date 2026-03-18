/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1405C4B8C
 * Callers:
 *     MiDereferenceControlAreaPfnList @ 0x1402206C0 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x14022CBE0 (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x14022CE0C (MiUpdateLastSubsectionSize.c)
 *     MiDecrementSubsection @ 0x14023F9CC (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x140250924 (MiReleaseFaultCharges.c)
 *     MiCreatePrototypePtes @ 0x14026E564 (MiCreatePrototypePtes.c)
 *     MiDeleteControlArea @ 0x1402700FC (MiDeleteControlArea.c)
 *     MiDeleteSubsectionPages @ 0x140273390 (MiDeleteSubsectionPages.c)
 *     MiRemoveMappedPtes @ 0x140274860 (MiRemoveMappedPtes.c)
 *     MmPurgeSection @ 0x14027F360 (MmPurgeSection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140283DF0 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiFlushRelease @ 0x1402867DC (MiFlushRelease.c)
 *     MiReferenceActiveSubsection @ 0x140286DE0 (MiReferenceActiveSubsection.c)
 *     MiUnmapViewSubsections @ 0x1402875B0 (MiUnmapViewSubsections.c)
 *     MiCheckControlArea @ 0x140287660 (MiCheckControlArea.c)
 *     MiDecrementPartialVadSubsections @ 0x1402ED0C4 (MiDecrementPartialVadSubsections.c)
 *     MiAddViewsForSection @ 0x140311CC0 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x140329730 (MiFlushSectionInternal.c)
 *     MmUnmapViewInSystemCache @ 0x140335870 (MmUnmapViewInSystemCache.c)
 *     MiCleanSection @ 0x1403885EC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x14058A4E8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x14058A6D4 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x14058B0C8 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x14058B540 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x14058B784 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14058C0E4 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14058C1D4 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14058C330 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x140592278 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x140597C48 (MiUpdateActiveSubsection.c)
 *     MiExtendSection @ 0x1406A3A68 (MiExtendSection.c)
 *     MiChargeSegmentCommit @ 0x1406A4140 (MiChargeSegmentCommit.c)
 *     MiSegmentDelete @ 0x1406F4904 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x1405BF468 (MiReturnCrossPartitionCharges.c)
 */

LONG __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v4 = a2;
  if ( a2 )
    MiReturnCommit(a1, a3);
  v6 = a3;
  if ( (ULONG_PTR *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
    if ( (_DWORD)CachedResidentAvailable != -1 )
    {
      if ( a3 + CachedResidentAvailable <= 0x100 )
      {
        do
        {
          if ( a3 >= 0x80000 )
            break;
          v10 = _InterlockedCompareExchange(
                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                  CachedResidentAvailable + a3,
                  CachedResidentAvailable);
          v9 = (_DWORD)CachedResidentAvailable == v10;
          LODWORD(CachedResidentAvailable) = v10;
          if ( v9 )
            return MiReturnCrossPartitionCharges(a1, 0, v4, a3);
        }
        while ( v10 != -1 && a3 + v10 <= 0x100 );
      }
      if ( (int)CachedResidentAvailable > 192
        && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                192,
                                                CachedResidentAvailable) )
      {
        v6 = a3 + (int)CachedResidentAvailable - 192;
      }
    }
  }
  if ( v6 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v6);
  return MiReturnCrossPartitionCharges(a1, 0, v4, a3);
}
