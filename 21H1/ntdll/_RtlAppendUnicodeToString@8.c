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

int __stdcall RtlAppendUnicodeToString(unsigned __int16 *a1, const unsigned __int16 *Src)
{
  unsigned int v2; // eax
  size_t v3; // esi
  unsigned int v4; // ebx
  void *v5; // ebx
  __int16 v7; // [esp+Ch] [ebp-4h]

  if ( !Src )
    return 0;
  v2 = wcslen(Src);
  if ( v2 <= 0x7FFE )
  {
    v3 = (unsigned __int16)(2 * v2);
    v7 = 2 * v2;
    v4 = *a1;
    if ( v3 + v4 <= a1[1] )
    {
      v5 = (void *)(*((_DWORD *)a1 + 1) + 2 * (v4 >> 1));
      memmove(v5, Src, v3);
      *a1 += v7;
      if ( (unsigned int)*a1 + 1 < a1[1] )
        *((_WORD *)v5 + (v3 >> 1)) = 0;
      return 0;
    }
  }
  return -1073741789;
}
