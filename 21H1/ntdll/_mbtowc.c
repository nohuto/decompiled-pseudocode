/*
 * XREFs of _mbtowc @ 0x4B2FEE55
 * Callers:
 *     __woutput_l @ 0x4B2FC3A0 (__woutput_l.c)
 *     ReadString @ 0x4B2FE156 (ReadString.c)
 * Callees:
 *     _RtlAnsiCharToUnicodeChar@4 @ 0x4B2E1DF0 (_RtlAnsiCharToUnicodeChar@4.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  PUCHAR SourceCharacter; // [esp+4h] [ebp-4h] BYREF

  if ( !SrcCh || !(_DWORD)SrcSizeInBytes )
    return 0;
  if ( !*SrcCh )
  {
    if ( DstCh )
      *DstCh = 0;
    return 0;
  }
  SourceCharacter = (PUCHAR)SrcCh;
  *DstCh = RtlAnsiCharToUnicodeChar(&SourceCharacter);
  return SourceCharacter - (PUCHAR)SrcCh;
}
