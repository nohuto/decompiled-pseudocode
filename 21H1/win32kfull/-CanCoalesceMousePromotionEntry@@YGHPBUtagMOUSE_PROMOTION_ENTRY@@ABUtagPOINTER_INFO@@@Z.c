/*
 * XREFs of ?CanCoalesceMousePromotionEntry@@YGHPBUtagMOUSE_PROMOTION_ENTRY@@ABUtagPOINTER_INFO@@@Z @ 0x17CC9A
 * Callers:
 *     ?CoalesceMousePromotionEntry@@YGHABUtagPOINTER_INFO@@G@Z @ 0x17CD53 (-CoalesceMousePromotionEntry@@YGHABUtagPOINTER_INFO@@G@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall CanCoalesceMousePromotionEntry(int a1, _DWORD *a2)
{
  return *(_DWORD *)(a1 + 16) == a2[3] && a2[2] > *(_DWORD *)(a1 + 36) && dword_2752F4 == a2[5];
}
