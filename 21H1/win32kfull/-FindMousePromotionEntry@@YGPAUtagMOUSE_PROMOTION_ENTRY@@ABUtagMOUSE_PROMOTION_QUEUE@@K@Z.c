/*
 * XREFs of ?FindMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x17CF59
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z @ 0x17D0DD (-OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z.c)
 *     ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2 (-ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *__fastcall FindMousePromotionEntry(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        unsigned int a2)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // eax

  for ( result = *a1;
        result && (*((_DWORD *)result + 8) > a2 || *((_DWORD *)result + 9) < a2);
        result = *(struct tagMOUSE_PROMOTION_ENTRY **)result )
  {
    ;
  }
  return result;
}
