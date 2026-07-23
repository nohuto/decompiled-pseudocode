/*
 * XREFs of _RtlCopyBitMap@12 @ 0x4B34E350
 * Callers:
 *     <none>
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _RtlpCopyBitMapTailToHead@16 @ 0x4B34FA2A (_RtlpCopyBitMapTailToHead@16.c)
 */

void __cdecl RtlCopyBitMap(PRTL_BITMAP Source, PRTL_BITMAP Destination, ULONG TargetBit)
{
  int v3; // esi
  PRTL_BITMAP v4; // ecx
  unsigned int SizeOfBitMap; // edi
  unsigned int *Buffer; // edx
  unsigned int *v7; // esi
  ULONG v8; // eax
  unsigned int v9; // ebx
  int v10; // edi
  unsigned int v11; // ebx
  _BYTE *v12; // esi
  ULONG v13; // ebx
  int v14; // edx
  unsigned int v15; // ecx
  bool v16; // zf
  size_t v17; // [esp-8h] [ebp-30h]
  int v18; // [esp+10h] [ebp-18h]
  int v19; // [esp+18h] [ebp-10h]
  unsigned int *v20; // [esp+1Ch] [ebp-Ch]
  unsigned int v21; // [esp+1Ch] [ebp-Ch]
  unsigned int v22; // [esp+1Ch] [ebp-Ch]
  unsigned int v23; // [esp+20h] [ebp-8h]
  unsigned int *v24; // [esp+24h] [ebp-4h]

  v4 = Destination;
  SizeOfBitMap = Destination->SizeOfBitMap - TargetBit;
  if ( Source->SizeOfBitMap <= SizeOfBitMap )
    SizeOfBitMap = Source->SizeOfBitMap;
  if ( SizeOfBitMap )
  {
    Buffer = Source->Buffer;
    HIDWORD(v17) = v3;
    v20 = Destination->Buffer;
    v24 = Buffer;
    v7 = &v20[TargetBit >> 5];
    if ( Buffer > v7 || v7 > &Buffer[(SizeOfBitMap - 1) >> 5] )
    {
      v8 = TargetBit >> 3;
      if ( (TargetBit & 7) != 0 )
      {
        v13 = TargetBit & 0x1F;
        if ( SizeOfBitMap >= 0x20 )
        {
          v23 = *v7;
          v14 = (1 << (32 - v13)) - 1;
          v19 = v14;
          v18 = ~v14;
          v21 = SizeOfBitMap >> 5;
          while ( 1 )
          {
            *v7++ = ((*v24 & v14) << v13) | v23 & ((1 << v13) - 1);
            Buffer = v24 + 1;
            v15 = ((*v24++ & v18) >> (32 - v13)) | *v7 & ~((1 << v13) - 1);
            SizeOfBitMap -= 32;
            v23 = v15;
            v16 = v21-- == 1;
            *v7 = v15;
            if ( v16 )
              break;
            v14 = v19;
          }
        }
        if ( SizeOfBitMap )
        {
          v22 = *Buffer;
          if ( SizeOfBitMap > 32 - v13 )
          {
            *v7 = *v7 & ((1 << v13) - 1) | ((v22 & ((1 << (32 - v13)) - 1)) << v13);
            v7[1] = ((*v24 & (((1 << (SizeOfBitMap + v13 - 32)) - 1) << (32 - v13))) >> (32 - v13)) | v7[1] & ~((1 << (SizeOfBitMap + v13 - 32)) - 1);
          }
          else
          {
            *v7 = ((v22 & ((1 << SizeOfBitMap) - 1)) << v13) | *v7 & ~(((1 << SizeOfBitMap) - 1) << v13);
          }
        }
      }
      else
      {
        v9 = SizeOfBitMap;
        v10 = SizeOfBitMap & 7;
        v11 = v9 >> 3;
        if ( v11 )
        {
          LODWORD(v17) = v11;
          memmove((char *)v20 + v8, Buffer, v17);
          v4 = Destination;
          v8 = TargetBit >> 3;
        }
        if ( v10 )
        {
          v12 = (char *)v4->Buffer + v11 + v8;
          *v12 &= ~((1 << v10) - 1);
          *v12 |= (unsigned __int8)((1 << v10) - 1) & *((_BYTE *)Source->Buffer + v11);
        }
      }
    }
    else
    {
      RtlpCopyBitMapTailToHead(TargetBit, SizeOfBitMap);
    }
  }
}
