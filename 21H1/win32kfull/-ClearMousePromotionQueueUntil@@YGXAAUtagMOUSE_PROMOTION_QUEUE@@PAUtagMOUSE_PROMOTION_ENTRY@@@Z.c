/*
 * XREFs of ?ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17CD2F
 * Callers:
 *     ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z @ 0x17D0DD (-OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z.c)
 *     ?ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x17D24A (-ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x17D2CC (-ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearMousePromotionQueueUntil(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v4; // esi
  _DWORD *v5; // [esp-4h] [ebp-10h]

  while ( 1 )
  {
    v4 = *a1;
    if ( !*a1 || v4 == a2 )
      break;
    v5 = *a1;
    *a1 = (_DWORD *)*v4;
    Win32FreePool(v5);
  }
}
