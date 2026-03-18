/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0218CAC
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C0218604 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C02191D4 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C000C1E8 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x1C0218110 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0218564 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // xmm1_8

  if ( word_1C0339AE0 )
  {
    v2 = (char *)&unk_1C0339B48;
    if ( (unsigned int)CacheIncludesPendingPromotion((struct tagMOUSE_PROMOTION_CACHE *)&unk_1C0339B48) )
      ForceCompletePendingPromotion();
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C0339B50);
    v3 = 4LL;
    do
    {
      v4 = *((_QWORD *)v2 - 1);
      *(_OWORD *)v2 = *(_OWORD *)(v2 - 24);
      *((_QWORD *)v2 + 2) = v4;
      v2 -= 24;
      --v3;
    }
    while ( v3 );
    unk_1C0339AF0 = 0LL;
  }
  word_1C0339AE0 = a1;
  word_1C0339AE8[0] = a1;
}
