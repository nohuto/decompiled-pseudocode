/*
 * XREFs of _RtlReplaceSystemDirectoryInPath@16 @ 0x4B2E6110
 * Callers:
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 * Callees:
 *     _RtlpWow64SelectSystem32PathInternal@12 @ 0x4B2E615E (_RtlpWow64SelectSystem32PathInternal@12.c)
 *     _RtlpReplaceFirstUnicodeSubstringOfEqualLength@12 @ 0x4B2E61A5 (_RtlpReplaceFirstUnicodeSubstringOfEqualLength@12.c)
 */

int __stdcall RtlReplaceSystemDirectoryInPath(int a1, __int16 a2, __int16 a3, char a4)
{
  int result; // eax
  UNICODE_STRING v5; // [esp+8h] [ebp-10h] BYREF
  UNICODE_STRING DestinationString; // [esp+10h] [ebp-8h] BYREF

  if ( a2 == a3 )
    return 0;
  result = RtlpWow64SelectSystem32PathInternal(&DestinationString);
  if ( result >= 0 )
  {
    result = RtlpWow64SelectSystem32PathInternal(&v5);
    if ( result >= 0 )
      return RtlpReplaceFirstUnicodeSubstringOfEqualLength(&DestinationString);
  }
  return result;
}
