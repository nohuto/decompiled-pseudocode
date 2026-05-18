/*
 * XREFs of sub_180103F4C @ 0x180103F4C
 * Callers:
 *     sub_180103458 @ 0x180103458 (sub_180103458.c)
 *     sub_180105820 @ 0x180105820 (sub_180105820.c)
 *     sub_180105858 @ 0x180105858 (sub_180105858.c)
 * Callees:
 *     sub_180102C40 @ 0x180102C40 (sub_180102C40.c)
 *     sub_180103A84 @ 0x180103A84 (sub_180103A84.c)
 *     sub_1801058F0 @ 0x1801058F0 (sub_1801058F0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x18012524C (-_Xbad_function_call@std@@YAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180103F4C(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  unsigned __int64 v6; // r12
  float v7; // xmm0_4
  float v8; // xmm6_4
  unsigned __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // r12
  unsigned __int64 v12; // rsi
  float v13; // xmm0_4
  __int64 v14; // r13
  unsigned __int64 v15; // r14
  float v16; // xmm0_4
  float v17; // xmm0_4
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // [rsp+30h] [rbp-61h]
  __int64 v28; // [rsp+38h] [rbp-59h]
  __int128 v29; // [rsp+40h] [rbp-51h]
  __int128 v31; // [rsp+68h] [rbp-29h] BYREF
  __int128 v32; // [rsp+78h] [rbp-19h] BYREF
  __int64 v33; // [rsp+88h] [rbp-9h]
  __m128 v34; // [rsp+90h] [rbp-1h] BYREF

  v5 = a1;
  v6 = a2 * a2;
  v33 = 0LL;
  v32 = 0LL;
  sub_180102C40(&v32, a2 * a2 * a2);
  if ( (a2 & 0x8000000000000000uLL) != 0LL )
    v7 = (float)(int)(a2 & 1 | (a2 >> 1)) + (float)(int)(a2 & 1 | (a2 >> 1));
  else
    v7 = (float)(int)a2;
  v8 = 1.0 / (float)(v7 - 1.0);
  v9 = 0LL;
  if ( a2 )
  {
    HIDWORD(v29) = 1065353216;
    v10 = 0LL;
    v28 = 0LL;
    v11 = 16 * v6;
LABEL_6:
    v12 = 0LL;
    if ( (v9 & 0x8000000000000000uLL) != 0LL )
      v13 = (float)(int)(v9 & 1 | (v9 >> 1)) + (float)(int)(v9 & 1 | (v9 >> 1));
    else
      v13 = (float)(int)v9;
    *((float *)&v29 + 2) = v13 * v8;
    v14 = v10;
LABEL_10:
    v15 = 0LL;
    if ( (v12 & 0x8000000000000000uLL) != 0LL )
      v16 = (float)(int)(v12 & 1 | (v12 >> 1)) + (float)(int)(v12 & 1 | (v12 >> 1));
    else
      v16 = (float)(int)v12;
    *((float *)&v29 + 1) = v16 * v8;
    v27 = v14;
    while ( 1 )
    {
      v17 = (v15 & 0x8000000000000000uLL) != 0LL
          ? (float)(int)(v15 & 1 | (v15 >> 1)) + (float)(int)(v15 & 1 | (v15 >> 1))
          : (float)(int)v15;
      *(float *)&v29 = v17 * v8;
      v31 = v29;
      v18 = *(_QWORD *)(a3 + 56);
      if ( !v18 )
        break;
      (*(void (__fastcall **)(__int64, __m128 *, __int128 *))(*(_QWORD *)v18 + 16LL))(v18, &v34, &v31);
      v34 = _mm_min_ps(_mm_max_ps(v34, (__m128)xmmword_18013FB90), (__m128)xmmword_18013FB80);
      *(__m128 *)(v27 + v32) = v34;
      ++v15;
      v27 += 16LL;
      if ( v15 >= a2 )
      {
        ++v12;
        v14 += 16 * a2;
        if ( v12 < a2 )
          goto LABEL_10;
        ++v9;
        v10 = v11 + v28;
        v28 += v11;
        if ( v9 >= a2 )
        {
          v5 = a1;
          goto LABEL_22;
        }
        goto LABEL_6;
      }
    }
    std::_Xbad_function_call();
    return sub_180104220(v26, v25);
  }
  else
  {
LABEL_22:
    sub_1801058F0(v5, a2, &v32, 0LL, 0);
    result = sub_180103A84(v5);
    v21 = v32;
    if ( (_QWORD)v32 )
    {
      v22 = (v33 - v32) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( v22 >= 0x1000 )
      {
        v23 = v22 + 39;
        v21 = *(_QWORD *)(v32 - 8);
        if ( (unsigned __int64)(v32 - v21 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v21, v23);
          __debugbreak();
        }
      }
      result = j_j__o_free(v21);
      v32 = 0LL;
      v33 = 0LL;
    }
    v24 = *(_QWORD *)(a3 + 56);
    if ( v24 )
    {
      LOBYTE(v20) = v24 != a3;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 32LL))(v24, v20);
      *(_QWORD *)(a3 + 56) = 0LL;
    }
  }
  return result;
}
