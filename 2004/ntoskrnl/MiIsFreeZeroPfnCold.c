/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x14031C638
 * Callers:
 *     MiDemoteLocalLargePage @ 0x14023B280 (MiDemoteLocalLargePage.c)
 *     MiConvertContiguousPages @ 0x14031600C (MiConvertContiguousPages.c)
 *     MiInsertLargePageChain @ 0x1403168A8 (MiInsertLargePageChain.c)
 *     MiGetLargePage @ 0x140319D60 (MiGetLargePage.c)
 *     MiReturnFreeZeroPage @ 0x14031C568 (MiReturnFreeZeroPage.c)
 *     MiReplenishPageSlist @ 0x14031DC00 (MiReplenishPageSlist.c)
 *     MiLargeFreePageToMdl @ 0x140353B98 (MiLargeFreePageToMdl.c)
 *     MiPurgePartitionStandby @ 0x140382544 (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x1403F10E8 (MiLargePagePromote.c)
 *     MiPruneStandbyPages @ 0x14054B934 (MiPruneStandbyPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DD40 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DD40;
  return HIDWORD(v1) == 4294967293;
}
