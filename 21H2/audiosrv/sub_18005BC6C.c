/*
 * XREFs of sub_18005BC6C @ 0x18005BC6C
 * Callers:
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 * Callees:
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 *     sub_180055424 @ 0x180055424 (sub_180055424.c)
 *     sub_1800579A4 @ 0x1800579A4 (sub_1800579A4.c)
 *     sub_18005BD78 @ 0x18005BD78 (sub_18005BD78.c)
 *     sub_18005C098 @ 0x18005C098 (sub_18005C098.c)
 *     sub_18005C61C @ 0x18005C61C (sub_18005C61C.c)
 *     sub_18005C718 @ 0x18005C718 (sub_18005C718.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800B7704 @ 0x1800B7704 (sub_1800B7704.c)
 */

__int64 __fastcall sub_18005BC6C(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  _QWORD *v8; // r15
  _QWORD *v9; // r14
  unsigned __int64 v10; // r8
  int v11; // ebx
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+68h] [rbp+10h] BYREF

  if ( !a2 || !a4 )
  {
    v11 = -2147024809;
LABEL_16:
    if ( *(_QWORD *)(a1 + 40) )
      sub_1800579A4((_QWORD *)(a1 + 40), 0LL);
    if ( *(_QWORD *)(a1 + 48) )
      sub_1800579A4((_QWORD *)(a1 + 48), 0LL);
    return (unsigned int)v11;
  }
  v8 = (_QWORD *)(a1 + 40);
  if ( *(_QWORD *)(a1 + 40) || (v9 = (_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48)) )
  {
    v11 = -2147418113;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)sub_18005C718()
    && (unsigned int)dword_18019C448 > 4
    && __vcrt_trace_logging_provider::_TlgKeywordOn(
         (__vcrt_trace_logging_provider *)&dword_18019C448,
         (const struct _TlgProvider_t *)0x10,
         v10) )
  {
    v16 = a2;
    sub_1800B7704(v13, (unsigned int)&unk_18016C088, v14, v15, (__int64)&v16);
  }
  sub_18005C61C(a4, a2);
  v11 = sub_18005BD78(a2, a4, v8);
  if ( v11 < 0 )
    goto LABEL_16;
  v11 = sub_180029DDC(a2, a4, v9);
  if ( v11 < 0 )
    goto LABEL_16;
  v11 = sub_180055424(a2, a4, (_QWORD *)(a1 + 56));
  if ( v11 < 0 )
    goto LABEL_16;
  v11 = sub_18005C098(a2, a4, a1 + 64);
  if ( v11 < 0 )
    goto LABEL_16;
  *(_BYTE *)(a1 + 73) = a3;
  if ( !*v8 || !*v9 )
    v11 = -2147418113;
  if ( v11 < 0 )
    goto LABEL_16;
  return (unsigned int)v11;
}
