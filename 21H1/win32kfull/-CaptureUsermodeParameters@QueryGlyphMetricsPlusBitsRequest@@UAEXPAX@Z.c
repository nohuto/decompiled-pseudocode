/*
 * XREFs of ?CaptureUsermodeParameters@QueryGlyphMetricsPlusBitsRequest@@UAEXPAX@Z @ 0xF88AE
 * Callers:
 *     <none>
 * Callees:
 *     ?CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z @ 0x8C1D4 (-CaptureUsermodeFontObj@FontDriverDdiRequest@@KG_NPAU_FONTOBJ@@0@Z.c)
 *     _FONTOBJ_AdvanceGlyphCacheBuffer@16 @ 0xF833A (_FONTOBJ_AdvanceGlyphCacheBuffer@16.c)
 *     _FONTOBJ_bEnsureGlyphCacheBuffer@20 @ 0xF8362 (_FONTOBJ_bEnsureGlyphCacheBuffer@20.c)
 *     ?ValidateGlyphBitsBuffer@@YG_NKJJKK@Z @ 0xF8BCC (-ValidateGlyphBitsBuffer@@YG_NKJJKK@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

void __thiscall QueryGlyphMetricsPlusBitsRequest::CaptureUsermodeParameters(
        QueryGlyphMetricsPlusBitsRequest *this,
        _DWORD *MaxCount)
{
  int v3; // edx
  const void *v4; // ebx
  unsigned int v5; // edi
  struct _GLYPHBITS *v6; // ebx
  LONG cx; // edx
  int v8; // eax
  unsigned int v9; // eax
  struct _GLYPHDATA *v10; // edx
  _DWORD *v11; // ecx
  unsigned int v12; // [esp+0h] [ebp-3Ch]
  unsigned int v13; // [esp+4h] [ebp-38h]
  void *Src; // [esp+20h] [ebp-1Ch]

  v3 = MaxCount[3];
  v4 = (const void *)MaxCount[4];
  Src = (void *)MaxCount[5];
  v5 = MaxCount[7];
  if ( v3 == *((_DWORD *)this + 16) )
  {
    if ( FontDriverDdiRequest::CaptureUsermodeFontObj(*((_DWORD *)this + 9), v3) )
    {
      if ( (v5 & 0x80000000) == 0
        && v4 == *((const void **)this + 17)
        && Src == *((void **)this + 18)
        && v5 <= *((_DWORD *)this + 12)
        && v5 >= 0x10 )
      {
        *((_DWORD *)this + 12) = v5;
        MaxCount = 0;
        if ( FONTOBJ_bEnsureGlyphCacheBuffer(
               *((_DWORD *)this + 9),
               v5,
               *((_DWORD *)this + 14) != 0 ? (struct _GLYPHDATA **)this + 10 : 0,
               (unsigned int *)&MaxCount,
               (struct _GLYPHBITS **)this + 11) )
        {
          if ( *((_DWORD *)this + 14) )
            memcpy(*((void **)this + 10), v4, (size_t)MaxCount);
          v6 = (struct _GLYPHBITS *)*((_DWORD *)this + 11);
          if ( !v6
            || ((memcpy(v6, Src, *((_DWORD *)this + 12)),
                 v6 = (struct _GLYPHBITS *)*((_DWORD *)this + 11),
                 cx = v6->sizlBitmap.cx,
                 v8 = *(_DWORD *)(*((_DWORD *)this + 9) + 12),
                 (v8 & 0x10000) == 0)
              ? (v9 = (unsigned int)(cx + 7) >> 3)
              : (v8 & 0x10000000) == 0
              ? (v9 = (unsigned int)(cx + 1) >> 1)
              : (v9 = v6->sizlBitmap.cx),
                ValidateGlyphBitsBuffer(v6->sizlBitmap.cy, v9, 16, v12, v13)) )
          {
            v10 = (struct _GLYPHDATA *)*((_DWORD *)this + 10);
            if ( v10 )
            {
              v10->gdf.pgb = v6;
              v6 = (struct _GLYPHBITS *)*((_DWORD *)this + 11);
              v10 = (struct _GLYPHDATA *)*((_DWORD *)this + 10);
            }
            FONTOBJ_AdvanceGlyphCacheBuffer(*((_DWORD *)this + 9), v10, v6, *((_DWORD *)this + 12));
            v11 = (_DWORD *)*((_DWORD *)this + 14);
            if ( v11 )
              *v11 = *((_DWORD *)this + 10);
            **((_DWORD **)this + 15) = *((_DWORD *)this + 11);
            *((_DWORD *)this + 13) = v5;
          }
        }
      }
    }
  }
}
