/*
 * XREFs of sub_180035580 @ 0x180035580
 * Callers:
 *     sub_180031C0C @ 0x180031C0C (sub_180031C0C.c)
 *     sub_180035580 @ 0x180035580 (sub_180035580.c)
 * Callees:
 *     sub_18003542C @ 0x18003542C (sub_18003542C.c)
 *     sub_180035580 @ 0x180035580 (sub_180035580.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     atexit @ 0x180039D78 (atexit.c)
 *     _Init_thread_footer @ 0x18003A020 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18003A088 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

LSTATUS __fastcall sub_180035580(
        HKEY a1,
        const wchar_t *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        REGSAM samDesired,
        LPSECURITY_ATTRIBUTES lpSecurityAttributes,
        HKEY *a8)
{
  const WCHAR *v8; // rdi
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  const WCHAR *v12; // r14
  int v13; // ebx
  int v14; // ebx
  HKEY v15; // rcx
  NTSTATUS (__stdcall *NtDeleteKey)(HANDLE); // rax
  HMODULE Library; // rax
  LSTATUS result; // eax
  int v19; // ebx
  DWORD dwDisposition; // [rsp+50h] [rbp-B0h] BYREF
  HKEY hKey; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v22[528]; // [rsp+60h] [rbp-A0h] BYREF

  v8 = a2;
  if ( a8 )
    *a8 = 0LL;
  if ( !a2 )
    return 87;
  v10 = wcschr(a2, 0x5Cu);
  v11 = v10;
  if ( v10 )
  {
    if ( (unsigned __int64)(v10 - v8) < 0x104 )
    {
      o_wcsncpy_s(v22, 260LL, v8);
      v12 = (const WCHAR *)v22;
      v8 = v11 + 1;
      goto LABEL_8;
    }
    return 87;
  }
  v12 = v8;
LABEL_8:
  hKey = 0LL;
  v13 = sub_18003542C(a1, v12, samDesired, &hKey);
  if ( dword_180050080 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180050080);
    if ( dword_180050080 == -1 )
    {
      atexit(sub_18003D210);
      Init_thread_footer(&dword_180050080);
    }
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    if ( (unsigned int)(v14 - 1) <= 1 )
    {
      v15 = hKey;
      dwDisposition = 0;
      if ( hKey )
      {
        dwDisposition = 2;
        goto LABEL_23;
      }
LABEL_19:
      result = RegCreateKeyExW(a1, v12, 0, 0LL, 0, samDesired, lpSecurityAttributes, &hKey, &dwDisposition);
      if ( result )
        return result;
      if ( dwDisposition != 1 )
      {
        v19 = 5;
        goto LABEL_28;
      }
      v15 = hKey;
LABEL_23:
      if ( v12 == v8 )
      {
        if ( a8 )
          *a8 = v15;
        return 0;
      }
      v19 = sub_180035580((int)v15, (int)v8, 0, 0, 0, samDesired, lpSecurityAttributes, (__int64)a8);
LABEL_28:
      RegCloseKey(hKey);
      return v19;
    }
  }
  else if ( hLibModule && (NtDeleteKey = (NTSTATUS (__stdcall *)(HANDLE))qword_180050090) != 0LL
         || (Library = LoadLibraryExW(L"ntdll.dll", 0LL, 0x800u), (hLibModule = Library) != 0LL)
         && (NtDeleteKey = (NTSTATUS (__stdcall *)(HANDLE))GetProcAddress(Library, "NtDeleteKey"),
             (qword_180050090 = (__int64)NtDeleteKey) != 0) )
  {
    if ( !((unsigned int (__fastcall *)(HKEY))NtDeleteKey)(hKey) )
    {
      RegCloseKey(hKey);
      hKey = 0LL;
      dwDisposition = 0;
      goto LABEL_19;
    }
  }
  if ( hKey )
    RegCloseKey(hKey);
  return 5;
}
