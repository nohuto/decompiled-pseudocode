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

ULONG __cdecl RtlReplaceSystemDirectoryInPath(
        PUNICODE_STRING Destination,
        USHORT Machine,
        USHORT TargetMachine,
        BOOLEAN IncludePathSeperator)
{
  ULONG result; // eax
  _UNICODE_STRING SearchString; // [esp+8h] [ebp-10h] BYREF
  _UNICODE_STRING DestinationString; // [esp+10h] [ebp-8h] BYREF

  if ( Machine == TargetMachine )
    return 0;
  result = RtlpWow64SelectSystem32PathInternal(&DestinationString);
  if ( (result & 0x80000000) == 0 )
  {
    result = RtlpWow64SelectSystem32PathInternal(&SearchString);
    if ( (result & 0x80000000) == 0 )
      return RtlpReplaceFirstUnicodeSubstringOfEqualLength(Destination, &SearchString, (int)&DestinationString);
  }
  return result;
}
