/*
 * XREFs of _wcstombs @ 0x4B2FACA0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnicodeToMultiByteN@20 @ 0x4B2E0D70 (_RtlUnicodeToMultiByteN@20.c)
 *     _RtlUnicodeToMultiByteSize@12 @ 0x4B2E0DE0 (_RtlUnicodeToMultiByteSize@12.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  int v3; // eax
  unsigned int v5; // [esp+0h] [ebp-8h]
  ULONG BytesInMultiByteString; // [esp+4h] [ebp-4h] BYREF

  BytesInMultiByteString = 0;
  v5 = 2 * wcslen(Source) + 2;
  if ( Dest )
    v3 = RtlUnicodeToMultiByteN(Dest, MaxCount, &BytesInMultiByteString, (unsigned __int16 *)Source, v5);
  else
    v3 = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, (PWCH)Source, v5);
  if ( v3 >= 0 )
    return BytesInMultiByteString - 1;
  *_errno() = 42;
  return -1;
}
