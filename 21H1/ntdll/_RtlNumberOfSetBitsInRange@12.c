/*
 * XREFs of _RtlNumberOfSetBitsInRange@12 @ 0x4B34F810
 * Callers:
 *     _RtlNumberOfClearBitsInRange@12 @ 0x4B34F690 (_RtlNumberOfClearBitsInRange@12.c)
 * Callees:
 *     <none>
 */

int __stdcall RtlNumberOfSetBitsInRange(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ecx
  char *v5; // esi
  int v6; // ebx
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // ebx
  char v11; // al
  int v12; // edx
  char v13; // al
  unsigned int i; // eax
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  char v17; // al
  unsigned int v18; // [esp+Ch] [ebp-10h]
  int v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]
  int v21; // [esp+18h] [ebp-4h]

  if ( a2 >= *a1 || *a1 - a2 < a3 || !a3 )
    return -1;
  v20 = ((_BYTE)a2 + (_BYTE)a3 - 1) & 7;
  v3 = a2 >> 3;
  v4 = (a2 + a3 - 1) >> 3;
  v5 = (char *)((a2 >> 3) + a1[1]);
  v19 = a2 & 7;
  v6 = 0;
  v18 = v4;
  v21 = 0;
  if ( a2 >> 3 == v4 )
    return (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~(*v5 & byte_4B288994[v19] & byte_4B288989[v20])];
  if ( (((unsigned __int8)a3 | (unsigned __int8)a2) & 0x1F) != 0 )
  {
    if ( (a2 & 7) != 0 )
    {
      v11 = *v5++;
      ++v3;
      v6 = (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~(v11 & byte_4B288994[v19])];
      v21 = v6;
    }
    v12 = 4 - (v3 & 3);
    if ( v12 != 4 && v12 )
    {
      do
      {
        if ( v3 >= v4 )
          break;
        v13 = *v5++;
        v6 += (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~v13];
        ++v3;
        --v12;
      }
      while ( v12 );
      v21 = v6;
    }
    for ( i = v3 + 4; i <= v4; i += 4 )
    {
      v3 += 4;
      v15 = ~*(_DWORD *)v5;
      v5 += 4;
      v4 = v18;
      v6 = (unsigned __int8)(RtlpBitsClearTotal[BYTE1(v15)]
                           + RtlpBitsClearTotal[(unsigned __int8)v15]
                           + RtlpBitsClearTotal[BYTE2(v15)]
                           + RtlpBitsClearTotal[HIBYTE(v15)])
         + v21;
      v21 = v6;
    }
    if ( v3 < v4 )
    {
      v16 = v4 - v3;
      do
      {
        v17 = *v5++;
        v6 += (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~v17];
        --v16;
      }
      while ( v16 );
    }
    return v6 + (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~(*v5 & byte_4B288989[v20])];
  }
  else
  {
    v8 = ((a3 - 1) >> 5) + 1;
    do
    {
      v9 = *(_DWORD *)v5;
      v5 += 4;
      v10 = (unsigned __int8)(RtlpBitsClearTotal[(unsigned __int16)~(_WORD)v9 >> 8]
                            + RtlpBitsClearTotal[(unsigned __int8)~(_BYTE)v9]
                            + RtlpBitsClearTotal[(unsigned __int8)((unsigned int)~v9 >> 16)]
                            + RtlpBitsClearTotal[(unsigned int)~v9 >> 24])
          + v21;
      v21 = v10;
      --v8;
    }
    while ( v8 );
    return v10;
  }
}
