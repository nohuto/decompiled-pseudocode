/*
 * XREFs of RtlpCreateProcessRegistryInfo @ 0x180036490
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 *     LdrpSetThreadPreferredLangList @ 0x180036318 (LdrpSetThreadPreferredLangList.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x18003C5B0 (RtlpGetSystemDefaultUILanguage.c)
 *     RtlSetThreadPreferredUILanguages @ 0x18003EC40 (RtlSetThreadPreferredUILanguages.c)
 *     RtlGetFileMUIPath @ 0x1800468E0 (RtlGetFileMUIPath.c)
 *     RtlpQueryDefaultUILanguage @ 0x180075640 (RtlpQueryDefaultUILanguage.c)
 *     RtlGetSystemPreferredUILanguages @ 0x180075EA0 (RtlGetSystemPreferredUILanguages.c)
 *     RtlGetUserPreferredUILanguages @ 0x18007BFB0 (RtlGetUserPreferredUILanguages.c)
 *     RtlSetProcessPreferredUILanguages @ 0x180089680 (RtlSetProcessPreferredUILanguages.c)
 *     RtlGetProcessPreferredUILanguages @ 0x18008A440 (RtlGetProcessPreferredUILanguages.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B850 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     RtlGetUILanguageInfo @ 0x1800EED40 (RtlGetUILanguageInfo.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpRefreshCachedUILanguage @ 0x180105D80 (RtlpRefreshCachedUILanguage.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x18006EF50 (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18006F8A8 (RtlpInitMuiCriticalSection.c)
 */

__int64 __fastcall RtlpCreateProcessRegistryInfo(_QWORD *a1)
{
  PVOID v1; // rax
  PVOID v2; // rbx
  int RegistryInfo; // edi

  v1 = g_RegInfo;
  v2 = 0LL;
  RegistryInfo = 0;
  if ( !g_RegInfo )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    if ( !g_RegInfo )
      RegistryInfo = RtlpMuiRegCreateAndLoadRegistryInfo(&g_RegInfo);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
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
