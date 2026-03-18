/*
 * XREFs of ?ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x17D2CC
 * Callers:
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CC24 (-AppendMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17CD2F (-ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ExtractRangeFromQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@0PAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CEB5 (-ExtractRangeFromQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@0PAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ResetPendingPromotion@@YGXXZ @ 0x17D62F (-ResetPendingPromotion@@YGXXZ.c)
 */

void __userpurge ProcessRangeInCache(
        struct tagMOUSE_PROMOTION_QUEUE *a1@<edx>,
        int a2@<ecx>,
        struct tagMOUSE_PROMOTION_CACHE *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4,
        struct tagMOUSE_PROMOTION_ENTRY *a5,
        int a6,
        int a7,
        int a8)
{
  struct tagMOUSE_PROMOTION_QUEUE **v8; // esi
  struct tagMOUSE_PROMOTION_QUEUE *v10; // edi
  _DWORD *v11; // esi
  _DWORD *i; // eax
  _DWORD *v13; // [esp-4h] [ebp-14h]
  _DWORD *v14; // [esp-4h] [ebp-14h]
  struct tagMOUSE_PROMOTION_ENTRY *v15; // [esp+0h] [ebp-10h]
  struct tagMOUSE_PROMOTION_ENTRY *v16; // [esp+0h] [ebp-10h]
  struct tagMOUSE_PROMOTION_ENTRY *v17; // [esp+4h] [ebp-Ch]
  struct tagMOUSE_PROMOTION_ENTRY *v18; // [esp+4h] [ebp-Ch]
  _DWORD *v19; // [esp+8h] [ebp-8h] BYREF
  struct tagMOUSE_PROMOTION_QUEUE *v20; // [esp+Ch] [ebp-4h]

  v8 = (struct tagMOUSE_PROMOTION_QUEUE **)(a2 + 4);
  ClearMousePromotionQueueUntil((_DWORD **)(a2 + 4), a1);
  v19 = 0;
  v20 = 0;
  ExtractRangeFromQueue(&v19, v8, a1, a3, v15, v17);
  v10 = v20;
  v11 = v19;
  if ( a4 )
  {
    *((_DWORD *)v20 + 1) = v19[1];
    *((_DWORD *)v10 + 2) = v11[2];
    while ( (struct tagMOUSE_PROMOTION_QUEUE *)*v11 != v10 )
    {
      v13 = (_DWORD *)*v11;
      *v11 = *(_DWORD *)*v11;
      Win32FreePool(v13);
    }
  }
  if ( a5 || a6 )
  {
    for ( i = v11; i; i = (_DWORD *)*i )
    {
      if ( a5 )
        i[11] &= ~1u;
      if ( a6 )
        i[11] |= 0x40u;
    }
  }
  if ( (_WORD)dword_2752E0 )
  {
    v14 = v11;
    v11 = (_DWORD *)*v11;
    Win32FreePool(v14);
    ResetPendingPromotion();
  }
  if ( v11 )
    AppendMousePromotionQueue((int)v11, (int)&dword_27528C, v10, v16, v18);
}
