/*
 * XREFs of _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     __RtlpRemovePendingDeleteLanguages@8 @ 0x4B2AC58A (__RtlpRemovePendingDeleteLanguages@8.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _RtlpMUIRegPatchLicenseInfortmation@4 @ 0x4B2D427F (_RtlpMUIRegPatchLicenseInfortmation@4.c)
 *     RtlGetNeutralFallback @ 0x4B2D4663 (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _RtlGetSystemPreferredUILanguages@20 @ 0x4B352400 (_RtlGetSystemPreferredUILanguages@20.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpAutoCompleteLanguageFallback@12 @ 0x4B35338F (_RtlpAutoCompleteLanguageFallback@12.c)
 *     _RtlpCleanupRegistryKeys@0 @ 0x4B353540 (_RtlpCleanupRegistryKeys@0.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030 (_RtlpVerifyAndCommitUILanguageSettings@4.c)
 *     _RtlpGetAlternateCodePage@12 @ 0x4B36317B (_RtlpGetAlternateCodePage@12.c)
 * Callees:
 *     _RtlpMuiRegGetOrAddStringToPool@16 @ 0x4B2D4807 (_RtlpMuiRegGetOrAddStringToPool@16.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __fastcall RtlpMuiRegGetInstalledLanguageIndexByName(int a1, const WCHAR *a2, char a3, _WORD *a4)
{
  int InstalledLanguageIndexByLangId; // esi
  __int16 v6; // ax
  int v8; // eax
  int v9; // ecx
  _WORD *v10; // edx
  int v11; // eax
  _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-14h] BYREF
  DWORD Lcid; // [esp+14h] [ebp-Ch] BYREF
  int v14; // [esp+18h] [ebp-8h]
  char v15; // [esp+1Fh] [ebp-1h]

  InstalledLanguageIndexByLangId = -1073741772;
  v15 = 0;
  if ( !a1 || !a2 )
    return -1073741811;
  v14 = *(_DWORD *)(a1 + 20);
  if ( *a2 )
  {
    v6 = RtlpMuiRegGetOrAddStringToPool(0, &Lcid);
    Lcid = (unsigned __int16)v6;
    if ( v6 >= 0 )
    {
      v8 = v14;
      v9 = 0;
      v14 = *(unsigned __int16 *)(v14 + 6);
      if ( v14 )
      {
        v10 = *(_WORD **)(v8 + 12);
        do
        {
          v11 = v14;
          if ( v10[3] == (_WORD)Lcid )
          {
            if ( (*v10 & 0x1020) == 0x20 )
            {
              if ( a4 )
              {
                *a4 = v9;
                return 0;
              }
            }
            else if ( (*v10 & 0x1000) != 0 )
            {
              v15 = 1;
            }
            v11 = v14;
          }
          ++v9;
          v10 += 14;
        }
        while ( v9 < v11 );
      }
    }
  }
  if ( a3 )
  {
    RtlInitUnicodeString(&DestinationString, a2);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      if ( Lcid != 4096 )
        InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(0, a4);
    }
  }
  if ( v15 && InstalledLanguageIndexByLangId == -1073741772 )
    return -1073741637;
  else
    return InstalledLanguageIndexByLangId;
}
