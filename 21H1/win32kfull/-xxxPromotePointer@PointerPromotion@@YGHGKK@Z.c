/*
 * XREFs of ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 *     _EditionPromotePointer@12 @ 0x17DEC8 (_EditionPromotePointer@12.c)
 * Callees:
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SGXKGKG@Z @ 0x17D519 (-PromoteToMouse@Pointer@InputTraceLogging@@SGXKGKG@Z.c)
 *     ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2 (-ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847 (-xxxProcessMousePromotionQueue@@YGXXZ.c)
 */

unsigned int __userpurge PointerPromotion::xxxPromotePointer@<eax>(
        unsigned int a1@<edx>,
        __int16 a2@<cx>,
        PointerPromotion *this,
        unsigned __int16 a4,
        unsigned int a5,
        unsigned int a6)
{
  PointerPromotion *v6; // ebx
  int v9; // ecx
  unsigned int v10; // edx
  PointerPromotion *v12; // edx
  int v13; // esi
  unsigned int v14; // [esp+0h] [ebp-14h]
  struct tagMOUSE_PROMOTION_ENTRY **v15; // [esp+0h] [ebp-14h]
  struct tagMOUSE_PROMOTION_ENTRY *v16; // [esp+0h] [ebp-14h]
  unsigned __int16 v17; // [esp+4h] [ebp-10h]
  struct tagMOUSE_PROMOTION_ENTRY **v18; // [esp+4h] [ebp-10h]
  struct tagMOUSE_PROMOTION_ENTRY *v19; // [esp+4h] [ebp-10h]
  unsigned int v20; // [esp+Ch] [ebp-8h] BYREF
  unsigned __int16 v21[2]; // [esp+10h] [ebp-4h] BYREF

  v6 = this;
  *(_DWORD *)v21 = 0;
  v20 = 0;
  InputTraceLogging::Pointer::PromoteToMouse(a2, a1, (unsigned int)this, 0, v14, v17);
  if ( !ValidatePointerPromotion(a1, a2, (unsigned int *)&this, (struct tagMOUSE_PROMOTION_ENTRY **)v21, &v20, v15, v18) )
    return 0;
  if ( !(_WORD)dword_2752E0 )
  {
LABEL_11:
    v9 = *(_DWORD *)v21;
    v12 = this;
LABEL_12:
    if ( v12 == (PointerPromotion *)0x10000000 )
    {
      dword_2752FC |= 8u;
      return 1;
    }
    else
    {
      v13 = PromotePointerInternal((unsigned int)v12, a2, v9, (struct tagMOUSE_PROMOTION_CACHE *)v20, v16, v19);
      xxxProcessMousePromotionQueue();
      return v13;
    }
  }
  if ( (_WORD)dword_2752E0 != a2 || (v9 = *(_DWORD *)v21, dword_2752E4 != *(_DWORD *)(*(_DWORD *)v21 + 32)) )
  {
    ForceCompletePendingPromotion();
    this = v6;
    if ( ValidatePointerPromotion(
           a1,
           a2,
           (unsigned int *)&this,
           (struct tagMOUSE_PROMOTION_ENTRY **)v21,
           &v20,
           (struct tagMOUSE_PROMOTION_ENTRY **)v16,
           (struct tagMOUSE_PROMOTION_ENTRY **)v19) )
    {
      goto LABEL_11;
    }
    return 0;
  }
  LOBYTE(v10) = (_BYTE)this;
  if ( ((unsigned int)&loc_80000 & (unsigned int)this) == 0 )
  {
    v12 = (PointerPromotion *)((dword_2752F0 != 0 ? 50331648 : 0x1000000) | ((dword_2752EC != 0) + 1) | (unsigned int)this & 0xFFFF00);
    goto LABEL_12;
  }
  if ( dword_2752EC )
    v10 = (unsigned int)this >> 1;
  return v10 & 1;
}
