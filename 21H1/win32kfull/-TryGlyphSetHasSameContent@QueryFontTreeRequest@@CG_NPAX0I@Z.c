/*
 * XREFs of ?TryGlyphSetHasSameContent@QueryFontTreeRequest@@CG_NPAX0I@Z @ 0xE064A
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

bool __stdcall QueryFontTreeRequest::TryGlyphSetHasSameContent(char *Source2, char *Source1, unsigned int a3)
{
  unsigned int v3; // esi
  int v4; // edx

  v3 = 0;
  if ( RtlCompareMemory(Source1, Source2, 0x10u) != 16 )
    return 0;
  while ( v3 < *((_DWORD *)Source1 + 3) )
  {
    if ( *(_WORD *)&Source1[8 * v3 + 16] != *(_WORD *)&Source2[8 * v3 + 16]
      || *(_WORD *)&Source1[8 * v3 + 18] != *(_WORD *)&Source2[8 * v3 + 18]
      || *(_DWORD *)&Source1[8 * v3 + 20] - (_DWORD)Source1 != *(_DWORD *)&Source2[8 * v3 + 20] - (_DWORD)Source2 )
    {
      return 0;
    }
    ++v3;
  }
  return (char *)RtlCompareMemory(
                   &Source1[8 * *((_DWORD *)Source1 + 3) + 16],
                   &Source2[8 * *((_DWORD *)Source1 + 3) + 16],
                   a3 - (8 * *((_DWORD *)Source1 + 3) + 16)) == &Source1[a3 - v4];
}
