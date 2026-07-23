/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008B950
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006ED10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x1800791E0 (RtlAdjustPrivilege.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtFlushInstallUILanguage @ 0x18009ED80 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x18009EF60 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x18009FAA0 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A0720 (ZwShutdownSystem.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  NTSTATUS v2; // ebx
  __int64 v3; // rbx
  __int16 v4; // ax
  BOOLEAN WasEnabled[4]; // [rsp+28h] [rbp-E0h] BYREF
  LANGID InstallUILanguageId; // [rsp+2Ch] [rbp-DCh] BYREF
  _UNICODE_STRING String; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v9; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v10[688]; // [rsp+48h] [rbp-C0h] BYREF

  InstallUILanguageId = 0;
  memset(v10, 0, sizeof(v10));
  v2 = NtQueryInstallUILanguage(&InstallUILanguageId);
  if ( v2 >= 0 )
  {
    String.Buffer = (wchar_t *)v10;
    *(_DWORD *)&String.Length = 11141120;
    if ( RtlLCIDToCultureName(InstallUILanguageId, &String)
      && (int)RtlpCreateProcessRegistryInfo(&v9) >= 0
      && (v3 = v9) != 0
      && (*(_WORD *)WasEnabled = -1, String.Buffer)
      && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v9, String.Buffer, 0, WasEnabled) >= 0
      && (v4 = *(_WORD *)(28LL * *(__int16 *)WasEnabled + *(_QWORD *)(*(_QWORD *)(v3 + 24) + 16LL)), v4 >= 0)
      && (v4 & 7) != 4 )
    {
      v2 = NtFlushInstallUILanguage(InstallUILanguageId, 1u);
      if ( v2 >= 0 )
      {
        ZwGetMUIRegistryInfo(0xAu, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v2 = -1073741811;
    }
  }
  if ( a1 && v2 )
  {
    if ( RtlAdjustPrivilege(0x13u, 1u, 1u, WasEnabled) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1u, 0, WasEnabled);
    v2 = ZwShutdownSystem(ShutdownPowerOff);
    if ( v2 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v2;
}
