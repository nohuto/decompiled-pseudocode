/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x14034D3C0
 * Callers:
 *     MiReplenishPageSlist @ 0x140230AA0 (MiReplenishPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x1402C0930 (MiDemoteLocalLargePage.c)
 *     MiLargeFreePageToMdl @ 0x1402F16D8 (MiLargeFreePageToMdl.c)
 *     MiInsertLargePageChain @ 0x1402F1AEC (MiInsertLargePageChain.c)
 *     MiConvertContiguousPages @ 0x140334AA4 (MiConvertContiguousPages.c)
 *     MiReturnFreeZeroPage @ 0x14034D2F0 (MiReturnFreeZeroPage.c)
 *     MiGetLargePage @ 0x14034D8FC (MiGetLargePage.c)
 *     MiPurgePartitionStandby @ 0x140384224 (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x1403F55FC (MiLargePagePromote.c)
 *     MiPruneStandbyPages @ 0x14054F304 (MiPruneStandbyPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DDC0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DDC0;
  return HIDWORD(v1) == 4294967293;
}
