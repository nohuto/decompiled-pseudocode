/*
 * XREFs of _RtlpVerifyAndCommitUILanguageSettings@4 @ 0x4B356030
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpCreateProcessRegistryInfo@4 @ 0x4B2D4050 (_RtlpCreateProcessRegistryInfo@4.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByName@16 @ 0x4B2D4753 (_RtlpMuiRegGetInstalledLanguageIndexByName@16.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _ZwFlushInstallUILanguage@8 @ 0x4B2F37F0 (_ZwFlushInstallUILanguage@8.c)
 *     _NtGetMUIRegistryInfo@12 @ 0x4B2F38E0 (_NtGetMUIRegistryInfo@12.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 *     _ZwShutdownSystem@4 @ 0x4B2F44C0 (_ZwShutdownSystem@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlUpdateProcessRegistryInfo@0 @ 0x4B3530B9 (_RtlUpdateProcessRegistryInfo@0.c)
 *     _RtlpSetPrivilege@8 @ 0x4B355FFE (_RtlpSetPrivilege@8.c)
 */

int __stdcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  int v1; // ecx
  int InstallUILanguage; // esi
  int v3; // esi
  __int16 v4; // ax
  int v6; // [esp+8h] [ebp-16Ch] BYREF
  const WCHAR *v7; // [esp+Ch] [ebp-168h]
  int v8; // [esp+10h] [ebp-164h] BYREF
  unsigned __int16 v9; // [esp+14h] [ebp-160h] BYREF
  _BYTE v10[344]; // [esp+18h] [ebp-15Ch] BYREF

  v9 = 0;
  memset(v10, 0, sizeof(v10));
  InstallUILanguage = NtQueryInstallUILanguage((int)&v9);
  if ( InstallUILanguage >= 0 )
  {
    v6 = 11141120;
    v7 = (const WCHAR *)v10;
    if ( RtlLCIDToCultureName(v9, (unsigned __int16 *)&v6)
      && RtlpCreateProcessRegistryInfo(&v8) >= 0
      && (v3 = v8) != 0
      && (LOWORD(v8) = -1, v7)
      && RtlpMuiRegGetInstalledLanguageIndexByName(v3, v7, 0, &v8) >= 0
      && (v1 = 28 * (__int16)v8, v4 = *(_WORD *)(v1 + *(_DWORD *)(*(_DWORD *)(v3 + 20) + 12)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      InstallUILanguage = ZwFlushInstallUILanguage(v9, 1);
      if ( InstallUILanguage >= 0 )
      {
        NtGetMUIRegistryInfo(10, 0, 0);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      InstallUILanguage = -1073741811;
    }
  }
  if ( a1 )
  {
    if ( InstallUILanguage )
    {
      RtlpSetPrivilege(v1);
      InstallUILanguage = ZwShutdownSystem(2);
      if ( InstallUILanguage < 0 )
        return -1073741616;
    }
  }
  return InstallUILanguage;
}
