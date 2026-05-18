/*
 * XREFs of sub_1801180B4 @ 0x1801180B4
 * Callers:
 *     sub_18011B450 @ 0x18011B450 (sub_18011B450.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180117FF8 @ 0x180117FF8 (sub_180117FF8.c)
 *     sub_18011A390 @ 0x18011A390 (sub_18011A390.c)
 *     sub_18011B508 @ 0x18011B508 (sub_18011B508.c)
 *     sub_18011CB7C @ 0x18011CB7C (sub_18011CB7C.c)
 *     sub_18011CB80 @ 0x18011CB80 (sub_18011CB80.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 *     sub_18011CD48 @ 0x18011CD48 (sub_18011CD48.c)
 *     sub_18011CD60 @ 0x18011CD60 (sub_18011CD60.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1801180B4(__int64 a1, _QWORD *a2, char a3, int a4)
{
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r12
  _QWORD *v12; // rdx
  __int64 v13; // r14
  __int64 *v14; // rdx
  __int64 v15; // r12
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
  sub_18011A390(a1 + 144, v18, v27);
  v11 = v18[0] + 64;
  v12 = a2;
  if ( a2[3] >= 8uLL )
    v12 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_18011CCD8(v18[0] + 64, v12) )
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
      sub_18001269C(v21, (__int64)a2);
      v13 = sub_18011CB80(v11, v21);
      if ( (unsigned __int8)sub_18011CD60(v13) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
        LOWORD(v25[0]) = 0;
        std::wstring::assign((char *)v25, L"Value", 5uLL);
        v14 = v25;
        if ( si128.m128i_i64[1] >= 8uLL )
          v14 = (__int64 *)v25[0];
        if ( (unsigned __int8)sub_18011CCD8(v13, v14)
          && (v19 = 0LL,
              v20 = 0LL,
              sub_18001269C(v18, (__int64)v25),
              v15 = sub_18011CB80(v13, v18),
              (unsigned __int8)sub_18011CD48(v15)) )
        {
          if ( (unsigned __int8)sub_18011CB7C(v15) != a3 )
          {
            v19 = 0LL;
            v20 = 0LL;
            sub_18001269C(v18, (__int64)v25);
            sub_180117FF8(v13, v18, a3);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        unknown_libname_101(v25);
      }
      else if ( (unsigned __int8)sub_18011CD48(v13) )
      {
        if ( (unsigned __int8)sub_18011CB7C(v13) != a3 )
        {
          v22 = 0LL;
          v23 = 0LL;
          sub_18001269C(v21, (__int64)a2);
          sub_180117FF8(v11, v21, a3);
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
    sub_18001269C(v21, (__int64)a2);
    sub_180117FF8(v11, v21, a3);
  }
  else
  {
    v10 = 4;
  }
  unknown_libname_101(v27);
  v16 = Mtx_unlock(v8);
  if ( v16 )
  {
    std::_Throw_C_error(v16);
    goto LABEL_28;
  }
  if ( v10 <= 1 )
    sub_18011B508(a1, a2);
  return v10;
}
