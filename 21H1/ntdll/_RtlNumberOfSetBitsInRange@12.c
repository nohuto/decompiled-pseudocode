/*
 * XREFs of _RtlNumberOfSetBitsInRange@12 @ 0x4B34F810
 * Callers:
 *     _RtlNumberOfClearBitsInRange@12 @ 0x4B34F690 (_RtlNumberOfClearBitsInRange@12.c)
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlNumberOfSetBitsInRange(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  ULONG v3; // edi
  ULONG v4; // ecx
  char *v5; // esi
  ULONG v6; // ebx
  ULONG v8; // edi
  int v9; // ecx
  ULONG v10; // ebx
  char v11; // al
  int v12; // edx
  char v13; // al
  ULONG i; // eax
  unsigned int v15; // ebx
  ULONG v16; // ecx
  char v17; // al
  ULONG v18; // [esp+Ch] [ebp-10h]
  ULONG v19; // [esp+10h] [ebp-Ch]
  int v20; // [esp+14h] [ebp-8h]
  ULONG v21; // [esp+18h] [ebp-4h]

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap || BitMapHeader->SizeOfBitMap - StartingIndex < Length || !Length )
    return -1;
  v20 = ((_BYTE)StartingIndex + (_BYTE)Length - 1) & 7;
  v3 = StartingIndex >> 3;
  v4 = (StartingIndex + Length - 1) >> 3;
  v5 = (char *)BitMapHeader->Buffer + (StartingIndex >> 3);
  v19 = StartingIndex & 7;
  v6 = 0;
  v18 = v4;
  v21 = 0;
  if ( StartingIndex >> 3 == v4 )
    return (unsigned __int8)RtlpBitsClearTotal[(unsigned __int8)~(*v5 & byte_4B288994[v19] & byte_4B288989[v20])];
  if ( (((unsigned __int8)Length | (unsigned __int8)StartingIndex) & 0x1F) != 0 )
  {
    if ( (StartingIndex & 7) != 0 )
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
    v8 = ((Length - 1) >> 5) + 1;
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
