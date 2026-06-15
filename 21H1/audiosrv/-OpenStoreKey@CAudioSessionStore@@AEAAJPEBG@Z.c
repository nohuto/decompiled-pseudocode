/*
 * XREFs of ?OpenStoreKey@CAudioSessionStore@@AEAAJPEBG@Z @ 0x180003D14
 * Callers:
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z @ 0x18000360C (-LoadPropertyStore@CAudioSessionStore@@AEAAJPEBG@Z.c)
 * Callees:
 *     ?GetThreadUserStringSid@@YAJPEAPEAG@Z @ 0x180002A1C (-GetThreadUserStringSid@@YAJPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x180004744 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180004A90 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18002AB54 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C604 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18006A480 (__security_check_cookie.c)
 */

__int64 __fastcall CAudioSessionStore::OpenStoreKey(CAudioSessionStore *this, unsigned __int16 *a2)
{
  HKEY *v2; // r14
  RPC_STATUS v4; // eax
  unsigned __int16 *v5; // rbx
  int ThreadUserStringSid; // eax
  int v7; // edi
  int v8; // eax
  unsigned int v9; // r15d
  HKEY v10; // rsi
  bool v11; // sf
  HKEY v12; // rsi
  HKEY v13; // rcx
  int LowRightsRegistryKey; // eax
  int v15; // esi
  DWORD LastError; // edi
  DWORD v18; // edi
  int phkResult; // [rsp+20h] [rbp-E0h]
  int phkResulta; // [rsp+20h] [rbp-E0h]
  RPC_STATUS v21; // [rsp+30h] [rbp-D0h]
  HKEY hKey; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v23[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR SubKey[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+298h] [rbp+198h]

  v2 = (HKEY *)((char *)this + 64);
  if ( *((_QWORD *)this + 8) )
    return 0LL;
  v4 = RpcImpersonateClient(0LL);
  v21 = v4;
  if ( !v4 || v4 == 1725 || v4 == 1765 )
  {
    v5 = 0LL;
    v23[0] = 0LL;
    if ( !a2 )
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v23,
        0LL);
      ThreadUserStringSid = GetThreadUserStringSid(v23);
      v7 = ThreadUserStringSid;
      if ( ThreadUserStringSid < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xD86,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
          (const char *)(unsigned int)ThreadUserStringSid,
          phkResult);
        v5 = v23[0];
LABEL_21:
        if ( v5 )
          CoTaskMemFree(v5);
        goto LABEL_23;
      }
      v5 = v23[0];
      a2 = v23[0];
    }
    v8 = StringCbPrintfW(SubKey, 0x208uLL, L"%s\\Software\\Microsoft\\Internet Explorer\\LowRegistry", a2);
    v7 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8B,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v8,
        phkResult);
    }
    else
    {
      hKey = 0LL;
      v9 = 131103;
      v7 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x2001Fu, &hKey);
      if ( v7 == 5 )
      {
        v10 = hKey;
        v9 = 131097;
        if ( hKey )
        {
          LastError = GetLastError();
          RegCloseKey(v10);
          SetLastError(LastError);
        }
        hKey = 0LL;
        v7 = RegOpenKeyExW(HKEY_USERS, SubKey, 0, 0x20019u, &hKey);
      }
      v11 = v7 < 0;
      if ( v7 > 0 )
      {
        v7 = (unsigned __int16)v7 | 0x80070000;
        v11 = v7 < 0;
      }
      if ( v11 )
      {
        if ( v7 != -2147024894 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xD9C,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v7,
            phkResulta);
      }
      else
      {
        v12 = *v2;
        if ( *v2 )
        {
          v18 = GetLastError();
          RegCloseKey(v12);
          SetLastError(v18);
        }
        v13 = hKey;
        *v2 = 0LL;
        LowRightsRegistryKey = CreateLowRightsRegistryKey(v13, L"Audio\\PolicyConfig\\PropertyStore", v9, v2);
        v15 = LowRightsRegistryKey;
        if ( LowRightsRegistryKey >= 0 )
        {
          v7 = 0;
        }
        else
        {
          v7 = -2147024891;
          if ( LowRightsRegistryKey != -2147024891 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xD9E,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)(unsigned int)LowRightsRegistryKey,
              phkResulta);
            v7 = v15;
          }
        }
      }
      if ( hKey )
        RegCloseKey(hKey);
    }
    goto LABEL_21;
  }
  if ( v4 > 0 )
    v7 = (unsigned __int16)v4 | 0x80070000;
  else
    v7 = v4;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD79,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
    (const char *)(unsigned int)v7,
    phkResult);
LABEL_23:
  if ( !v21 )
    RpcRevertToSelf();
  return (unsigned int)v7;
}
