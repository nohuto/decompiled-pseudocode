/*
 * XREFs of sub_180076C30 @ 0x180076C30
 * Callers:
 *     sub_1800BD760 @ 0x1800BD760 (sub_1800BD760.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_18006AA58 @ 0x18006AA58 (sub_18006AA58.c)
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_1800D079C @ 0x1800D079C (sub_1800D079C.c)
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

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_180076C30(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 *v8; // rax
  volatile signed __int32 *v9; // rcx
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rax
  __int128 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  volatile signed __int32 *v24; // [rsp+68h] [rbp-98h]
  __int128 v25; // [rsp+70h] [rbp-90h] BYREF
  __int64 v26[2]; // [rsp+80h] [rbp-80h] BYREF
  __m128i si128; // [rsp+90h] [rbp-70h]
  __int64 v28; // [rsp+A0h] [rbp-60h] BYREF
  int v29; // [rsp+A8h] [rbp-58h]
  __int64 v30; // [rsp+B0h] [rbp-50h]
  __int128 v31; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-38h]
  __int64 v33; // [rsp+D0h] [rbp-30h] BYREF
  volatile signed __int32 *v34; // [rsp+D8h] [rbp-28h]
  _BYTE v35[64]; // [rsp+E0h] [rbp-20h] BYREF

  memset(v35, 0, sizeof(v35));
  v22 = 0LL;
  v7 = a1[59];
  if ( v7 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    v7 = a1[59];
  }
  *(_QWORD *)&v22 = a1[58];
  *((_QWORD *)&v22 + 1) = v7;
  sub_18010E810(
    (unsigned int)v35,
    (unsigned int)&v22,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1511,
    (__int64)"PostRenderScene",
    (__int64)"kSpectreRenderCB_PostRender",
    1);
  v31 = 0LL;
  v32 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v26[0]) = 0;
  sub_18000FB34(v26, 0x1BuLL, 0LL, "kSpectreRenderCB_PostRender");
  v8 = sub_1800752F4((__int64)a1, &v33);
  v9 = (volatile signed __int32 *)v8[1];
  if ( v9 )
  {
    _InterlockedIncrement(v9 + 3);
    v9 = (volatile signed __int32 *)v8[1];
  }
  v23 = *v8;
  v24 = v9;
  sub_1800715C8(&v31, &v23, (__int64)v26);
  if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  v10 = v34;
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v10)(v10);
      if ( _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 8LL))(v10);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v11 = v26[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v11 = *(_QWORD *)(v26[0] - 8);
      if ( (unsigned __int64)(v26[0] - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v26[0]) = 0;
  v28 = a1[121];
  v29 = 4;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v30 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E4150(v28, &v28);
  v21 = 0LL;
  v14 = a4[1];
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    v14 = a4[1];
  }
  *(_QWORD *)&v21 = *a4;
  *((_QWORD *)&v21 + 1) = v14;
  v25 = 0LL;
  v15 = a3[1];
  if ( v15 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    v15 = a3[1];
  }
  *(_QWORD *)&v25 = *a3;
  *((_QWORD *)&v25 + 1) = v15;
  sub_1800762B0((__int64)a1, 4u, (__int64)&v25, (__int64)&v21);
  sub_18007235C((__int64 *)&v31);
  sub_18010E9F8(v35);
  v16 = *a3;
  v17 = *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 184LL))(*a4);
  v19 = sub_18006AA58(v16, v18);
  return sub_1800D079C(v17, v19);
}
