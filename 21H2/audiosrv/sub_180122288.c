/*
 * XREFs of sub_180122288 @ 0x180122288
 * Callers:
 *     sub_1801217EC @ 0x1801217EC (sub_1801217EC.c)
 * Callees:
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1801184CC @ 0x1801184CC (sub_1801184CC.c)
 */

void sub_180122288()
{
  __int64 v0; // rcx
  __int64 v1; // r8
  __int64 v2; // r9
  void *v3; // r10
  void *v4; // r11
  void *v5; // [rsp+40h] [rbp-18h] BYREF
  void *v6; // [rsp+48h] [rbp-10h] BYREF
  int v7; // [rsp+78h] [rbp+20h] BYREF

  if ( (unsigned int)dword_18019C448 > 4 )
  {
    if ( __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           0x400000000000uLL) )
    {
      v7 = v2;
      v5 = v3;
      v6 = v4;
      sub_1801184CC(v0, byte_18016A0C8, v1, v2, &v6, &v5, (__int64)&v7);
    }
  }
}
