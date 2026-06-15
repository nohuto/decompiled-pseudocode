/*
 * XREFs of ?Commit@CAudioSessionStore@@UEAAJXZ @ 0x180003A70
 * Callers:
 *     ??1CAudioSessionStore@@EEAA@XZ @ 0x1800036BC (--1CAudioSessionStore@@EEAA@XZ.c)
 * Callees:
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800042A4 (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x1800045F0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z @ 0x180051CEC (-OpenSessionKey@CAudioSessionStore@@AEAAJPEAPEAUHKEY__@@@Z.c)
 *     ?FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z @ 0x1800524BC (-FlattenProperty@CAudioSessionStore@@AEAAPEAEPEBUtagPROPVARIANT@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006A2F8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CA550 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CAudioSessionStore::Commit(CAudioSessionStore *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r13
  HKEY v3; // rbx
  unsigned int v4; // esi
  CAudioSessionStore *v6; // r12
  int v7; // eax
  HKEY v8; // rdi
  __int64 v9; // r14
  HRESULT v10; // eax
  RPC_STATUS v11; // eax
  int v12; // eax
  int v13; // eax
  BYTE *v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int lpData; // [rsp+28h] [rbp-49h]
  RPC_STATUS v20; // [rsp+38h] [rbp-39h] BYREF
  HKEY hKey; // [rsp+40h] [rbp-31h] BYREF
  LPOLESTR lpsz; // [rsp+48h] [rbp-29h] BYREF
  HKEY v23; // [rsp+50h] [rbp-21h] BYREF
  unsigned __int64 cbData[2]; // [rsp+58h] [rbp-19h] BYREF
  char v25; // [rsp+68h] [rbp-9h]
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+70h] [rbp-1h]
  WCHAR ValueName[20]; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  v26 = v2;
  v3 = 0LL;
  if ( *((_BYTE *)this + 96) )
  {
    v23 = 0LL;
    v6 = (CAudioSessionStore *)((char *)this - 16);
    v7 = CAudioSessionStore::OpenSessionKey((CAudioSessionStore *)((char *)this - 16), &v23);
    v4 = v7;
    v8 = v23;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC5F,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v7,
        lpData);
    }
    else
    {
      v9 = *((_QWORD *)this + 5);
      while ( 1 )
      {
        if ( !v9 )
        {
          *((_BYTE *)this + 96) = 0;
          v4 = 0;
          goto LABEL_25;
        }
        lpsz = 0LL;
        v10 = StringFromCLSID((const IID *const)v9, &lpsz);
        v4 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC65,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v10,
            lpData);
          goto LABEL_44;
        }
        v11 = RpcImpersonateClient(0LL);
        v20 = v11;
        cbData[1] = (unsigned __int64)&v20;
        v25 = 1;
        if ( v11 )
        {
          if ( v11 != 1725 )
            break;
        }
        hKey = 0LL;
        v12 = CreateLowRightsRegistryKey(v8, lpsz, 0x20006u, &hKey);
        v4 = v12;
        if ( v12 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xC70,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
            (const char *)(unsigned int)v12,
            lpData);
          v3 = hKey;
          goto LABEL_39;
        }
        v25 = 0;
        if ( !v20 )
          RpcRevertToSelf();
        v13 = StringCbPrintfW(ValueName, 0x28uLL, L"%d", *(unsigned int *)(v9 + 16));
        v4 = v13;
        if ( v13 < 0 )
        {
          v17 = (unsigned int)v13;
          v18 = 3188LL;
          goto LABEL_37;
        }
        if ( *(_WORD *)(v9 + 24) )
        {
          v14 = CAudioSessionStore::FlattenProperty(v6, (const struct tagPROPVARIANT *)(v9 + 24), cbData);
          if ( !v14 )
          {
            v4 = -2147024882;
            v17 = 2147942414LL;
            v18 = 3198LL;
LABEL_37:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v18,
              (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
              (const char *)v17,
              lpData);
            v3 = hKey;
            goto LABEL_41;
          }
          v3 = hKey;
          v15 = RegSetValueExW(hKey, ValueName, 0, 3u, v14, cbData[0]);
          if ( v15 )
          {
            v4 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xC80,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                   (const char *)v15,
                   lpData);
            operator delete(v14, (const struct std::nothrow_t *)1);
            goto LABEL_41;
          }
          operator delete(v14, (const struct std::nothrow_t *)1);
          v6 = (CAudioSessionStore *)((char *)this - 16);
        }
        else
        {
          v3 = hKey;
          v16 = RegDeleteValueW(hKey, ValueName);
          if ( v16 )
          {
            v4 = wil::details::in1diag3::Return_Win32(
                   retaddr,
                   (void *)0xC78,
                   (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
                   (const char *)v16,
                   lpData);
            goto LABEL_41;
          }
        }
        v9 = *(_QWORD *)(v9 + 48);
        if ( v3 )
          RegCloseKey(v3);
        v3 = 0LL;
        if ( lpsz )
          CoTaskMemFree(lpsz);
      }
      if ( v11 > 0 )
        v4 = (unsigned __int16)v11 | 0x80070000;
      else
        v4 = v11;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC6E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)v4,
        lpData);
LABEL_39:
      if ( !v20 )
        RpcRevertToSelf();
LABEL_41:
      if ( v3 )
        RegCloseKey(v3);
LABEL_44:
      if ( lpsz )
        CoTaskMemFree(lpsz);
    }
LABEL_25:
    if ( v8 )
      RegCloseKey(v8);
  }
  else
  {
    v4 = 0;
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
