/*
 * XREFs of _RtlpRefreshCachedUILanguage@8 @ 0x4B36BFF0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _RtlCultureNameToLCID@8 @ 0x4B2D56B0 (_RtlCultureNameToLCID@8.c)
 *     _ZwFlushInstallUILanguage@8 @ 0x4B2F37F0 (_ZwFlushInstallUILanguage@8.c)
 *     _NtGetMUIRegistryInfo@12 @ 0x4B2F38E0 (_NtGetMUIRegistryInfo@12.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 */

int __stdcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  int InstallUILanguage; // esi
  UNICODE_STRING DestinationString; // [esp+8h] [ebp-18h] BYREF
  int v5; // [esp+10h] [ebp-10h] BYREF
  int v6; // [esp+14h] [ebp-Ch] BYREF
  __int16 v7; // [esp+18h] [ebp-8h] BYREF
  unsigned __int16 v8; // [esp+1Ch] [ebp-4h] BYREF

  v8 = 0;
  v6 = 0;
  v7 = -1;
  v5 = 0;
  if ( !SourceString )
    return -1073741811;
  InstallUILanguage = NtQueryInstallUILanguage((int)&v8);
  if ( InstallUILanguage >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlCultureNameToLCID(&DestinationString.Length, &v6) )
    {
      InstallUILanguage = ZwFlushInstallUILanguage(v6, 0);
      if ( InstallUILanguage >= 0 )
      {
        InstallUILanguage = RtlpCreateProcessRegistryInfo(&v5);
        if ( InstallUILanguage >= 0 )
        {
          InstallUILanguage = RtlpMuiRegGetInstalledLanguageIndexByLangId(v5, v6, 1, &v7);
          if ( InstallUILanguage < 0 )
            ZwFlushInstallUILanguage(v8, 0);
          else
            InstallUILanguage = ZwFlushInstallUILanguage(v6, a2 != 0);
          NtGetMUIRegistryInfo(10, 0, 0);
        }
      }
    }
    else
    {
      return -1073741762;
    }
  }
  return InstallUILanguage;
}
