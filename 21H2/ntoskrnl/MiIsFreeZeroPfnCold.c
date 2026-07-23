/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x14030DE70
 * Callers:
 *     MiLargeFreePageToMdl @ 0x14020F5EC (MiLargeFreePageToMdl.c)
 *     MiConvertContiguousPages @ 0x140294F14 (MiConvertContiguousPages.c)
 *     MiDemoteLocalLargePage @ 0x1402D6960 (MiDemoteLocalLargePage.c)
 *     MiInsertLargePageChain @ 0x1403094D4 (MiInsertLargePageChain.c)
 *     MiReturnFreeZeroPage @ 0x14030DDA0 (MiReturnFreeZeroPage.c)
 *     MiGetLargePage @ 0x14030E784 (MiGetLargePage.c)
 *     MiReplenishPageSlist @ 0x140323450 (MiReplenishPageSlist.c)
 *     MiPurgePartitionStandby @ 0x140385154 (MiPurgePartitionStandby.c)
 *     MiLargePagePromote @ 0x1403F6D98 (MiLargePagePromote.c)
 *     MiPruneStandbyPages @ 0x140551014 (MiPruneStandbyPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C4DF80 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DF80;
  return HIDWORD(v1) == 4294967293;
}
