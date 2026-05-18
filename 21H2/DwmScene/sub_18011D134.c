/*
 * XREFs of sub_18011D134 @ 0x18011D134
 * Callers:
 *     sub_180120D30 @ 0x180120D30 (sub_180120D30.c)
 *     sub_180120D40 @ 0x180120D40 (sub_180120D40.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011D078 @ 0x18011D078 (sub_18011D078.c)
 *     sub_18011FC60 @ 0x18011FC60 (sub_18011FC60.c)
 *     sub_180120DD8 @ 0x180120DD8 (sub_180120DD8.c)
 *     sub_180122450 @ 0x180122450 (sub_180122450.c)
 *     sub_1801224AC @ 0x1801224AC (sub_1801224AC.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 *     sub_180122620 @ 0x180122620 (sub_180122620.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011D134(__int64 a1, _QWORD *a2, double a3, int a4)
{
  struct _Mtx_internal_imp_t *v7; // rbx
  int v8; // eax
  __int64 v9; // r15
  _QWORD *v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // r14
  __int64 *v13; // rdx
  __int64 v14; // r15
  int v15; // eax
  __int64 v17[2]; // [rsp+28h] [rbp-79h] BYREF
  __int64 v18; // [rsp+38h] [rbp-69h]
  __int64 v19; // [rsp+40h] [rbp-61h]
  __int64 v20[2]; // [rsp+48h] [rbp-59h] BYREF
  __int64 v21; // [rsp+58h] [rbp-49h]
  __int64 v22; // [rsp+60h] [rbp-41h]
  __int64 v23; // [rsp+68h] [rbp-39h]
  __int64 v24[2]; // [rsp+70h] [rbp-31h] BYREF
  __m128i si128; // [rsp+80h] [rbp-21h]
  __int64 v26[4]; // [rsp+90h] [rbp-11h] BYREF

  v7 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v23 = a1 + 64;
  v8 = Mtx_lock((_Mtx_t)(a1 + 64));
  if ( v8 )
  {
LABEL_28:
    std::_Throw_C_error(v8);
    JUMPOUT(0x18011D3CALL);
  }
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v26, a2);
  sub_18011FC60(a1 + 144, v17, v26);
  v9 = v17[0] + 64;
  v10 = a2;
  if ( a2[3] >= 8uLL )
    v10 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801225A8(v17[0] + 64, v10) )
  {
    v11 = 2;
    if ( a4 == 2 )
    {
      v11 = 3;
    }
    else
    {
      v21 = 0LL;
      v22 = 0LL;
      sub_18001277C(v20, (__int64)a2);
      v12 = sub_180122450(v9, v20);
      if ( (unsigned __int8)sub_180122630(v12) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
        LOWORD(v24[0]) = 0;
        std::wstring::assign((char *)v24, L"Value", 5uLL);
        v13 = v24;
        if ( si128.m128i_i64[1] >= 8uLL )
          v13 = (__int64 *)v24[0];
        if ( (unsigned __int8)sub_1801225A8(v12, v13)
          && (v18 = 0LL,
              v19 = 0LL,
              sub_18001277C(v17, (__int64)v24),
              v14 = sub_180122450(v12, v17),
              (unsigned __int8)sub_180122620(v14)) )
        {
          if ( sub_1801224AC(v14) != a3 )
          {
            v18 = 0LL;
            v19 = 0LL;
            sub_18001277C(v17, (__int64)v24);
            sub_18011D078(v12, v17, a3);
            v11 = 1;
          }
        }
        else
        {
          v11 = 5;
        }
        unknown_libname_103(v24);
      }
      else if ( (unsigned __int8)sub_180122620(v12) )
      {
        if ( sub_1801224AC(v12) != a3 )
        {
          v21 = 0LL;
          v22 = 0LL;
          sub_18001277C(v20, (__int64)a2);
          sub_18011D078(v9, v20, a3);
          v11 = 1;
        }
      }
      else
      {
        v11 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v21 = 0LL;
    v22 = 0LL;
    sub_18001277C(v20, (__int64)a2);
    sub_18011D078(v9, v20, a3);
    v11 = 0;
  }
  else
  {
    v11 = 4;
  }
  unknown_libname_103(v26);
  v15 = Mtx_unlock(v7);
  if ( v15 )
  {
    std::_Throw_C_error(v15);
    goto LABEL_28;
  }
  if ( v11 <= 1 )
    sub_180120DD8(a1, a2);
  return v11;
}
