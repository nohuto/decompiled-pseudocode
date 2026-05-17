/*
 * XREFs of RtlpVerifyAndCommitUILanguageSettings @ 0x18008B850
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateProcessRegistryInfo @ 0x180036490 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByName @ 0x18003AA98 (RtlpMuiRegGetInstalledLanguageIndexByName.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlUpdateProcessRegistryInfo @ 0x18006EC10 (RtlUpdateProcessRegistryInfo.c)
 *     RtlAdjustPrivilege @ 0x1800790E0 (RtlAdjustPrivilege.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtFlushInstallUILanguage @ 0x18009EAE0 (NtFlushInstallUILanguage.c)
 *     ZwGetMUIRegistryInfo @ 0x18009ECC0 (ZwGetMUIRegistryInfo.c)
 *     NtQueryInstallUILanguage @ 0x18009F800 (NtQueryInstallUILanguage.c)
 *     ZwShutdownSystem @ 0x1800A0480 (ZwShutdownSystem.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 */

__int64 __fastcall RtlpVerifyAndCommitUILanguageSettings(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // ebx
  __int64 v6; // rbx
  __int16 v7; // ax
  int v9; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 v10; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v11; // [rsp+30h] [rbp-D8h] BYREF
  const WCHAR *v12; // [rsp+38h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v14[688]; // [rsp+48h] [rbp-C0h] BYREF

  v10 = 0;
  memset(v14, 0, sizeof(v14));
  v5 = NtQueryInstallUILanguage(&v10, v2, v3, v4);
  if ( v5 >= 0 )
  {
    v12 = (const WCHAR *)v14;
    LODWORD(v11) = 11141120;
    if ( RtlLCIDToCultureName(v10, (__int64)&v11)
      && (int)RtlpCreateProcessRegistryInfo(&v13) >= 0
      && (v6 = v13) != 0
      && (LOWORD(v9) = -1, v12)
      && (int)RtlpMuiRegGetInstalledLanguageIndexByName(v13, v12, 0, &v9) >= 0
      && (v7 = *(_WORD *)(28LL * (__int16)v9 + *(_QWORD *)(*(_QWORD *)(v6 + 24) + 16LL)), v7 >= 0)
      && (v7 & 7) != 4 )
    {
      v5 = NtFlushInstallUILanguage(v10, 1LL);
      if ( v5 >= 0 )
      {
        ZwGetMUIRegistryInfo(10LL, 0LL, 0LL);
        RtlUpdateProcessRegistryInfo();
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  if ( a1 && v5 )
  {
    if ( (unsigned int)RtlAdjustPrivilege(0x13u, 1, 1, (bool *)&v9) == -1073741700 )
      RtlAdjustPrivilege(0x13u, 1, 0, (bool *)&v9);
    v5 = ZwShutdownSystem(2LL);
    if ( v5 < 0 )
      return (unsigned int)-1073741616;
  }
  return (unsigned int)v5;
}
