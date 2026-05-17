/*
 * XREFs of __wcsicmp @ 0x4B2F7990
 * Callers:
 *     _RtlpMuiRegAddAlternateCodePage@8 @ 0x4B2ACD4A (_RtlpMuiRegAddAlternateCodePage@8.c)
 *     _LdrpVerifyAlternateResourceModuleEx@24 @ 0x4B2B874D (_LdrpVerifyAlternateResourceModuleEx@24.c)
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _LdrRscIsTypeExist@16 @ 0x4B2BE7B0 (_LdrRscIsTypeExist@16.c)
 *     _RtlpLangNameInMultiSzString_Size@12 @ 0x4B2D2CBB (_RtlpLangNameInMultiSzString_Size@12.c)
 *     _RtlpLangNameInMultiSzString@8 @ 0x4B2D43C0 (_RtlpLangNameInMultiSzString@8.c)
 *     RtlpAddNeutralsToMergedList @ 0x4B2D44A1 (RtlpAddNeutralsToMergedList.c)
 *     _RtlpMuiRegGetStringIndexInPool@8 @ 0x4B2D48D8 (_RtlpMuiRegGetStringIndexInPool@8.c)
 *     _LdrpLangFallbackListFindNode@16 @ 0x4B2D5519 (_LdrpLangFallbackListFindNode@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlpConsoleFallbackNameFromLocaleName@24 @ 0x4B2D61DE (_RtlpConsoleFallbackNameFromLocaleName@24.c)
 *     _RtlpHashStringToAtom@28 @ 0x4B2E032F (_RtlpHashStringToAtom@28.c)
 *     _AVrfpDllLoadNotificationInternal@4 @ 0x4B338C3D (_AVrfpDllLoadNotificationInternal@4.c)
 *     _AVrfpDllUnloadNotificationInternal@4 @ 0x4B338CF6 (_AVrfpDllUnloadNotificationInternal@4.c)
 *     _AVrfpFindClosestThunkDuplicate@12 @ 0x4B338F06 (_AVrfpFindClosestThunkDuplicate@12.c)
 *     _AVrfpParseVerifierDllsString@4 @ 0x4B339319 (_AVrfpParseVerifierDllsString@4.c)
 *     _AVrfpVerifierStopInitialize@0 @ 0x4B339708 (_AVrfpVerifierStopInitialize@0.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 *     _RtlpMuiRegLangInfoMatchesSpec@16 @ 0x4B36B990 (_RtlpMuiRegLangInfoMatchesSpec@16.c)
 *     PsspWalkHandleTable @ 0x4B3882F7 (PsspWalkHandleTable.c)
 * Callees:
 *     <none>
 */

int __cdecl _wcsicmp(const wchar_t *String1, const wchar_t *String2)
{
  const wchar_t *v2; // ecx
  unsigned __int16 v3; // dx
  wchar_t v4; // ax

  v2 = String2;
  do
  {
    v3 = *(const wchar_t *)((char *)v2 + (char *)String1 - (char *)String2);
    if ( (unsigned __int16)(v3 - 65) <= 0x19u )
      v3 += 32;
    if ( (unsigned __int16)(*v2 - 65) > 0x19u )
      v4 = *v2;
    else
      v4 = *v2 + 32;
    ++v2;
  }
  while ( v3 && v3 == v4 );
  return v3 - v4;
}
