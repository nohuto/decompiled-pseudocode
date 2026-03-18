/*
 * XREFs of ?OnPointerInputRetrieval@PointerPromotion@@YGXGKUtagPOINT@@H@Z @ 0x17D0DD
 * Callers:
 *     _PointerPromotionOnPointerInputRetrieval@20 @ 0x17DEF0 (_PointerPromotionOnPointerInputRetrieval@20.c)
 * Callees:
 *     ?EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z @ 0xCCDEC (-EmptyMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17CD2F (-ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z @ 0x17CF32 (-FindCacheById@@YGPAUtagMOUSE_PROMOTION_CACHE@@GPAK@Z.c)
 *     ?FindMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagMOUSE_PROMOTION_QUEUE@@K@Z @ 0x17CF59 (-FindMousePromotionEntry@@YGPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagMOUSE_PROMOTION_QUEUE@@K@Z.c)
 */

void __userpurge PointerPromotion::OnPointerInputRetrieval(
        unsigned int a1@<edx>,
        __int16 a2@<cx>,
        PointerPromotion *this,
        int a4,
        unsigned int a5,
        struct tagPOINT a6,
        int a7)
{
  struct tagMOUSE_PROMOTION_CACHE *CacheById; // eax
  _DWORD **v9; // ebx
  struct tagMOUSE_PROMOTION_ENTRY *MousePromotionEntry; // eax
  struct tagMOUSE_PROMOTION_ENTRY *v11; // esi
  int v12; // eax
  int *v13; // ebx
  int v14; // edi
  _DWORD **v15; // [esp+4h] [ebp-8h]
  int v16; // [esp+8h] [ebp-4h] BYREF

  v16 = 0;
  CacheById = FindCacheById(a2, &v16);
  if ( CacheById )
  {
    v9 = (_DWORD **)((char *)CacheById + 4);
    v15 = (_DWORD **)((char *)CacheById + 4);
    MousePromotionEntry = FindMousePromotionEntry((struct tagMOUSE_PROMOTION_ENTRY **)CacheById + 1, a1);
    v11 = MousePromotionEntry;
    if ( MousePromotionEntry )
    {
      *((_DWORD *)MousePromotionEntry + 1) = a4;
      *((_DWORD *)MousePromotionEntry + 2) = a5;
      if ( !this && !(_WORD)dword_2752E0 )
      {
        v12 = v16 + 1;
        if ( (unsigned int)(v16 + 1) < 5 )
        {
          v13 = &dword_275254[3 * v12];
          v14 = 5 - v12;
          do
          {
            EmptyMousePromotionQueue(v13);
            v13 += 3;
            --v14;
          }
          while ( v14 );
          v9 = v15;
        }
        if ( (*((_DWORD *)v11 + 4) & 0x40004) == 0 )
          ClearMousePromotionQueueUntil(v9, v11);
      }
    }
  }
}
