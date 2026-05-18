/*
 * XREFs of sub_18011CDEC @ 0x18011CDEC
 * Callers:
 *     sub_180120D50 @ 0x180120D50 (sub_180120D50.c)
 * Callees:
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_18011CD34 @ 0x18011CD34 (sub_18011CD34.c)
 *     sub_18011FC60 @ 0x18011FC60 (sub_18011FC60.c)
 *     sub_180120DD8 @ 0x180120DD8 (sub_180120DD8.c)
 *     sub_180122450 @ 0x180122450 (sub_180122450.c)
 *     sub_1801224B4 @ 0x1801224B4 (sub_1801224B4.c)
 *     sub_1801225A8 @ 0x1801225A8 (sub_1801225A8.c)
 *     ?IsContext@WorkItem@details@Concurrency@@QEBA_NXZ @ 0x180122628 (-IsContext@WorkItem@details@Concurrency@@QEBA_NXZ.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012525E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180125264 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18012526A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18011CDEC(__int64 a1, _QWORD *a2, int a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r12
  _QWORD *v12; // rdx
  Concurrency::details::WorkItem *v13; // r14
  __int64 *v14; // rdx
  Concurrency::details::WorkItem *v15; // r12
  int v16; // eax
  __int64 v18[2]; // [rsp+20h] [rbp-69h] BYREF
  __int64 v19; // [rsp+30h] [rbp-59h]
  __int64 v20; // [rsp+38h] [rbp-51h]
  __int64 v21[2]; // [rsp+40h] [rbp-49h] BYREF
  __int64 v22; // [rsp+50h] [rbp-39h]
  __int64 v23; // [rsp+58h] [rbp-31h]
  __int64 v24; // [rsp+60h] [rbp-29h]
  __int64 v25[2]; // [rsp+68h] [rbp-21h] BYREF
  __m128i si128; // [rsp+78h] [rbp-11h]
  __int64 v27[4]; // [rsp+88h] [rbp-1h] BYREF

  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v24 = a1 + 64;
  v9 = Mtx_lock((_Mtx_t)(a1 + 64));
  v10 = 0;
  if ( v9 )
  {
LABEL_28:
    std::_Throw_C_error(v9);
    __debugbreak();
  }
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)a1 + 56LL))(a1, v27, a2);
  sub_18011FC60(a1 + 144, v18, v27);
  v11 = v18[0] + 64;
  v12 = a2;
  if ( a2[3] >= 8uLL )
    v12 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_1801225A8(v18[0] + 64, v12) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v22 = 0LL;
      v23 = 0LL;
      sub_18001277C(v21, (__int64)a2);
      v13 = (Concurrency::details::WorkItem *)sub_180122450(v11, v21);
      if ( (unsigned __int8)sub_180122630(v13) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_180142440);
        LOWORD(v25[0]) = 0;
        std::wstring::assign((char *)v25, L"Value", 5uLL);
        v14 = v25;
        if ( si128.m128i_i64[1] >= 8uLL )
          v14 = (__int64 *)v25[0];
        if ( (unsigned __int8)sub_1801225A8(v13, v14)
          && (v19 = 0LL,
              v20 = 0LL,
              sub_18001277C(v18, (__int64)v25),
              v15 = (Concurrency::details::WorkItem *)sub_180122450(v13, v18),
              Concurrency::details::WorkItem::IsContext(v15)) )
        {
          if ( (unsigned int)sub_1801224B4(v15) != a3 )
          {
            v19 = 0LL;
            v20 = 0LL;
            sub_18001277C(v18, (__int64)v25);
            sub_18011CD34((__int64)v13, v18, a3);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        unknown_libname_103(v25);
      }
      else if ( Concurrency::details::WorkItem::IsContext(v13) )
      {
        if ( (unsigned int)sub_1801224B4(v13) != a3 )
        {
          v22 = 0LL;
          v23 = 0LL;
          sub_18001277C(v21, (__int64)a2);
          sub_18011CD34(v11, v21, a3);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v22 = 0LL;
    v23 = 0LL;
    sub_18001277C(v21, (__int64)a2);
    sub_18011CD34(v11, v21, a3);
  }
  else
  {
    v10 = 4;
  }
  unknown_libname_103(v27);
  v16 = Mtx_unlock(v8);
  if ( v16 )
  {
    std::_Throw_C_error(v16);
    goto LABEL_28;
  }
  if ( v10 <= 1 )
    sub_180120DD8(a1, a2);
  return v10;
}
