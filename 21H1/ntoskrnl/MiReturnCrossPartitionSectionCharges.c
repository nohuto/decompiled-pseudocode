/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14054F5FC
 * Callers:
 *     MiFlushSectionInternal @ 0x140219740 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14026B790 (MiDeleteVad.c)
 *     MiDeleteSubsectionPages @ 0x140283240 (MiDeleteSubsectionPages.c)
 *     MmUnmapViewInSystemCache @ 0x1402A0380 (MmUnmapViewInSystemCache.c)
 *     MiAddViewsForSection @ 0x1402A1CC0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1402A23D0 (MiReferenceActiveSubsection.c)
 *     MiFlushRelease @ 0x1402A3248 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x1402A38D0 (MiCheckControlArea.c)
 *     MiDeletePartialVad @ 0x1402AA764 (MiDeletePartialVad.c)
 *     MiRemoveMappedPtes @ 0x1402B38F0 (MiRemoveMappedPtes.c)
 *     MiDeleteControlArea @ 0x1402B9578 (MiDeleteControlArea.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402BB49C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCreatePrototypePtes @ 0x1402BC59C (MiCreatePrototypePtes.c)
 *     MiAppendSubsectionChain @ 0x1402BF084 (MiAppendSubsectionChain.c)
 *     MmPurgeSection @ 0x1402CF7C0 (MmPurgeSection.c)
 *     MiDecrementSubsection @ 0x1402D02E8 (MiDecrementSubsection.c)
 *     MiDereferenceControlAreaPfnList @ 0x1402F1320 (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x1403197DC (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x14031B464 (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x14037C0AC (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1405230B8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405232AC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140523C94 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140524268 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524498 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140524E04 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140524EF4 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140525050 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x140531930 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x1405373C0 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x14063E304 (MiSegmentDelete.c)
 *     MiChargeSegmentCommit @ 0x140640FF0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140641F00 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x14027D3E0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D0A0 (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiReturnCrossPartitionSectionCharges(__int64 a1, unsigned int a2, unsigned __int64 a3)
{
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 CachedResidentAvailable; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

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
            return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
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
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 7168), v6);
  return MiReturnCrossPartitionCharges(a1, 0LL, a2, a3);
}
