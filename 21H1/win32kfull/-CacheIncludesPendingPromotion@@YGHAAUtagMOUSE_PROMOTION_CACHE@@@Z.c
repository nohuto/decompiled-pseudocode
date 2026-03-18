/*
 * XREFs of ?CacheIncludesPendingPromotion@@YGHAAUtagMOUSE_PROMOTION_CACHE@@@Z @ 0x17CC64
 * Callers:
 *     ?ResetMousePromotionInfo@@YGXGG@Z @ 0x17D5C0 (-ResetMousePromotionInfo@@YGXGG@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall CacheIncludesPendingPromotion(_DWORD *this)
{
  _DWORD *v1; // eax
  _DWORD *v2; // ecx

  if ( (_WORD)dword_2752E0 )
  {
    if ( *(_WORD *)this == (_WORD)dword_2752E0 )
    {
      v1 = (_DWORD *)this[1];
      if ( v1 )
      {
        v2 = (_DWORD *)this[2];
        while ( v1 != v2 )
        {
          if ( v1[8] == dword_2752E4 )
            return 1;
          v1 = (_DWORD *)*v1;
          if ( !v1 )
            return 0;
        }
      }
    }
  }
  return 0;
}
