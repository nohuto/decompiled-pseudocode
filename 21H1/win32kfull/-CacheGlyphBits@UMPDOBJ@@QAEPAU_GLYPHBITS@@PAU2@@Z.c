/*
 * XREFs of ?CacheGlyphBits@UMPDOBJ@@QAEPAU_GLYPHBITS@@PAU2@@Z @ 0x1F38D2
 * Callers:
 *     _NtGdiFONTOBJ_cGetGlyphs@20 @ 0x219EAF (_NtGdiFONTOBJ_cGetGlyphs@20.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z @ 0x1F40D8 (-_AllocUserMem@UMPDOBJ@@AAEPAXKH@Z.c)
 */

struct _GLYPHBITS *__thiscall UMPDOBJ::CacheGlyphBits(UMPDOBJ *this, struct _GLYPHBITS *Src)
{
  struct _GLYPHBITS *v2; // eax
  void *v4; // esi
  void *v5; // edi

  v2 = Src;
  v4 = (void *)(Src->sizlBitmap.cy * ((unsigned int)(Src->sizlBitmap.cx + 7) >> 3) + 16);
  if ( (unsigned int)v4 > *((_DWORD *)this + 48) )
  {
    v5 = UMPDOBJ::_AllocUserMem(this, v4, 0);
    if ( !v5 )
      return (struct _GLYPHBITS *)v5;
    v2 = Src;
    *((_DWORD *)this + 45) = v5;
    *((_DWORD *)this + 48) = v4;
  }
  else
  {
    v5 = (void *)*((_DWORD *)this + 45);
  }
  if ( v5 )
    memcpy(v5, v2, (size_t)v4);
  return (struct _GLYPHBITS *)v5;
}
