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

NTSTATUS __stdcall RtlpRefreshCachedUILanguage(PCWSTR SourceString, char a2)
{
  NTSTATUS InstalledLanguageIndexByLangId; // esi
  _UNICODE_STRING DestinationString; // [esp+8h] [ebp-18h] BYREF
  int v5; // [esp+10h] [ebp-10h] BYREF
  DWORD Lcid; // [esp+14h] [ebp-Ch] BYREF
  __int16 v7; // [esp+18h] [ebp-8h] BYREF
  LANGID InstallUILanguageId; // [esp+1Ch] [ebp-4h] BYREF

  InstallUILanguageId = 0;
  Lcid = 0;
  v7 = -1;
  v5 = 0;
  if ( !SourceString )
    return -1073741811;
  InstalledLanguageIndexByLangId = NtQueryInstallUILanguage(&InstallUILanguageId);
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
    {
      InstalledLanguageIndexByLangId = ZwFlushInstallUILanguage(Lcid, 0);
      if ( InstalledLanguageIndexByLangId >= 0 )
      {
        InstalledLanguageIndexByLangId = RtlpCreateProcessRegistryInfo(&v5);
        if ( InstalledLanguageIndexByLangId >= 0 )
        {
          InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(v5, Lcid, 1, &v7);
          if ( InstalledLanguageIndexByLangId < 0 )
            ZwFlushInstallUILanguage(InstallUILanguageId, 0);
          else
            InstalledLanguageIndexByLangId = ZwFlushInstallUILanguage(Lcid, a2 != 0);
          NtGetMUIRegistryInfo(0xAu, 0, 0);
        }
      }
    }
    else
    {
      return -1073741762;
    }
  }
  return InstalledLanguageIndexByLangId;
}
