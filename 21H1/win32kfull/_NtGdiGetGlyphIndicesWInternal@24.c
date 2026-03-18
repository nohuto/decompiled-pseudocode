/*
 * XREFs of _NtGdiGetGlyphIndicesWInternal@24 @ 0x85522
 * Callers:
 *     _NtGdiGetGlyphIndicesW@20 @ 0x854FE (_NtGdiGetGlyphIndicesW@20.c)
 * Callees:
 *     _GreGetGlyphIndicesW@24 @ 0x8564C (_GreGetGlyphIndicesW@24.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

int __stdcall NtGdiGetGlyphIndicesWInternal(HDC a1, __int64 Src, char *a3, unsigned int a4, int a5)
{
  char *v5; // ecx
  int GlyphIndicesW; // esi
  char *v7; // eax
  char *v9; // [esp+28h] [ebp-60h]
  _BYTE v10[68]; // [esp+2Ch] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+70h] [ebp-18h]

  v5 = (char *)Src;
  v9 = 0;
  GlyphIndicesW = -1;
  if ( Src < 0 )
    return -1;
  if ( Src <= 0 && !a3 && !a4 )
    return GreGetGlyphIndicesW(a1, 0, 0, 0, a5);
  if ( SHIDWORD(Src) > 16 )
  {
    if ( HIDWORD(Src) > 0x9C4000 )
      goto LABEL_6;
    v7 = (char *)AllocFreeTmpBuffer(4 * HIDWORD(Src));
    v5 = (char *)Src;
  }
  else
  {
    v7 = v10;
  }
  v9 = v7;
LABEL_6:
  if ( v9 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( &v5[2 * HIDWORD(Src)] < v5 || (unsigned int)&v5[2 * HIDWORD(Src)] > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    memcpy(&v9[2 * HIDWORD(Src)], v5, 2 * HIDWORD(Src));
    GlyphIndicesW = HIDWORD(Src);
    ms_exc.registration.TryLevel = -2;
    if ( HIDWORD(Src) != -1 )
    {
      GlyphIndicesW = GreGetGlyphIndicesW(a1, SHIDWORD(Src), (int)v9, a4 <= 1 ? a4 : 0, a5);
      if ( GlyphIndicesW != -1 )
      {
        ms_exc.registration.TryLevel = 1;
        if ( (unsigned int)&a3[2 * HIDWORD(Src)] > _MmUserProbeAddress || &a3[2 * HIDWORD(Src)] <= a3 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a3, v9, 2 * HIDWORD(Src));
        ms_exc.registration.TryLevel = -2;
      }
    }
    if ( v9 != v10 )
      FreeTmpBuffer(v9);
  }
  return GlyphIndicesW;
}
