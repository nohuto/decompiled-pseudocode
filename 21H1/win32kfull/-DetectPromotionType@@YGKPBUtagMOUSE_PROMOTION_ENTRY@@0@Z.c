/*
 * XREFs of ?DetectPromotionType@@YGKPBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17CE6B
 * Callers:
 *     ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2 (-ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall DetectPromotionType(_DWORD **a1, _DWORD *a2)
{
  _DWORD *i; // ecx
  int v3; // eax

  if ( !a2 )
  {
    a2 = a1;
    for ( i = *a1; i; i = (_DWORD *)*i )
      a2 = i;
  }
  v3 = a2[11];
  if ( (v3 & 0x10) != 0 )
    return (((v3 & 8) != 0) + 1) | 0x10000;
  if ( (a2[4] & 0x40000) != 0 )
    return (unsigned int)&loc_20000 | (((v3 & 8) != 0) + 1);
  return 0x10000000;
}
