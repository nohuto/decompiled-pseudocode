/*
 * XREFs of _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 *     _LdrpFindKnownDll@16 @ 0x4B2D0FCB (_LdrpFindKnownDll@16.c)
 *     _LdrpSearchPath@36 @ 0x4B2D2450 (_LdrpSearchPath@36.c)
 *     _RtlpWin32NtNameToNtPathName@24 @ 0x4B2E7E41 (_RtlpWin32NtNameToNtPathName@24.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _RtlpGetRegistryHandle@16 @ 0x4B2EB2C1 (_RtlpGetRegistryHandle@16.c)
 *     _LdrpInitializePerUserWindowsDirectory@4 @ 0x4B2EC686 (_LdrpInitializePerUserWindowsDirectory@4.c)
 *     _RtlpGetPolicyValueForSystemCapability@8 @ 0x4B2EF60F (_RtlpGetPolicyValueForSystemCapability@8.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7 (_AVrfOpenCurrentUserImageFileOptionsKey@12.c)
 *     _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025 (_AVrfpFormatCurrentUserKeyPath@4.c)
 *     _AVrfpLoadAndInitializeProvider@4 @ 0x4B33908C (_AVrfpLoadAndInitializeProvider@4.c)
 *     _AvrfMiniLoadDll@20 @ 0x4B3397A2 (_AvrfMiniLoadDll@20.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     _RtlpGetMUIRedirectedFilePathInternal@28 @ 0x4B354358 (_RtlpGetMUIRedirectedFilePathInternal@28.c)
 *     _RtlpHpOverrideGCInterval@4 @ 0x4B358711 (_RtlpHpOverrideGCInterval@4.c)
 *     _RtlpConstructCrossVmObjectPath@12 @ 0x4B35AB97 (_RtlpConstructCrossVmObjectPath@12.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlAppendUnicodeStringToString(unsigned __int16 *a1, const void **a2)
{
  size_t v2; // ebx
  unsigned int v4; // [esp+Ch] [ebp-4h]
  void *v5; // [esp+Ch] [ebp-4h]

  v2 = *(unsigned __int16 *)a2;
  if ( !(_WORD)v2 )
    return 0;
  v4 = *a1;
  if ( v2 + v4 <= a1[1] )
  {
    v5 = (void *)(*((_DWORD *)a1 + 1) + 2 * (v4 >> 1));
    memmove(v5, a2[1], v2);
    *a1 += v2;
    if ( (unsigned int)*a1 + 1 < a1[1] )
      *((_WORD *)v5 + (v2 >> 1)) = 0;
    return 0;
  }
  return -1073741789;
}
