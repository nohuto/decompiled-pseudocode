/*
 * XREFs of RtlFindNextForwardRunClear @ 0x180085E20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  unsigned int SizeOfBitMap; // r10d
  ULONG v5; // r9d
  unsigned int *Buffer; // rdx
  unsigned int *v7; // rbx
  unsigned int *v8; // r8
  ULONG v9; // edx
  int v10; // edi
  unsigned int *v11; // r8
  unsigned int i; // eax

  SizeOfBitMap = BitMapHeader->SizeOfBitMap;
  v5 = FromIndex;
  if ( BitMapHeader->SizeOfBitMap <= FromIndex )
  {
    *StartingRunIndex = FromIndex;
    return 0;
  }
  Buffer = BitMapHeader->Buffer;
  v7 = &Buffer[(unsigned __int64)(SizeOfBitMap - 1) >> 5];
  v8 = &Buffer[(unsigned __int64)v5 >> 5];
  if ( v8 != v7 && (*v8 | dword_1801271E0[v5 & 0x1F]) == 0xFFFFFFFF )
  {
    v5 = v5 - (v5 & 0x1F) + 32;
    for ( ++v8; v8 < v7 && *v8 == -1; ++v8 )
      v5 += 32;
  }
  while ( v5 < SizeOfBitMap && _bittest((const signed __int32 *)Buffer, v5) )
    ++v5;
  v9 = 0;
  if ( v8 == v7 )
    goto LABEL_16;
  v10 = v5 & 0x1F;
  if ( (*v8 & ~dword_1801271E0[v5 & 0x1F]) != 0 )
    goto LABEL_16;
  v9 = 32 - v10;
  if ( v10 != 33 )
  {
    v11 = v8 + 1;
    while ( v11 < v7 && !*v11 )
    {
      ++v11;
      v9 += 32;
      if ( v9 == -1 )
        goto LABEL_20;
    }
LABEL_16:
    for ( i = v9 + v5; i < BitMapHeader->SizeOfBitMap; ++v9 )
    {
      if ( _bittest((const signed __int32 *)BitMapHeader->Buffer, i) )
        break;
      if ( v9 == -1 )
        break;
      ++i;
    }
  }
LABEL_20:
  *StartingRunIndex = v5;
  return v9;
}
