/*
 * XREFs of ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379
 * Callers:
 *     ?ForceCompletePendingPromotion@@YGXXZ @ 0x17CFD9 (-ForceCompletePendingPromotion@@YGXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68 (-xxxPromotePointer@PointerPromotion@@YGHGKK@Z.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0xCCDEC (-EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z @ 0x17CF32 (-FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z.c)
 *     ?ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x17D24A (-ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x17D2CC (-ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 *     ?ValidateDoubleClick@@YGHABUtagTAP_INFO@@KKH@Z @ 0x17D65B (-ValidateDoubleClick@@YGHABUtagTAP_INFO@@KKH@Z.c)
 */

int __userpurge PromotePointerInternal@<eax>(
        unsigned int a1@<edx>,
        __int16 a2@<cx>,
        int a3,
        struct tagMOUSE_PROMOTION_CACHE *a4,
        struct tagMOUSE_PROMOTION_ENTRY *a5,
        struct tagMOUSE_PROMOTION_ENTRY *a6)
{
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // eax
  struct tagMOUSE_PROMOTION_ENTRY *v8; // edi
  int v9; // esi
  bool v10; // zf
  struct tagMOUSE_PROMOTION_QUEUE *v11; // ebx
  int v12; // eax
  int v13; // ecx
  int *v14; // ebx
  int v15; // edi
  struct tagMOUSE_PROMOTION_CACHE *v16; // esi
  unsigned int v17; // eax
  struct tagMOUSE_PROMOTION_ENTRY *v19; // [esp-4h] [ebp-40h]
  unsigned int v20; // [esp+0h] [ebp-3Ch]
  int v21; // [esp+4h] [ebp-38h]
  int v23; // [esp+10h] [ebp-2Ch]
  int v24; // [esp+14h] [ebp-28h]
  int v25; // [esp+18h] [ebp-24h]
  unsigned int v27; // [esp+20h] [ebp-1Ch]
  int v28; // [esp+24h] [ebp-18h]
  struct tagMOUSE_PROMOTION_ENTRY *v29; // [esp+28h] [ebp-14h]
  unsigned int v30; // [esp+2Ch] [ebp-10h]
  struct tagMOUSE_PROMOTION_CACHE *v31; // [esp+30h] [ebp-Ch]
  int v32; // [esp+34h] [ebp-8h] BYREF
  struct tagMOUSE_PROMOTION_CACHE *v33; // [esp+38h] [ebp-4h]

  v32 = 0;
  CacheById = FindCacheById(a2, &v32);
  v8 = CacheById;
  v31 = CacheById;
  if ( (dword_2752FC & 8) != 0
    && CacheById == (struct tagMOUSE_PROMOTION_CACHE *)word_275250
    && (!a4 || a4 == *((struct tagMOUSE_PROMOTION_CACHE **)CacheById + 2)) )
  {
    dword_2752FC &= ~8u;
  }
  v28 = a1 & 2;
  v30 = (unsigned int)&loc_80000 & a1;
  v33 = (struct tagMOUSE_PROMOTION_CACHE *)(v28 != 0);
  v27 = (unsigned int)&loc_20000 & a1;
  v9 = (a1 >> 25) & 1;
  v29 = (struct tagMOUSE_PROMOTION_ENTRY *)(((unsigned int)&loc_20000 & a1) != 0);
  v10 = (a1 & 0x40000) == 0;
  v11 = (struct tagMOUSE_PROMOTION_QUEUE *)a3;
  if ( v10 )
    v12 = 0;
  else
    v12 = ValidateDoubleClick(*(const struct tagTAP_INFO **)(a3 + 12), v28 != 0, v20, v21);
  if ( v12 )
  {
    *(_DWORD *)(a3 + 4) = dword_2752D0;
    *(_DWORD *)(a3 + 8) = dword_2752D4;
  }
  v25 = *(_DWORD *)(a3 + 4);
  v13 = v32 + 1;
  v24 = *(_DWORD *)(a3 + 8);
  v23 = *(_DWORD *)(a3 + 12);
  if ( (unsigned int)(v32 + 1) < 5 )
  {
    v14 = &dword_275254[3 * v13];
    v32 = 5 - v13;
    v15 = 5 - v13;
    do
    {
      EmptyMousePromotionQueue(v14);
      v14 += 3;
      --v15;
    }
    while ( v15 );
    v8 = v31;
    v11 = (struct tagMOUSE_PROMOTION_QUEUE *)a3;
  }
  v19 = (struct tagMOUSE_PROMOTION_ENTRY *)v9;
  if ( v30 )
  {
    v16 = v33;
    ProcessDownOnly(v11, (int)v8, v8, v33, v33, v19, v20, v21);
  }
  else
  {
    ProcessRangeInCache(v11, (int)v8, a4, v29, v33, v9, v20, v21);
    if ( !a4 )
    {
      if ( v28 )
        v17 = dword_2752FC | 4;
      else
        v17 = dword_2752FC & 0xFFFFFFFB;
      dword_2752FC = v17 & 0xFFFFFFEF | (16 * v9) | 2;
    }
    v16 = v33;
  }
  if ( v27 )
  {
    dword_2752C8 = _gptiCurrent;
    word_2752CC = a2;
    dword_2752D0 = v25;
    dword_2752D4 = v24;
    dword_2752D8 = v23;
    dword_2752DC = (int)v16;
  }
  else if ( a1 )
  {
    memset(&dword_2752C8, 0, 0x18u);
  }
  return 1;
}
