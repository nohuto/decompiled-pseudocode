/*
 * XREFs of sub_180076F08 @ 0x180076F08
 * Callers:
 *     sub_1800AF8EC @ 0x1800AF8EC (sub_1800AF8EC.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_1800E4150 @ 0x1800E4150 (sub_1800E4150.c)
 *     sub_18010E810 @ 0x18010E810 (sub_18010E810.c)
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=17
__int64 __fastcall sub_180076F08(_QWORD *a1, _QWORD *a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 *v16; // rax
  volatile signed __int32 *v17; // rcx
  volatile signed __int32 *v18; // rbx
  __int64 v19; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int128 v25; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h] BYREF
  volatile signed __int32 *v27; // [rsp+60h] [rbp-A0h]
  __int128 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+78h] [rbp-88h] BYREF
  volatile signed __int32 *v30; // [rsp+80h] [rbp-80h]
  __int128 v31; // [rsp+88h] [rbp-78h] BYREF
  __int128 v32; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v33[2]; // [rsp+A8h] [rbp-58h] BYREF
  __m128i si128; // [rsp+B8h] [rbp-48h]
  __int64 v35[2]; // [rsp+C8h] [rbp-38h] BYREF
  __m128i v36; // [rsp+D8h] [rbp-28h]
  __int64 v37; // [rsp+E8h] [rbp-18h] BYREF
  int v38; // [rsp+F0h] [rbp-10h]
  __int64 v39; // [rsp+F8h] [rbp-8h]
  __int128 v40; // [rsp+100h] [rbp+0h] BYREF
  __int64 v41; // [rsp+110h] [rbp+10h]
  __int128 v42; // [rsp+118h] [rbp+18h] BYREF
  __int64 v43; // [rsp+128h] [rbp+28h]
  __int64 v44; // [rsp+130h] [rbp+30h] BYREF
  volatile signed __int32 *v45; // [rsp+138h] [rbp+38h]
  __int64 v46; // [rsp+140h] [rbp+40h] BYREF
  volatile signed __int32 *v47; // [rsp+148h] [rbp+48h]
  _BYTE v48[64]; // [rsp+150h] [rbp+50h] BYREF
  _BYTE v49[64]; // [rsp+190h] [rbp+90h] BYREF

  memset(v48, 0, sizeof(v48));
  v25 = 0LL;
  v10 = a1[59];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a1[59];
  }
  *(_QWORD *)&v25 = a1[58];
  *((_QWORD *)&v25 + 1) = v10;
  sub_18010E810(
    (unsigned int)v48,
    (unsigned int)&v25,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1050,
    (__int64)"PresentFrame",
    (__int64)"PresentFrame",
    1);
  v40 = 0LL;
  v41 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 12LL;
  strcpy((char *)v33, "PresentFrame");
  v11 = sub_1800752F4((__int64)a1, &v44);
  v12 = (volatile signed __int32 *)v11[1];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 3);
    v12 = (volatile signed __int32 *)v11[1];
  }
  v26 = *v11;
  v27 = v12;
  sub_1800715C8(&v40, &v26, (__int64)v33);
  if ( v27 && _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
  v13 = v45;
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v14 = v33[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = *(_QWORD *)(v33[0] - 8LL);
      if ( (unsigned __int64)(v33[0] - v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v14);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v33[0]) = 0;
  (*(void (__fastcall **)(_QWORD, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)*a2 + 216LL))(*a2, a3, a4, a5, a6);
  sub_18007235C((__int64 *)&v40);
  sub_18010E9F8(v48);
  memset(v49, 0, sizeof(v49));
  v28 = 0LL;
  v15 = a1[59];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a1[59];
  }
  *(_QWORD *)&v28 = a1[58];
  *((_QWORD *)&v28 + 1) = v15;
  sub_18010E810(
    (unsigned int)v49,
    (unsigned int)&v28,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1056,
    (__int64)"PresentFrame",
    (__int64)"kSpectreRenderCB_PostPresent",
    1);
  v42 = 0LL;
  v43 = 0LL;
  v36 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v35[0]) = 0;
  sub_18000FB34(v35, 0x1CuLL, 0LL, "kSpectreRenderCB_PostPresent");
  v16 = sub_1800752F4((__int64)a1, &v46);
  v17 = (volatile signed __int32 *)v16[1];
  if ( v17 )
  {
    _InterlockedIncrement(v17 + 3);
    v17 = (volatile signed __int32 *)v16[1];
  }
  v29 = *v16;
  v30 = v17;
  sub_1800715C8(&v42, &v29, (__int64)v35);
  if ( v30 && _InterlockedExchangeAdd(v30 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v30 + 8LL))(v30);
  v18 = v47;
  if ( v47 )
  {
    if ( _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v18 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  if ( v36.m128i_i64[1] >= 0x10uLL )
  {
    v19 = v35[0];
    if ( (unsigned __int64)(v36.m128i_i64[1] + 1) >= 0x1000 )
    {
      v19 = *(_QWORD *)(v35[0] - 8);
      if ( (unsigned __int64)(v35[0] - v19 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v19, v36.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v19);
  }
  v36 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v35[0]) = 0;
  v37 = a1[121];
  v38 = 6;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v39 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E4150(v37, &v37);
  v31 = 0LL;
  v22 = a3[1];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v22 = a3[1];
  }
  *(_QWORD *)&v31 = *a3;
  *((_QWORD *)&v31 + 1) = v22;
  v32 = 0LL;
  v23 = a2[1];
  if ( v23 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v23 + 8));
    v23 = a2[1];
  }
  *(_QWORD *)&v32 = *a2;
  *((_QWORD *)&v32 + 1) = v23;
  sub_1800762B0((__int64)a1, 6u, (__int64)&v32, (__int64)&v31);
  sub_18007235C((__int64 *)&v42);
  return sub_18010E9F8(v49);
}
