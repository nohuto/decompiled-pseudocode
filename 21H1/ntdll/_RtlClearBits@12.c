/*
 * XREFs of _RtlClearBits@12 @ 0x4B2E1AE0
 * Callers:
 *     _LdrpInitializeTls@0 @ 0x4B2E14F7 (_LdrpInitializeTls@0.c)
 *     _LdrpAcquireTlsIndex@8 @ 0x4B2E185E (_LdrpAcquireTlsIndex@8.c)
 *     _RtlFindSetBitsAndClear@12 @ 0x4B34F1B0 (_RtlFindSetBitsAndClear@12.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

void __cdecl RtlClearBits(PRTL_BITMAP BitMapHeader, ULONG StartingIndex, ULONG NumberToClear)
{
  int v3; // esi
  ULONG v4; // ebx
  ULONG v5; // ecx
  _BYTE *v6; // edi
  char v7; // al
  size_t v8; // [esp-Ch] [ebp-10h]

  v4 = NumberToClear;
  if ( NumberToClear )
  {
    v5 = StartingIndex & 7;
    v6 = (char *)BitMapHeader->Buffer + (StartingIndex >> 3);
    if ( v5 + NumberToClear <= 8 )
    {
      v7 = ~(byte_4B288988[NumberToClear] << v5);
LABEL_4:
      *v6 &= v7;
      return;
    }
    if ( (StartingIndex & 7) != 0 )
    {
      v4 = v5 + NumberToClear - 8;
      *v6++ &= byte_4B288988[v5];
    }
    if ( v4 > 8 )
    {
      HIDWORD(v8) = v3;
      LODWORD(v8) = v4 >> 3;
      memset(v6, 0, v8);
      v6 += v4 >> 3;
      v4 &= 7u;
    }
    if ( v4 )
    {
      v7 = byte_4B288994[v4];
      goto LABEL_4;
    }
  }
}
