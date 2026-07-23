/*
 * XREFs of RtlCopyUnicodeString @ 0x1800102F0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18000CF10 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x180010240 (LdrGetDllFullName.c)
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     EtwpQueryUmLogger @ 0x18004F944 (EtwpQueryUmLogger.c)
 *     LdrpSearchPath @ 0x18006035C (LdrpSearchPath.c)
 *     LdrGetDllDirectory @ 0x18007F920 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800DB690 (AvrfMiniLoadDll.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119EF0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     memmove @ 0x1800A4480 (memmove.c)
 */

void __cdecl RtlCopyUnicodeString(PUNICODE_STRING DestinationString, PCUNICODE_STRING SourceString)
{
  unsigned int Length; // r8d
  unsigned int MaximumLength; // eax
  wchar_t *Buffer; // rsi
  wchar_t *v6; // rdx
  unsigned __int64 v7; // rbx

  if ( SourceString )
  {
    Length = SourceString->Length;
    MaximumLength = DestinationString->MaximumLength;
    Buffer = DestinationString->Buffer;
    v6 = SourceString->Buffer;
    if ( (unsigned __int16)Length <= (unsigned __int16)MaximumLength )
      MaximumLength = Length;
    v7 = MaximumLength;
    DestinationString->Length = MaximumLength;
    memmove(Buffer, v6, MaximumLength);
    if ( (unsigned __int64)DestinationString->Length + 2 <= DestinationString->MaximumLength )
      Buffer[v7 >> 1] = 0;
  }
  else
  {
    DestinationString->Length = 0;
  }
}
