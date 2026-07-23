/*
 * XREFs of _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6
 * Callers:
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpMuiRegLoadPreferredUILanguages@24 @ 0x4B2AD2AC (_RtlpMuiRegLoadPreferredUILanguages@24.c)
 *     _RtlpLoadUserUIByPolicy@12 @ 0x4B2AD890 (_RtlpLoadUserUIByPolicy@12.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpSetMachineUILanguagesImmediate@8 @ 0x4B35519D (_RtlpSetMachineUILanguagesImmediate@8.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpGetLocaleDataKey@0 @ 0x4B363354 (_RtlpGetLocaleDataKey@0.c)
 *     _RtlpGetUserOrMachineUILanguage4NLS@12 @ 0x4B36A9A0 (_RtlpGetUserOrMachineUILanguage4NLS@12.c)
 * Callees:
 *     _RtlOpenCurrentUser@8 @ 0x4B2AD730 (_RtlOpenCurrentUser@8.c)
 *     _GetGlobalizationUserModelType@0 @ 0x4B2AD797 (_GetGlobalizationUserModelType@0.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C (OpenGlobalizationUserSettingsKey_ForMua.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

NTSTATUS __thiscall OpenGlobalizationUserSettingsKey(ACCESS_MASK DesiredAccess, PHANDLE CurrentUserKey)
{
  int v3; // eax
  int v5; // eax
  _BYTE v6[4]; // [esp+8h] [ebp-4h] BYREF

  if ( !CurrentUserKey )
    return -1073741811;
  v3 = GetGlobalizationUserModelType() - 1;
  if ( !v3 )
    return RtlOpenCurrentUser(DesiredAccess, CurrentUserKey);
  v5 = v3 - 1;
  if ( !v5 )
    return OpenGlobalizationUserSettingsKey_ForSingleUserModel(DesiredAccess, CurrentUserKey);
  if ( v5 == 1 )
    return OpenGlobalizationUserSettingsKey_ForMua(CurrentUserKey, v6);
  return -1073741595;
}
