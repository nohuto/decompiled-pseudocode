/*
 * XREFs of ?ProcessDownOnly@@YAXPEAUtagMOUSE_PROMOTION_CACHE@@PEAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x1C02187B4
 * Callers:
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0218974 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 * Callees:
 *     ?AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C02180B4 (-AppendMousePromotionQueue@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x1C02181EC (-ClearMousePromotionQueueUntil@@YAXAEAUtagMOUSE_PROMOTION_QUEUE@@PEAUtagMOUSE_PROMOTION_ENTRY@@@.c)
 */

void __fastcall ProcessDownOnly(
        struct tagMOUSE_PROMOTION_ENTRY **a1,
        struct tagMOUSE_PROMOTION_ENTRY *a2,
        int a3,
        int a4)
{
  __int64 v8; // rax

  ClearMousePromotionQueueUntil(a1 + 1, a2);
  v8 = Win32AllocPoolZInit(48LL, 1886221141LL);
  if ( v8 )
  {
    *(_OWORD *)v8 = *(_OWORD *)a2;
    *(_OWORD *)(v8 + 16) = *((_OWORD *)a2 + 1);
    *(_OWORD *)(v8 + 32) = *((_OWORD *)a2 + 2);
    *(_QWORD *)v8 = 0LL;
    if ( a3 )
      *(_DWORD *)(v8 + 44) &= ~1u;
    AppendMousePromotionQueue(
      (struct tagMOUSE_PROMOTION_QUEUE *)&qword_1C0339B60,
      (struct tagMOUSE_PROMOTION_ENTRY *)v8,
      (struct tagMOUSE_PROMOTION_ENTRY *)v8);
    word_1C0339BC0 = *(_WORD *)a1;
    dword_1C0339BC4 = *((_DWORD *)a2 + 8);
    qword_1C0339BC8 = gptiCurrent;
    dword_1C0339BD0 = a3;
    dword_1C0339BD4 = a4;
  }
}
