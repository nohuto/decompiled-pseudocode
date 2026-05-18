/*
 * XREFs of sub_18011E094 @ 0x18011E094
 * Callers:
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_1801208C0 @ 0x1801208C0 (sub_1801208C0.c)
 *     sub_180120FA0 @ 0x180120FA0 (sub_180120FA0.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     sub_18011E094 @ 0x18011E094 (sub_18011E094.c)
 *     sub_18011FD28 @ 0x18011FD28 (sub_18011FD28.c)
 *     sub_180122450 @ 0x180122450 (sub_180122450.c)
 *     sub_180122574 @ 0x180122574 (sub_180122574.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x180122638 (-is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_18011E094(__int64 a1, _QWORD *a2, __m128i *a3)
{
  struct _Mtx_internal_imp_t *v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  volatile signed __int32 *v12; // rsi
  __crt_strtox *v13; // rsi
  const struct __crt_strtox::big_integer *v14; // rdx
  __int64 *v15; // rdx
  __crt_strtox *v16; // rsi
  const struct __crt_strtox::big_integer *v17; // rdx
  int v18; // eax
  struct _Mtx_internal_imp_t *v20; // [rsp+20h] [rbp-E0h]
  __m128i v21; // [rsp+28h] [rbp-D8h] BYREF
  __m128i v22; // [rsp+38h] [rbp-C8h]
  __m128i v23; // [rsp+48h] [rbp-B8h] BYREF
  __m128i v24; // [rsp+58h] [rbp-A8h]
  _QWORD v25[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v26[4]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v27; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v28[4]; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v29; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v30[2]; // [rsp+E8h] [rbp-18h] BYREF
  __m128i si128; // [rsp+F8h] [rbp-8h]

  v6 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v20 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v7 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v7 )
  {
LABEL_31:
    std::_Throw_C_error(v7);
    JUMPOUT(0x18011E36ELL);
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v28, a2);
  sub_18011FD28(a1 + 144, &v27, v8);
  v9 = v27;
  unknown_libname_103(v28);
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801225A8(v9 + 64, v10) )
  {
    v25[2] = 0LL;
    v25[3] = 0LL;
    sub_18001277C(v25, (__int64)a2);
    v13 = (__crt_strtox *)sub_180122450(v9 + 64, v25);
    if ( (unsigned __int8)sub_180122630(v13) )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
      LOWORD(v30[0]) = 0;
      std::wstring::assign((char *)v30, L"Value", 5uLL);
      v15 = v30;
      if ( si128.m128i_i64[1] >= 8uLL )
        v15 = (__int64 *)v30[0];
      if ( (unsigned __int8)sub_1801225A8(v13, v15)
        && (v26[2] = 0LL,
            v26[3] = 0LL,
            sub_18001277C(v26, (__int64)v30),
            v16 = (__crt_strtox *)sub_180122450(v13, v26),
            __crt_strtox::is_zero(v16, v17)) )
      {
        sub_180122574(v16, &v23);
        if ( a3 != &v23 )
        {
          unknown_libname_103(a3->m128i_i64);
          *a3 = v23;
          a3[1] = v24;
          v24 = _mm_load_si128((const __m128i *)&xmmword_180142440);
          v23.m128i_i16[0] = 0;
        }
        unknown_libname_103(v23.m128i_i64);
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      unknown_libname_103(v30);
    }
    else if ( __crt_strtox::is_zero(v13, v14) )
    {
      v22 = 0LL;
      sub_18001277C(&v21, (__int64)v13 + 8);
      if ( a3 != &v21 )
      {
        unknown_libname_103(a3->m128i_i64);
        *a3 = v21;
        a3[1] = v22;
        v22 = _mm_load_si128((const __m128i *)&xmmword_180142440);
        v21.m128i_i16[0] = 0;
      }
      unknown_libname_103(v21.m128i_i64);
      v11 = 0;
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v29 = 0LL;
    sub_18008D440(a1, &v29);
    if ( (_QWORD)v29 )
      v11 = sub_18011E094(v29, a2, a3);
    else
      v11 = 2;
    v12 = (volatile signed __int32 *)*((_QWORD *)&v29 + 1);
    if ( *((_QWORD *)&v29 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v29 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
        if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
      }
      v6 = v20;
    }
  }
  v18 = Mtx_unlock(v6);
  if ( v18 )
  {
    std::_Throw_C_error(v18);
    goto LABEL_31;
  }
  return v11;
}
