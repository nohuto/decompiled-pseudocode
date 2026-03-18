/*
 * XREFs of ?ResetPendingPromotion@@YAXXZ @ 0x1C0219BC8
 * Callers:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02193F4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x1C0219708 (-ProcessRangeInCache@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void ResetPendingPromotion(void)
{
  if ( qword_1C033AB98 )
    *(_DWORD *)(qword_1C033AB98 + 1112) = 0;
  word_1C033AB90 = 0;
  dword_1C033AB94 = 0;
  qword_1C033AB98 = 0LL;
  dword_1C033ABA0 = 0;
}
