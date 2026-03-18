/*
 * XREFs of ?AppendMousePromotionQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CC24
 * Callers:
 *     ?ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z @ 0x17D24A (-ProcessDownOnly@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@HH@Z.c)
 *     ?ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x17D2CC (-ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge AppendMousePromotionQueue(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagMOUSE_PROMOTION_QUEUE *a3,
        struct tagMOUSE_PROMOTION_ENTRY *a4,
        struct tagMOUSE_PROMOTION_ENTRY *a5)
{
  if ( *(_DWORD *)a2 )
    **(_DWORD **)(a2 + 4) = a1;
  else
    *(_DWORD *)a2 = a1;
  *(_DWORD *)(a2 + 4) = a3;
  if ( (int *)a2 == &dword_27528C )
  {
    qmemcpy(&dword_275298, (const void *)dword_275290, 0x30u);
    dword_275298 = 0;
  }
}
