/*
 * XREFs of _mbstowcs @ 0x4B2F8720
 * Callers:
 *     <none>
 * Callees:
 *     _RtlMultiByteToUnicodeN@20 @ 0x4B2E1E50 (_RtlMultiByteToUnicodeN@20.c)
 *     __mbstrlen @ 0x4B2FE132 (__mbstrlen.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  size_t result; // rax
  ULONG BytesInUnicodeString; // [esp+8h] [ebp-4h] BYREF

  if ( Dest )
  {
    if ( (_DWORD)MaxCount )
    {
      BytesInUnicodeString = _mbstrlen(Source);
      if ( RtlMultiByteToUnicodeN((PWCH)Dest, 2 * MaxCount, &BytesInUnicodeString, Source, BytesInUnicodeString + 1) >= 0 )
      {
        LODWORD(result) = BytesInUnicodeString >> 1;
        BytesInUnicodeString = result;
        if ( !Dest[(_DWORD)result - 1] )
          LODWORD(result) = result - 1;
      }
      else
      {
        *_errno() = 42;
        *Dest = 0;
        LODWORD(result) = -1;
      }
    }
    else
    {
      LODWORD(result) = 0;
    }
  }
  else
  {
    HIDWORD(result) = Source + 1;
    LODWORD(result) = strlen(Source);
  }
  return result;
}
