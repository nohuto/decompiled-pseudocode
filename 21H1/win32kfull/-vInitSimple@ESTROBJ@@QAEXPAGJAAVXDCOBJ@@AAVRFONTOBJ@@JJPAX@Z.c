/*
 * XREFs of ?vInitSimple@ESTROBJ@@QAEXPAGJAAVXDCOBJ@@AAVRFONTOBJ@@JJPAX@Z @ 0x225464
 * Callers:
 *     ?GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z @ 0x1F7DA3 (-GreGetStringBitmapW@@YGIPAUHDC__@@PAGIPAUSTRINGBITMAP@@I@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z @ 0x87EA2 (-bGetGlyphMetricsPlus@RFONTOBJ@@QAEHKPAU_GLYPHPOS@@PAGPAHPAVXDCOBJ@@PAVESTROBJ@@@Z.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?GetLinkedRfontOnIndex@ESTROBJ@@QAEPAVRFONT@@JAAVRFONTOBJ@@@Z @ 0x223A80 (-GetLinkedRfontOnIndex@ESTROBJ@@QAEPAVRFONT@@JAAVRFONTOBJ@@@Z.c)
 */

void __thiscall ESTROBJ::vInitSimple(
        ESTROBJ *this,
        unsigned __int16 *a2,
        int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        int a6,
        int a7,
        void *a8)
{
  struct RFONTOBJ *v9; // esi
  struct _GLYPHPOS *v10; // edi
  int v11; // eax
  bool v12; // zf
  unsigned int v13; // eax
  int v14; // eax
  GLYPHDEF *pgdf; // esi
  int pgb; // edi
  GLYPHDEF v17; // eax
  ULONG *v18; // [esp+0h] [ebp-18h]
  struct _GLYPHPOS *v19; // [esp+Ch] [ebp-Ch]
  int v20; // [esp+14h] [ebp-4h] BYREF

  v9 = a5;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = 1;
  *((_DWORD *)this + 11) = a5;
  *((_DWORD *)this + 8) = a2;
  v10 = (struct _GLYPHPOS *)AllocFreeTmpBuffer(24);
  v19 = v10;
  if ( v10 )
  {
    v20 = 0;
    *((_DWORD *)this + 12) = v10;
    *((_DWORD *)this + 48) |= 1u;
    *((_DWORD *)this + 1) = *(_DWORD *)(*(_DWORD *)a5 + 280) & 0x71 | 2;
    if ( RFONTOBJ::bGetGlyphMetricsPlus(a5, 1u, v10, a2, &v20, a4, this) )
    {
      if ( v20 )
      {
        v11 = *((_DWORD *)this + 12);
        *((_DWORD *)this + 48) |= 2u;
        *((_DWORD *)this + 7) = v11;
      }
      v10->ptl.x = 0;
      v10->ptl.y = *(_DWORD *)(*(_DWORD *)a5 + 356);
      v12 = (*((_DWORD *)this + 48) & 0x1400) == 0;
      v13 = *(_DWORD *)(*(_DWORD *)a5 + 316);
      *((_DWORD *)this + 2) = v13;
      if ( v12 && v13 )
      {
        *((_DWORD *)this + 3) = 0;
        if ( ULongLongToULong(v13, v18) < 0 )
          return;
        v14 = 0;
      }
      else
      {
        *((_DWORD *)this + 2) = 0;
        pgdf = v10->pgdf;
        pgb = (int)pgdf[3].pgb;
        v19->ptl.y = *((_DWORD *)ESTROBJ::GetLinkedRfontOnIndex(this, 0, a5) + 89);
        v17.pgb = pgdf[4].pgb;
        v9 = a5;
        *((_DWORD *)this + 3) = pgb >> 4;
        v14 = ((int)&v17.pgb->sizlBitmap.cy + 3) >> 4;
      }
      *((_DWORD *)this + 4) = 0;
      *((_DWORD *)this + 5) = v14;
      *((_DWORD *)this + 6) = *(_DWORD *)(*(_DWORD *)v9 + 360);
      if ( (*(_DWORD *)(*(_DWORD *)v9 + 12) & 0x10000000) != 0 )
      {
        --*((_DWORD *)this + 3);
        ++*((_DWORD *)this + 5);
      }
      *((_DWORD *)this + 48) |= 4u;
    }
  }
}
