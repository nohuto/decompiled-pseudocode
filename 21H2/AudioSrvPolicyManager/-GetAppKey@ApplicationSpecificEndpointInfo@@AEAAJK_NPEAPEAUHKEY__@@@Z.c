/*
 * XREFs of ?GetAppKey@ApplicationSpecificEndpointInfo@@AEAAJK_NPEAPEAUHKEY__@@@Z @ 0x180031C0C
 * Callers:
 *     ?SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180030E60 (-SetPersistedDefaultAudioEndpoint@ApplicationSpecificEndpointInfo@@UEAAJW4__MIDL___MIDL_itf_mmde.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180031784 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     ?AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAG@Z @ 0x1800328D0 (-AttemptToUpdateEndpointInterfaceId@ApplicationSpecificEndpointInfo@@AEAAJW4__MIDL___MIDL_itf_mm.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A174 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18000A4C0 (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     ?ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z @ 0x180032160 (-ReadKey@ApplicationSpecificEndpointInfo@@CAJPEAUHKEY__@@PEBGPEAPEAG@Z.c)
 *     ?StringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800330EC (-StringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z @ 0x180035580 (-SafeRegCreateKeyEx@@YAJPEAUHKEY__@@PEBGKPEAGKKPEAU_SECURITY_ATTRIBUTES@@PEAPEAU1@PEAK@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180035970 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180035D08 (-SetRegistryKeyIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     ?SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z @ 0x180035ED4 (-SetRegistryHandleIntegrityLevel@@YAJPEAUHKEY__@@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ApplicationSpecificEndpointInfo::GetAppKey(
        ApplicationSpecificEndpointInfo *this,
        REGSAM a2,
        char a3,
        HKEY *a4)
{
  char v4; // r14
  char v6; // si
  int v7; // r12d
  _WORD *v8; // rcx
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  const char *v12; // r9
  __int64 result; // rax
  HKEY v14; // rdi
  DWORD LastError; // ebx
  HKEY v16; // rcx
  int Key; // eax
  unsigned int v18; // ebx
  void *v19; // rbx
  HKEY v20; // r14
  DWORD v21; // edi
  HKEY v22; // rdi
  DWORD v23; // ebx
  signed int v24; // eax
  unsigned int v25; // r8d
  unsigned __int16 *v26; // r9
  signed int v27; // edi
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  const BYTE *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  _WORD *v33; // rax
  signed int v34; // ebx
  int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // ebx
  PHKEY phkResult; // [rsp+20h] [rbp-2C8h]
  __int64 cchCount2; // [rsp+28h] [rbp-2C0h]
  unsigned int *v40; // [rsp+40h] [rbp-2A8h]
  HKEY hKey; // [rsp+50h] [rbp-298h] BYREF
  char v42; // [rsp+58h] [rbp-290h]
  REGSAM samDesired; // [rsp+5Ch] [rbp-28Ch]
  PSID Sid; // [rsp+60h] [rbp-288h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-280h] BYREF
  struct _SECURITY_ATTRIBUTES lpMem; // [rsp+70h] [rbp-278h] BYREF
  HKEY *v47; // [rsp+88h] [rbp-260h]
  WCHAR SubKey[264]; // [rsp+90h] [rbp-258h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  try
  {
    v47 = a4;
    v4 = a3;
    v42 = a3;
    samDesired = a2;
    v6 = 0;
    v7 = 0;
    hKey = 0LL;
    v8 = (_WORD *)*((_QWORD *)this + 10);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147467259);
    v9 = 0;
    while ( *v8 )
      v9 = (unsigned __int16)*v8++ + 33 * v9;
    while ( 1 )
    {
      LODWORD(cchCount2) = v7;
      LODWORD(phkResult) = v9;
      v10 = StringCbPrintfW(
              SubKey,
              0x20AuLL,
              L"%s\\%x_%x",
              L"Software\\Microsoft\\Multimedia\\Audio\\DefaultEndpoint",
              phkResult,
              cchCount2);
      v11 = v10;
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x221,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v10);
        if ( hKey )
          RegCloseKey(hKey);
        return v11;
      }
      v14 = hKey;
      if ( hKey )
      {
        LastError = GetLastError();
        RegCloseKey(v14);
        SetLastError(LastError);
      }
      hKey = 0LL;
      if ( !RegOpenKeyExW(HKEY_CURRENT_USER, SubKey, 0, samDesired, &hKey) )
      {
        pv = 0LL;
        Key = ApplicationSpecificEndpointInfo::ReadKey(hKey, 0LL, (unsigned __int16 **)&pv);
        v18 = Key;
        if ( Key < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x229,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            (const char *)(unsigned int)Key);
          if ( pv )
            CoTaskMemFree(pv);
          if ( hKey )
            RegCloseKey(hKey);
          return v18;
        }
        v19 = pv;
        if ( CompareStringW(0x7Fu, 1u, *((PCNZWCH *)this + 10), -1, (PCNZWCH)pv, -1) == 2 )
        {
          v6 = 0;
        }
        else
        {
          ++v7;
          v6 = 1;
          v20 = hKey;
          if ( hKey )
          {
            v21 = GetLastError();
            RegCloseKey(v20);
            SetLastError(v21);
          }
          hKey = 0LL;
          v4 = v42;
        }
        if ( v19 )
          CoTaskMemFree(v19);
        goto LABEL_64;
      }
      if ( !v4 )
        goto LABEL_64;
      v22 = hKey;
      v6 = 0;
      if ( hKey )
      {
        v23 = GetLastError();
        RegCloseKey(v22);
        SetLastError(v23);
      }
      hKey = 0LL;
      memset(&lpMem, 0, sizeof(lpMem));
      lpMem.nLength = 24;
      v24 = DetermineLowRightsKeySecurityDescriptor(v16, &lpMem.lpSecurityDescriptor);
      if ( !v24 )
      {
        v24 = SafeRegCreateKeyEx(
                HKEY_CURRENT_USER,
                SubKey,
                v25,
                v26,
                (unsigned int)phkResult,
                0xA001Fu,
                &lpMem,
                &hKey,
                v40);
        if ( !v24 )
        {
          Sid = 0LL;
          if ( ConvertStringSidToSidW(L"LW", &Sid) )
          {
            v27 = SetRegistryKeyIntegrityLevel(hKey, Sid);
            if ( v27 < 0 )
              v27 = SetRegistryHandleIntegrityLevel(hKey, Sid);
            if ( Sid )
              LocalFree(Sid);
            goto LABEL_39;
          }
          v24 = GetLastError();
        }
      }
      v27 = (unsigned __int16)v24 | 0x80070000;
      if ( v24 <= 0 )
        v27 = v24;
LABEL_39:
      lpSecurityDescriptor = lpMem.lpSecurityDescriptor;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, lpSecurityDescriptor);
      lpMem.lpSecurityDescriptor = 0LL;
      if ( v27 < 0 )
      {
        if ( hKey )
        {
          RegCloseKey(hKey);
          hKey = 0LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23B,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v27);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v27;
      }
      v30 = (const BYTE *)*((_QWORD *)this + 10);
      v31 = 0;
      if ( v30 )
      {
        v32 = 261LL;
        v33 = (_WORD *)*((_QWORD *)this + 10);
        do
        {
          if ( !*v33 )
            break;
          ++v33;
          --v32;
        }
        while ( v32 );
        v34 = v32 == 0 ? 0x80070057 : 0;
        if ( v32 )
          v31 = 261 - v32;
        else
          v31 = 0;
      }
      else
      {
        v34 = -2147024809;
      }
      if ( v34 < 0 )
        v35 = 0;
      else
        v35 = 2 * v31;
      if ( v34 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x23F,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          (const char *)(unsigned int)v34);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v34;
      }
      v36 = RegSetValueExW(hKey, 0LL, 0, 1u, v30, v35 + 2);
      if ( v36 )
      {
        v37 = wil::details::in1diag3::Return_Win32(
                retaddr,
                (void *)0x24D,
                (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                (const char *)v36);
        if ( hKey )
          RegCloseKey(hKey);
        return v37;
      }
LABEL_64:
      if ( !v6 )
      {
        if ( !hKey )
          return 2147943568LL;
        *v47 = hKey;
        return 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x25F,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v12);
  }
  return result;
}
