/*
 * XREFs of _RtlExtractBitMap@16 @ 0x4B34E520
 * Callers:
 *     <none>
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void __cdecl RtlExtractBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit, ULONG NumberOfBits)
{
  int v4; // ebx
  PRTL_BITMAP v5; // eax
  unsigned int SizeOfBitMap; // edi
  ULONG v7; // edx
  unsigned int v8; // ebx
  int v9; // edi
  unsigned int v10; // ebx
  ULONG v11; // ebx
  int v12; // esi
  int v13; // ecx
  unsigned int v14; // edx
  unsigned int v15; // edx
  bool v16; // zf
  unsigned int v17; // edx
  size_t v18; // [esp-8h] [ebp-2Ch]
  unsigned int v19; // [esp+18h] [ebp-Ch]
  unsigned int *v20; // [esp+1Ch] [ebp-8h]
  unsigned int *Buffer; // [esp+20h] [ebp-4h]

  v5 = Source;
  SizeOfBitMap = Source->SizeOfBitMap - TargetBit;
  if ( NumberOfBits <= SizeOfBitMap )
    SizeOfBitMap = NumberOfBits;
  if ( SizeOfBitMap > Destination->SizeOfBitMap )
    SizeOfBitMap = Destination->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    v7 = TargetBit >> 3;
    HIDWORD(v18) = v4;
    if ( (TargetBit & 7) != 0 )
    {
      v11 = TargetBit & 0x1F;
      v20 = &Source->Buffer[TargetBit >> 5];
      Buffer = Destination->Buffer;
      v12 = 1 << v11;
      if ( SizeOfBitMap >= 0x20 )
      {
        v13 = ~(v12 - 1);
        v19 = SizeOfBitMap >> 5;
        do
        {
          SizeOfBitMap -= 32;
          v14 = v13 & *v20++;
          v15 = v14 >> v11;
          *Buffer = v15;
          v13 = ~(v12 - 1);
          *Buffer = v15 | (((v12 - 1) & *v20) << (32 - v11));
          v16 = v19-- == 1;
          ++Buffer;
        }
        while ( !v16 );
        v12 = 1 << v11;
      }
      if ( SizeOfBitMap )
      {
        if ( SizeOfBitMap > 32 - v11 )
          v17 = ((*v20 & -v12) >> v11) | ((v20[1] & ((1 << (SizeOfBitMap + v11 - 32)) - 1)) << (32 - v11));
        else
          v17 = (*v20 & (((1 << SizeOfBitMap) - 1) << v11)) >> v11;
        *Buffer = v17 | ~((1 << SizeOfBitMap) - 1) & *Buffer;
      }
    }
    else
    {
      v8 = SizeOfBitMap;
      v9 = SizeOfBitMap & 7;
      v10 = v8 >> 3;
      if ( v10 )
      {
        LODWORD(v18) = v10;
        memcpy(Destination->Buffer, (char *)Source->Buffer + v7, v18);
        v7 = TargetBit >> 3;
        v5 = Source;
      }
      if ( v9 )
        *((_BYTE *)Destination->Buffer + v10) = *((_BYTE *)v5->Buffer + v10 + v7) & ((1 << v9) - 1) | *((_BYTE *)Destination->Buffer + v10) & ~((1 << v9) - 1);
    }
  }
}
