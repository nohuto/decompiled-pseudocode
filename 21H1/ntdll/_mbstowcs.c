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
  size_t result; // eax
  size_t v4; // [esp+8h] [ebp-4h] BYREF

  if ( !Dest )
    return strlen(Source);
  if ( !MaxCount )
    return 0;
  v4 = _mbstrlen(Source);
  if ( RtlMultiByteToUnicodeN((char *)Dest, 2 * MaxCount, &v4, (char *)Source, v4 + 1) >= 0 )
  {
    result = v4 >> 1;
    v4 = result;
    if ( !Dest[result - 1] )
      --result;
  }
  else
  {
    *_errno() = 42;
    *Dest = 0;
    return -1;
  }
  return result;
}
