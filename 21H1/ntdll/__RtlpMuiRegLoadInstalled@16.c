/*
 * XREFs of __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1
 * Callers:
 *     _RtlpMuiRegLoadRegistryInfo@8 @ 0x4B2ACDB0 (_RtlpMuiRegLoadRegistryInfo@8.c)
 * Callees:
 *     __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387 (__RtlpMuiRegValidateInstalled@4.c)
 *     __RtlpMuiRegLoadInstalledFromKey@8 @ 0x4B2AC6E3 (__RtlpMuiRegLoadInstalledFromKey@8.c)
 *     _RtlpLoadInstallLanguageFallback@12 @ 0x4B2ACC28 (_RtlpLoadInstallLanguageFallback@12.c)
 *     _RtlpMuiRegFreeRegistryInfo@8 @ 0x4B2ACEB0 (_RtlpMuiRegFreeRegistryInfo@8.c)
 *     __IsMachineLanguageListInMutableLocation@0 @ 0x4B2ADAEB (__IsMachineLanguageListInMutableLocation@0.c)
 *     _RtlpMuiRegCreateStringPool@8 @ 0x4B2ADB4D (_RtlpMuiRegCreateStringPool@8.c)
 *     _RtlpMuiRegCreateLanguages@4 @ 0x4B2ADBBD (_RtlpMuiRegCreateLanguages@4.c)
 *     _ZwIsUILanguageComitted@0 @ 0x4B2F39B0 (_ZwIsUILanguageComitted@0.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 */

int __thiscall _RtlpMuiRegLoadInstalled(LANGID *this, int a2, int a3)
{
  NTSTATUS InstallUILanguage; // edi
  _WORD *v5; // ebx
  int Languages; // eax
  int StringPool; // eax
  char IsMachineLanguageListInMutableLocation; // al
  const wchar_t *v9; // edx

  InstallUILanguage = 0;
  if ( this )
  {
    if ( ZwIsUILanguageComitted() >= 0 )
    {
      v5 = this + 2;
      InstallUILanguage = NtQueryInstallUILanguage(this + 2);
      if ( InstallUILanguage < 0 || *v5 == 4096 || *v5 == 5120 )
        goto LABEL_14;
      RtlpLoadInstallLanguageFallback(this + 4);
    }
    RtlpMuiRegFreeRegistryInfo(this, 1023);
    Languages = RtlpMuiRegCreateLanguages();
    *((_DWORD *)this + 5) = Languages;
    if ( Languages )
    {
      *(_DWORD *)this |= 1u;
      StringPool = RtlpMuiRegCreateStringPool(-1, -1);
      *((_DWORD *)this + 6) = StringPool;
      if ( StringPool )
      {
        *(_DWORD *)this |= 2u;
        IsMachineLanguageListInMutableLocation = _IsMachineLanguageListInMutableLocation();
        v9 = (const wchar_t *)L"\\Registry\\Machine\\OSDATA\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
        if ( !IsMachineLanguageListInMutableLocation )
          v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MUI\\UILanguages";
        InstallUILanguage = _RtlpMuiRegLoadInstalledFromKey(this, v9);
        if ( InstallUILanguage >= 0 )
        {
          InstallUILanguage = _RtlpMuiRegValidateInstalled((int)this);
          if ( InstallUILanguage >= 0 )
            return InstallUILanguage;
        }
      }
    }
    else
    {
      InstallUILanguage = -1073741801;
    }
LABEL_14:
    RtlpMuiRegFreeRegistryInfo(this, 1023);
    return InstallUILanguage;
  }
  return -1073741811;
}
