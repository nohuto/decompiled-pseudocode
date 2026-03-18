/*
 * XREFs of ?QueueMousePromotionEntry@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17D58C
 * Callers:
 *     ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB (-CancelAutoPromotion@@YGXXZ.c)
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall QueueMousePromotionEntry(int *a1, int a2)
{
  int *v2; // eax

  v2 = (int *)a1[1];
  if ( v2 )
    *v2 = a2;
  else
    *a1 = a2;
  a1[1] = a2;
  if ( a1 == &dword_27528C )
  {
    qmemcpy(&dword_275298, (const void *)dword_275290, 0x30u);
    dword_275298 = 0;
  }
}
