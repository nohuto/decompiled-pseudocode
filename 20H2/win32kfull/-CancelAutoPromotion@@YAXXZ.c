/*
 * XREFs of ?CancelAutoPromotion@@YAXXZ @ 0x1C0218158
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C02191D4 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x1C000C1E8 (-EmptyMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x1C02182D8 (-CreateEntryFromLastEntry@@YAPEAUtagMOUSE_PROMOTION_ENTRY@@XZ.c)
 *     ?ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0218410 (-ExtractRangeFromQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@0PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02184F0 (-FindMousePromotionInContactRange@@YAHAEBUtagMOUSE_PROMOTION_QUEUE@@KPEAPEAUtagMOUSE_PROMOTION_E.c)
 *     ?QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C0218C54 (-QueueMousePromotionEntry@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void CancelAutoPromotion(void)
{
  struct tagMOUSE_PROMOTION_ENTRY *EntryFromLastEntry; // rax
  __int128 v1; // [rsp+20h] [rbp-18h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v2; // [rsp+40h] [rbp+8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v3; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v2 = 0LL;
  if ( (unsigned int)FindMousePromotionInContactRange(
                       (const struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0339B60,
                       dword_1C0339AE4,
                       &v3,
                       &v2) )
  {
    v1 = 0LL;
    ExtractRangeFromQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0339B60,
      (struct tagMOUSE_PROMOTION_QUEUE *)&v1,
      v3,
      v2);
    EmptyMousePromotionQueue((struct tagMOUSE_PROMOTION_QUEUE *)&v1);
  }
  else
  {
    EntryFromLastEntry = CreateEntryFromLastEntry();
    if ( EntryFromLastEntry )
    {
      *((_DWORD *)EntryFromLastEntry + 5) = 303104;
      QueueMousePromotionEntry((struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0339B60, EntryFromLastEntry);
    }
  }
  dword_1C0339BE8 &= 0xFFFFFFE9;
}
