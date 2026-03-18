/*
 * XREFs of SearchFntCacheNewLink @ 0xECD92
 * Callers:
 *     _EngFntCacheAllocInternal@12 @ 0xECBCE (_EngFntCacheAllocInternal@12.c)
 *     ?PutFNTCacheCheckSum@@YGXKK@Z @ 0xECC86 (-PutFNTCacheCheckSum@@YGXKK@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YGXKPAVPDEV@@KPAPAU_FONTFILEVIEW@@K@Z @ 0xECCEE (-PutFntCacheDrvAndFileInfo@@YGXKPAVPDEV@@KPAPAU_FONTFILEVIEW@@K@Z.c)
 * Callees:
 *     SearchFNTCacheHlink @ 0xDF15E (SearchFNTCacheHlink.c)
 *     bFntCacheCreateHLink @ 0xECE08 (bFntCacheCreateHLink.c)
 */

_DWORD *__thiscall SearchFntCacheNewLink(void *this)
{
  _DWORD *v1; // edi
  _DWORD *v3; // esi
  int v5; // [esp+Ch] [ebp-8h]
  _DWORD *v6; // [esp+10h] [ebp-4h] BYREF

  v6 = 0;
  v1 = (_DWORD *)dword_274068;
  v5 = *(_DWORD *)dword_274068;
  SearchFNTCacheHlink((unsigned int)this, &v6, *(_DWORD *)dword_274068);
  v3 = v6;
  if ( !v6 )
  {
    if ( v1[1] < *(_DWORD *)(v5 + 16) && bFntCacheCreateHLink(this) )
    {
      v3 = (_DWORD *)(*v1 + 80 * (v1[1] + 4));
      *v3 = this;
      v3[1] = 0;
      v3[2] = -1;
      v3[4] = 0;
      v3[5] = 0;
      v3[6] = 0;
      v3[3] = 0;
      ++v1[1];
    }
    else
    {
      v1[3] |= 2u;
    }
  }
  return v3;
}
