/*
 * XREFs of ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9
 * Callers:
 *     _xxxCleanupThreadPointerInputInfo@4 @ 0x9AFC6 (_xxxCleanupThreadPointerInputInfo@4.c)
 *     ?ResetMousePromotionInfo@@YGXGG@Z @ 0x17D5C0 (-ResetMousePromotionInfo@@YGXGG@Z.c)
 *     ?xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z @ 0x17D816 (-xxxCompletePendingPromotion@PointerPromotion@@YGXPAUtagTHREADINFO@@@Z.c)
 *     ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68 (-xxxPromotePointer@PointerPromotion@@YGHGKK@Z.c)
 * Callees:
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?ResetPendingPromotion@@YGXXZ @ 0x17D62F (-ResetPendingPromotion@@YGXXZ.c)
 *     ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2 (-ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 */

void __stdcall ForceCompletePendingPromotion()
{
  unsigned int v0; // eax
  struct tagMOUSE_PROMOTION_ENTRY **v1; // [esp+0h] [ebp-10h]
  struct tagMOUSE_PROMOTION_ENTRY *v2; // [esp+0h] [ebp-10h]
  unsigned __int16 v3[2]; // [esp+4h] [ebp-Ch] BYREF
  unsigned __int16 v4[2]; // [esp+8h] [ebp-8h] BYREF
  unsigned int v5; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v4 = 0;
  v5 = 0;
  if ( !ValidatePointerPromotion(
          (unsigned __int16)v3,
          (unsigned int)v4,
          &v5,
          v1,
          (struct tagMOUSE_PROMOTION_ENTRY **)(((dword_2752EC != 0) + 16842753) | (dword_2752F0 != 0 ? 0x2000000 : 0))) )
    goto LABEL_5;
  v0 = v5;
  if ( v5 )
    *(_DWORD *)(v5 + 44) |= 0x20u;
  if ( !PromotePointerInternal(v4[0], v0, v2, *(struct tagMOUSE_PROMOTION_ENTRY **)v3) )
LABEL_5:
    ResetPendingPromotion();
}
