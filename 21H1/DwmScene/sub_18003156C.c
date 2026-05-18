/*
 * XREFs of sub_18003156C @ 0x18003156C
 * Callers:
 *     sub_18002EAE0 @ 0x18002EAE0 (sub_18002EAE0.c)
 * Callees:
 *     sub_18001D08C @ 0x18001D08C (sub_18001D08C.c)
 *     sub_18002D660 @ 0x18002D660 (sub_18002D660.c)
 *     sub_18002D840 @ 0x18002D840 (sub_18002D840.c)
 *     sub_180030110 @ 0x180030110 (sub_180030110.c)
 *     sub_18009ADC0 @ 0x18009ADC0 (sub_18009ADC0.c)
 *     sub_18009ADDC @ 0x18009ADDC (sub_18009ADDC.c)
 *     sub_18009AE50 @ 0x18009AE50 (sub_18009AE50.c)
 *     sub_18009AE6C @ 0x18009AE6C (sub_18009AE6C.c)
 *     sub_1800CBA98 @ 0x1800CBA98 (sub_1800CBA98.c)
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18003156C(_QWORD *a1, int a2)
{
  bool v4; // r14
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  int v15; // edi
  int v16; // esi
  unsigned int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  _QWORD *v24; // [rsp+30h] [rbp-40h] BYREF
  __int64 v25; // [rsp+38h] [rbp-38h] BYREF
  int v26; // [rsp+40h] [rbp-30h]
  unsigned int v27; // [rsp+4Ch] [rbp-24h]
  unsigned __int64 v28; // [rsp+50h] [rbp-20h]

  v4 = !a1[20] && (a2 & 1) != 0;
  v5 = a1[21];
  v6 = a1 + 14;
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v5 + 80LL))(v5, &v25);
    v7 = sub_18002D660(&v24, a2, 0, v27, &v25);
  }
  else
  {
    v12 = a1[22];
    if ( !v12 )
    {
      v13 = (_QWORD *)*v6;
      *v6 = 0LL;
      if ( !v13 )
        goto LABEL_23;
      if ( *v13 )
        j__o_free(*v13);
      v11 = v13;
      goto LABEL_22;
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 80LL))(v12, &v25);
    v7 = sub_18002D840(&v24, a2, v26, 1u, &v25);
  }
  if ( v6 != v7 )
  {
    v8 = *v7;
    *v7 = 0LL;
    v9 = (_QWORD *)*v6;
    *v6 = v8;
    if ( v9 )
    {
      if ( *v9 )
        j__o_free(*v9);
      j__o_free(v9);
    }
  }
  v10 = v24;
  if ( v24 )
  {
    if ( *v24 )
      j__o_free(*v24);
    v11 = v10;
LABEL_22:
    j__o_free(v11);
  }
LABEL_23:
  if ( v4 )
    sub_180030110(a1);
  v14 = (_QWORD *)a1[14];
  v15 = 0;
  v16 = 0;
  if ( v14 && *v14 )
  {
    v15 = sub_18009AE50(a1);
    v16 = sub_18009ADDC(a1);
    v17 = sub_18009ADC0(a1);
    v18 = sub_1800CBA98(&v25, v17);
    if ( a1 + 15 != (_QWORD *)v18 )
      sub_18001D08C(a1 + 15, v18);
    if ( v28 >= 0x10 )
    {
      v19 = v25;
      if ( v28 + 1 >= 0x1000 )
      {
        v19 = *(_QWORD *)(v25 - 8);
        if ( (unsigned __int64)(v25 - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v28 + 40);
          __debugbreak();
        }
      }
LABEL_39:
      j_j__o_free(v19);
    }
  }
  else
  {
    v20 = sub_1800CBA98(&v25, 0LL);
    if ( a1 + 15 != (_QWORD *)v20 )
      sub_18001D08C(a1 + 15, v20);
    if ( v28 >= 0x10 )
    {
      v19 = v25;
      if ( v28 + 1 >= 0x1000 )
      {
        v19 = *(_QWORD *)(v25 - 8);
        if ( (unsigned __int64)(v25 - v19 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v19, v28 + 40);
          __debugbreak();
        }
      }
      goto LABEL_39;
    }
  }
  v21 = 0LL;
  v22 = 0LL;
  v21.m128_f32[0] = (float)v15;
  v22.m128_f32[0] = (float)v16;
  return sub_18009AE6C(a1, _mm_unpacklo_ps(v21, v22).m128_u64[0]);
}
