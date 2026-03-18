/*
 * XREFs of ?FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z @ 0x17CF32
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z @ 0x17D0DD (-OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2 (-ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_CACHE *__fastcall FindCacheById(__int16 a1, _DWORD *a2)
{
  int v2; // eax
  unsigned int v3; // esi

  v2 = 0;
  v3 = 0;
  while ( word_275250[v3] != a1 )
  {
    v3 += 6;
    ++v2;
    if ( v3 >= 30 )
      return 0;
  }
  *a2 = v2;
  return (struct tagMOUSE_PROMOTION_CACHE *)&word_275250[6 * v2];
}
