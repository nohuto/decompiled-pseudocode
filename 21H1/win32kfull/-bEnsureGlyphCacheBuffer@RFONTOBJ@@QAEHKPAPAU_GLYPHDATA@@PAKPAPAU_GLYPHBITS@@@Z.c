/*
 * XREFs of ?bEnsureGlyphCacheBuffer@RFONTOBJ@@QAEHKPAPAU_GLYPHDATA@@PAKPAPAU_GLYPHBITS@@@Z @ 0xF8744
 * Callers:
 *     _FONTOBJ_bEnsureGlyphCacheBuffer@20 @ 0xF8362 (_FONTOBJ_bEnsureGlyphCacheBuffer@20.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ?bCheckMetricsCache@RFONTOBJ@@QAEHXZ @ 0x87776 (-bCheckMetricsCache@RFONTOBJ@@QAEHXZ.c)
 *     ?pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z @ 0xA8B2A (-pgbCheckGlyphCache@RFONTOBJ@@QAEPAXK@Z.c)
 *     ?bEnsureAuxCacheBuffer@RFONTOBJ@@QAEHK@Z @ 0x240D7F (-bEnsureAuxCacheBuffer@RFONTOBJ@@QAEHK@Z.c)
 *     ?vFlushCache@RFONTOBJ@@QAEXXZ @ 0x2412BE (-vFlushCache@RFONTOBJ@@QAEXXZ.c)
 */

int __thiscall RFONTOBJ::bEnsureGlyphCacheBuffer(
        RFONTOBJ *this,
        unsigned int a2,
        struct _GLYPHDATA **a3,
        unsigned int *a4,
        struct _GLYPHBITS **a5)
{
  _DWORD *v6; // edi
  _DWORD *v7; // ebx
  struct _GLYPHBITS *v8; // ecx
  struct _GLYPHDATA **v10; // ebx
  unsigned int v11; // edx
  int v12; // ecx
  unsigned int *v13; // eax
  unsigned int v14; // [esp+0h] [ebp-Ch]
  unsigned int *v15; // [esp+4h] [ebp-8h]

  v6 = *(_DWORD **)this;
  v7 = (_DWORD *)(*(_DWORD *)this + 644);
  if ( (*(_BYTE *)v7 & 4) != 0 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( RFONTOBJ::bCheckMetricsCache(this) )
    {
      *a3 = (struct _GLYPHDATA *)v6[138];
      v6 = *(_DWORD **)this;
LABEL_5:
      *a4 = v6[160] != 0 ? 20 : 64;
      while ( 1 )
      {
        v8 = (struct _GLYPHBITS *)RFONTOBJ::pgbCheckGlyphCache(this, a2);
        if ( v8 )
          goto LABEL_17;
        if ( (*v7 & 1) == 0 )
        {
          if ( (*v7 & 2) != 0 )
            goto LABEL_17;
          return 0;
        }
        RFONTOBJ::vFlushCache(this);
        *v7 &= ~1u;
      }
    }
    return 0;
  }
  v10 = a3;
  if ( !a3 )
    return 0;
  a3 = 0;
  v11 = v6[158];
  if ( v11 < 0x10
    || (ULongAdd(v11, 0x40u, (int *)&a3, v14, v15) & 0x80000000) != 0
    || !RFONTOBJ::bEnsureAuxCacheBuffer(this, (unsigned int)a3) )
  {
    return 0;
  }
  v12 = *(_DWORD *)(*(_DWORD *)this + 624);
  v13 = a4;
  *v10 = (struct _GLYPHDATA *)v12;
  v8 = (struct _GLYPHBITS *)(v12 + 64);
  *v13 = 64;
LABEL_17:
  *a5 = v8;
  return 1;
}
