/*
 * XREFs of ?QueryFonts@PUBLIC_PFTOBJ@@QAEHPAU_UNIVERSAL_FONT_ID@@KPAT_LARGE_INTEGER@@@Z @ 0x1D0555
 * Callers:
 *     _GreQueryFonts@12 @ 0x1D905B (_GreQueryFonts@12.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

unsigned int __thiscall PUBLIC_PFTOBJ::QueryFonts(
        PUBLIC_PFTOBJ *this,
        struct _UNIVERSAL_FONT_ID *a2,
        unsigned int a3,
        union _LARGE_INTEGER *a4)
{
  struct _UNIVERSAL_FONT_ID *v4; // edi
  unsigned int v5; // esi
  unsigned int v6; // edx
  PUBLIC_PFTOBJ *v7; // eax
  int v8; // ecx

  v4 = a2;
  v5 = 0;
  *a4 = PFTOBJ::FontChangeTime;
  if ( !v4 || !a3 )
    return (gufiLocalType1Rasterizer == 2) + *(_DWORD *)(*(_DWORD *)this + 16);
  a2 = (struct _UNIVERSAL_FONT_ID *)_ghsemPublicPFT;
  GreAcquireSemaphore(_ghsemPublicPFT);
  if ( gufiLocalType1Rasterizer == 2 )
  {
    *(_DWORD *)v4 = 2;
    v5 = 1;
    *((_DWORD *)v4 + 1) = dword_269060;
  }
  v6 = *(_DWORD *)this + 24;
  if ( v6 < *(_DWORD *)this + 4 * (*(_DWORD *)(*(_DWORD *)this + 12) + 6) )
  {
    v7 = this;
    do
    {
      if ( v5 >= a3 )
        break;
      v8 = *(_DWORD *)v6;
      if ( *(_DWORD *)v6 )
      {
        do
        {
          if ( v5 >= a3 )
            break;
          if ( (*(_BYTE *)(v8 + 32) & 0x20) == 0 )
          {
            *((_DWORD *)v4 + 2 * v5 + 1) = 1;
            *((_DWORD *)v4 + 2 * v5++) = *(_DWORD *)(v8 + 84);
          }
          v8 = *(_DWORD *)(v8 + 4);
        }
        while ( v8 );
        v7 = this;
      }
      a4 = (union _LARGE_INTEGER *)(v6 + 4);
      v6 += 4;
    }
    while ( v6 < *(_DWORD *)v7 + 24 + 4 * *(_DWORD *)(*(_DWORD *)v7 + 12) );
  }
  SEMOBJ::vUnlock((SEMOBJ *)&a2);
  return v5;
}
