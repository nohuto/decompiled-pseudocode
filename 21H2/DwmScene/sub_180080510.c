/*
 * XREFs of sub_180080510 @ 0x180080510
 * Callers:
 *     sub_1800CAF60 @ 0x1800CAF60 (sub_1800CAF60.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     ?GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ @ 0x180010B80 (-GetLocaleT@_LocaleUpdate@@QEAAPEAU__crt_locale_pointers@@XZ.c)
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 *     sub_18007ABC4 @ 0x18007ABC4 (sub_18007ABC4.c)
 *     sub_18007BB80 @ 0x18007BB80 (sub_18007BB80.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_1800E2E10 @ 0x1800E2E10 (sub_1800E2E10.c)
 *     sub_1800E2F18 @ 0x1800E2F18 (sub_1800E2F18.c)
 *     sub_1800E2F60 @ 0x1800E2F60 (sub_1800E2F60.c)
 *     sub_1800E314C @ 0x1800E314C (sub_1800E314C.c)
 *     sub_1800E9A20 @ 0x1800E9A20 (sub_1800E9A20.c)
 *     sub_1801140E0 @ 0x1801140E0 (sub_1801140E0.c)
 *     sub_1801142C8 @ 0x1801142C8 (sub_1801142C8.c)
 *     memset @ 0x18012396A (memset.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x180125252 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x180125258 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180080510(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 *v15; // r15
  __int64 *i; // rsi
  struct __crt_locale_pointers *LocaleT; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int128 v21; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  volatile signed __int32 *v26; // [rsp+80h] [rbp-88h]
  _QWORD v27[2]; // [rsp+88h] [rbp-80h] BYREF
  __m128i si128; // [rsp+98h] [rbp-70h]
  __int64 v29[2]; // [rsp+A8h] [rbp-60h] BYREF
  __m128i v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C8h] [rbp-40h] BYREF
  int v32; // [rsp+D0h] [rbp-38h]
  __int64 v33; // [rsp+D8h] [rbp-30h]
  __int128 v34; // [rsp+E0h] [rbp-28h] BYREF
  __int128 v35; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v36; // [rsp+100h] [rbp-8h] BYREF
  __int64 v37; // [rsp+110h] [rbp+8h]
  __int128 v38; // [rsp+118h] [rbp+10h] BYREF
  __int64 v39; // [rsp+128h] [rbp+20h]
  __int64 v40; // [rsp+130h] [rbp+28h] BYREF
  volatile signed __int32 *v41; // [rsp+138h] [rbp+30h]
  __int64 v42; // [rsp+140h] [rbp+38h] BYREF
  volatile signed __int32 *v43; // [rsp+148h] [rbp+40h]
  __int128 v44; // [rsp+150h] [rbp+48h] BYREF
  __m256i v45; // [rsp+160h] [rbp+58h]
  _BYTE v46[64]; // [rsp+188h] [rbp+80h] BYREF
  _BYTE v47[64]; // [rsp+1C8h] [rbp+C0h] BYREF

  memset(v47, 0, sizeof(v47));
  v22 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v22 = a1[58];
  *((_QWORD *)&v22 + 1) = v2;
  sub_1801140E0(
    (unsigned int)v47,
    (unsigned int)&v22,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    707,
    (__int64)"UpdateScenes",
    (__int64)"UpdateScenes",
    1);
  v38 = 0LL;
  v39 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 12LL;
  strcpy((char *)v27, "UpdateScenes");
  v3 = sub_18007ABC4((__int64)a1, &v40);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v23 = *v3;
  v24 = v4;
  sub_180076E98(&v38, &v23, (__int64)v27);
  if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  v5 = v41;
  if ( v41 )
  {
    if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v27[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v27[0] - 8LL);
      if ( (unsigned __int64)(v27[0] - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v27[0]) = 0;
  memset(v46, 0, sizeof(v46));
  v21 = 0LL;
  v7 = a1[59];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[59];
  }
  *(_QWORD *)&v21 = a1[58];
  *((_QWORD *)&v21 + 1) = v7;
  sub_1801140E0(
    (unsigned int)v46,
    (unsigned int)&v21,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    712,
    (__int64)"UpdateScenes",
    (__int64)"kSpectreRenderCB_BeginFrame",
    1);
  v36 = 0LL;
  v37 = 0LL;
  v30 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v29[0]) = 0;
  LOBYTE(v8) = 0;
  sub_18000FC14(v29, 0x1BuLL, v8, "kSpectreRenderCB_BeginFrame");
  v9 = sub_18007ABC4((__int64)a1, &v42);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v25 = *v9;
  v26 = v10;
  sub_180076E98(&v36, &v25, (__int64)v29);
  if ( v26 && _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
  v11 = v43;
  if ( v43 )
  {
    if ( _InterlockedExchangeAdd(v43 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( v30.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v29[0];
    if ( (unsigned __int64)(v30.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v29[0] - 8);
      if ( (unsigned __int64)(v29[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v30.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  v30 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v29[0]) = 0;
  v31 = a1[121];
  v32 = 0;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v33 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E9A20(v31, &v31);
  v34 = 0LL;
  v35 = 0LL;
  sub_18007BB80((__int64)a1, 0, (__int64)&v35, (__int64)&v34);
  sub_180077C2C((__int64 *)&v36);
  sub_1801142C8(v46);
  v15 = (__int64 *)a1[89];
  for ( i = (__int64 *)a1[88]; i != v15; i += 2 )
  {
    LocaleT = _LocaleUpdate::GetLocaleT((_LocaleUpdate *)(a1 + 46));
    v18 = sub_1800E2E10(LocaleT);
    v44 = *(_OWORD *)v18;
    v45 = *(__m256i *)(v18 + 16);
    v19 = sub_1800E2E10(a1 + 25);
    if ( (*(float *)v19 == -1.0
       && *(float *)(v19 + 4) == -1.0
       && *(_DWORD *)(v19 + 8) == 2
       && !*(_DWORD *)(v19 + 12)
       && !*(_DWORD *)(v19 + 16)
       || *(float *)(v19 + 20) == -1.0
       && *(float *)(v19 + 24) == -1.0
       && *(_DWORD *)(v19 + 28) == 2
       && !*(_DWORD *)(v19 + 32)
       && !*(_DWORD *)(v19 + 36))
      && (*(float *)&v44 != -1.0 || *((float *)&v44 + 1) != -1.0 || *((_QWORD *)&v44 + 1) != 2LL || v45.m256i_i32[0])
      && (*(float *)&v45.m256i_i32[1] != -1.0
       || *(float *)&v45.m256i_i32[2] != -1.0
       || *(__int64 *)((char *)&v45.m256i_i64[1] + 4) != 2
       || v45.m256i_i32[5]) )
    {
      sub_1800E2F60(a1 + 25, &v44);
    }
    sub_1800E314C(a1 + 46, a1 + 25);
    sub_18007FB54(a1, i);
  }
  sub_1800E2F18(a1 + 25);
  sub_180077C2C((__int64 *)&v38);
  return sub_1801142C8(v47);
}
