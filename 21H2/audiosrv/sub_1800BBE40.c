/*
 * XREFs of sub_1800BBE40 @ 0x1800BBE40
 * Callers:
 *     sub_1800BC1BC @ 0x1800BC1BC (sub_1800BC1BC.c)
 * Callees:
 *     sub_1800521E8 @ 0x1800521E8 (sub_1800521E8.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BC124 @ 0x1800BC124 (sub_1800BC124.c)
 *     sub_1800BC404 @ 0x1800BC404 (sub_1800BC404.c)
 */

char __fastcall sub_1800BBE40(__int64 a1)
{
  __vcrt_trace_logging_provider *v2; // rcx
  __int64 v3; // rcx
  char *v4; // rax
  unsigned __int8 *v5; // rdx
  __vcrt_trace_logging_provider *v6; // rcx
  __int64 v7; // rcx
  _BYTE v9[4]; // [rsp+30h] [rbp-78h] BYREF
  int v10; // [rsp+34h] [rbp-74h] BYREF
  char v11; // [rsp+38h] [rbp-70h] BYREF
  _BYTE v12[32]; // [rsp+58h] [rbp-50h] BYREF
  char v13; // [rsp+78h] [rbp-30h] BYREF

  if ( IsDebuggerPresent() )
  {
    v2 = *(__vcrt_trace_logging_provider **)(a1 + 8);
    if ( *(_DWORD *)v2 <= 5u || !__vcrt_trace_logging_provider::_TlgKeywordOn(v2, 1uLL) )
      return 0;
    v4 = &v11;
    v5 = (unsigned __int8 *)&unk_1801662CF;
    goto LABEL_15;
  }
  if ( (unsigned __int8)sub_1800BC124() )
  {
    v10 = 17;
    RtlGetDeviceFamilyInfoEnum(0LL, &v10, 0LL);
    v6 = *(__vcrt_trace_logging_provider **)(a1 + 8);
    if ( v10 != 6 )
    {
      if ( *(_DWORD *)v6 <= 5u || !__vcrt_trace_logging_provider::_TlgKeywordOn(v6, 1uLL) )
        return 0;
      v4 = &v13;
      v5 = (unsigned __int8 *)&unk_180166280;
LABEL_15:
      sub_1800521E8(v3, v5, 0LL, 0LL, 2, (__int64)v4);
      return 0;
    }
    if ( *(_DWORD *)v6 > 5u && __vcrt_trace_logging_provider::_TlgKeywordOn(v6, 1uLL) )
      sub_1800521E8(v7, byte_1801662A4, 0LL, 0LL, 2, (__int64)v12);
  }
  v9[0] = 0;
  if ( (int)sub_1800BC404(a1, v9) < 0 )
    return 0;
  if ( !v9[0] )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
    return 0;
  }
  return 1;
}
