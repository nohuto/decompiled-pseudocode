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
  NTSTATUS v2; // esi
  int v3; // esi
  __int16 v4; // ax
  size_t v6; // [esp-4h] [ebp-178h]
  _UNICODE_STRING String; // [esp+8h] [ebp-16Ch] BYREF
  int v8; // [esp+10h] [ebp-164h] BYREF
  LANGID InstallUILanguageId; // [esp+14h] [ebp-160h] BYREF
  _BYTE v10[344]; // [esp+18h] [ebp-15Ch] BYREF

  LODWORD(v6) = 344;
  InstallUILanguageId = 0;
  memset(v10, 0, v6);
  v2 = NtQueryInstallUILanguage(&InstallUILanguageId);
  if ( v2 >= 0 )
  {
    *(_DWORD *)&String.Length = 11141120;
    String.Buffer = (wchar_t *)v10;
    if ( RtlLCIDToCultureName(InstallUILanguageId, &String)
      && RtlpCreateProcessRegistryInfo(&v8) >= 0
      && (v3 = v8) != 0
      && (LOWORD(v8) = -1, String.Buffer)
      && RtlpMuiRegGetInstalledLanguageIndexByName(v3, (const WCHAR *)String.Buffer, 0, &v8) >= 0
      && (v1 = 28 * (__int16)v8, v4 = *(_WORD *)(v1 + *(_DWORD *)(*(_DWORD *)(v3 + 20) + 12)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      v2 = ZwFlushInstallUILanguage(InstallUILanguageId, 1u);
      if ( v2 >= 0 )
      {
        NtGetMUIRegistryInfo(0xAu, 0, 0);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( a1 )
  {
    if ( v2 )
    {
      RtlpSetPrivilege(v1);
      v2 = ZwShutdownSystem(ShutdownPowerOff);
      if ( v2 < 0 )
        return -1073741616;
    }
  }
  return v2;
}
