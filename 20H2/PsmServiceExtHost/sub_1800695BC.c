/*
 * XREFs of sub_1800695BC @ 0x1800695BC
 * Callers:
 *     sub_18006A0C0 @ 0x18006A0C0 (sub_18006A0C0.c)
 *     sub_18006A1E0 @ 0x18006A1E0 (sub_18006A1E0.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067E10 @ 0x180067E10 (sub_180067E10.c)
 *     sub_18006EA80 @ 0x18006EA80 (sub_18006EA80.c)
 *     sub_18006F1FC @ 0x18006F1FC (sub_18006F1FC.c)
 */

__int64 __fastcall sub_1800695BC(__int64 a1, void *a2, _DWORD *a3, int a4)
{
  __int64 v4; // rbx
  __int64 v8; // rcx
  int v9; // r13d
  ULONG v10; // ebx
  int v11; // edi
  int v12; // esi
  int v13; // r14d
  int v14; // r15d
  int v15; // r12d
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD v19; // ebx
  _BYTE v21[4]; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+84h] [rbp-7Ch] BYREF
  LPWSTR FileNameW; // [rsp+88h] [rbp-78h] BYREF
  int v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+94h] [rbp-6Ch] BYREF
  int v26; // [rsp+98h] [rbp-68h] BYREF
  int v27; // [rsp+9Ch] [rbp-64h] BYREF
  int v28; // [rsp+A0h] [rbp-60h] BYREF
  DWORD ProcessId; // [rsp+A4h] [rbp-5Ch] BYREF
  HANDLE Process; // [rsp+A8h] [rbp-58h] BYREF
  int v31; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD *v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v35[144]; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+160h] [rbp+60h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+180h] [rbp+80h] BYREF
  LPCWSTR pszPath; // [rsp+188h] [rbp+88h]

  v4 = *(_QWORD *)&qword_1800B41A8;
  Process = a2;
  v32 = a3;
  sub_18000B63C(&v31, v35);
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278(v8, (unsigned __int8 *)dword_18009BA8C, 0LL, 0LL, 2u, &v36);
  if ( a4 )
  {
    v9 = -1073741583;
  }
  else if ( (unsigned __int8)sub_18006EA80(v4, a3) )
  {
    v9 = sub_18006F1FC(v4 + 1616, a2, a3);
    if ( v9 >= 0 )
      v9 = 0;
  }
  else
  {
    v9 = -1073741584;
  }
  if ( dword_1800B31E0 )
  {
    FileNameW = 0LL;
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x400000000001LL) )
    {
      v10 = a3[7];
      v11 = a3[8];
      v12 = a3[6];
      v13 = a3[5];
      v14 = a3[4];
      v15 = a3[1];
      ProcessId = GetProcessId(Process);
      v21[0] = *((_BYTE *)v32 + 36);
      v16 = *((_QWORD *)v32 + 1);
      v33 = 0x1000000LL;
      ReturnLength = v10;
      v24 = v11;
      v25 = v12;
      v26 = v13;
      v27 = v14;
      v34 = v16;
      v28 = v15;
      LODWORD(Process) = v9;
      sub_180067E10(
        v16,
        byte_18009B489,
        v17,
        v18,
        (__int64)&Process,
        (__int64)&ProcessId,
        (__int64)&v28,
        (__int64)&v34,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)v21,
        (__int64)&v24,
        (__int64)&ReturnLength,
        (void **)&FileNameW,
        (__int64)&v33);
    }
  }
  if ( v31 )
  {
    v19 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v19, 0LL);
    }
  }
  return (unsigned int)v9;
}
