/*
 * XREFs of RtlLCIDToCultureName @ 0x18003B020
 * Callers:
 *     RtlpComputeLangListCheckSum @ 0x18001532C (RtlpComputeLangListCheckSum.c)
 *     GetLCIDFromLangListNodeWithLICCheck @ 0x180037EF8 (GetLCIDFromLangListNodeWithLICCheck.c)
 *     LdrpMergeLangFallbackLists @ 0x18003A52C (LdrpMergeLangFallbackLists.c)
 *     GetNameFromLangListNode @ 0x18003AC14 (GetNameFromLangListNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18003ACBC (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpAddNeutralsToMergedList @ 0x18003BD04 (RtlpAddNeutralsToMergedList.c)
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D6F0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetFileMUIPath @ 0x1800468F0 (RtlGetFileMUIPath.c)
 *     RtlpGetNameFromLangInfoNode @ 0x180080180 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008BF50 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EED40 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800EF0E0 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF718 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EFC70 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800F0370 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F0760 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800F0BC0 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F1270 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180104320 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x180104A0C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180104E7C (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1801052E0 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106F54 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x1801073B8 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107458 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 */

char __fastcall RtlLCIDToCultureName(unsigned int a1, __int64 a2)
{
  char v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 Length; // si
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( a1 && a2 && a1 != 4096 )
  {
    if ( g_RegInfo
      && (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)a1, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*(_QWORD *)(g_RegInfo + 24) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(g_RegInfo + 32) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= *(_WORD *)(a2 + 2)
        && (int)RtlStringCbCopyW(*(_QWORD *)(a2 + 8), *(unsigned __int16 *)(a2 + 2), DestinationString.Buffer) >= 0 )
      {
        *(_WORD *)a2 = Length;
        return 1;
      }
    }
    else if ( (int)RtlLcidToLocaleName(a1, a2, 2LL, 0LL) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
