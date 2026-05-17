/*
 * XREFs of OpenGlobalizationUserSettingsKey @ 0x18006F4B4
 * Callers:
 *     RtlpMuiRegLoadPreferredUILanguages @ 0x18003E774 (RtlpMuiRegLoadPreferredUILanguages.c)
 *     RtlpLoadLanguageConfigList @ 0x18003F4CC (RtlpLoadLanguageConfigList.c)
 *     RtlpLoadUserUIByPolicy @ 0x18006EEE0 (RtlpLoadUserUIByPolicy.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006F050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpSetInstallLanguage @ 0x1800F0D30 (RtlpSetInstallLanguage.c)
 *     RtlpSetMachineUILanguagesImmediate @ 0x1800F1218 (RtlpSetMachineUILanguagesImmediate.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 *     RtlpGetLocaleDataKey @ 0x1800FD514 (RtlpGetLocaleDataKey.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x180103AF0 (RtlpGetUserOrMachineUILanguage4NLS.c)
 * Callees:
 *     RtlOpenCurrentUser @ 0x180016790 (RtlOpenCurrentUser.c)
 *     RtlIsMultiSessionSku @ 0x180040250 (RtlIsMultiSessionSku.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119D58 (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18011A028 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
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
