/*
 * XREFs of ?cGetGlyphDataCache@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x24123B
 * Callers:
 *     ?cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z @ 0x207A92 (-cGetGlyphData@RFONTOBJ@@QAEKKPAU_GLYPHPOS@@@Z.c)
 * Callees:
 *     ?bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z @ 0x861B6 (-bInsertGlyphbits@RFONTOBJ@@QAEHPAU_GLYPHDATA@@K@Z.c)
 */

unsigned int __thiscall RFONTOBJ::cGetGlyphDataCache(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  struct _GLYPHPOS *v4; // esi
  struct _GLYPHPOS *v5; // ebx
  struct _GLYPHDATA *pgdf; // edx
  RFONTOBJ *v7; // [esp+Ch] [ebp-4h]

  v7 = this;
  if ( !*(_DWORD *)(*(_DWORD *)this + 60) )
    return a2;
  v4 = a3;
  v5 = &a3[a2];
  if ( a3 < v5 )
  {
    do
    {
      pgdf = (struct _GLYPHDATA *)v4->pgdf;
      if ( !pgdf->gdf.pgb )
      {
        if ( !RFONTOBJ::bInsertGlyphbits(this, pgdf, v4 == a3) )
          return v4 - a3;
        this = v7;
      }
      ++v4;
    }
    while ( v4 < v5 );
  }
  return v4 - a3;
}
