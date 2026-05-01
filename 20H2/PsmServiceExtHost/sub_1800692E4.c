/*
 * XREFs of sub_1800692E4 @ 0x1800692E4
 * Callers:
 *     sub_18006A010 @ 0x18006A010 (sub_18006A010.c)
 *     sub_18006A1D0 @ 0x18006A1D0 (sub_18006A1D0.c)
 * Callees:
 *     sub_18000B63C @ 0x18000B63C (sub_18000B63C.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180067CC4 @ 0x180067CC4 (sub_180067CC4.c)
 *     sub_18006EA80 @ 0x18006EA80 (sub_18006EA80.c)
 *     sub_18006EF94 @ 0x18006EF94 (sub_18006EF94.c)
 */

__int64 __fastcall sub_1800692E4(__int64 a1, void *a2, __int64 a3, void *a4, int a5)
{
  __int64 v5; // rbx
  LPWSTR v9; // r12
  int v10; // r14d
  LPWSTR FileNameW; // r13
  ULONG v12; // ebx
  int v13; // edi
  DWORD ProcessId; // esi
  DWORD v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD v19; // ebx
  _BYTE v21[4]; // [rsp+70h] [rbp-90h] BYREF
  ULONG ReturnLength; // [rsp+74h] [rbp-8Ch] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  DWORD v24; // [rsp+7Ch] [rbp-84h] BYREF
  DWORD v25; // [rsp+80h] [rbp-80h] BYREF
  int v26; // [rsp+84h] [rbp-7Ch] BYREF
  int v27; // [rsp+88h] [rbp-78h] BYREF
  HANDLE Process; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+98h] [rbp-68h] BYREF
  LPWSTR v30; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v31[144]; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+140h] [rbp+40h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+160h] [rbp+60h] BYREF
  LPCWSTR pszPath; // [rsp+168h] [rbp+68h]
  _BYTE v35[8]; // [rsp+390h] [rbp+290h] BYREF
  LPCWSTR v36; // [rsp+398h] [rbp+298h]

  v5 = *(_QWORD *)&qword_1800B41A8;
  Process = a2;
  sub_18000B63C(&v27, v31);
  v9 = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
    sub_18002E278((__int64)&dword_1800B31E0, (unsigned __int8 *)dword_18009B660, 0LL, 0LL, 2u, &v32);
  if ( a5 )
  {
    v10 = -1073741583;
  }
  else if ( (unsigned __int8)sub_18006EA80(v5, a3) && (*(_DWORD *)(a3 + 32) & 5) == 1 )
  {
    v10 = sub_18006EF94(v5 + 1616, a2, a3, a4);
    if ( v10 >= 0 )
      v10 = 0;
  }
  else
  {
    v10 = -1073741584;
  }
  if ( dword_1800B31E0 )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    ReturnLength = 0;
    if ( NtQueryInformationProcess(a4, ProcessImageFileNameWin32, v35, 0x228u, &ReturnLength) >= 0 )
      v9 = PathFindFileNameW(v36);
    if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 0x400000000001LL) )
    {
      v12 = *(_DWORD *)(a3 + 28);
      v13 = *(_DWORD *)(a3 + 32);
      ProcessId = GetProcessId(a4);
      v15 = GetProcessId(Process);
      LOBYTE(v16) = *(_BYTE *)(a3 + 36);
      v25 = v15;
      v29 = 0x1000000LL;
      Process = v9;
      v30 = FileNameW;
      ReturnLength = v12;
      v23 = v13;
      v21[0] = v16;
      v24 = ProcessId;
      v26 = v10;
      sub_180067CC4(
        v16,
        byte_18009B697,
        v17,
        v18,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)v21,
        (__int64)&v23,
        (__int64)&ReturnLength,
        (void **)&v30,
        &Process,
        (__int64)&v29);
    }
  }
  if ( v27 )
  {
    v19 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v19, 0LL);
    }
  }
  return (unsigned int)v10;
}
