/*
 * XREFs of _RtlCopyUnicodeString@8 @ 0x4B2D5EF0
 * Callers:
 *     _LdrGetDllDirectory@4 @ 0x4B2AAD90 (_LdrGetDllDirectory@4.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _RtlpComputeLangListCheckSum@4 @ 0x4B2D2774 (_RtlpComputeLangListCheckSum@4.c)
 *     _EtwpQueryUmLogger@16 @ 0x4B2ED9ED (_EtwpQueryUmLogger@16.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _RtlCanonicalizeDomainName@12 @ 0x4B34D8C0 (_RtlCanonicalizeDomainName@12.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

void __cdecl RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  int v2; // edi
  wchar_t *Buffer; // edx
  unsigned int Length; // esi
  wchar_t *v5; // ebx
  size_t v6; // [esp-8h] [ebp-10h]

  if ( SourceString )
  {
    Buffer = SourceString->Buffer;
    HIDWORD(v6) = v2;
    Length = SourceString->Length;
    v5 = DestinationString->Buffer;
    if ( (unsigned __int16)Length > DestinationString->MaximumLength )
      Length = DestinationString->MaximumLength;
    LODWORD(v6) = Length;
    DestinationString->Length = Length;
    memcpy(v5, Buffer, v6);
    if ( (unsigned int)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      v5[Length >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
