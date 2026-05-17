/*
 * XREFs of _RtlStringCchCopyW@12 @ 0x4B3475EA
 * Callers:
 *     _RtlFormatMessageEx@40 @ 0x4B2E0E20 (_RtlFormatMessageEx@40.c)
 *     _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45 (_RtlpGetTokenNamedObjectPath@16.c)
 *     _RtlConvertLCIDToString@20 @ 0x4B351910 (_RtlConvertLCIDToString@20.c)
 *     _RtlpSetInstallLanguage@8 @ 0x4B354A70 (_RtlpSetInstallLanguage@8.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 *     _RtlpMuiRegGetInstalledLanguageInfoByIndex@24 @ 0x4B36B74B (_RtlpMuiRegGetInstalledLanguageInfoByIndex@24.c)
 *     _RtlpMuiRegGetString@16 @ 0x4B36B86B (_RtlpMuiRegGetString@16.c)
 * Callees:
 *     RtlStringCopyWorkerW_4 @ 0x4B347663 (RtlStringCopyWorkerW_4.c)
 */

int __fastcall RtlStringCchCopyW(_WORD *a1, int a2, int a3)
{
  int result; // eax

  result = 0;
  if ( a2 <= 0 )
    result = -1073741811;
  if ( result >= 0 )
    return RtlStringCopyWorkerW_4(a1, a3, a1);
  if ( a2 )
    *a1 = 0;
  return result;
}
