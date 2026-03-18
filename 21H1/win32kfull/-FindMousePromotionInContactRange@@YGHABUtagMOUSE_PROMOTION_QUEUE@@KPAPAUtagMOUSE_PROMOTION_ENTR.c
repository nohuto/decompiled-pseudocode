/*
 * XREFs of ?FindMousePromotionInContactRange@@YGHABUtagMOUSE_PROMOTION_QUEUE@@KPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CF6E
 * Callers:
 *     ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB (-CancelAutoPromotion@@YGXXZ.c)
 *     ?ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17D6C2 (-ValidatePointerPromotion@@YGHGKPAKPAPAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 * Callees:
 *     <none>
 */

int __userpurge FindMousePromotionInContactRange@<eax>(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        const struct tagMOUSE_PROMOTION_QUEUE *a3,
        _DWORD *a4,
        struct tagMOUSE_PROMOTION_ENTRY **a5,
        struct tagMOUSE_PROMOTION_ENTRY **a6)
{
  _DWORD *v6; // eax
  _DWORD *v7; // edi
  _DWORD *v9; // edx
  _DWORD *v10; // esi
  int v11; // ecx

  v6 = (_DWORD *)*a2;
  v7 = 0;
  v9 = 0;
  v10 = 0;
  if ( !*a2 )
    return 0;
  while ( 1 )
  {
    v11 = v6[4];
    if ( (v11 & 0x10000) != 0 )
      v10 = v6;
    if ( v6[8] <= a1 && v6[9] >= a1 )
    {
      if ( !v10 )
        goto LABEL_14;
      v9 = v6;
    }
    if ( (v11 & 0x40000) == 0 )
      goto LABEL_11;
    if ( v9 )
      break;
    v10 = 0;
LABEL_11:
    v6 = (_DWORD *)*v6;
    if ( !v6 )
      goto LABEL_14;
  }
  v7 = v6;
LABEL_14:
  if ( v9 && v10 )
  {
    *(_DWORD *)a3 = v10;
    *a4 = v7;
    return 1;
  }
  return 0;
}
