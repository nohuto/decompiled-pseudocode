/*
 * XREFs of sub_18007A284 @ 0x18007A284
 * Callers:
 *     sub_18007AC40 @ 0x18007AC40 (sub_18007AC40.c)
 * Callees:
 *     sub_18000FB34 @ 0x18000FB34 (sub_18000FB34.c)
 *     sub_1800615B4 @ 0x1800615B4 (sub_1800615B4.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_1800715C8 @ 0x1800715C8 (sub_1800715C8.c)
 *     sub_18007235C @ 0x18007235C (sub_18007235C.c)
 *     sub_1800752F4 @ 0x1800752F4 (sub_1800752F4.c)
 *     sub_180075A7C @ 0x180075A7C (sub_180075A7C.c)
 *     sub_1800762B0 @ 0x1800762B0 (sub_1800762B0.c)
 *     sub_1800891C4 @ 0x1800891C4 (sub_1800891C4.c)
 *     sub_1800E4150 @ 0x1800E4150 (sub_1800E4150.c)
 *     sub_18010E810 @ 0x18010E810 (sub_18010E810.c)
 *     sub_18010E9F8 @ 0x18010E9F8 (sub_18010E9F8.c)
 *     sub_180116FB0 @ 0x180116FB0 (sub_180116FB0.c)
 *     memset @ 0x18011E09A (memset.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _Query_perf_counter @ 0x18011F982 (_Query_perf_counter.c)
 *     _Query_perf_frequency @ 0x18011F988 (_Query_perf_frequency.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=39
__int64 __fastcall sub_18007A284(_QWORD *a1, __int64 *a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 *v6; // rax
  volatile signed __int32 *v7; // rcx
  volatile signed __int32 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 *v11; // rax
  volatile signed __int32 *v12; // rcx
  volatile signed __int32 *v13; // rbx
  __int64 v14; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v17; // rcx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 *v23; // rax
  volatile signed __int32 *v24; // rcx
  volatile signed __int32 *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 result; // rax
  __int128 v30; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v31[2]; // [rsp+58h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+68h] [rbp-98h]
  __int128 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h] BYREF
  volatile signed __int32 *v35; // [rsp+90h] [rbp-70h]
  __int128 v36; // [rsp+98h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-58h] BYREF
  volatile signed __int32 *v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int32 *v41; // [rsp+D0h] [rbp-30h]
  __int128 v42; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v43; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v44; // [rsp+F0h] [rbp-10h]
  _QWORD v45[2]; // [rsp+F8h] [rbp-8h] BYREF
  __m128i v46; // [rsp+108h] [rbp+8h]
  __int64 v47[2]; // [rsp+118h] [rbp+18h] BYREF
  __m128i v48; // [rsp+128h] [rbp+28h]
  __int64 v49[2]; // [rsp+138h] [rbp+38h] BYREF
  __m128i v50; // [rsp+148h] [rbp+48h]
  __int64 v51; // [rsp+158h] [rbp+58h] BYREF
  int v52; // [rsp+160h] [rbp+60h]
  __int64 v53; // [rsp+168h] [rbp+68h]
  __int64 v54; // [rsp+170h] [rbp+70h] BYREF
  int v55; // [rsp+178h] [rbp+78h]
  __int64 v56; // [rsp+180h] [rbp+80h]
  __int128 v57; // [rsp+188h] [rbp+88h] BYREF
  __int128 v58; // [rsp+198h] [rbp+98h] BYREF
  __int128 v59; // [rsp+1A8h] [rbp+A8h] BYREF
  __int128 v60; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v61; // [rsp+1C8h] [rbp+C8h] BYREF
  __int64 v62; // [rsp+1D8h] [rbp+D8h]
  __int128 v63; // [rsp+1E0h] [rbp+E0h] BYREF
  __int64 v64; // [rsp+1F0h] [rbp+F0h]
  __int128 v65; // [rsp+1F8h] [rbp+F8h] BYREF
  __int64 v66; // [rsp+208h] [rbp+108h]
  __int128 v67; // [rsp+210h] [rbp+110h] BYREF
  __int64 v68; // [rsp+220h] [rbp+120h]
  __int64 v69; // [rsp+228h] [rbp+128h] BYREF
  volatile signed __int32 *v70; // [rsp+230h] [rbp+130h]
  __int64 v71; // [rsp+238h] [rbp+138h] BYREF
  volatile signed __int32 *v72; // [rsp+240h] [rbp+140h]
  __int64 v73; // [rsp+248h] [rbp+148h] BYREF
  volatile signed __int32 *v74; // [rsp+250h] [rbp+150h]
  __int64 v75; // [rsp+258h] [rbp+158h] BYREF
  volatile signed __int32 *v76; // [rsp+260h] [rbp+160h]
  __int128 v77; // [rsp+268h] [rbp+168h] BYREF
  __int128 v78; // [rsp+278h] [rbp+178h] BYREF
  _BYTE v79[64]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v80[64]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v81[64]; // [rsp+310h] [rbp+210h] BYREF
  _BYTE v82[64]; // [rsp+350h] [rbp+250h] BYREF

  v77 = 0LL;
  sub_1800615B4((__int64)(a1 + 1), (__int64)&v77);
  v78 = 0LL;
  sub_1800615B4(*a2 + 16, (__int64)&v78);
  v30 = 0LL;
  sub_180075A7C((__int64)a1, &v30, a2);
  if ( (_QWORD)v30 )
    sub_180116FB0();
  if ( *((_QWORD *)&v30 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v30 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v4 = *((_QWORD *)&v30 + 1);
      (***((void (__fastcall ****)(_QWORD))&v30 + 1))(*((_QWORD *)&v30 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v30 + 1) + 8LL))(*((_QWORD *)&v30 + 1));
    }
  }
  memset(v79, 0, sizeof(v79));
  v33 = 0LL;
  v5 = a1[59];
  if ( v5 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    v5 = a1[59];
  }
  *(_QWORD *)&v33 = a1[58];
  *((_QWORD *)&v33 + 1) = v5;
  sub_18010E810(
    (unsigned int)v79,
    (unsigned int)&v33,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    750,
    (__int64)"UpdateScene",
    (__int64)"PreUpdateScene",
    1);
  v61 = 0LL;
  v62 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 14LL;
  strcpy((char *)v31, "PreUpdateScene");
  v6 = sub_1800752F4((__int64)a1, &v69);
  v7 = (volatile signed __int32 *)v6[1];
  if ( v7 )
  {
    _InterlockedIncrement(v7 + 3);
    v7 = (volatile signed __int32 *)v6[1];
  }
  v34 = *v6;
  v35 = v7;
  sub_1800715C8(&v61, &v34, (__int64)v31);
  if ( v35 && _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
  v8 = v70;
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v9 = v31[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v9 = *(_QWORD *)(v31[0] - 8LL);
      if ( (unsigned __int64)(v31[0] - v9 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v9, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v9);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v31[0]) = 0;
  (*(void (__fastcall **)(_QWORD *, __int64 *))(*a1 + 96LL))(a1, a2);
  sub_18007235C((__int64 *)&v61);
  sub_18010E9F8(v79);
  memset(v80, 0, sizeof(v80));
  v36 = 0LL;
  v10 = a1[59];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a1[59];
  }
  *(_QWORD *)&v36 = a1[58];
  *((_QWORD *)&v36 + 1) = v10;
  sub_18010E810(
    (unsigned int)v80,
    (unsigned int)&v36,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    765,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PreSceneUpdate",
    1);
  v63 = 0LL;
  v64 = 0LL;
  v48 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v47[0]) = 0;
  sub_18000FB34(v47, 0x1FuLL, 0LL, "kSpectreRenderCB_PreSceneUpdate");
  v11 = sub_1800752F4((__int64)a1, &v71);
  v12 = (volatile signed __int32 *)v11[1];
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 3);
    v12 = (volatile signed __int32 *)v11[1];
  }
  v37 = *v11;
  v38 = v12;
  sub_1800715C8(&v63, &v37, (__int64)v47);
  if ( v38 && _InterlockedExchangeAdd(v38 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
  v13 = v72;
  if ( v72 )
  {
    if ( _InterlockedExchangeAdd(v72 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  if ( v48.m128i_i64[1] >= 0x10uLL )
  {
    v14 = v47[0];
    if ( (unsigned __int64)(v48.m128i_i64[1] + 1) >= 0x1000 )
    {
      v14 = *(_QWORD *)(v47[0] - 8);
      if ( (unsigned __int64)(v47[0] - v14 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v14, v48.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v14);
  }
  v48 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v47[0]) = 0;
  v54 = a1[121];
  v55 = 1;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  v56 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
  sub_1800E4150(v54, &v54);
  v57 = 0LL;
  v58 = 0LL;
  sub_1800762B0((__int64)a1, 1u, (__int64)&v58, (__int64)&v57);
  sub_18007235C((__int64 *)&v63);
  sub_18010E9F8(v80);
  memset(v81, 0, sizeof(v81));
  v39 = 0LL;
  v17 = a1[59];
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    v17 = a1[59];
  }
  *(_QWORD *)&v39 = a1[58];
  *((_QWORD *)&v39 + 1) = v17;
  sub_18010E810(
    (unsigned int)v81,
    (unsigned int)&v39,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    771,
    (__int64)"UpdateScene",
    (__int64)"Update Scene",
    1);
  v65 = 0LL;
  v66 = 0LL;
  v46.m128i_i64[1] = 15LL;
  v46.m128i_i64[0] = 12LL;
  strcpy((char *)v45, "Update Scene");
  v18 = sub_1800752F4((__int64)a1, &v73);
  v19 = (volatile signed __int32 *)v18[1];
  if ( v19 )
  {
    _InterlockedIncrement(v19 + 3);
    v19 = (volatile signed __int32 *)v18[1];
  }
  v40 = *v18;
  v41 = v19;
  sub_1800715C8(&v65, &v40, (__int64)v45);
  if ( v41 && !_InterlockedDecrement(v41 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
  v20 = v74;
  if ( v74 )
  {
    if ( !_InterlockedDecrement(v74 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( !_InterlockedDecrement(v20 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  if ( v46.m128i_i64[1] >= 0x10uLL )
  {
    v21 = v45[0];
    if ( (unsigned __int64)(v46.m128i_i64[1] + 1) >= 0x1000 )
    {
      v21 = *(_QWORD *)(v45[0] - 8LL);
      if ( (unsigned __int64)(v45[0] - v21 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v21, v46.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v21);
  }
  v46 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v45[0]) = 0;
  sub_1800891C4(*a2, a1 + 46);
  sub_18007235C((__int64 *)&v65);
  sub_18010E9F8(v81);
  memset(v82, 0, sizeof(v82));
  v42 = 0LL;
  v22 = a1[59];
  if ( v22 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v22 + 8));
    v22 = a1[59];
  }
  *(_QWORD *)&v42 = a1[58];
  *((_QWORD *)&v42 + 1) = v22;
  sub_18010E810(
    (unsigned int)v82,
    (unsigned int)&v42,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    777,
    (__int64)"UpdateScene",
    (__int64)"kSpectreRenderCB_PostSceneUpdate",
    1);
  v67 = 0LL;
  v68 = 0LL;
  v50 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v49[0]) = 0;
  sub_18000FB34(v49, 0x20uLL, 0LL, "kSpectreRenderCB_PostSceneUpdate");
  v23 = sub_1800752F4((__int64)a1, &v75);
  v24 = (volatile signed __int32 *)v23[1];
  if ( v24 )
  {
    _InterlockedIncrement(v24 + 3);
    v24 = (volatile signed __int32 *)v23[1];
  }
  v43 = *v23;
  v44 = v24;
  sub_1800715C8(&v67, &v43, (__int64)v49);
  if ( v44 && _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v44 + 8LL))(v44);
  v25 = v76;
  if ( v76 )
  {
    if ( _InterlockedExchangeAdd(v76 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
      if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
    }
  }
  if ( v50.m128i_i64[1] >= 0x10uLL )
  {
    v26 = v49[0];
    if ( (unsigned __int64)(v50.m128i_i64[1] + 1) >= 0x1000 )
    {
      v26 = *(_QWORD *)(v49[0] - 8);
      if ( (unsigned __int64)(v49[0] - v26 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v26, v50.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v26);
  }
  v50 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v49[0]) = 0;
  v51 = a1[121];
  v52 = 2;
  v27 = Query_perf_frequency();
  v28 = Query_perf_counter();
  v53 = 1000000000 * (v28 % v27) / v27 + 1000000000 * (v28 / v27);
  sub_1800E4150(v51, &v51);
  v59 = 0LL;
  v60 = 0LL;
  sub_1800762B0((__int64)a1, 2u, (__int64)&v60, (__int64)&v59);
  sub_18007235C((__int64 *)&v67);
  sub_18010E9F8(v82);
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64 *))(*a1 + 104LL))(a1, a2);
  if ( BYTE8(v78) )
    result = sub_180061A34(v78);
  if ( BYTE8(v77) )
    return sub_180061A34(v77);
  return result;
}
