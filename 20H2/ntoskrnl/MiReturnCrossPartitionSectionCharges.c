/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14055361C
 * Callers:
 *     MiFlushRelease @ 0x14022BDC4 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x14022C750 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x14022CE60 (MiReferenceActiveSubsection.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14024E10C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiFlushSectionInternal @ 0x14027B590 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14027E4D0 (MiDeleteVad.c)
 *     MmUnmapViewInSystemCache @ 0x14029B2F0 (MmUnmapViewInSystemCache.c)
 *     MiCheckControlArea @ 0x14029BE20 (MiCheckControlArea.c)
 *     MmPurgeSection @ 0x1402C73C0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x1402C7990 (MiDeleteSubsectionPages.c)
 *     MiRemoveMappedPtes @ 0x1402CF020 (MiRemoveMappedPtes.c)
 *     MiDeleteControlArea @ 0x1402D2584 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x1402D51CC (MiCreatePrototypePtes.c)
 *     MiDereferenceControlAreaPfnList @ 0x140300800 (MiDereferenceControlAreaPfnList.c)
 *     MiUpdateLastSubsectionSize @ 0x140303B98 (MiUpdateLastSubsectionSize.c)
 *     MiDecrementSubsection @ 0x14031F71C (MiDecrementSubsection.c)
 *     MiReleaseFaultCharges @ 0x140327DCC (MiReleaseFaultCharges.c)
 *     MiAppendSubsectionChain @ 0x14035604C (MiAppendSubsectionChain.c)
 *     MiCleanSection @ 0x14037EA4C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x1405270D8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405272CC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140527CB4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140528288 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x1405284B8 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140528E24 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140528F14 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x140529070 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x140535950 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x14053B3E0 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x140681F74 (MiSegmentDelete.c)
 *     MiChargeSegmentCommit @ 0x1406B2AF0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140708F38 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x1405610C0 (MiReturnCrossPartitionCharges.c)
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
