/*
 * XREFs of RtlpRefreshCachedUILanguage @ 0x180105D80
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlCultureNameToLCID @ 0x18003B850 (RtlCultureNameToLCID.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtFlushInstallUILanguage @ 0x18009EAE0 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x18009ECC0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x18009F800 (NtQueryInstallUILanguage.c)
 */

__int64 __fastcall RtlpRefreshCachedUILanguage(PCWSTR SourceString)
{
  int InstallUILanguage; // ebx
  unsigned __int16 v3; // si
  __int64 v5; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  __int16 v7; // [rsp+80h] [rbp+40h] BYREF
  int v8; // [rsp+88h] [rbp+48h] BYREF

  v8 = 0;
  v7 = -1;
  v5 = 0LL;
  if ( SourceString )
  {
    InstallUILanguage = NtQueryInstallUILanguage();
    if ( InstallUILanguage >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( RtlCultureNameToLCID(&DestinationString.Length, &v8) )
      {
        v3 = v8;
        InstallUILanguage = NtFlushInstallUILanguage();
        if ( InstallUILanguage >= 0 )
        {
          InstallUILanguage = RtlpCreateProcessRegistryInfo(&v5);
          if ( InstallUILanguage >= 0 )
          {
            InstallUILanguage = RtlpMuiRegGetInstalledLanguageIndexByLangId(v5, v3, 1, &v7);
            if ( InstallUILanguage < 0 )
              NtFlushInstallUILanguage();
            else
              InstallUILanguage = NtFlushInstallUILanguage();
            ZwGetMUIRegistryInfo();
          }
        }
      }
      else
      {
        return (unsigned int)-1073741762;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)InstallUILanguage;
}
