/*
 * XREFs of _ZwQueryInformationFile@20 @ 0x4B2F2A70
 * Callers:
 *     _LdrVerifyImageMatchesChecksumEx@8 @ 0x4B32F0B0 (_LdrVerifyImageMatchesChecksumEx@8.c)
 *     _LdrpResFileSize@8 @ 0x4B34303A (_LdrpResFileSize@8.c)
 *     _LdrpResValidateFileHandle@4 @ 0x4B343B84 (_LdrpResValidateFileHandle@4.c)
 *     _RtlpGetFileSize@8 @ 0x4B36330F (_RtlpGetFileSize@8.c)
 *     _RtlIsPartialPlaceholderFileHandle@8 @ 0x4B3667B0 (_RtlIsPartialPlaceholderFileHandle@8.c)
 * Callees:
 *     _Wow64SystemServiceCall@0 @ 0x4B308730 (_Wow64SystemServiceCall@0.c)
 */

int __stdcall ZwQueryInformationFile(int a1, int a2, int a3, int a4, int a5)
{
  return Wow64SystemServiceCall();
}
