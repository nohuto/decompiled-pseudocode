/*
 * XREFs of ?ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x17D24A
 * Callers:
 *     ?PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17D379 (-PromotePointerInternal@@YGHGKPAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CC24 (-AppendMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17CD2F (-ClearMousePromotionQueueUntil@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 */

void __userpurge ProcessDownOnly(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagMOUSE_PROMOTION_ENTRY *a3@<edi>,
        struct tagMOUSE_PROMOTION_ENTRY *a4@<esi>,
        struct tagMOUSE_PROMOTION_CACHE *a5,
        struct tagMOUSE_PROMOTION_ENTRY *a6,
        int a7,
        int a8)
{
  _DWORD *v9; // eax

  ClearMousePromotionQueueUntil((_DWORD **)(a2 + 4), a1);
  v9 = (_DWORD *)Win32AllocPoolZInit(48, 1886221141);
  if ( v9 )
  {
    qmemcpy(v9, a1, 0x30u);
    *v9 = 0;
    if ( a5 )
      v9[11] &= ~1u;
    AppendMousePromotionQueue((int)v9, (int)&dword_27528C, (struct tagMOUSE_PROMOTION_QUEUE *)v9, a3, a4);
    LOWORD(dword_2752E0) = *(_WORD *)a2;
    dword_2752E4 = a1[8];
    dword_2752E8 = _gptiCurrent;
    dword_2752EC = (int)a5;
    dword_2752F0 = (int)a6;
  }
}
