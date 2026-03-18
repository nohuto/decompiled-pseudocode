/*
 * XREFs of ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2
 * Callers:
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68 (-xxxPromotePointer@PointerPromotion@@YGHGKK@Z.c)
 * Callees:
 *     ?DetectPromotionType@@YGKPBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17CE6B (-DetectPromotionType@@YGKPBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z @ 0x17CF32 (-FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z.c)
 *     ?FindMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x17CF59 (-FindMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 *     ?FindMousePromotionInContactRange@@YGHABUtagMOUSE_PROMOTION_QUEUE@@KPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CF6E (-FindMousePromotionInContactRange@@YGHABUtagMOUSE_PROMOTION_QUEUE@@KPAPAUtagMOUSE_PROMOTION_ENTR.c)
 */

int __userpurge ValidatePointerPromotion@<eax>(
        unsigned int a1@<edx>,
        __int16 a2@<cx>,
        unsigned int *a3,
        struct tagMOUSE_PROMOTION_ENTRY **a4,
        unsigned int *a5,
        struct tagMOUSE_PROMOTION_ENTRY **a6,
        struct tagMOUSE_PROMOTION_ENTRY **a7)
{
  struct tagMOUSE_PROMOTION_ENTRY *v8; // esi
  unsigned int v9; // ebx
  __int16 *CacheById; // eax
  struct tagMOUSE_PROMOTION_ENTRY **v11; // ecx
  _DWORD *v12; // edi
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // eax
  unsigned int v15; // eax
  struct tagMOUSE_PROMOTION_ENTRY **v16; // [esp+0h] [ebp-1Ch]
  struct tagMOUSE_PROMOTION_ENTRY **v17; // [esp+4h] [ebp-18h]
  __int16 *v19; // [esp+10h] [ebp-Ch] BYREF
  unsigned int v20; // [esp+14h] [ebp-8h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v21; // [esp+18h] [ebp-4h] BYREF

  v8 = 0;
  v9 = *a3;
  v21 = 0;
  v20 = 0;
  CacheById = (__int16 *)FindCacheById(a2, &v19);
  v19 = CacheById;
  if ( !CacheById || CacheById == word_275250 && (dword_2752FC & 2) != 0 )
    return 0;
  v11 = (struct tagMOUSE_PROMOTION_ENTRY **)(CacheById + 2);
  if ( v9 )
  {
    if ( FindMousePromotionInContactRange(a1, v11, (const struct tagMOUSE_PROMOTION_QUEUE *)&v21, &v20, v16, v17) )
    {
      v8 = v21;
      v12 = (_DWORD *)v20;
      goto LABEL_10;
    }
  }
  else
  {
    MousePromotionEntry = FindMousePromotionEntry(v11, a1);
    v8 = MousePromotionEntry;
    if ( MousePromotionEntry )
      v8 = (*((_DWORD *)MousePromotionEntry + 4) & 0x40004) == 0 ? MousePromotionEntry : 0;
  }
  v12 = v8;
LABEL_10:
  if ( v8 )
  {
    if ( v9 != 0x10000000 || (v9 = DetectPromotionType((_DWORD **)v8, v12), v9 != 0x10000000) )
    {
      v15 = (unsigned int)&loc_20000 & v9;
      if ( v12 )
      {
        if ( v15 && v12[9] != a1 || (v9 & 0x1000000) == 0 && (v12[4] & 0x8000) != 0 )
          return 0;
      }
      else if ( v15 || v19 != word_275250 )
      {
        return 0;
      }
      *a3 = v9;
      goto LABEL_15;
    }
    if ( v19 == word_275250 )
    {
      *a3 = 0x10000000;
LABEL_15:
      *a4 = v8;
      *a5 = (unsigned int)v12;
      return 1;
    }
  }
  return 0;
}
