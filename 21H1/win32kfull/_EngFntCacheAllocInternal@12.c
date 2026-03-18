/*
 * XREFs of _EngFntCacheAllocInternal@12 @ 0xECBCE
 * Callers:
 *     ?FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z @ 0xECB3C (-FntCacheAllocate@UmfdFontCacheEntry@@SG_NPAEIIW4FontDriverType@@@Z.c)
 *     _EngFntCacheAlloc@8 @ 0x1E8646 (_EngFntCacheAlloc@8.c)
 * Callees:
 *     _EngCloseFNTCache@0 @ 0xD742A (_EngCloseFNTCache@0.c)
 *     SearchFntCacheNewLink @ 0xECD92 (SearchFntCacheNewLink.c)
 *     bReAllocCacheFile @ 0xECE5E (bReAllocCacheFile.c)
 */

int __fastcall EngFntCacheAllocInternal(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  int v9; // eax

  v3 = a3;
  v4 = (_DWORD *)dword_274068;
  v5 = 0;
  *a3 = 0;
  if ( !v4 || !a1 )
    return 0;
  if ( (dword_274064 & 2) != 0 )
  {
    v6 = a2 + 7;
    if ( v4[6] + ((a2 + 7) & 0xFFFFFFF8) < v4[7] || (v9 = bReAllocCacheFile(a2), v4 = (_DWORD *)dword_274068, v9) )
    {
      v7 = (_DWORD *)SearchFntCacheNewLink(a1);
      if ( v7 )
      {
        if ( v7[4] || v7[5] )
        {
          v7[6] |= 1u;
        }
        else
        {
          v5 = v4[6];
          v4[6] = v5 + (v6 & 0xFFFFFFF8);
          v7[4] = a2;
          v7[5] = v5 - v4[5];
        }
        v4[4] = 1;
      }
    }
    v3 = a3;
  }
  else
  {
    v4[3] |= 2u;
  }
  if ( (v4[3] & 1) != 0 )
  {
    EngCloseFNTCache();
    v5 = 0;
    *v3 = 1;
  }
  return v5;
}
