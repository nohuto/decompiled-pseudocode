/*
 * XREFs of ?xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z @ 0x17D816
 * Callers:
 *     _xxxRealInternalGetMessage@24 @ 0x68850 (_xxxRealInternalGetMessage@24.c)
 * Callees:
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 */

void __thiscall PointerPromotion::xxxCompletePendingPromotion(_DWORD *ecx0)
{
  if ( (_WORD)dword_2752E0 && (_DWORD *)dword_2752E8 == ecx0 && dword_2752E4 == ecx0[157] )
  {
    ForceCompletePendingPromotion();
    xxxProcessMousePromotionQueue();
  }
  else
  {
    ecx0[157] = 0;
  }
}
