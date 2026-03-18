/*
 * XREFs of ?DequeueMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@AAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0x17CE53
 * Callers:
 *     ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847 (-xxxProcessMousePromotionQueue@@YGXXZ.c)
 * Callees:
 *     <none>
 */

struct tagMOUSE_PROMOTION_ENTRY *__thiscall DequeueMousePromotionEntry(_DWORD *this)
{
  struct tagMOUSE_PROMOTION_ENTRY *result; // eax

  result = 0;
  if ( *this )
  {
    result = (struct tagMOUSE_PROMOTION_ENTRY *)*this;
    *this = *(_DWORD *)*this;
    if ( (struct tagMOUSE_PROMOTION_ENTRY *)this[1] == result )
      this[1] = 0;
  }
  return result;
}
