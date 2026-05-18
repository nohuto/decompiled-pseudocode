/*
 * XREFs of sub_1800DDC68 @ 0x1800DDC68
 * Callers:
 *     sub_1800AD770 @ 0x1800AD770 (sub_1800AD770.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 * Callees:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x1800136F8 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     sub_180025F94 @ 0x180025F94 (sub_180025F94.c)
 *     sub_18005A894 @ 0x18005A894 (sub_18005A894.c)
 *     sub_180068194 @ 0x180068194 (sub_180068194.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_1800703D4 @ 0x1800703D4 (sub_1800703D4.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     ceilf @ 0x180125024 (ceilf.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800DDC68(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // r15
  __int64 *v6; // rsi
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  float v9; // xmm6_4
  int v10; // ebx
  int v11; // r12d
  const void **v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD Src[3]; // [rsp+38h] [rbp-89h] BYREF
  __m128i si128; // [rsp+50h] [rbp-71h]
  __int64 v21; // [rsp+60h] [rbp-61h] BYREF
  volatile signed __int32 *v22; // [rsp+68h] [rbp-59h]
  __int64 v23[2]; // [rsp+70h] [rbp-51h] BYREF
  __m128i v24; // [rsp+80h] [rbp-41h]
  __int64 v25[4]; // [rsp+90h] [rbp-31h] BYREF
  __int128 v26; // [rsp+B0h] [rbp-11h] BYREF
  __int128 v27; // [rsp+C0h] [rbp-1h]

  v5 = a3;
  v6 = (__int64 *)(a1 + 16 * (a3 + 5LL));
  if ( !*v6 )
  {
    v7 = sub_1800703D4(*(_QWORD *)(a1 + 32));
    sub_18000F8A8(v7, &v21, 0);
    std::shared_ptr<__ExceptionPtr>::operator=(v6, &v21);
    v8 = v22;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = (float)*(int *)(a1 + 12) / flt_1801D9950[v5];
    v10 = (int)ceilf((float)*(int *)(a1 + 8) / flt_1801D9950[v5]);
    v11 = (int)ceilf(v9);
    if ( v10 < 1 )
      v10 = 1;
    if ( v11 < 1 )
      v11 = 1;
    sub_180025F94(v23, (int)flt_1801D9950[v5]);
    v12 = sub_18005A894(v23, 0LL, "ImageProcessing Scaled ", 0x17uLL);
    si128 = 0LL;
    *(_OWORD *)&Src[1] = *(_OWORD *)v12;
    si128 = *((__m128i *)v12 + 1);
    v12[2] = 0LL;
    v12[3] = (const void *)15;
    *(_BYTE *)v12 = 0;
    v13 = std::string::append(&Src[1], "x", 1uLL);
    v26 = *(_OWORD *)v13;
    v27 = *((_OWORD *)v13 + 1);
    v13[2] = 0LL;
    v13[3] = 15LL;
    *(_BYTE *)v13 = 0;
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v14 = Src[1];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = *(_QWORD *)(Src[1] - 8LL);
        if ( (unsigned __int64)(Src[1] - v14 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v14, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v14);
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(Src[1]) = 0;
    if ( v24.m128i_i64[1] >= 0x10uLL )
    {
      v15 = v23[0];
      if ( (unsigned __int64)(v24.m128i_i64[1] + 1) >= 0x1000 )
      {
        v15 = *(_QWORD *)(v23[0] - 8);
        if ( (unsigned __int64)(v23[0] - v15 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v15, v24.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v15);
    }
    v24 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v23[0]) = 0;
    v25[2] = 0LL;
    v25[3] = 0LL;
    sub_180020B7C(v25, (__int64)&v26);
    sub_180068194(*v6, v25);
    sub_180068A0C(*v6, v10, v11, *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 28) & 0xFFFFFFBF, *(_QWORD *)(a1 + 32));
    if ( *((_QWORD *)&v27 + 1) >= 0x10uLL )
    {
      v16 = v26;
      if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 )
      {
        v16 = *(_QWORD *)(v26 - 8);
        if ( (unsigned __int64)(v26 - v16 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v16, *((_QWORD *)&v27 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v16);
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v17 = v6[1];
  if ( v17 )
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
  *a2 = *v6;
  a2[1] = v6[1];
  return a2;
}
