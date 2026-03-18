/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x14054FC4C
 * Callers:
 *     MiDeleteVad @ 0x140212740 (MiDeleteVad.c)
 *     MiDeleteSubsectionPages @ 0x14022A1F0 (MiDeleteSubsectionPages.c)
 *     MmUnmapViewInSystemCache @ 0x140247350 (MmUnmapViewInSystemCache.c)
 *     MiAddViewsForSection @ 0x140248C90 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x1402493A0 (MiReferenceActiveSubsection.c)
 *     MiFlushRelease @ 0x14024A218 (MiFlushRelease.c)
 *     MiCheckControlArea @ 0x14024A8A0 (MiCheckControlArea.c)
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 *     MiRemoveMappedPtes @ 0x14025A8C0 (MiRemoveMappedPtes.c)
 *     MiDeleteControlArea @ 0x140260548 (MiDeleteControlArea.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x14026246C (MiRemoveViewsFromSectionWithPfn.c)
 *     MiCreatePrototypePtes @ 0x14026356C (MiCreatePrototypePtes.c)
 *     MiAppendSubsectionChain @ 0x140266054 (MiAppendSubsectionChain.c)
 *     MiFlushSectionInternal @ 0x1402AC250 (MiFlushSectionInternal.c)
 *     MmPurgeSection @ 0x14031FBF0 (MmPurgeSection.c)
 *     MiDecrementSubsection @ 0x140320E6C (MiDecrementSubsection.c)
 *     MiDereferenceControlAreaPfnList @ 0x14032D0C0 (MiDereferenceControlAreaPfnList.c)
 *     MiReleaseFaultCharges @ 0x1403573CC (MiReleaseFaultCharges.c)
 *     MiUpdateLastSubsectionSize @ 0x140359034 (MiUpdateLastSubsectionSize.c)
 *     MiCleanSection @ 0x14037CD1C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140523708 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x1405238FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1405242E4 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1405248B8 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140524AE8 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x140525454 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x140525544 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x1405256A0 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x140531F80 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x140537A10 (MiUpdateActiveSubsection.c)
 *     MiSegmentDelete @ 0x1406091B4 (MiSegmentDelete.c)
 *     MiChargeSegmentCommit @ 0x14060BEA0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x14060CDB0 (MiExtendSection.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14055D6F0 (MiReturnCrossPartitionCharges.c)
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
