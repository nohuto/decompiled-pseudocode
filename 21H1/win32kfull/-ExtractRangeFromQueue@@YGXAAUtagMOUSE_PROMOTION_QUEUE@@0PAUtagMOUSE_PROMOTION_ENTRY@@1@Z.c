/*
 * XREFs of ?ExtractRangeFromQueue@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@0PAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x17CEB5
 * Callers:
 *     ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB (-CancelAutoPromotion@@YGXXZ.c)
 *     ?ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z @ 0x17D2CC (-ProcessRangeInCache@@YGXPAUtagMOUSE_PROMOTION_CACHE@@PAUtagMOUSE_PROMOTION_ENTRY@@1HHH@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge ExtractRangeFromQueue(
        _DWORD *a1@<edx>,
        struct tagMOUSE_PROMOTION_QUEUE **a2@<ecx>,
        struct tagMOUSE_PROMOTION_QUEUE *a3,
        struct tagMOUSE_PROMOTION_QUEUE *a4,
        struct tagMOUSE_PROMOTION_ENTRY *a5,
        struct tagMOUSE_PROMOTION_ENTRY *a6)
{
  struct tagMOUSE_PROMOTION_QUEUE *v6; // edi
  struct tagMOUSE_PROMOTION_QUEUE *v7; // edx
  struct tagMOUSE_PROMOTION_QUEUE *v8; // eax
  struct tagMOUSE_PROMOTION_QUEUE *v9; // esi
  struct tagMOUSE_PROMOTION_QUEUE *v10; // ecx

  v6 = *a2;
  if ( *a2 )
  {
    v7 = a4;
    if ( !a4 )
      v7 = a2[1];
    v8 = a2[1];
    v9 = 0;
    if ( v6 != a3 )
    {
      v9 = *a2;
      do
      {
        v10 = *(struct tagMOUSE_PROMOTION_QUEUE **)v9;
        if ( *(struct tagMOUSE_PROMOTION_QUEUE **)v9 == a3 )
          break;
        v9 = *(struct tagMOUSE_PROMOTION_QUEUE **)v9;
      }
      while ( v10 );
    }
    *a1 = a3;
    a1[1] = v7;
    if ( v6 == a3 )
    {
      if ( v8 == v7 )
      {
        *a2 = 0;
        a2[1] = 0;
      }
      else
      {
        *a2 = *(struct tagMOUSE_PROMOTION_QUEUE **)v7;
      }
    }
    else if ( v8 == v7 )
    {
      a2[1] = v9;
      *(_DWORD *)v9 = 0;
    }
    else
    {
      *(_DWORD *)v9 = *(_DWORD *)v7;
    }
    *(_DWORD *)v7 = 0;
  }
}
