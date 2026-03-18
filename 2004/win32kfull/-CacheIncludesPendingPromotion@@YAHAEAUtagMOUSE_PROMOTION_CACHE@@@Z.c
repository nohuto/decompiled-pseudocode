/*
 * XREFs of ?CacheIncludesPendingPromotion@@YAHAEAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x1C0218FA0
 * Callers:
 *     ?ResetMousePromotionInfo@@YAXGG@Z @ 0x1C0219B3C (-ResetMousePromotionInfo@@YAXGG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CacheIncludesPendingPromotion(struct tagMOUSE_PROMOTION_CACHE *a1)
{
  __int64 *v1; // rax

  if ( word_1C033AB90 )
  {
    if ( *(_WORD *)a1 == word_1C033AB90 )
    {
      v1 = (__int64 *)*((_QWORD *)a1 + 1);
      if ( v1 )
      {
        while ( v1 != *((__int64 **)a1 + 2) )
        {
          if ( *((_DWORD *)v1 + 8) == dword_1C033AB94 )
            return 1LL;
          v1 = (__int64 *)*v1;
          if ( !v1 )
            return 0LL;
        }
      }
    }
  }
  return 0LL;
}
