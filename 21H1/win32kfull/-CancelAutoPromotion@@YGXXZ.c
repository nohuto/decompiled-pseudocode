/*
 * XREFs of ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0xCCDEC (-EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?CreateEntryFromLastEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@XZ @ 0x17CE30 (-CreateEntryFromLastEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@XZ.c)
 *     ?ExtractRangeFromQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@0PAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CEB5 (-ExtractRangeFromQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@0PAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?FindMousePromotionInContactRange@@YGHABUtagMOUSE_PROMOTION_QUEUE@@KPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CF6E (-FindMousePromotionInContactRange@@YGHABUtagMOUSE_PROMOTION_QUEUE@@KPAPAUtagMOUSE_PROMOTION_ENTR.c)
 *     ?QueueMousePromotionEntry@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17D58C (-QueueMousePromotionEntry@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void __stdcall CancelAutoPromotion()
{
  struct tagMOUSE_PROMOTION_ENTRY *EntryFromLastEntry; // eax
  struct tagMOUSE_PROMOTION_ENTRY **v1; // [esp+0h] [ebp-18h]
  struct tagMOUSE_PROMOTION_ENTRY *v2; // [esp+0h] [ebp-18h]
  struct tagMOUSE_PROMOTION_ENTRY **v3; // [esp+4h] [ebp-14h]
  struct tagMOUSE_PROMOTION_ENTRY *v4; // [esp+4h] [ebp-14h]
  _DWORD v5[2]; // [esp+8h] [ebp-10h] BYREF
  struct tagMOUSE_PROMOTION_QUEUE *v6; // [esp+10h] [ebp-8h] BYREF
  struct tagMOUSE_PROMOTION_QUEUE *v7; // [esp+14h] [ebp-4h] BYREF

  v6 = 0;
  v7 = 0;
  if ( FindMousePromotionInContactRange((const struct tagMOUSE_PROMOTION_QUEUE *)&v6, (unsigned int)&v7, v1, v3) )
  {
    v5[0] = 0;
    v5[1] = 0;
    ExtractRangeFromQueue(v6, v7, v2, v4);
    EmptyMousePromotionQueue(v5);
  }
  else
  {
    EntryFromLastEntry = CreateEntryFromLastEntry();
    if ( EntryFromLastEntry )
    {
      *((_DWORD *)EntryFromLastEntry + 4) = &loc_4A000;
      QueueMousePromotionEntry(v2, v4);
    }
  }
  dword_2752FC &= 0xFFFFFFE9;
}
