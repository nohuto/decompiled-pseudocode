/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x14034B978
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1402942B0 (MiDemoteLocalLargePage.c)
 *     MiReplenishPageSlist @ 0x1402EA3B0 (MiReplenishPageSlist.c)
 *     MiLargeFreePageToMdl @ 0x140316020 (MiLargeFreePageToMdl.c)
 *     MiConvertContiguousPages @ 0x14034534C (MiConvertContiguousPages.c)
 *     MiInsertLargePageChain @ 0x140345BE8 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x1403490A0 (MiGetLargePage.c)
 *     MiReturnFreeZeroPage @ 0x14034B8A8 (MiReturnFreeZeroPage.c)
 *     MiPurgePartitionStandby @ 0x140381D04 (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x1403EFD88 (MiLargePagePromote.c)
 *     MiPruneStandbyPages @ 0x14054B2E4 (MiPruneStandbyPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DE80 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DE80;
  return HIDWORD(v1) == 4294967293;
}
