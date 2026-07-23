/*
 * XREFs of _RtlAreBitsSet@12 @ 0x4B2E7AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsSet(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  unsigned int *Buffer; // ecx
  unsigned int *v5; // edx
  unsigned int v6; // ebx
  unsigned int *v8; // [esp+8h] [ebp-4h]

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex);
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v5 = &Buffer[StartingIndex >> 5];
  v6 = *v5;
  v8 = &Buffer[(StartingIndex + Length - 1) >> 5];
  if ( v5 == v8 )
    return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v6) == 0xFFFFFFFF >> (32 - Length) << StartingIndex;
  if ( ((-1 << StartingIndex) & v6) == -1 << StartingIndex )
  {
    while ( ++v5 != v8 )
    {
      if ( *v5 != -1 )
        return 0;
    }
    return ((0xFFFFFFFF >> ~(StartingIndex + Length - 1)) & *v5) == 0xFFFFFFFF >> ~(StartingIndex + Length - 1);
  }
  return 0;
}
