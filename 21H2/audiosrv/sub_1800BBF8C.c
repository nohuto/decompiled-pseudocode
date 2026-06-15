/*
 * XREFs of sub_1800BBF8C @ 0x1800BBF8C
 * Callers:
 *     sub_1800BC1BC @ 0x1800BC1BC (sub_1800BC1BC.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 */

bool __fastcall sub_1800BBF8C(__int64 a1)
{
  signed __int32 v1; // ebx
  __vcrt_trace_logging_provider *v2; // rcx
  signed __int32 v3; // ebx
  __int64 v4; // rcx
  signed __int32 v6; // [rsp+30h] [rbp-48h] BYREF
  char v7[32]; // [rsp+38h] [rbp-40h] BYREF
  signed __int32 *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  v1 = _InterlockedExchangeAdd(&dword_18019FA70, 1u);
  v2 = *(__vcrt_trace_logging_provider **)(a1 + 8);
  v3 = v1 + 1;
  if ( *(_DWORD *)v2 > 5u && __vcrt_trace_logging_provider::_TlgKeywordOn(v2, 1uLL) )
  {
    v10 = 0;
    v8 = &v6;
    v6 = v3;
    v9 = 4;
    sub_1800521E8(v4, byte_1801662F9, 0LL, 0LL, 3, (__int64)v7);
  }
  return v3 == 1;
}
