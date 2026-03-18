/*
 * XREFs of ?vFixUpGlyphIndices@RFONTOBJ@@QEBAXPEAGI@Z @ 0x1C00E21D4
 * Callers:
 *     GreGetTextExtentW @ 0x1C000C3CC (GreGetTextExtentW.c)
 *     ?vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1C007D260 (-vInit@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     GreGetCharABCWidthsW @ 0x1C00E1878 (GreGetCharABCWidthsW.c)
 *     GreGetCharWidthW @ 0x1C00E1D38 (GreGetCharWidthW.c)
 *     GreGetTextExtentExW @ 0x1C015B7E4 (GreGetTextExtentExW.c)
 * Callees:
 *     <none>
 */

void __fastcall RFONTOBJ::vFixUpGlyphIndices(RFONTOBJ *this, unsigned __int16 *a2, unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned __int64 v5; // r9
  __int16 v6; // r10
  unsigned __int64 v7; // rax

  v3 = *(_QWORD *)(*(_QWORD *)this + 120LL);
  if ( (*(_DWORD *)(*(_QWORD *)(v3 + 16) + 4LL) & 2) != 0 )
  {
    v4 = *(_QWORD *)(v3 + 32);
    v5 = 0LL;
    v6 = *(unsigned __int8 *)(v4 + 108);
    if ( *(_BYTE *)(v4 + 108) )
    {
      v7 = (2 * (unsigned __int64)a3 + 1) >> 1;
      if ( a2 > &a2[a3] )
        v7 = 0LL;
      if ( v7 )
      {
        do
        {
          *a2 -= v6;
          ++v5;
          ++a2;
        }
        while ( v5 < v7 );
      }
    }
  }
}
