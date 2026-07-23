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
  size_t result; // rax
  ULONG v4; // [esp+0h] [ebp-8h]
  ULONG BytesInMultiByteString; // [esp+4h] [ebp-4h] BYREF

  BytesInMultiByteString = 0;
  v4 = 2 * wcslen(Source) + 2;
  if ( Dest )
    LODWORD(result) = RtlUnicodeToMultiByteN(Dest, MaxCount, &BytesInMultiByteString, (PCWCH)Source, v4);
  else
    LODWORD(result) = RtlUnicodeToMultiByteSize(&BytesInMultiByteString, (PWCH)Source, v4);
  if ( (result & 0x80000000) != 0LL )
  {
    *_errno() = 42;
    LODWORD(result) = -1;
  }
  else
  {
    LODWORD(result) = BytesInMultiByteString - 1;
  }
  return result;
}
