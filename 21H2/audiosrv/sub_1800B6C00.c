/*
 * XREFs of sub_1800B6C00 @ 0x1800B6C00
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_1800B6440 @ 0x1800B6440 (sub_1800B6440.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 */

char __fastcall sub_1800B6C00(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rdi
  __int64 *v6; // rax
  unsigned __int64 v7; // r8
  __vcrt_trace_logging_provider *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+68h] [rbp+27h] BYREF
  int v14; // [rsp+6Ch] [rbp+2Bh] BYREF
  int v15; // [rsp+70h] [rbp+2Fh] BYREF
  int v16; // [rsp+74h] [rbp+33h] BYREF
  __int64 v17; // [rsp+78h] [rbp+37h] BYREF
  __int64 v18; // [rsp+80h] [rbp+3Fh] BYREF
  void *v19; // [rsp+88h] [rbp+47h] BYREF
  int v20; // [rsp+C0h] [rbp+7Fh] BYREF

  v4 = a3;
  v6 = sub_180008448(a1, sub_1800B6240);
  v8 = (__vcrt_trace_logging_provider *)v6[1];
  if ( *(_DWORD *)v8 > 4u )
  {
    LOBYTE(v6) = __vcrt_trace_logging_provider::_TlgKeywordOn(v8, (const struct _TlgProvider_t *)0x400000000000LL, v7);
    if ( (_BYTE)v6 )
    {
      v20 = *(_DWORD *)(a1 + 96);
      v19 = *(void **)(a1 + 88);
      v13 = *(_DWORD *)(a1 + 84);
      v14 = *(_DWORD *)(a1 + 80);
      v15 = *(_DWORD *)(a1 + 76);
      v16 = *(_DWORD *)(a1 + 72);
      v17 = a2;
      v18 = v4;
      LOBYTE(v6) = sub_1800B6440(
                     v9,
                     byte_180165D3A,
                     v10,
                     v11,
                     (__int64)&v16,
                     (__int64)&v15,
                     (__int64)&v14,
                     (__int64)&v13,
                     &v19,
                     (__int64)&v20,
                     (__int64)&v18,
                     (__int64)&v17);
    }
  }
  return (char)v6;
}
