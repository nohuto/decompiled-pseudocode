/*
 * XREFs of NtGdiGetFontUnicodeRanges @ 0x1C014E3E0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetFontUnicodeRanges @ 0x1C014E4A8 (GreGetFontUnicodeRanges.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 */

__int64 __fastcall NtGdiGetFontUnicodeRanges(HDC a1, char *a2)
{
  unsigned int FontUnicodeRanges; // eax
  __int64 v5; // rbx
  _DWORD *v6; // rax
  const void *v7; // rdi
  int v8; // eax

  FontUnicodeRanges = GreGetFontUnicodeRanges(a1);
  v5 = FontUnicodeRanges;
  if ( FontUnicodeRanges && a2 )
  {
    v6 = (_DWORD *)AllocFreeTmpBuffer(FontUnicodeRanges);
    v7 = v6;
    if ( v6 )
    {
      *v6 = v5;
      v8 = GreGetFontUnicodeRanges(a1);
      if ( v8 && (_DWORD)v5 == v8 )
      {
        if ( (unsigned __int64)&a2[v5] > MmUserProbeAddress || &a2[v5] <= a2 )
          *(_BYTE *)MmUserProbeAddress = 0;
        memmove(a2, v7, (unsigned int)v5);
      }
      else
      {
        LODWORD(v5) = 0;
      }
      FreeTmpBuffer(v7);
    }
    else
    {
      LODWORD(v5) = 0;
    }
  }
  return (unsigned int)v5;
}
