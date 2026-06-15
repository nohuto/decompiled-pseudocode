/*
 * XREFs of sub_180038664 @ 0x180038664
 * Callers:
 *     sub_180046560 @ 0x180046560 (sub_180046560.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800F59B4 @ 0x1800F59B4 (sub_1800F59B4.c)
 *     sub_1800F5B0C @ 0x1800F5B0C (sub_1800F5B0C.c)
 *     sub_1800F665C @ 0x1800F665C (sub_1800F665C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180038664(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  int v3; // esi
  __int64 v4; // rdx
  __vcrt_trace_logging_provider *v5; // rcx
  unsigned __int64 v6; // r8
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  const char *v10; // rax
  const char *v11; // [rsp+40h] [rbp-28h] BYREF
  _QWORD v12[4]; // [rsp+48h] [rbp-20h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+90h] [rbp+28h] BYREF
  int v14; // [rsp+98h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+A0h] [rbp+38h] BYREF
  char *v16; // [rsp+A8h] [rbp+40h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 8));
  v13 = v2;
  if ( *(_BYTE *)a1 )
  {
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    if ( (__int64)((*(_QWORD *)&SystemTimeAsFileTime - *(_QWORD *)(a1 + 224)) / 0x989680uLL) >= 86400 )
    {
      v16 = 0LL;
      v12[0] = a1;
      v12[1] = &v16;
      v3 = sub_1800F5B0C(v12);
      SystemTimeAsFileTime = *(struct _FILETIME *)(a1 + 224);
      v5 = (__vcrt_trace_logging_provider *)sub_180008448(SystemTimeAsFileTime.dwHighDateTime, sub_1800B6240)[1];
      if ( *(_DWORD *)v5 > 4u
        && __vcrt_trace_logging_provider::_TlgKeywordOn(v5, (const struct _TlgProvider_t *)0x400000000000LL, v6) )
      {
        v10 = "none";
        if ( v3 >= 0 )
          v10 = v16;
        v11 = v10;
        v12[0] = SystemTimeAsFileTime;
        LODWORD(v13) = 1;
        v14 = v3;
        sub_1800F59B4(
          v7,
          (unsigned int)&unk_180168E87,
          v8,
          v9,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)v12,
          (__int64)&v11);
      }
      LOBYTE(v4) = 1;
      sub_1800F665C(a1, v4);
      if ( v16 )
        sub_180033A70(v16);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
