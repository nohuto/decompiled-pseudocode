/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180036490
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003C5B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC90 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x180046930 (RtlGetFileMUIPath.c)
 *     RtlpQueryDefaultUILanguage @ 0x180075740 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180075FA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007C0B0 (RtlGetUserPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089780 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008A540 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B950 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800EF250 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFDE0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0D30 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180106290 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006F050 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F9A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rbx
  int RegistryInfo; // edi
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect, v6, v7);
    v1 = g_RegInfo;
  }
  if ( a1 )
  {
    if ( RegistryInfo >= 0 )
      v2 = v1;
    *a1 = v2;
  }
  return (unsigned int)RegistryInfo;
}
