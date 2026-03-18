/*
 * XREFs of ?ResetMousePromotionInfo@@YGXGG@Z @ 0x17D5C0
 * Callers:
 *     ?HandleLossOfPrimary@@YGHAAUtagPOINTER_INFO@@@Z @ 0x17D05C (-HandleLossOfPrimary@@YGHAAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0xCCDEC (-EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YGHAAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x17CC64 (-CacheIncludesPendingPromotion@@YGHAAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  __int16 v1; // ax
  __int16 *v2; // ebx
  __int16 *v3; // edi

  v1 = a1;
  if ( word_275248 )
  {
    v2 = (__int16 *)&dword_275280;
    if ( CacheIncludesPendingPromotion(&dword_275280) )
      ForceCompletePendingPromotion();
    EmptyMousePromotionQueue(dword_275284);
    do
    {
      v3 = v2;
      v2 -= 6;
      *(_DWORD *)v3 = *(_DWORD *)v2;
      v3 += 2;
      *(_DWORD *)v3 = *((_DWORD *)v2 + 1);
      *((_DWORD *)v3 + 1) = *((_DWORD *)v2 + 2);
    }
    while ( v2 >= &word_27525C );
    dword_275254[0] = 0;
    dword_275258 = 0;
    v1 = a1;
  }
  word_275248 = v1;
  word_275250[0] = v1;
}
