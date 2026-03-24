/*
 * XREFs of MiReturnCrossPartitionSectionCharges @ 0x1405550EC
 * Callers:
 *     MiFlushSectionInternal @ 0x140219DB0 (MiFlushSectionInternal.c)
 *     MiDeleteVad @ 0x14021BFF0 (MiDeleteVad.c)
 *     MmPurgeSection @ 0x140238BA0 (MmPurgeSection.c)
 *     MiDeleteSubsectionPages @ 0x140239170 (MiDeleteSubsectionPages.c)
 *     MiDereferenceControlAreaPfnList @ 0x140263AA0 (MiDereferenceControlAreaPfnList.c)
 *     MiAppendSubsectionChain @ 0x1402A147C (MiAppendSubsectionChain.c)
 *     MiUpdateLastSubsectionSize @ 0x1402A1728 (MiUpdateLastSubsectionSize.c)
 *     MiReleaseFaultCharges @ 0x1402C8F9C (MiReleaseFaultCharges.c)
 *     MiDecrementSubsection @ 0x1402EE404 (MiDecrementSubsection.c)
 *     MiDeleteControlArea @ 0x1402F7AE4 (MiDeleteControlArea.c)
 *     MiCreatePrototypePtes @ 0x1402F7DF8 (MiCreatePrototypePtes.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x1402FC9DC (MiRemoveViewsFromSectionWithPfn.c)
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 *     MiRemoveMappedPtes @ 0x140308500 (MiRemoveMappedPtes.c)
 *     MmUnmapViewInSystemCache @ 0x140313AE0 (MmUnmapViewInSystemCache.c)
 *     MiCheckControlArea @ 0x140314AB0 (MiCheckControlArea.c)
 *     MiFlushRelease @ 0x140315010 (MiFlushRelease.c)
 *     MiAddViewsForSection @ 0x1403155F0 (MiAddViewsForSection.c)
 *     MiReferenceActiveSubsection @ 0x140315D00 (MiReferenceActiveSubsection.c)
 *     MiCleanSection @ 0x14037F28C (MiCleanSection.c)
 *     MiDeleteCachedSegment @ 0x140528BB8 (MiDeleteCachedSegment.c)
 *     MiDeleteCachedSubsection @ 0x140528DAC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140529794 (MiFlushControlArea.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x140529D68 (MiMakeUnusedSegmentDeleteOnClose.c)
 *     MiProcessDeleteOnClose @ 0x140529F98 (MiProcessDeleteOnClose.c)
 *     MiReturnCrossPartitionControlAreaCharges @ 0x14052A924 (MiReturnCrossPartitionControlAreaCharges.c)
 *     MiSetDeleteOnClose @ 0x14052AA14 (MiSetDeleteOnClose.c)
 *     MiUpControlAreaRefs @ 0x14052AB70 (MiUpControlAreaRefs.c)
 *     MiRemoveSystemCacheReferences @ 0x140537450 (MiRemoveSystemCacheReferences.c)
 *     MiUpdateActiveSubsection @ 0x14053CEE0 (MiUpdateActiveSubsection.c)
 *     MiChargeSegmentCommit @ 0x14061FED0 (MiChargeSegmentCommit.c)
 *     MiExtendSection @ 0x140689798 (MiExtendSection.c)
 *     MiSegmentDelete @ 0x1406E8110 (MiSegmentDelete.c)
 * Callees:
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x140562B90 (MiReturnCrossPartitionCharges.c)
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
