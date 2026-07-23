/*
 * XREFs of _RtlFindLastBackwardRunClear@12 @ 0x4B34EB90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindLastBackwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  ULONG v3; // esi
  ULONG result; // eax
  unsigned int *Buffer; // ebx
  unsigned int *v6; // edx
  unsigned int v7; // edi
  unsigned int *i; // edx

  v3 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap > FromIndex )
  {
    Buffer = BitMapHeader->Buffer;
    v6 = &Buffer[FromIndex >> 5];
    if ( v6 != Buffer && (*v6 | ~dword_4B288AA4[FromIndex & 0x1F]) == 0xFFFFFFFF )
    {
      v3 = (FromIndex & 0xFFFFFFE0) - 1;
      for ( --v6; v6 > Buffer && *v6 == -1; --v6 )
        v3 -= 32;
    }
    while ( v3 != -1 && (((int)Buffer[v3 >> 5] >> (v3 & 0x1F)) & 1) != 0 )
      --v3;
    v7 = v3;
    if ( (dword_4B288AA0[v3 & 0x1F] & *v6) == 0 )
    {
      v7 = (v3 & 0xFFFFFFE0) - 1;
      for ( i = v6 - 1; i > Buffer && !*i; --i )
        v7 -= 32;
    }
    while ( v7 != -1 && (((int)Buffer[v7 >> 5] >> (v7 & 0x1F)) & 1) == 0 )
      --v7;
    result = v3 - v7;
    *StartingRunIndex = v7 + 1;
  }
  else
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  return result;
}
