/*
 * XREFs of sub_180117C08 @ 0x180117C08
 * Callers:
 *     sub_18011B490 @ 0x18011B490 (sub_18011B490.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_180117AFC @ 0x180117AFC (sub_180117AFC.c)
 *     sub_18011A390 @ 0x18011A390 (sub_18011A390.c)
 *     sub_18011B508 @ 0x18011B508 (sub_18011B508.c)
 *     sub_18011CB80 @ 0x18011CB80 (sub_18011CB80.c)
 *     sub_18011CCA4 @ 0x18011CCA4 (sub_18011CCA4.c)
 *     sub_18011CCD8 @ 0x18011CCD8 (sub_18011CCD8.c)
 *     sub_18011CD60 @ 0x18011CD60 (sub_18011CD60.c)
 *     ?is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z @ 0x18011CD68 (-is_zero@__crt_strtox@@YA_NAEBUbig_integer@1@@Z.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18011F98E (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x18011F994 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x18011F99A (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_180117C08(__int64 a1, _QWORD *a2, __int64 *a3, int a4)
{
  __int64 v7; // r15
  struct _Mtx_internal_imp_t *v8; // rbx
  int v9; // eax
  unsigned int v10; // edi
  __int64 v11; // r13
  _QWORD *v12; // rdx
  char v13; // r14
  __crt_strtox *v14; // r15
  const struct __crt_strtox::big_integer *v15; // rdx
  __int64 *v16; // rdx
  __crt_strtox *v17; // r14
  const struct __crt_strtox::big_integer *v18; // rdx
  char *v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rdx
  signed __int64 v22; // rcx
  unsigned __int16 v23; // r8
  int v24; // eax
  char v25; // r14
  char *v26; // rax
  __int64 *v27; // rcx
  __int64 v28; // rdx
  signed __int64 v29; // rcx
  unsigned __int16 v30; // r8
  int v31; // eax
  int v32; // eax
  __int64 v35[2]; // [rsp+30h] [rbp-99h] BYREF
  __int64 v36; // [rsp+40h] [rbp-89h]
  __int64 v37; // [rsp+48h] [rbp-81h]
  __int64 v38[2]; // [rsp+50h] [rbp-79h] BYREF
  __int64 v39; // [rsp+60h] [rbp-69h]
  unsigned __int64 v40; // [rsp+68h] [rbp-61h]
  __int64 v41[2]; // [rsp+70h] [rbp-59h] BYREF
  __int64 v42; // [rsp+80h] [rbp-49h]
  __int64 v43; // [rsp+88h] [rbp-41h]
  __int64 v44; // [rsp+90h] [rbp-39h]
  __int64 *v45; // [rsp+98h] [rbp-31h]
  __int64 v46[2]; // [rsp+A0h] [rbp-29h] BYREF
  __m128i si128; // [rsp+B0h] [rbp-19h]
  __int64 v48[4]; // [rsp+C0h] [rbp-9h] BYREF

  v7 = a1;
  v45 = a3;
  v8 = (struct _Mtx_internal_imp_t *)(a1 + 64);
  v44 = a1 + 64;
  v9 = Mtx_lock((_Mtx_t)(a1 + 64));
  v10 = 0;
  if ( v9 )
  {
LABEL_56:
    std::_Throw_C_error(v9);
    JUMPOUT(0x180117FF6LL);
  }
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *))(*(_QWORD *)v7 + 56LL))(v7, v48, a2);
  sub_18011A390(v7 + 144, v38, v48);
  v11 = v38[0] + 64;
  v12 = a2;
  if ( a2[3] >= 8uLL )
    v12 = (_QWORD *)*a2;
  if ( (unsigned __int8)sub_18011CCD8(v38[0] + 64, v12) )
  {
    v10 = 2;
    if ( a4 == 2 )
    {
      v10 = 3;
    }
    else
    {
      v13 = 0;
      v42 = 0LL;
      v43 = 0LL;
      sub_18001269C(v41, (__int64)a2);
      v14 = (__crt_strtox *)sub_18011CB80(v11, v41);
      if ( (unsigned __int8)sub_18011CD60(v14) )
      {
        si128 = _mm_load_si128((const __m128i *)&xmmword_18013C0F0);
        LOWORD(v46[0]) = 0;
        std::wstring::assign((char *)v46, L"Value", 5uLL);
        v16 = v46;
        if ( si128.m128i_i64[1] >= 8uLL )
          v16 = (__int64 *)v46[0];
        if ( (unsigned __int8)sub_18011CCD8(v14, v16)
          && (v36 = 0LL,
              v37 = 0LL,
              sub_18001269C(v35, (__int64)v46),
              v17 = (__crt_strtox *)sub_18011CB80(v14, v35),
              __crt_strtox::is_zero(v17, v18)) )
        {
          sub_18011CCA4(v17, v38);
          v19 = (char *)a3;
          if ( (unsigned __int64)a3[3] >= 8 )
            v19 = (char *)*a3;
          v20 = v38;
          if ( v40 >= 8 )
            v20 = (__int64 *)v38[0];
          v21 = v39;
          if ( v39 != a3[2] )
            goto LABEL_24;
          if ( v39 )
          {
            v22 = (char *)v20 - v19;
            while ( 1 )
            {
              v23 = *(_WORD *)&v19[v22];
              if ( v23 != *(_WORD *)v19 )
                break;
              v19 += 2;
              if ( !--v21 )
                goto LABEL_20;
            }
            v24 = v23 < *(_WORD *)v19 ? -1 : 1;
          }
          else
          {
LABEL_20:
            v24 = 0;
          }
          if ( v24 )
LABEL_24:
            v25 = 1;
          else
            v25 = 0;
          unknown_libname_101(v38);
          if ( v25 )
          {
            v36 = 0LL;
            v37 = 0LL;
            sub_18001269C(v35, (__int64)a3);
            v39 = 0LL;
            v40 = 0LL;
            sub_18001269C(v38, (__int64)v46);
            sub_180117AFC((__int64)v14, v38, v35);
            v10 = 1;
          }
        }
        else
        {
          v10 = 5;
        }
        unknown_libname_101(v46);
      }
      else if ( __crt_strtox::is_zero(v14, v15) )
      {
        sub_18011CCA4(v14, v46);
        v26 = (char *)a3;
        if ( (unsigned __int64)a3[3] >= 8 )
          v26 = (char *)*a3;
        v27 = v46;
        if ( si128.m128i_i64[1] >= 8uLL )
          v27 = (__int64 *)v46[0];
        v28 = si128.m128i_i64[0];
        if ( si128.m128i_i64[0] != a3[2] )
          goto LABEL_42;
        if ( si128.m128i_i64[0] )
        {
          v29 = (char *)v27 - v26;
          while ( 1 )
          {
            v30 = *(_WORD *)&v26[v29];
            if ( v30 != *(_WORD *)v26 )
              break;
            v26 += 2;
            if ( !--v28 )
              goto LABEL_40;
          }
          v31 = v30 < *(_WORD *)v26 ? -1 : 1;
        }
        else
        {
LABEL_40:
          v31 = 0;
        }
        if ( v31 )
LABEL_42:
          v13 = 1;
        unknown_libname_101(v46);
        if ( v13 )
        {
          v38[0] = (__int64)v35;
          v36 = 0LL;
          v37 = 0LL;
          sub_18001269C(v35, (__int64)a3);
          v42 = 0LL;
          v43 = 0LL;
          sub_18001269C(v41, (__int64)a2);
          sub_180117AFC(v11, v41, v35);
          v10 = 1;
        }
      }
      else
      {
        v10 = 5;
      }
      v7 = a1;
    }
  }
  else if ( (unsigned int)(a4 - 1) <= 1 )
  {
    v38[0] = (__int64)v35;
    v36 = 0LL;
    v37 = 0LL;
    sub_18001269C(v35, (__int64)a3);
    v42 = 0LL;
    v43 = 0LL;
    sub_18001269C(v41, (__int64)a2);
    sub_180117AFC(v11, v41, v35);
  }
  else
  {
    v10 = 4;
  }
  unknown_libname_101(v48);
  v32 = Mtx_unlock(v8);
  if ( v32 )
  {
    std::_Throw_C_error(v32);
    goto LABEL_56;
  }
  if ( v10 <= 1 )
    sub_18011B508(v7, a2);
  unknown_libname_101(a3);
  return v10;
}
