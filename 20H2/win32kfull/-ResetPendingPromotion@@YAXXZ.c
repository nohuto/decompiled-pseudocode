/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C0218D38
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0218564 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0218878 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C0339BC8 )
    *(_DWORD *)(qword_1C0339BC8 + 1120) = 0;
  word_1C0339BC0 = 0;
  dword_1C0339BC4 = 0;
  qword_1C0339BC8 = 0LL;
  dword_1C0339BD0 = 0;
}
