/*
 * XREFs of ?PutFNTCacheCheckSum@@YGXKK@Z @ 0xECC86
 * Callers:
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     SearchFntCacheNewLink @ 0xECD92 (SearchFntCacheNewLink.c)
 */

void __fastcall PutFNTCacheCheckSum(int a1, int a2)
{
  int v4; // esi
  int v5; // eax
  int v6; // [esp+Ch] [ebp-4h] BYREF

  v6 = _ghsemFntCache;
  GreAcquireSemaphore(_ghsemFntCache);
  v4 = dword_274068;
  if ( dword_274068 && a1 )
  {
    if ( (dword_274064 & 2) != 0 )
    {
      v5 = SearchFntCacheNewLink(a1);
      if ( v5 )
      {
        if ( *(_DWORD *)(v5 + 4) )
          *(_DWORD *)(v5 + 24) |= 1u;
        else
          *(_DWORD *)(v5 + 4) = a2;
        *(_DWORD *)(v4 + 16) = 1;
      }
    }
    else
    {
      *(_DWORD *)(dword_274068 + 12) |= 2u;
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v6);
}
