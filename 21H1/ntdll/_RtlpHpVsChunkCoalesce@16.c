/*
 * XREFs of _RtlpHpVsChunkCoalesce@16 @ 0x4B37E8AB
 * Callers:
 *     _RtlpHpVsChunkFree@20 @ 0x4B37EC44 (_RtlpHpVsChunkFree@20.c)
 * Callees:
 *     _RtlpHpVsFreeChunkRemove@12 @ 0x4B37FAC1 (_RtlpHpVsFreeChunkRemove@12.c)
 */

_DWORD *__fastcall RtlpHpVsChunkCoalesce(int a1, int a2, unsigned int *a3, int *a4)
{
  _DWORD *v4; // ebx
  int v5; // esi
  int v6; // edi
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  int v9; // esi
  unsigned int v10; // ecx
  int v11; // esi
  unsigned int v12; // ecx
  int v13; // esi
  unsigned int v14; // edx
  _DWORD *result; // eax
  int v16; // [esp+Ch] [ebp-10h]
  _DWORD *v17; // [esp+10h] [ebp-Ch]
  int v18; // [esp+14h] [ebp-8h]

  v4 = a3;
  v5 = RtlpHpHeapGlobals ^ *a3;
  v18 = a2;
  v6 = (unsigned __int16)((unsigned __int16)a3 ^ v5) >> 1;
  v16 = v6;
  *a3 = (unsigned int)a3 ^ RtlpHpHeapGlobals ^ ((unsigned int)a3 ^ v5) & 0x7FFFFFFF;
  v7 = (((unsigned int)a3 ^ v5) >> 16) & 0x7FFF;
  if ( v7 )
  {
    v8 = (unsigned int)&a3[-2 * v7];
    v17 = (_DWORD *)v8;
    v9 = *(_DWORD *)v8 ^ v8 ^ RtlpHpHeapGlobals;
    if ( v9 >= 0 )
    {
      RtlpHpVsFreeChunkRemove(v8);
      v4 = v17;
      a2 = v18;
      v6 += (unsigned __int16)v9 >> 1;
    }
  }
  v10 = (unsigned int)&v4[2 * v6];
  if ( v10 < a2 + 8 * ((unsigned int)*(unsigned __int16 *)(a2 + 20) + 3) )
  {
    _mm_lfence();
    v11 = v10 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v10;
    if ( v11 >= 0 )
    {
      RtlpHpVsFreeChunkRemove(&v4[2 * v6]);
      a2 = v18;
      v6 += (unsigned __int16)v11 >> 1;
    }
  }
  if ( (*(_BYTE *)(a1 + 152) & 1) != 0 )
  {
    v12 = (unsigned int)&v4[2 * v6];
    if ( v12 < a2 + 8 * ((unsigned int)*(unsigned __int16 *)(a2 + 20) + 3) )
    {
      _mm_lfence();
      v13 = v12 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v12;
      if ( v13 >= 0 )
      {
        RtlpHpVsFreeChunkRemove(&v4[2 * v6]);
        v6 += (unsigned __int16)v13 >> 1;
      }
    }
  }
  if ( v16 != v6 )
  {
    v14 = (unsigned int)&v4[2 * v6];
    *v4 ^= ((unsigned __int16)v4 ^ (unsigned __int16)(RtlpHpHeapGlobals ^ *(_WORD *)v4 ^ (2 * v6))) & 0xFFFE;
    if ( v14 < v18 + 8 * ((unsigned int)*(unsigned __int16 *)(v18 + 20) + 3) )
      *(_DWORD *)v14 ^= (v14 ^ RtlpHpHeapGlobals ^ *(_DWORD *)v14 ^ (v6 << 16)) & 0x7FFF0000;
  }
  result = v4;
  *a4 = v6;
  return result;
}
