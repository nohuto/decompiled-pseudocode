/*
 * XREFs of SmcStorePlacementGet @ 0x14092A960
 * Callers:
 *     SmcStoreResize @ 0x14092AA80 (SmcStoreResize.c)
 *     SmcStoreSlotReserve @ 0x14092AE68 (SmcStoreSlotReserve.c)
 * Callees:
 *     RtlClearBits @ 0x140281070 (RtlClearBits.c)
 *     RtlFindSetBits @ 0x1402D7010 (RtlFindSetBits.c)
 */

__int64 __fastcall SmcStorePlacementGet(__int64 a1, ULONG a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // r11
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  _DWORD *v9; // rdx
  _DWORD *v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r9
  ULONG SetBits; // eax
  ULONG v14; // ebx
  signed int v15; // ebx
  int v16; // esi
  signed int v17; // eax
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  BitMapHeader.SizeOfBitMap = *(_DWORD *)(a1 + 8);
  *(&BitMapHeader.SizeOfBitMap + 1) = 0;
  v6 = ((unsigned __int64)BitMapHeader.SizeOfBitMap + 31) >> 5;
  v7 = a1 + 168;
  BitMapHeader.Buffer = *(unsigned int **)(a3 + 8);
  v8 = v7 + 384;
  while ( v7 < v8 )
  {
    if ( v7 != a3 )
    {
      v9 = *(_DWORD **)(v7 + 8);
      if ( v9 )
      {
        v10 = *(_DWORD **)(a3 + 8);
        v11 = v6;
        v12 = 0LL;
        if ( v9 > &v9[v6] )
          v11 = 0LL;
        if ( v11 )
        {
          do
          {
            ++v12;
            *v10++ ^= *v9++;
          }
          while ( v12 < v11 );
        }
      }
    }
    v7 += 24LL;
  }
  SetBits = RtlFindSetBits(&BitMapHeader, a2, 0);
  v14 = SetBits;
  if ( SetBits == -1 )
  {
    v16 = 0;
    v17 = RtlFindSetBits(&BitMapHeader, 1u, 0);
    if ( v17 < 0 )
      return (unsigned int)-1073741697;
    while ( 1 )
    {
      ++v16;
      v15 = v17 + 1;
      if ( v16 == a2 )
        break;
      v17 = RtlFindSetBits(&BitMapHeader, 1u, v15);
      if ( v17 < v15 )
        return (unsigned int)-1073741697;
    }
  }
  else
  {
    RtlClearBits(&BitMapHeader, 0, SetBits);
    v15 = a2 + v14;
  }
  RtlClearBits(&BitMapHeader, v15, BitMapHeader.SizeOfBitMap - v15);
  return v3;
}
