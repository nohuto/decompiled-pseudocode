/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18006F3B4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E724 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18003F47C (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006EDE0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006EF50 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F0D08 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800FD004 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1801035E0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x180040200 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119848 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119B18 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

NTSTATUS __fastcall OpenGlobalizationUserSettingsKey(ACCESS_MASK DesiredAccess, __int64 a2, HANDLE *a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx

  if ( !a3 )
    return -1073741811;
  v5 = dword_18016B224;
  if ( !dword_18016B224 )
  {
    if ( RtlIsMultiSessionSku() )
      v5 = 1;
    else
      v5 = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_18016B224 = v5;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return RtlOpenCurrentUser(DesiredAccess, a3);
  v8 = v6 - 1;
  if ( !v8 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess, a3);
  if ( v8 == 1 )
    return OpenGlobalizationUserSettingsKey_ForMua(DesiredAccess);
  return -1073741595;
}
