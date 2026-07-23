/*
 * XREFs of _RtlCultureNameToLCID@8 @ 0x4B2D56B0
 * Callers:
 *     _LdrLoadAlternateResourceModule@16 @ 0x4B2AA250 (_LdrLoadAlternateResourceModule@16.c)
 *     _RtlpGetLCIDFromLangInfoNode@12 @ 0x4B2ABEE0 (_RtlpGetLCIDFromLangInfoNode@12.c)
 *     __RtlpMuiRegInitAnyLanguage@16 @ 0x4B2ACA44 (__RtlpMuiRegInitAnyLanguage@16.c)
 *     _RtlpMuiRegGetLanguageSpec@20 @ 0x4B2ACBB5 (_RtlpMuiRegGetLanguageSpec@20.c)
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _LdrResFallbackLangList@20 @ 0x4B2BA2A0 (_LdrResFallbackLangList@20.c)
 *     _GetLCIDFromLangListNodeWithLICCheck@20 @ 0x4B2BA710 (_GetLCIDFromLangListNodeWithLICCheck@20.c)
 *     _LdrResSearchResource@32 @ 0x4B2BA8B0 (_LdrResSearchResource@32.c)
 *     _LdrpLoadResourceFromAlternativeModule@20 @ 0x4B2BB980 (_LdrpLoadResourceFromAlternativeModule@20.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     RtlGetNeutralFallback @ 0x4B2D4663 (RtlGetNeutralFallback.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlpMuiRegAddMultiSzToLangFallbackList@28 @ 0x4B2D4C76 (_RtlpMuiRegAddMultiSzToLangFallbackList@28.c)
 *     _RtlpMuiRegGetInstalledLanguageIndex@16 @ 0x4B2D4EAF (_RtlpMuiRegGetInstalledLanguageIndex@16.c)
 *     _RtlpMuiRegLoadLicInformation@4 @ 0x4B2D50DF (_RtlpMuiRegLoadLicInformation@4.c)
 *     _LdrpLangFallbackListFindNode@16 @ 0x4B2D5519 (_LdrpLangFallbackListFindNode@16.c)
 *     _GetLCIDFromLangListNode@12 @ 0x4B2E9857 (_GetLCIDFromLangListNode@12.c)
 *     _LdrResRelease@12 @ 0x4B342E00 (_LdrResRelease@12.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 *     _RtlGetUILanguageInfo@20 @ 0x4B352940 (_RtlGetUILanguageInfo@20.c)
 *     _RtlpConvertCultureNamesToLCIDs@8 @ 0x4B353970 (_RtlpConvertCultureNamesToLCIDs@8.c)
 *     _RtlpMUIEnumerateFolder@12 @ 0x4B354614 (_RtlpMUIEnumerateFolder@12.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpLoadPolicyLanguageSpec@16 @ 0x4B36AC26 (_RtlpLoadPolicyLanguageSpec@16.c)
 *     _RtlpMuiRegConfigMatchesInstalled@28 @ 0x4B36AEFF (_RtlpMuiRegConfigMatchesInstalled@28.c)
 *     _RtlpMuiRegGetFallbackLanguageInfoByName@20 @ 0x4B36B525 (_RtlpMuiRegGetFallbackLanguageInfoByName@20.c)
 *     _RtlpMuiRegLangInfoMatchesSpec@16 @ 0x4B36B990 (_RtlpMuiRegLangInfoMatchesSpec@16.c)
 *     _RtlpRefreshCachedUILanguage@8 @ 0x4B36BFF0 (_RtlpRefreshCachedUILanguage@8.c)
 *     __RtlMuiRegAddLIPParent@16 @ 0x4B36C0BB (__RtlMuiRegAddLIPParent@16.c)
 * Callees:
 *     _RtlLocaleNameToLcid@12 @ 0x4B2D5860 (_RtlLocaleNameToLcid@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     ___report_rangecheckfailure @ 0x4B2F4C38 (___report_rangecheckfailure.c)
 *     __wcsicmp @ 0x4B2F7990 (__wcsicmp.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // cl
  int Length; // esi
  wchar_t *Buffer; // edx
  unsigned int v5; // esi
  _DWORD *v6; // edi
  int v7; // ebx
  int v8; // edi
  int v9; // esi
  wchar_t *v10; // eax
  __int16 v11; // dx
  unsigned __int16 v12; // ax
  unsigned __int16 v13; // di
  int v14; // esi
  size_t v16; // [esp-4h] [ebp-D4h]
  wchar_t String2[90]; // [esp+18h] [ebp-B8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  Length = String->Length;
  if ( !(_WORD)Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)(Length + 2) > 0x55 )
    return v2;
  LODWORD(v16) = String->Length;
  memcpy(String2, Buffer, v16);
  v5 = Length & 0xFFFFFFFE;
  if ( v5 >= 0xAA )
    __report_rangecheckfailure();
  v6 = g_RegInfo;
  *(wchar_t *)((char *)String2 + v5) = 0;
  if ( !v6 )
    return RtlLocaleNameToLcid((PCWSTR)String2, Lcid, 3u) >= 0;
  v7 = v6[5];
  if ( !v7 || !*(_DWORD *)(v7 + 12) || !String2[0] )
    return RtlLocaleNameToLcid((PCWSTR)String2, Lcid, 3u) >= 0;
  v8 = v6[6];
  if ( !v8 )
    goto LABEL_16;
  v9 = 0;
  if ( !*(_WORD *)(v8 + 6) )
    goto LABEL_16;
  while ( 1 )
  {
    v10 = (wchar_t *)(*(_DWORD *)(v8 + 16) + 2 * *(__int16 *)(*(_DWORD *)(v8 + 12) + 2 * v9));
    if ( v10 == String2 || !_wcsicmp(v10, String2) )
      break;
    if ( ++v9 >= *(unsigned __int16 *)(v8 + 6) )
      goto LABEL_16;
  }
  if ( v9 < 0 )
LABEL_16:
    LOWORD(v9) = -1;
  v11 = v9;
  if ( (v9 & 0x8000u) != 0 )
    return RtlLocaleNameToLcid((PCWSTR)String2, Lcid, 3u) >= 0;
  v12 = *(_WORD *)(v7 + 6);
  v13 = 0;
  if ( !v12 )
    return RtlLocaleNameToLcid((PCWSTR)String2, Lcid, 3u) >= 0;
  v14 = *(_DWORD *)(v7 + 12);
  while ( *(_WORD *)(v14 + 28 * v13 + 6) != v11 )
  {
    if ( ++v13 >= v12 )
      return RtlLocaleNameToLcid((PCWSTR)String2, Lcid, 3u) >= 0;
  }
  *Lcid = *(unsigned __int16 *)(v14 + 28 * v13 + 4);
  return 1;
}
