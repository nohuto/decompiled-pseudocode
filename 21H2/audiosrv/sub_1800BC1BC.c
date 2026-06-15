/*
 * XREFs of sub_1800BC1BC @ 0x1800BC1BC
 * Callers:
 *     pfnti @ 0x1800BC740 (pfnti.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BB58C @ 0x1800BB58C (sub_1800BB58C.c)
 *     sub_1800BB660 @ 0x1800BB660 (sub_1800BB660.c)
 *     sub_1800BBE40 @ 0x1800BBE40 (sub_1800BBE40.c)
 *     sub_1800BBF8C @ 0x1800BBF8C (sub_1800BBF8C.c)
 */

char __fastcall sub_1800BC1BC(__int64 a1)
{
  char result; // al
  unsigned __int32 v3; // r9d
  __vcrt_trace_logging_provider *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rcx
  __vcrt_trace_logging_provider *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // edi
  __vcrt_trace_logging_provider *v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  DWORD CurrentProcessId; // eax
  __int64 v20; // r8
  int v21; // [rsp+48h] [rbp-9h] BYREF
  int v22; // [rsp+4Ch] [rbp-5h] BYREF
  int v23; // [rsp+50h] [rbp-1h] BYREF
  int v24; // [rsp+54h] [rbp+3h] BYREF
  int v25; // [rsp+58h] [rbp+7h] BYREF
  _DWORD v26[2]; // [rsp+60h] [rbp+Fh] BYREF
  void *v27; // [rsp+68h] [rbp+17h] BYREF
  void *v28; // [rsp+70h] [rbp+1Fh] BYREF
  GUID *p_pguid; // [rsp+78h] [rbp+27h] BYREF
  void *v30; // [rsp+80h] [rbp+2Fh] BYREF
  GUID pguid; // [rsp+88h] [rbp+37h] BYREF

  result = sub_1800BBE40(a1);
  if ( result )
  {
    v3 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
    if ( v3 >= 3 )
    {
      if ( v3 == 3 )
      {
        v8 = *(void (__fastcall ****)(_QWORD, _QWORD, _QWORD))(a1 + 32);
        if ( v8 )
        {
          (**v8)(v8, *(unsigned int *)(a1 + 16), *(_QWORD *)(a1 + 24));
          *(_BYTE *)(a1 + 40) = 1;
        }
        result = sub_1800BBF8C(a1);
        if ( result )
        {
          pguid = (GUID)xmmword_18015B730;
          CoCreateGuid(&pguid);
          v9 = *(__vcrt_trace_logging_provider **)(a1 + 8);
          if ( *(_DWORD *)v9 > 2u && __vcrt_trace_logging_provider::_TlgKeywordOn(v9, 0x400000000001uLL) )
          {
            v23 = *(_DWORD *)(a1 + 16);
            v28 = *(void **)(a1 + 24);
            p_pguid = &pguid;
            sub_1800BB58C(v10, byte_18016636D, v11, v12, (__int64 *)&p_pguid, &v28, (__int64)&v23);
          }
          RtlPublishWnfStateData(0x2821B2CA3BC2075LL, 0LL, &pguid, 16LL, 0LL);
          v13 = *(_QWORD *)(a1 + 32);
          if ( v13 )
          {
            v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            if ( v14 )
            {
              v15 = *(__vcrt_trace_logging_provider **)(a1 + 8);
              if ( *(_DWORD *)v15 > 4u )
              {
                if ( __vcrt_trace_logging_provider::_TlgKeywordOn(v15, 1uLL) )
                {
                  v24 = *(_DWORD *)(a1 + 16);
                  v30 = *(void **)(a1 + 24);
                  v25 = v14;
                  sub_1800BB660(v16, byte_18016631F, v17, v18, (__int64)&v25, &v30, (__int64)&v24);
                }
              }
            }
          }
          else
          {
            v14 = 0;
          }
          CurrentProcessId = GetCurrentProcessId();
          v20 = *(unsigned int *)(a1 + 16);
          v26[1] = v14;
          v26[0] = CurrentProcessId;
          return ReportCoreHang(v26, (unsigned int)(v14 != 0) + 1, v20, 8LL);
        }
      }
    }
    else
    {
      v4 = *(__vcrt_trace_logging_provider **)(a1 + 8);
      if ( *(_DWORD *)v4 > 3u )
      {
        result = __vcrt_trace_logging_provider::_TlgKeywordOn(v4, 1uLL);
        if ( result )
        {
          v21 = *(_DWORD *)(a1 + 16);
          v27 = *(void **)(a1 + 24);
          v22 = v7;
          return sub_1800BB660(v5, byte_18016639B, v6, v7, (__int64)&v22, &v27, (__int64)&v21);
        }
      }
    }
  }
  return result;
}
