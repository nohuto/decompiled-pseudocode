/*
 * XREFs of mbtowc @ 0x1800961F4
 * Callers:
 *     _woutput_l @ 0x180093240 (_woutput_l.c)
 *     ReadString @ 0x180095484 (ReadString.c)
 * Callees:
 *     RtlAnsiCharToUnicodeChar @ 0x1800614B0 (RtlAnsiCharToUnicodeChar.c)
 */

int __cdecl mbtowc(wchar_t *DstCh, const char *SrcCh, size_t SrcSizeInBytes)
{
  int result; // eax
  int v4; // ebx
  char *v5; // [rsp+38h] [rbp+10h] BYREF

  result = 0;
  v4 = (int)SrcCh;
  if ( SrcCh && SrcSizeInBytes )
  {
    if ( *SrcCh )
    {
      v5 = (char *)SrcCh;
      *DstCh = RtlAnsiCharToUnicodeChar(&v5);
      return (_DWORD)v5 - v4;
    }
    else if ( DstCh )
    {
      *DstCh = 0;
    }
  }
  return result;
}
