/*
 * XREFs of ?DeleteLockScreenRegistryKeys@SetLockScreenHotspotsService@Actions@CreativeFramework@@AEAAJXZ @ 0x180099744
 * Callers:
 *     ?Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180099150 (-Revert@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 *     ?Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ @ 0x180099200 (-Unstage@SetLockScreenHotspotsService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800041A0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180033064 (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18006B30C (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18008CB78 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?push_back@?$vector@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAAX$$QEAV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180099E64 (-push_back@-$vector@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocato.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::DeleteLockScreenRegistryKeys(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  unsigned int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  unsigned int v6; // eax
  wil::details::in1diag3 *v7; // rcx
  DWORD i; // ebx
  unsigned int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  unsigned int ValueW; // eax
  wil::details::in1diag3 *v12; // rcx
  const WCHAR *v13; // r8
  unsigned __int64 v14; // r8
  LPCWSTR v15; // rbx
  const char *v16; // r9
  __int64 result; // rax
  const WCHAR *v18; // rdx
  unsigned int v19; // eax
  wil::details::in1diag3 *v20; // rcx
  unsigned int v21; // eax
  DWORD pcbData; // [rsp+60h] [rbp-698h] BYREF
  HKEY hKey; // [rsp+68h] [rbp-690h] BYREF
  DWORD cSubKeys; // [rsp+70h] [rbp-688h] BYREF
  DWORD cchName; // [rsp+74h] [rbp-684h] BYREF
  LPCWSTR lpSubKey[2]; // [rsp+78h] [rbp-680h] BYREF
  __int64 v27; // [rsp+88h] [rbp-670h]
  __int64 v28; // [rsp+90h] [rbp-668h]
  void *v29[3]; // [rsp+98h] [rbp-660h] BYREF
  unsigned __int64 v30; // [rsp+B0h] [rbp-648h]
  WCHAR Name[256]; // [rsp+C0h] [rbp-638h] BYREF
  WCHAR SubKey[264]; // [rsp+2C0h] [rbp-438h] BYREF
  WCHAR pvData[264]; // [rsp+4D0h] [rbp-228h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+6F8h] [rbp+0h]

  v28 = -2LL;
  v2 = StringCchPrintfW(
         SubKey,
         260LL,
         L"%s\\%s",
         L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Authentication\\LogonUI\\Creative",
         *((_QWORD *)this + 2));
  try
  {
    v3 = retaddr;
    if ( v2 >= 0 )
    {
      hKey = 0LL;
      v4 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, SubKey, 0, 0xFu, &hKey);
      v5 = retaddr;
      if ( v4 )
      {
LABEL_34:
        wil::details::in1diag3::_Throw_Win32(
          v5,
          (void *)0x96,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v4);
LABEL_35:
        wil::details::in1diag3::_Throw_Win32(
          v7,
          (void *)0x9B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v6);
LABEL_36:
        wil::details::in1diag3::_Throw_Win32(
          v10,
          (void *)0xA2,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v9);
LABEL_37:
        wil::details::in1diag3::_Throw_Win32(
          v12,
          (void *)0xA3,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)ValueW);
LABEL_38:
        wil::details::in1diag3::_Throw_Win32(
          v20,
          (void *)0xB5,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
          (const char *)v19);
        JUMPOUT(0x180099B55LL);
      }
      *(_OWORD *)lpSubKey = 0LL;
      v27 = 0LL;
      v6 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
      v7 = retaddr;
      if ( v6 )
        goto LABEL_35;
      for ( i = 0; i < cSubKeys; ++i )
      {
        cchName = 256;
        pcbData = 261;
        v9 = RegEnumKeyExW(hKey, i, Name, &cchName, 0LL, 0LL, 0LL, 0LL);
        v10 = retaddr;
        if ( v9 )
          goto LABEL_36;
        ValueW = RegGetValueW(hKey, Name, L"contentId", 2u, 0LL, pvData, &pcbData);
        v12 = retaddr;
        if ( ValueW )
          goto LABEL_37;
        v13 = (const WCHAR *)((char *)this + 24);
        if ( *((_QWORD *)this + 6) >= 8uLL )
          v13 = *(const WCHAR **)v13;
        if ( CompareStringOrdinal(pvData, -1, v13, -1, 0) == 2 )
        {
          v30 = 7LL;
          v29[2] = 0LL;
          LOWORD(v29[0]) = 0;
          if ( Name[0] )
          {
            v14 = -1LL;
            do
              ++v14;
            while ( Name[v14] );
          }
          else
          {
            v14 = 0LL;
          }
          std::wstring::assign(v29, (char *)Name, v14);
          std::vector<std::wstring>::push_back(lpSubKey, v29);
          if ( v30 >= 8 )
            operator delete(v29[0]);
        }
      }
      v15 = lpSubKey[0];
      if ( lpSubKey[0] == lpSubKey[1] )
      {
        *((_BYTE *)this + 124) = 0;
LABEL_21:
        std::vector<std::wstring>::~vector<std::wstring>((__int64 *)lpSubKey);
        if ( hKey )
          RegCloseKey(hKey);
        return 0LL;
      }
      *((_BYTE *)this + 124) = 1;
      while ( v15 != lpSubKey[1] )
      {
        if ( *((_QWORD *)v15 + 3) < 8uLL )
          v18 = v15;
        else
          v18 = *(const WCHAR **)v15;
        v19 = RegDeleteKeyExW(hKey, v18, 0, 0);
        v20 = retaddr;
        if ( v19 )
          goto LABEL_38;
        v15 += 16;
      }
      pcbData = 1;
      v21 = RegSetKeyValueW(hKey, 0LL, L"LockImageFlags", 4u, &pcbData, 4u);
      if ( !v21 )
        goto LABEL_21;
      wil::details::in1diag3::_Throw_Win32(
        retaddr,
        (void *)0xBA,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
        (const char *)v21);
    }
    wil::details::in1diag3::Throw_Hr(
      v3,
      (void *)0x94,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)v2);
    goto LABEL_34;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xBF,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
                           v16);
  }
  return result;
}
