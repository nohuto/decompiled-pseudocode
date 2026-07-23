/*
 * XREFs of _RtlFindNextForwardRunClear@12 @ 0x4B34EDF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  ULONG v3; // esi
  unsigned int SizeOfBitMap; // edx
  ULONG v5; // edx
  unsigned int *Buffer; // ecx
  unsigned int *v7; // edi
  unsigned int *v8; // edi
  unsigned int i; // eax
  ULONG v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+Ch] [ebp-8h]
  unsigned int *v13; // [esp+10h] [ebp-4h]

  v3 = FromIndex;
  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  if ( BitMapHeader->SizeOfBitMap > FromIndex )
  {
    Buffer = BitMapHeader->Buffer;
    v13 = &Buffer[(SizeOfBitMap - 1) >> 5];
    v7 = &Buffer[FromIndex >> 5];
    if ( v7 != v13 )
    {
      v11 = FromIndex & 0x1F;
      if ( (*v7 | dword_4B288AA0[v11]) == 0xFFFFFFFF )
      {
        v3 = FromIndex - v11 + 32;
        for ( ++v7; v7 < v13 && *v7 == -1; ++v7 )
          v3 += 32;
      }
    }
    for ( ; v3 < SizeOfBitMap; ++v3 )
    {
      if ( !_bittest((const signed __int32 *)BitMapHeader->Buffer, v3) )
        break;
    }
    v5 = 0;
    if ( v7 != v13 )
    {
      v12 = v3 & 0x1F;
      if ( (*v7 & ~dword_4B288AA0[v12]) == 0 )
      {
        v5 = 32 - v12;
        if ( v12 == 33 )
        {
LABEL_23:
          *StartingRunIndex = v3;
          return v5;
        }
        v8 = v7 + 1;
        while ( v8 < v13 && !*v8 )
        {
          v5 += 32;
          ++v8;
          if ( v5 == -1 )
            goto LABEL_23;
        }
      }
    }
    for ( i = v5 + v3; i < BitMapHeader->SizeOfBitMap; ++v5 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v5 == -1 )
        break;
      ++i;
    }
    goto LABEL_23;
  }
  v5 = 0;
  *StartingRunIndex = FromIndex;
  return v5;
}
