/*
 * XREFs of _NtGdiGetFontUnicodeRanges@8 @ 0x83FB4
 * Callers:
 *     <none>
 * Callees:
 *     _GreGetFontUnicodeRanges@8 @ 0x840D4 (_GreGetFontUnicodeRanges@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

size_t __stdcall NtGdiGetFontUnicodeRanges(HDC a1, char *a2)
{
  int FontUnicodeRanges; // eax
  size_t v3; // esi
  size_t *v4; // eax
  size_t *v5; // edi
  int v6; // eax

  FontUnicodeRanges = GreGetFontUnicodeRanges(a1);
  v3 = FontUnicodeRanges;
  if ( FontUnicodeRanges && a2 )
  {
    v4 = (size_t *)AllocFreeTmpBuffer(FontUnicodeRanges);
    v5 = v4;
    if ( v4 )
    {
      *v4 = v3;
      v6 = GreGetFontUnicodeRanges(a1);
      if ( v6 && v3 == v6 )
      {
        if ( (unsigned int)&a2[v3] > _MmUserProbeAddress || &a2[v3] <= a2 )
          *(_BYTE *)_MmUserProbeAddress = 0;
        memcpy(a2, v5, v3);
      }
      else
      {
        v3 = 0;
      }
      FreeTmpBuffer(v5);
    }
    else
    {
      return 0;
    }
  }
  return v3;
}
