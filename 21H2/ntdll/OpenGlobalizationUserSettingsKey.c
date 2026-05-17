/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x1800704E4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E734 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18003F48C (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006FF10 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070080 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetInstallLanguage @ 0x1800F0BC0 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F10A8 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800FD3B4 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180103990 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x180040210 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119C80 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180119F50 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v8; // ecx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  if ( !a3 )
    return 3221225485LL;
  v5 = dword_18016D24C;
  if ( !dword_18016D24C )
  {
    if ( RtlIsMultiSessionSku() )
      v5 = 1;
    else
      v5 = (MEMORY[0x7FFE02F0] & 0x200 | 0x400u) >> 9;
    dword_18016D24C = v5;
  }
  v6 = v5 - 1;
  if ( !v6 )
    return RtlOpenCurrentUser(a1, a3);
  v8 = v6 - 1;
  if ( !v8 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  if ( v8 == 1 )
    return OpenGlobalizationUserSettingsKey_ForMua(a1, a2, a3, &v9);
  return 3221225701LL;
}
