/*
 * XREFs of sub_180109FC0 @ 0x180109FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_180109980 @ 0x180109980 (sub_180109980.c)
 */

void __fastcall sub_180109FC0(__int64 a1)
{
  ULONGLONG TickCount64; // rbx
  __int64 *v3; // rax
  __int64 v4; // rdx
  __vcrt_trace_logging_provider **v5; // rax
  __vcrt_trace_logging_provider *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 *v10; // rdx
  struct _FILETIME v11; // [rsp+50h] [rbp-10h] BYREF
  struct _FILETIME v12; // [rsp+58h] [rbp-8h] BYREF
  struct _FILETIME v13; // [rsp+80h] [rbp+20h] BYREF
  struct _FILETIME v14; // [rsp+88h] [rbp+28h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  struct _FILETIME SystemTimeAsFileTime; // [rsp+98h] [rbp+38h] BYREF

  if ( *(_QWORD *)(a1 + 8) && *(_QWORD *)(a1 + 16) && *(_QWORD *)(a1 + 24) )
  {
    SystemTimeAsFileTime = 0LL;
    TickCount64 = GetTickCount64();
    GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
    v3 = *(__int64 **)(a1 + 24);
    v14 = SystemTimeAsFileTime;
    v13 = SystemTimeAsFileTime;
    v4 = *v3;
    v13 = (struct _FILETIME)(10000 * (**(_QWORD **)(a1 + 16) - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v14 = (struct _FILETIME)(10000 * (v4 - TickCount64) + *(_QWORD *)&SystemTimeAsFileTime);
    v5 = *(__vcrt_trace_logging_provider ***)(a1 + 32);
    v11 = v14;
    v12 = v13;
    v6 = *v5;
    if ( **(_BYTE **)(a1 + 8) )
    {
      if ( *(_DWORD *)v6 > 3u && __vcrt_trace_logging_provider::_TlgKeywordOn(v6, 0x400000000000uLL) )
      {
        v10 = (unsigned __int8 *)&unk_180169138;
LABEL_11:
        v13.dwLowDateTime = *(_DWORD *)(a1 + 56);
        v14.dwLowDateTime = *(_DWORD *)(a1 + 52);
        v15 = *(_DWORD *)(a1 + 48);
        sub_180109980(v7, v10, v8, v9, (__int64)&v12, (__int64)&v11, (__int64)&v15, (__int64)&v14, (__int64)&v13);
      }
    }
    else if ( *(_DWORD *)v6 > 3u && __vcrt_trace_logging_provider::_TlgKeywordOn(v6, 0x400000000000uLL) )
    {
      v10 = (unsigned __int8 *)&unk_1801691CD;
      goto LABEL_11;
    }
  }
}
