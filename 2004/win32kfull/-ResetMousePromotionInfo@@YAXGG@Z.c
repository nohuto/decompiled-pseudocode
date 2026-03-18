/*
 * XREFs of ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0219B3C
 * Callers:
 *     ?HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z @ 0x1C0219494 (-HandleLossOfPrimary@@YAHAEAUtagPOINTER_INFO@@@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C021A064 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C00C1048 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x1C0218FA0 (-CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C02193F4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall ResetMousePromotionInfo(__int16 a1)
{
  char *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // xmm1_8

  if ( word_1C033AAB0 )
  {
    v2 = (char *)&unk_1C033AB18;
    if ( (unsigned int)CacheIncludesPendingPromotion((struct tagMOUSE_PROMOTION_CACHE *)&unk_1C033AB18) )
      ForceCompletePendingPromotion();
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&unk_1C033AB20);
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
    unk_1C033AAC0 = 0LL;
  }
  word_1C033AAB0 = a1;
  word_1C033AAB8[0] = a1;
}
