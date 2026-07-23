/*
 * XREFs of _RtlpNeedCurrentDirectoryForExePath@4 @ 0x4B2ABE9C
 * Callers:
 *     _RtlGetExePath@8 @ 0x4B2ABE60 (_RtlGetExePath@8.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 *     _wcschr @ 0x4B2FA680 (_wcschr.c)
 */

bool __thiscall RtlpNeedCurrentDirectoryForExePath(wchar_t *Str)
{
  bool result; // al
  SIZE_T v2; // [esp-4h] [ebp-8h] BYREF
  PSIZE_T ValueLength_4; // [esp+4h] [ebp+0h]

  HIDWORD(v2) = Str;
  result = 1;
  if ( !wcschr(Str, 0x5Cu) )
  {
    LODWORD(v2) = (char *)&v2 + 4;
    if ( RtlQueryEnvironmentVariable(0, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0, v2, ValueLength_4) != -1073741568 )
      return 0;
  }
  return result;
}
