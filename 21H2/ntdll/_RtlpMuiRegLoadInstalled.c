/*
 * XREFs of _RtlpMuiRegLoadInstalled @ 0x180106BDC
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x1800701E0 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlpMuiRegFreeRegistryInfo @ 0x1800702D0 (RtlpMuiRegFreeRegistryInfo.c)
 *     RtlpLoadInstallLanguageFallback @ 0x18008C2C8 (RtlpLoadInstallLanguageFallback.c)
 *     NtIsUILanguageComitted @ 0x18009F6B0 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x1800A0050 (NtQueryInstallUILanguage.c)
 *     RtlpMuiRegCreateLanguages @ 0x1801045E4 (RtlpMuiRegCreateLanguages.c)
 *     RtlpMuiRegCreateStringPool @ 0x180104678 (RtlpMuiRegCreateStringPool.c)
 *     _IsMachineLanguageListInMutableLocation @ 0x180106270 (_IsMachineLanguageListInMutableLocation.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x180106CD8 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x180107458 (_RtlpMuiRegValidateInstalled.c)
 */

__int64 __fastcall RtlpMuiRegLoadInstalled(__int64 a1)
{
  int InstallUILanguage; // edi
  __int64 result; // rax
  unsigned int v4; // ecx
  __int64 Languages; // rax
  __int64 StringPool; // rax
  bool v7; // al
  const wchar_t *v8; // rdx

  InstallUILanguage = 0;
  if ( !a1 )
    return 3221225485LL;
  if ( (int)NtIsUILanguageComitted() >= 0 )
  {
    InstallUILanguage = NtQueryInstallUILanguage();
    if ( InstallUILanguage < 0 || ((*(_WORD *)(a1 + 4) - 4096) & 0xFBFF) == 0 )
      goto LABEL_14;
    RtlpLoadInstallLanguageFallback(a1, (_WORD *)(a1 + 6), (_WORD *)(a1 + 8));
  }
  RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
  Languages = RtlpMuiRegCreateLanguages(v4);
  *(_QWORD *)(a1 + 24) = Languages;
  if ( !Languages )
  {
    InstallUILanguage = -1073741801;
LABEL_14:
    RtlpMuiRegFreeRegistryInfo(a1, 0x3FFu);
    return (unsigned int)InstallUILanguage;
  }
  *(_DWORD *)a1 |= 1u;
  StringPool = RtlpMuiRegCreateStringPool(-1, -1);
  *(_QWORD *)(a1 + 32) = StringPool;
  if ( !StringPool )
    goto LABEL_14;
  *(_DWORD *)a1 |= 2u;
  v7 = IsMachineLanguageListInMutableLocation();
  v8 = L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  if ( !v7 )
    v8 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
  InstallUILanguage = RtlpMuiRegLoadInstalledFromKey(a1, v8);
  if ( InstallUILanguage < 0 )
    goto LABEL_14;
  result = RtlpMuiRegValidateInstalled(a1);
  InstallUILanguage = result;
  if ( (int)result < 0 )
    goto LABEL_14;
  return result;
}
