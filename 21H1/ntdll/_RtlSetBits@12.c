/*
 * XREFs of _RtlSetBits@12 @ 0x4B2E1AA0
 * Callers:
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 *     _RtlFindClearBitsAndSet@12 @ 0x4B2E1990 (_RtlFindClearBitsAndSet@12.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlpValidateRange@20 @ 0x4B337CC0 (_RtlpValidateRange@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __cdecl RtlSetBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToSet)
{
  int v3; // esi
  ULONG v4; // ebx
  ULONG v5; // ecx
  _BYTE *v6; // edi
  char v7; // al
  size_t v8; // [esp-Ch] [ebp-10h]

  v4 = NumberToSet;
  if ( NumberToSet )
  {
    v5 = StartingIndex & 7;
    v6 = (char *)BitMapHeader->Buffer + (StartingIndex >> 3);
    if ( v5 + NumberToSet <= 8 )
    {
      v7 = byte_4B288988[NumberToSet] << v5;
LABEL_4:
      *v6 |= v7;
      return;
    }
    if ( (StartingIndex & 7) != 0 )
    {
      v4 = v5 + NumberToSet - 8;
      *v6++ |= byte_4B288994[v5];
    }
    if ( v4 > 8 )
    {
      HIDWORD(v8) = v3;
      LODWORD(v8) = v4 >> 3;
      memset(v6, 255, v8);
      v6 += v4 >> 3;
      v4 &= 7u;
    }
    if ( v4 )
    {
      v7 = byte_4B288988[v4];
      goto LABEL_4;
    }
  }
}
