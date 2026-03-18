/*
 * XREFs of ?vFixUpGlyphIndices@RFONTOBJ@@QBEXPAGI@Z @ 0x881A8
 * Callers:
 *     _GreGetCharABCWidthsW@24 @ 0x866BE (_GreGetCharABCWidthsW@24.c)
 *     _GreGetCharWidthW@24 @ 0xC0C72 (_GreGetCharWidthW@24.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GreGetTextExtentExW@32 @ 0xF83A4 (_GreGetTextExtentExW@32.c)
 * Callees:
 *     <none>
 */

void __thiscall RFONTOBJ::vFixUpGlyphIndices(RFONTOBJ *this, unsigned __int16 *a2, unsigned int a3)
{
  int v3; // ecx
  int v4; // eax
  __int16 v5; // di
  unsigned __int16 *v6; // edx
  unsigned int v7; // esi
  unsigned int v8; // eax

  v3 = *(_DWORD *)(*(_DWORD *)this + 80);
  if ( (*(_BYTE *)(*(_DWORD *)(v3 + 12) + 4) & 2) != 0 )
  {
    v4 = *(_DWORD *)(v3 + 20);
    v5 = *(unsigned __int8 *)(v4 + 108);
    if ( *(_BYTE *)(v4 + 108) )
    {
      v6 = a2;
      v7 = 0;
      v8 = &a2[a3] >= a2 ? (2 * a3 + 1) >> 1 : 0;
      if ( v8 )
      {
        do
        {
          *v6 -= v5;
          ++v7;
          ++v6;
        }
        while ( v7 < v8 );
      }
    }
  }
}
