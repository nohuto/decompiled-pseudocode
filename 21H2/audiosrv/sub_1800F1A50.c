/*
 * XREFs of sub_1800F1A50 @ 0x1800F1A50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800085F0 @ 0x1800085F0 (sub_1800085F0.c)
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18000F930 @ 0x18000F930 (sub_18000F930.c)
 *     sub_180033A70 @ 0x180033A70 (sub_180033A70.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180054268 @ 0x180054268 (sub_180054268.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BD9FC @ 0x1800BD9FC (sub_1800BD9FC.c)
 *     sub_1800C4FD8 @ 0x1800C4FD8 (sub_1800C4FD8.c)
 *     sub_1800DA95C @ 0x1800DA95C (sub_1800DA95C.c)
 */

__int64 __fastcall sub_1800F1A50(__int64 a1, __int64 *a2, int a3, __int64 a4, __int128 *a5, _QWORD *a6)
{
  __int64 v10; // rcx
  struct _TP_TIMER *v11; // rax
  __int64 v12; // r8
  __int64 v13; // rax
  void *v14; // rsi
  __int64 v15; // rcx
  __vcrt_trace_logging_provider *v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  unsigned int v22; // ebx
  __int64 v23; // rdx
  unsigned __int64 v24; // r8
  int v26; // [rsp+50h] [rbp-89h] BYREF
  void *v27; // [rsp+58h] [rbp-81h] BYREF
  void *v28; // [rsp+60h] [rbp-79h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-71h]
  struct _TP_TIMER *pv[7]; // [rsp+70h] [rbp-69h] BYREF
  __int128 v31; // [rsp+A8h] [rbp-31h] BYREF
  _OWORD v32[2]; // [rsp+B8h] [rbp-21h] BYREF
  _UNKNOWN *retaddr; // [rsp+128h] [rbp+4Fh]

  v29 = a6;
  sub_1800DA95C(v32, a5);
  v11 = (struct _TP_TIMER *)sub_180054268(v10);
  sub_1800085F0(pv, v11, v12, (struct _TP_TIMER *)L"asm_AudioServerInitializeStream");
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 160LL))(*a2);
  v27 = 0LL;
  v14 = (void *)v13;
  v31 = xmmword_18015B730;
  v16 = (__vcrt_trace_logging_provider *)sub_180054268(v15);
  v17 = (__int64)v16;
  if ( *(_DWORD *)v16 > 4u && __vcrt_trace_logging_provider::_TlgKeywordOn(v16, 0LL) )
  {
    v18 = *a2;
    v28 = v14;
    v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v18 + 104LL))(v18);
    sub_1800BD9FC(v17, byte_180168D49, v19, v20, (__int64)&v26, &v28);
  }
  v21 = sub_18000F930(a1, (__int64)v14, 0, a3, a4, (__int64)&v31, a5, (__int64)&v27, *a2, v29);
  v22 = v21;
  if ( v21 >= 0 )
  {
    sub_180033A70(v27);
    v22 = 0;
  }
  else
  {
    sub_18004BD84((int)retaddr, 354, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp", v21);
  }
  sub_18000F690((__int64)pv, v23, v24);
  sub_1800C4FD8((__int64)v32);
  return v22;
}
