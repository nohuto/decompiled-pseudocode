/*
 * XREFs of sub_180031C0C @ 0x180031C0C
 * Callers:
 *     sub_180030E60 @ 0x180030E60 (sub_180030E60.c)
 *     sub_180031784 @ 0x180031784 (sub_180031784.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000A174 @ 0x18000A174 (sub_18000A174.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 *     sub_180032160 @ 0x180032160 (sub_180032160.c)
 *     sub_1800330EC @ 0x1800330EC (sub_1800330EC.c)
 *     sub_180035580 @ 0x180035580 (sub_180035580.c)
 *     sub_180035970 @ 0x180035970 (sub_180035970.c)
 *     sub_180035D08 @ 0x180035D08 (sub_180035D08.c)
 *     sub_180035ED4 @ 0x180035ED4 (sub_180035ED4.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031C0C(__int64 a1, REGSAM a2, char a3, HKEY *a4)
{
  char v4; // r14
  char v6; // si
  int v7; // r12d
  _WORD *v8; // rcx
  int v9; // r15d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // r9
  __int64 result; // rax
  HKEY v14; // rdi
  DWORD LastError; // ebx
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  void *v19; // rbx
  HKEY v20; // r14
  DWORD v21; // edi
  HKEY v22; // rdi
  DWORD v23; // ebx
  signed int v24; // eax
  int v25; // r8d
  int v26; // r9d
  signed int v27; // edi
  void *lpSecurityDescriptor; // rbx
  HANDLE ProcessHeap; // rax
  const BYTE *v30; // rdx
  int v31; // eax
  __int64 v32; // rcx
  _WORD *v33; // rax
  int v34; // ebx
  int v35; // eax
  LSTATUS v36; // eax
  unsigned int v37; // ebx
  int phkResult; // [rsp+20h] [rbp-2C8h]
  HKEY hKey; // [rsp+50h] [rbp-298h] BYREF
  char v40; // [rsp+58h] [rbp-290h]
  REGSAM samDesired; // [rsp+5Ch] [rbp-28Ch]
  PSID Sid; // [rsp+60h] [rbp-288h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-280h]
  struct _SECURITY_ATTRIBUTES lpMem; // [rsp+70h] [rbp-278h] BYREF
  HKEY *v45; // [rsp+88h] [rbp-260h]
  WCHAR SubKey[264]; // [rsp+90h] [rbp-258h] BYREF
  __int64 retaddr; // [rsp+2E8h] [rbp+0h]

  try
  {
    v45 = a4;
    v4 = a3;
    v40 = a3;
    samDesired = a2;
    v6 = 0;
    v7 = 0;
    hKey = 0LL;
    v8 = *(_WORD **)(a1 + 80);
    if ( !v8 )
      sub_18000A174(-2147467259);
    v9 = 0;
    while ( *v8 )
      v9 = (unsigned __int16)*v8++ + 33 * v9;
    while ( 1 )
    {
      v10 = sub_1800330EC((char *)SubKey);
      v11 = v10;
      if ( v10 < 0 )
      {
        sub_180003AB0(
          retaddr,
          545,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v10);
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
        v17 = sub_180032160(hKey, 0LL);
        v18 = v17;
        if ( v17 < 0 )
        {
          sub_180003AB0(
            retaddr,
            553,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            v17);
          if ( pv )
            CoTaskMemFree(pv);
          if ( hKey )
            RegCloseKey(hKey);
          return v18;
        }
        v19 = pv;
        if ( CompareStringW(0x7Fu, 1u, *(PCNZWCH *)(a1 + 80), -1, (PCNZWCH)pv, -1) == 2 )
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
          v4 = v40;
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
      v24 = sub_180035970(v16, &lpMem.lpSecurityDescriptor);
      if ( !v24 )
      {
        v24 = sub_180035580(-2147483647, (int)SubKey, v25, v26, phkResult, 0xA001Fu, &lpMem, (__int64)&hKey);
        if ( !v24 )
        {
          Sid = 0LL;
          if ( ConvertStringSidToSidW(L"LW", &Sid) )
          {
            v27 = sub_180035D08(hKey, Sid);
            if ( v27 < 0 )
              v27 = sub_180035ED4(hKey, Sid);
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
        sub_180003AB0(
          retaddr,
          571,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v27);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v27;
      }
      v30 = *(const BYTE **)(a1 + 80);
      v31 = 0;
      if ( v30 )
      {
        v32 = 261LL;
        v33 = *(_WORD **)(a1 + 80);
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
        sub_180003AB0(
          retaddr,
          575,
          (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
          v34);
        if ( hKey )
          RegCloseKey(hKey);
        return (unsigned int)v34;
      }
      v36 = RegSetValueExW(hKey, 0LL, 0, 1u, v30, v35 + 2);
      if ( v36 )
      {
        v37 = sub_18000A4C0(
                retaddr,
                589,
                (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
                v36);
        if ( hKey )
          RegCloseKey(hKey);
        return v37;
      }
LABEL_64:
      if ( !v6 )
      {
        if ( !hKey )
          return 2147943568LL;
        *v45 = hKey;
        return 0LL;
      }
    }
  }
  catch ( ... )
  {
    return (unsigned int)sub_18000FA80(
                           retaddr,
                           607,
                           (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspe"
                                    "cificendpointinfo.cpp",
                           v12);
  }
  return result;
}
