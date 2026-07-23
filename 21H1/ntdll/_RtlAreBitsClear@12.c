/*
 * XREFs of _RtlAreBitsClear@12 @ 0x4B34E240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlAreBitsClear(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG Length)
{
  BOOLEAN v3; // dl
  unsigned int *Buffer; // ecx
  unsigned int *v5; // esi
  unsigned int v6; // edx
  unsigned int *v7; // esi
  unsigned int *v9; // [esp+8h] [ebp-4h]

  if ( StartingIndex >= BitMapHeader->SizeOfBitMap )
    return 0;
  if ( Length <= 1 )
  {
    if ( Length == 1 )
      return _bittest((const signed __int32 *)BitMapHeader->Buffer, StartingIndex) == 0;
    return 0;
  }
  if ( BitMapHeader->SizeOfBitMap - StartingIndex < Length )
    return 0;
  Buffer = BitMapHeader->Buffer;
  v5 = &Buffer[StartingIndex >> 5];
  v6 = *v5;
  v9 = &Buffer[(StartingIndex + Length - 1) >> 5];
  if ( v5 == v9 )
    return ((0xFFFFFFFF >> (32 - Length) << StartingIndex) & v6) == 0;
  if ( (v6 & (-1 << StartingIndex)) != 0 )
    return 0;
  v7 = v5 + 1;
  if ( v7 == v9 )
    return ((0xFFFFFFFF >> ~(StartingIndex + Length - 1)) & *v7) == 0;
  v3 = 0;
  while ( !*v7 )
  {
    if ( ++v7 == v9 )
      return ((0xFFFFFFFF >> ~(StartingIndex + Length - 1)) & *v7) == 0;
  }
  return v3;
}
