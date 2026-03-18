/*
 * XREFs of ?bPartitionInit@ESTROBJ@@QAEHKIH@Z @ 0x207982
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z @ 0xC0F30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@PBG2KPAHH@Z.c)
 *     ?FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z @ 0x2071D7 (-FindLinkedGlyphDataPlus@RFONTOBJ@@QAEPAU_GLYPHDATA@@PAVXDCOBJ@@PAVESTROBJ@@GKKPAHHH@Z.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __thiscall ESTROBJ::bPartitionInit(ESTROBJ *this, unsigned int a2, unsigned int a3, int a4)
{
  int result; // eax
  int v6; // eax
  char *v7; // [esp-10h] [ebp-18h]

  *((_DWORD *)this + 1) &= 0xFFFFFFCF;
  if ( (*((_DWORD *)this + 48) & 0x1000) == 0 )
  {
    v7 = (char *)(*((_DWORD *)this + 12) + 16 * a2);
    *((_DWORD *)this + 45) = v7;
    *((_DWORD *)this + 44) = &v7[4 * a2];
    memset(v7, 0, 4 * a2);
    *((_DWORD *)this + 56) = 0;
    *((_DWORD *)this + 48) |= 0x1000u;
    *((_DWORD *)this + 53) = 0;
    *((_DWORD *)this + 54) = 0;
    *((_DWORD *)this + 52) = 0;
  }
  if ( a4 )
  {
    if ( a3 < 0xA )
    {
      *((_DWORD *)this + 56) = (char *)this + 228;
      memset((char *)this + 228, 0, 4 * a3);
      v6 = *((_DWORD *)this + 48);
    }
    else
    {
      result = (int)PALLOCMEM2(4 * a3, 1718382187, 1);
      *((_DWORD *)this + 56) = result;
      if ( !result )
        return result;
      v6 = *((_DWORD *)this + 48) | 0x800;
    }
    *((_DWORD *)this + 48) = v6 | 0x400;
  }
  return 1;
}
