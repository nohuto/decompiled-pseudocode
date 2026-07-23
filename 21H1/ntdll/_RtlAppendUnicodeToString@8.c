/*
 * XREFs of _RtlAppendUnicodeToString@8 @ 0x4B2BFE00
 * Callers:
 *     _GetOverlayFilePath@16 @ 0x4B2B8D7B (_GetOverlayFilePath@16.c)
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrStandardizeSystemPath@4 @ 0x4B2BFCB0 (_LdrStandardizeSystemPath@4.c)
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 *     _GetOverlayRootFolder@12 @ 0x4B2D1DAC (_GetOverlayRootFolder@12.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686 (_LdrpInitializePerUserWindowsDirectory@4.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _LdrpLoadDelegatedNtdll@4 @ 0x4B3331FC (_LdrpLoadDelegatedNtdll@4.c)
 *     _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025 (_AVrfpFormatCurrentUserKeyPath@4.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _WerpGlobalFlagsForProcess@4 @ 0x4B33B104 (_WerpGlobalFlagsForProcess@4.c)
 *     _WerEscalationLazyInit@0 @ 0x4B33B780 (_WerEscalationLazyInit@0.c)
 *     _LdrpMUIEtwOutput@16 @ 0x4B33F89A (_LdrpMUIEtwOutput@16.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     _RtlpGetMUIRedirectedFilePathInternal@28 @ 0x4B354358 (_RtlpGetMUIRedirectedFilePathInternal@28.c)
 *     _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97 (_RtlpConstructCrossVmObjectPath@12.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

NTSTATUS __cdecl RtlAppendUnicodeToString(PUNICODE_STRING Destination, PCWSTR Source)
{
  unsigned int v2; // eax
  unsigned int v3; // esi
  unsigned int Length; // ebx
  wchar_t *v5; // ebx
  size_t v7; // [esp-4h] [ebp-14h]
  __int16 v8; // [esp+Ch] [ebp-4h]

  if ( !Source )
    return 0;
  v2 = wcslen((const unsigned __int16 *)Source);
  if ( v2 <= 0x7FFE )
  {
    v3 = (unsigned __int16)(2 * v2);
    v8 = 2 * v2;
    Length = Destination->Length;
    if ( v3 + Length <= Destination->MaximumLength )
    {
      LODWORD(v7) = (unsigned __int16)(2 * v2);
      v5 = &Destination->Buffer[Length >> 1];
      memmove(v5, Source, v7);
      Destination->Length += v8;
      if ( (unsigned int)Destination->Length + 1 < Destination->MaximumLength )
        v5[v3 >> 1] = 0;
      return 0;
    }
  }
  return -1073741789;
}
