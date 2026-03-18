/*
 * XREFs of ?EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0xCCDEC
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB (-CancelAutoPromotion@@YGXXZ.c)
 *     ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z @ 0x17D0DD (-OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z.c)
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetMousePromotionInfo@@YGXGG@Z @ 0x17D5C0 (-ResetMousePromotionInfo@@YGXGG@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall EmptyMousePromotionQueue(_DWORD *this)
{
  _DWORD *v2; // [esp-4h] [ebp-8h]

  while ( *this )
  {
    v2 = (_DWORD *)*this;
    *this = *(_DWORD *)*this;
    Win32FreePool(v2);
  }
  this[1] = 0;
}
