/*
 * XREFs of MiIsFreeZeroPfnCold @ 0x140268620
 * Callers:
 *     MiReplenishPageSlist @ 0x140264720 (MiReplenishPageSlist.c)
 *     MiConvertContiguousPages @ 0x140265BE4 (MiConvertContiguousPages.c)
 *     MiGetLargePageChain @ 0x140266158 (MiGetLargePageChain.c)
 *     MiReturnFreeZeroPage @ 0x14026845C (MiReturnFreeZeroPage.c)
 *     MiBeginPageAccessor @ 0x140268520 (MiBeginPageAccessor.c)
 *     MiInsertLargePageChain @ 0x1402C15F0 (MiInsertLargePageChain.c)
 *     MiGetPerfectColorHeadPage @ 0x140325830 (MiGetPerfectColorHeadPage.c)
 *     MiPurgePartitionStandby @ 0x14038E4BC (MiPurgePartitionStandby.c)
 *     MiLargeFreePageToMdl @ 0x1403D5CF4 (MiLargeFreePageToMdl.c)
 *     MiPruneStandbyPages @ 0x14045C812 (MiPruneStandbyPages.c)
 *     MiAllocateLargeZeroPages @ 0x1405C0D40 (MiAllocateLargeZeroPages.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiIsFreeZeroPfnCold(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  if ( qword_140C50780 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C50780;
  return HIDWORD(v1) == 4294967293;
}
