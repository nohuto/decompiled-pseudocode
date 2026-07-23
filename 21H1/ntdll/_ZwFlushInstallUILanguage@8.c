/*
 * XREFs of _ZwFlushInstallUILanguage@8 @ 0x4B2F37F0
 * Callers:
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030 (_RtlpVerifyAndCommitUILanguageSettings@4.c)
 *     _RtlpRefreshCachedUILanguage@8 @ 0x4B36BFF0 (_RtlpRefreshCachedUILanguage@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

NTSTATUS __cdecl ZwFlushInstallUILanguage(LANGID InstallUILanguage, ULONG SetComittedFlag)
{
  return Wow64SystemServiceCall();
}
