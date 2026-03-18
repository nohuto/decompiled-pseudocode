/*
 * XREFs of ?ResetPendingPromotion@@YGXXZ @ 0x17D62F
 * Callers:
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 *     ?ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x17D2CC (-ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __stdcall ResetPendingPromotion()
{
  if ( dword_2752E8 )
    *(_DWORD *)(dword_2752E8 + 628) = 0;
  dword_2752E4 = 0;
  LOWORD(dword_2752E0) = 0;
  dword_2752E8 = 0;
  dword_2752EC = 0;
}
