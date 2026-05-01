/*
 * XREFs of sub_180007110 @ 0x180007110
 * Callers:
 *     sub_180006BF8 @ 0x180006BF8 (sub_180006BF8.c)
 * Callees:
 *     sub_180004044 @ 0x180004044 (sub_180004044.c)
 *     sub_180004E98 @ 0x180004E98 (sub_180004E98.c)
 *     __security_check_cookie @ 0x1800440D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180007110(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  DWORD LastError; // ebx
  FARPROC RtlSubscribeWnfStateChangeNotification; // rax
  unsigned int v8; // esi
  __int64 v9; // rbx
  HMODULE ModuleHandleW; // rax
  unsigned int v12; // [rsp+50h] [rbp-38h] BYREF
  int v13; // [rsp+54h] [rbp-34h] BYREF
  __int64 v14; // [rsp+58h] [rbp-30h] BYREF

  v14 = a2;
  if ( *a1 )
    return 0LL;
  v12 = 0;
  v13 = 0;
  sub_180004044((__int64)&v14, a2, a3, (__int64)&v12, 0LL, (__int64)&v13);
  v5 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_180004E98(v5);
    SetLastError(LastError);
  }
  *a1 = 0LL;
  RtlSubscribeWnfStateChangeNotification = (FARPROC)qword_18005AC88;
  v8 = v12;
  v9 = v14;
  if ( qword_18005AC88 )
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64 (__fastcall *)(), __int64, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             a1,
             v9,
             v8,
             sub_180007250,
             a3,
             0LL,
             0,
             0);
  ModuleHandleW = hModule;
  if ( !hModule )
  {
    ModuleHandleW = GetModuleHandleW(L"ntdll.dll");
    hModule = ModuleHandleW;
  }
  RtlSubscribeWnfStateChangeNotification = GetProcAddress(ModuleHandleW, "RtlSubscribeWnfStateChangeNotification");
  qword_18005AC88 = (__int64)RtlSubscribeWnfStateChangeNotification;
  if ( RtlSubscribeWnfStateChangeNotification )
    return ((__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64 (__fastcall *)(), __int64, _QWORD, _DWORD, _DWORD))RtlSubscribeWnfStateChangeNotification)(
             a1,
             v9,
             v8,
             sub_180007250,
             a3,
             0LL,
             0,
             0);
  else
    return 3221225785LL;
}
