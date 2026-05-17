/*
 * XREFs of _Normalization__AppendDecomposedChar@12 @ 0x4B3671DC
 * Callers:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 * Callees:
 *     _Normalization__NormalizeCharacter@16 @ 0x4B367DFE (_Normalization__NormalizeCharacter@16.c)
 */

int __fastcall Normalization__AppendDecomposedChar(_DWORD *a1, int a2, int a3)
{
  unsigned __int16 v4; // si
  int v5; // ecx
  unsigned __int16 i; // si
  __int16 v7; // ax
  int v8; // edi
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // edx
  int result; // eax

  v4 = *(_WORD *)(a1[9] + 2 * (a2 % a1[8]));
  if ( (v4 & 0xE000) == 0 )
  {
    v5 = a1[10];
    for ( i = 2 * v4; ; i += 2 )
    {
      v7 = *(_WORD *)(v5 + 2 * i);
      if ( !v7 || v7 == (_WORD)a2 )
        break;
    }
    v4 = *(_WORD *)(v5 + 2 * i + 2);
  }
  v8 = v4 >> 13;
  if ( v8 == 7 )
    v8 = 100;
  v9 = v4 & 0x1FFF;
  if ( v8 )
  {
    do
    {
      v10 = a1[11];
      v11 = *(unsigned __int16 *)(v10 + 2 * (unsigned __int16)v9);
      if ( !(_WORD)v11 )
        break;
      v12 = *(unsigned __int16 *)(v10 + 2 * (unsigned __int16)v9);
      if ( (unsigned int)(v11 - 55296) <= 0x7FF )
      {
        ++v9;
        --v8;
        v12 = ((v12 - 55287) << 10) + *(unsigned __int16 *)(v10 + 2 * (unsigned __int16)v9);
      }
      result = Normalization__NormalizeCharacter(*(_BYTE *)((v12 >> 7) + a1[5]), a3);
      if ( result )
        return result;
      --v8;
      ++v9;
    }
    while ( v8 > 0 );
  }
  return 0;
}
