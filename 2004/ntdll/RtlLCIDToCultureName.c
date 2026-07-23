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
 *     RtlpMuiRegTryToAppendLanguageName @ 0x18003D6E0 (RtlpMuiRegTryToAppendLanguageName.c)
 *     RtlGetFileMUIPath @ 0x1800468E0 (RtlGetFileMUIPath.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F760 (RtlpGetNameFromLangInfoNode.c)
 *     RtlpVerifyAndCommitUILanguageSettings @ 0x18008B850 (RtlpVerifyAndCommitUILanguageSettings.c)
 *     LdrpMergeParentBaseLanguagesToList @ 0x1800EE9A0 (LdrpMergeParentBaseLanguagesToList.c)
 *     RtlGetUILanguageInfo @ 0x1800EED40 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800EF378 (RtlUnicodeStringToLcid.c)
 *     RtlpCleanupRegistryKeys @ 0x1800EF8D0 (RtlpCleanupRegistryKeys.c)
 *     RtlpConvertLCIDsToCultureNames @ 0x1800EFFD0 (RtlpConvertLCIDsToCultureNames.c)
 *     RtlpGetDefaultLanguageBaseOrParent @ 0x1800F03C0 (RtlpGetDefaultLanguageBaseOrParent.c)
 *     RtlpSetInstallLanguage @ 0x1800F0820 (RtlpSetInstallLanguage.c)
 *     RtlpSetPreferredUILanguages @ 0x1800F0ED0 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x180103F70 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegGetFallbackLanguageInfoByLangId @ 0x18010465C (RtlpMuiRegGetFallbackLanguageInfoByLangId.c)
 *     RtlpMuiRegGetInstalledLanguageInfoByIndex @ 0x180104ACC (RtlpMuiRegGetInstalledLanguageInfoByIndex.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x180104F30 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x180106BA4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     _RtlpMuiRegValidateAndGetInstallFallbackBase @ 0x180107008 (_RtlpMuiRegValidateAndGetInstallFallbackBase.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1801070A8 (_RtlpMuiRegValidateInstalled.c)
 * Callees:
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlLcidToLocaleName @ 0x18003B2F0 (RtlLcidToLocaleName.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlStringCbCopyW @ 0x18003BC7C (RtlStringCbCopyW.c)
 */

BOOLEAN __cdecl RtlLCIDToCultureName(LCID Lcid, PUNICODE_STRING String)
{
  BOOLEAN v2; // bl
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned __int16 Length; // si
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int16 v10; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( Lcid && String && Lcid != 4096 )
  {
    if ( g_RegInfo
      && (int)RtlpMuiRegGetInstalledLanguageIndexByLangId(g_RegInfo, (unsigned __int16)Lcid, 0LL, &v10) >= 0
      && (v6 = 28LL * v10, v7 = *(_QWORD *)(*((_QWORD *)g_RegInfo + 3) + 16LL), *(__int16 *)(v7 + v6 + 6) > 0) )
    {
      RtlInitUnicodeString(
        &DestinationString,
        (PCWSTR)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 24LL)
               + 2LL * *(__int16 *)(*(_QWORD *)(*((_QWORD *)g_RegInfo + 4) + 16LL) + 2LL * *(__int16 *)(v7 + v6 + 6))));
      Length = DestinationString.Length;
      if ( DestinationString.Length <= String->MaximumLength
        && (int)RtlStringCbCopyW(String->Buffer, String->MaximumLength, DestinationString.Buffer) >= 0 )
      {
        String->Length = Length;
        return 1;
      }
    }
    else if ( RtlLcidToLocaleName(Lcid, String, 2u, 0) >= 0 )
    {
      return 1;
    }
  }
  return v2;
}
