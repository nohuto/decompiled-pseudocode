/*
 * XREFs of RtlCultureNameToLCID @ 0x18003B850
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     RtlpMuiRegTryToAppendLangId @ 0x180036AEC (RtlpMuiRegTryToAppendLangId.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndex @ 0x18003AFAC (RtlpMuiRegGetInstalledLanguageIndex.c)
 *     LdrpLangFallbackListFindNode @ 0x18003B628 (LdrpLangFallbackListFindNode.c)
 *     RtlGetNeutralFallback @ 0x18003BF1C (RtlGetNeutralFallback.c)
 *     RtlGetFileMUIPath @ 0x180046930 (RtlGetFileMUIPath.c)
 *     LdrResSearchResource @ 0x180048B80 (LdrResSearchResource.c)
 *     LdrResFallbackLangList @ 0x18004AE70 (LdrResFallbackLangList.c)
 *     RtlpMuiRegGetLanguageSpec @ 0x18006F734 (RtlpMuiRegGetLanguageSpec.c)
 *     GetLCIDFromLangListNode @ 0x18007588C (GetLCIDFromLangListNode.c)
 *     LdrLoadAlternateResourceModule @ 0x18007DB10 (LdrLoadAlternateResourceModule.c)
 *     RtlpGetLCIDFromLangInfoNode @ 0x180081650 (RtlpGetLCIDFromLangInfoNode.c)
 *     RtlpMUIEnumerateFolder @ 0x180086DAC (RtlpMUIEnumerateFolder.c)
 *     LdrResRelease @ 0x180089F00 (LdrResRelease.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008BCC8 (RtlpLoadInstallLanguageFallback.c)
 *     RtlGetUILanguageInfo @ 0x1800EF250 (RtlGetUILanguageInfo.c)
 *     RtlpConvertCultureNamesToLCIDs @ 0x1800F02D0 (RtlpConvertCultureNamesToLCIDs.c)
 *     RtlpSetInstallLanguage @ 0x1800F0D30 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F13E0 (RtlpSetPreferredUILanguages.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x180103ED8 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180104480 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByName @ 0x180104D2C (RtlpMuiRegGetFallbackLanguageInfoByName.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180105440 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegLoadLicInformation @ 0x180105658 (RtlpMuiRegLoadLicInformation.c)
 *     RtlpRefreshCachedUILanguage @ 0x180106290 (RtlpRefreshCachedUILanguage.c)
 *     _RtlMuiRegAddLIPParent @ 0x1801064A0 (_RtlMuiRegAddLIPParent.c)
 *     _RtlpMuiRegInitAnyLanguage @ 0x1801069D8 (_RtlpMuiRegInitAnyLanguage.c)
 * Callees:
 *     RtlpMuiRegGetStringIndexInPool @ 0x18003B9AC (RtlpMuiRegGetStringIndexInPool.c)
 *     RtlLocaleNameToLcid @ 0x18003BA90 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008C4E0 (__report_rangecheckfailure.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 */

BOOLEAN __cdecl RtlCultureNameToLCID(PUNICODE_STRING String, PLCID Lcid)
{
  BOOLEAN v2; // di
  wchar_t *Buffer; // rdx
  size_t Length; // rbx
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rbx
  int StringIndexInPool; // eax
  __int16 v10; // r10
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // cx
  __int64 v13; // r8
  BOOLEAN result; // al
  WCHAR LocaleName[88]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = 0;
  if ( !String )
    return v2;
  if ( !Lcid )
    return v2;
  if ( !String->Length )
    return v2;
  Buffer = String->Buffer;
  if ( !Buffer || (unsigned int)String->Length + 2 > 0x55 )
    return v2;
  Length = String->Length;
  memmove(LocaleName, Buffer, Length);
  v6 = Length >> 1;
  if ( v6 >= 85 )
    _report_rangecheckfailure();
  v7 = g_RegInfo;
  LocaleName[v6] = 0;
  if ( !v7 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v8 = v7[3];
  if ( !v8 || !*(_QWORD *)(v8 + 16) || !LocaleName[0] )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  StringIndexInPool = RtlpMuiRegGetStringIndexInPool(v7[4], LocaleName);
  v10 = -1;
  if ( StringIndexInPool >= 0 )
    v10 = StringIndexInPool;
  if ( v10 < 0 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v11 = *(_WORD *)(v8 + 6);
  v12 = 0;
  if ( !v11 )
    return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  v13 = *(_QWORD *)(v8 + 16);
  while ( *(_WORD *)(28LL * v12 + v13 + 6) != v10 )
  {
    if ( ++v12 >= v11 )
      return RtlLocaleNameToLcid(LocaleName, Lcid, 3u) >= 0;
  }
  result = 1;
  *Lcid = *(unsigned __int16 *)(28LL * v12 + v13 + 4);
  return result;
}
