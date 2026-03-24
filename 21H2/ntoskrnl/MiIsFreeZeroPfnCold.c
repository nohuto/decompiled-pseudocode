/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x140303120
 * Callers:
 *     MiDemoteLocalLargePage @ 0x140232110 (MiDemoteLocalLargePage.c)
 *     MiLargeFreePageToMdl @ 0x14029167C (MiLargeFreePageToMdl.c)
 *     MiConvertContiguousPages @ 0x1402E3BC4 (MiConvertContiguousPages.c)
 *     MiInsertLargePageChain @ 0x1402FE784 (MiInsertLargePageChain.c)
 *     MiReturnFreeZeroPage @ 0x140303050 (MiReturnFreeZeroPage.c)
 *     MiGetLargePage @ 0x140303A34 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x140318700 (MiReplenishPageSlist.c)
 *     MiPurgePartitionStandby @ 0x140385004 (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiPruneStandbyPages @ 0x140550DD4 (MiPruneStandbyPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF40 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DF40;
  return HIDWORD(v1) == 4294967293;
}
