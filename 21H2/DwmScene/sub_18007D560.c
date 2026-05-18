/*
 * XREFs of sub_18007D560 @ 0x18007D560
 * Callers:
 *     sub_1800B51BC @ 0x1800B51BC (sub_1800B51BC.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     sub_180076E98 @ 0x180076E98 (sub_180076E98.c)
 *     sub_180077C2C @ 0x180077C2C (sub_180077C2C.c)
 *     sub_18007ABC4 @ 0x18007ABC4 (sub_18007ABC4.c)
 *     sub_18007BB80 @ 0x18007BB80 (sub_18007BB80.c)
 *     sub_1800A5650 @ 0x1800A5650 (sub_1800A5650.c)
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

// Hidden C++ exception states: #wind=35
__int64 __fastcall sub_18007D560(_QWORD *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 *v18; // rax
  volatile signed __int32 *v19; // rcx
  volatile signed __int32 *v20; // rbx
  __int64 v21; // rcx
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 *v26; // rax
  volatile signed __int32 *v27; // rcx
  volatile signed __int32 *v28; // rbx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 *v31; // rax
  volatile signed __int32 *v32; // rcx
  volatile signed __int32 *v33; // rbx
  __int64 v34; // rcx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rcx
  volatile signed __int32 *v38; // rbx
  _QWORD v40[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-A8h]
  _QWORD v42[2]; // [rsp+68h] [rbp-98h] BYREF
  __m128i v43; // [rsp+78h] [rbp-88h]
  __int128 v44; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+98h] [rbp-68h] BYREF
  volatile signed __int32 *v46; // [rsp+A0h] [rbp-60h]
  __int128 v47; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v48; // [rsp+B8h] [rbp-48h] BYREF
  volatile signed __int32 *v49; // [rsp+C0h] [rbp-40h]
  __int128 v50; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v51; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-18h] BYREF
  volatile signed __int32 *v53; // [rsp+F0h] [rbp-10h]
  __int128 v54; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v55; // [rsp+108h] [rbp+8h] BYREF
  volatile signed __int32 *v56; // [rsp+110h] [rbp+10h]
  __int128 v57; // [rsp+118h] [rbp+18h] BYREF
  __int128 v58; // [rsp+130h] [rbp+30h] BYREF
  __int128 v59; // [rsp+140h] [rbp+40h] BYREF
  __int64 v60[2]; // [rsp+150h] [rbp+50h] BYREF
  __m128i v61; // [rsp+160h] [rbp+60h]
  __int64 v62[2]; // [rsp+170h] [rbp+70h] BYREF
  __m128i v63; // [rsp+180h] [rbp+80h]
  __int64 v64; // [rsp+190h] [rbp+90h] BYREF
  int v65; // [rsp+198h] [rbp+98h]
  __int64 v66; // [rsp+1A0h] [rbp+A0h]
  __int64 v67; // [rsp+1A8h] [rbp+A8h] BYREF
  int v68; // [rsp+1B0h] [rbp+B0h]
  __int64 v69; // [rsp+1B8h] [rbp+B8h]
  __int128 v70; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v71; // [rsp+1D0h] [rbp+D0h]
  __int128 v72; // [rsp+1D8h] [rbp+D8h] BYREF
  __int64 v73; // [rsp+1E8h] [rbp+E8h]
  __int128 v74; // [rsp+1F0h] [rbp+F0h] BYREF
  __int64 v75; // [rsp+200h] [rbp+100h]
  __int128 v76; // [rsp+208h] [rbp+108h] BYREF
  __int64 v77; // [rsp+218h] [rbp+118h]
  __int64 v78; // [rsp+220h] [rbp+120h] BYREF
  volatile signed __int32 *v79; // [rsp+228h] [rbp+128h]
  __int64 v80; // [rsp+230h] [rbp+130h] BYREF
  volatile signed __int32 *v81; // [rsp+238h] [rbp+138h]
  _BYTE v82[8]; // [rsp+240h] [rbp+140h] BYREF
  __int64 v83; // [rsp+248h] [rbp+148h]
  __int64 v84; // [rsp+250h] [rbp+150h] BYREF
  volatile signed __int32 *v85; // [rsp+258h] [rbp+158h]
  __int64 v86; // [rsp+260h] [rbp+160h] BYREF
  volatile signed __int32 *v87; // [rsp+268h] [rbp+168h]
  __int128 v88; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v89[64]; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v90[64]; // [rsp+2C0h] [rbp+1C0h] BYREF
  _BYTE v91[64]; // [rsp+300h] [rbp+200h] BYREF
  _BYTE v92[64]; // [rsp+340h] [rbp+240h] BYREF

  memset(v92, 0, sizeof(v92));
  v44 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[59];
  }
  *(_QWORD *)&v44 = a1[58];
  *((_QWORD *)&v44 + 1) = v8;
  sub_1801140E0(
    (unsigned int)v92,
    (unsigned int)&v44,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1017,
    (__int64)"RenderContent",
    (__int64)"RenderContent",
    1);
  v76 = 0LL;
  v77 = 0LL;
  si128.m128i_i64[1] = 15LL;
  si128.m128i_i64[0] = 13LL;
  strcpy((char *)v40, "RenderContent");
  v9 = sub_18007ABC4((__int64)a1, &v80);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v45 = *v9;
  v46 = v10;
  sub_180076E98(&v76, &v45, (__int64)v40);
  if ( v46 && _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
  v11 = v81;
  if ( v81 )
  {
    if ( _InterlockedExchangeAdd(v81 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v40[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v40[0] - 8LL);
      if ( (unsigned __int64)(v40[0] - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_180140550);
  LOBYTE(v40[0]) = 0;
  v88 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 376LL))(*a4, v82);
  v88 = 0LL;
  v14 = *(_QWORD *)(v13 + 8);
  if ( v14 )
  {
    while ( 1 )
    {
      v15 = *(_DWORD *)(v14 + 8);
      if ( !v15 )
        break;
      if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
      {
        v88 = *(_OWORD *)v13;
        break;
      }
    }
  }
  v16 = v83;
  if ( v83 && !_InterlockedDecrement((volatile signed __int32 *)(v83 + 12)) )
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 8LL))(v16, v14, v13);
  if ( (_QWORD)v88
    && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v88 + 16LL))(v88, v14, v13) )
  {
    memset(v89, 0, sizeof(v89));
    v47 = 0LL;
    v17 = a1[59];
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
      v17 = a1[59];
    }
    *(_QWORD *)&v47 = a1[58];
    *((_QWORD *)&v47 + 1) = v17;
    sub_1801140E0(
      (unsigned int)v89,
      (unsigned int)&v47,
      (unsigned int)"..\\Source\\Engine\\Engine.cpp",
      1025,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_PreRender",
      1);
    v70 = 0LL;
    v71 = 0LL;
    v61 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v60[0]) = 0;
    sub_18000FC14(v60, 0x1AuLL, 0LL, "kSpectreRenderCB_PreRender");
    v18 = sub_18007ABC4((__int64)a1, &v84);
    v19 = (volatile signed __int32 *)v18[1];
    if ( v19 )
    {
      _InterlockedIncrement(v19 + 3);
      v19 = (volatile signed __int32 *)v18[1];
    }
    v48 = *v18;
    v49 = v19;
    sub_180076E98(&v70, &v48, (__int64)v60);
    if ( v49 && _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
    v20 = v85;
    if ( v85 )
    {
      if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    if ( v61.m128i_i64[1] >= 0x10uLL )
    {
      v21 = v60[0];
      if ( (unsigned __int64)(v61.m128i_i64[1] + 1) >= 0x1000 )
      {
        v21 = *(_QWORD *)(v60[0] - 8);
        if ( (unsigned __int64)(v60[0] - v21 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v21, v61.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v21);
    }
    v61 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v60[0]) = 0;
    v64 = a1[121];
    v65 = 3;
    perf_frequency = Query_perf_frequency();
    perf_counter = Query_perf_counter();
    v66 = 1000000000 * (perf_counter % perf_frequency) / perf_frequency + 1000000000 * (perf_counter / perf_frequency);
    sub_1800E9A20(v64, &v64);
    v50 = 0LL;
    v24 = a4[1];
    if ( v24 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
      v24 = a4[1];
    }
    *(_QWORD *)&v50 = *a4;
    *((_QWORD *)&v50 + 1) = v24;
    v58 = 0LL;
    if ( *((_QWORD *)&v88 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v88 + 1) + 8LL));
    v58 = v88;
    sub_18007BB80((__int64)a1, 3u, (__int64)&v58, (__int64)&v50);
    sub_180077C2C((__int64 *)&v70);
    sub_1801142C8(v89);
    memset(v90, 0, sizeof(v90));
    v51 = 0LL;
    v25 = a1[59];
    if ( v25 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v25 + 8));
      v25 = a1[59];
    }
    *(_QWORD *)&v51 = a1[58];
    *((_QWORD *)&v51 + 1) = v25;
    sub_1801140E0(
      (unsigned int)v90,
      (unsigned int)&v51,
      (unsigned int)"..\\Source\\Engine\\Engine.cpp",
      1030,
      (__int64)"RenderContent",
      (__int64)"RenderScene",
      1);
    v72 = 0LL;
    v73 = 0LL;
    v43.m128i_i64[1] = 15LL;
    v43.m128i_i64[0] = 11LL;
    strcpy((char *)v42, "RenderScene");
    v26 = sub_18007ABC4((__int64)a1, &v86);
    v27 = (volatile signed __int32 *)v26[1];
    if ( v27 )
    {
      _InterlockedIncrement(v27 + 3);
      v27 = (volatile signed __int32 *)v26[1];
    }
    v52 = *v26;
    v53 = v27;
    sub_180076E98(&v72, &v52, (__int64)v42);
    if ( v53 && _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
    v28 = v87;
    if ( v87 )
    {
      if ( _InterlockedExchangeAdd(v87 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v28)(v28);
        if ( _InterlockedExchangeAdd(v28 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v28 + 8LL))(v28);
      }
    }
    if ( v43.m128i_i64[1] >= 0x10uLL )
    {
      v29 = v42[0];
      if ( (unsigned __int64)(v43.m128i_i64[1] + 1) >= 0x1000 )
      {
        v29 = *(_QWORD *)(v42[0] - 8LL);
        if ( (unsigned __int64)(v42[0] - v29 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v29, v43.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v29);
    }
    v43 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v42[0]) = 0;
    (*(void (__fastcall **)(_QWORD *, __int64, __int64, __int128 *, _QWORD *))(*a1 + 128LL))(a1, a2, a3, &v88, a4);
    sub_180077C2C((__int64 *)&v72);
    sub_1801142C8(v90);
    memset(v91, 0, sizeof(v91));
    v54 = 0LL;
    v30 = a1[59];
    if ( v30 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v30 + 8));
      v30 = a1[59];
    }
    *(_QWORD *)&v54 = a1[58];
    *((_QWORD *)&v54 + 1) = v30;
    sub_1801140E0(
      (unsigned int)v91,
      (unsigned int)&v54,
      (unsigned int)"..\\Source\\Engine\\Engine.cpp",
      1036,
      (__int64)"RenderContent",
      (__int64)"kSpectreRenderCB_EndFrame",
      1);
    v74 = 0LL;
    v75 = 0LL;
    v63 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v62[0]) = 0;
    sub_18000FC14(v62, 0x19uLL, 0LL, "kSpectreRenderCB_EndFrame");
    v31 = sub_18007ABC4((__int64)a1, &v78);
    v32 = (volatile signed __int32 *)v31[1];
    if ( v32 )
    {
      _InterlockedIncrement(v32 + 3);
      v32 = (volatile signed __int32 *)v31[1];
    }
    v55 = *v31;
    v56 = v32;
    sub_180076E98(&v74, &v55, (__int64)v62);
    if ( v56 && _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
    v33 = v79;
    if ( v79 )
    {
      if ( _InterlockedExchangeAdd(v79 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v33)(v33);
        if ( _InterlockedExchangeAdd(v33 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 8LL))(v33);
      }
    }
    if ( v63.m128i_i64[1] >= 0x10uLL )
    {
      v34 = v62[0];
      if ( (unsigned __int64)(v63.m128i_i64[1] + 1) >= 0x1000 )
      {
        v34 = *(_QWORD *)(v62[0] - 8);
        if ( (unsigned __int64)(v62[0] - v34 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v34, v63.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v34);
    }
    v63 = _mm_load_si128((const __m128i *)&xmmword_180140550);
    LOBYTE(v62[0]) = 0;
    v67 = a1[121];
    v68 = 5;
    v35 = Query_perf_frequency();
    v36 = Query_perf_counter();
    v69 = 1000000000 * (v36 % v35) / v35 + 1000000000 * (v36 / v35);
    sub_1800E9A20(v67, &v67);
    v57 = 0LL;
    v37 = a4[1];
    if ( v37 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 8));
      v37 = a4[1];
    }
    *(_QWORD *)&v57 = *a4;
    *((_QWORD *)&v57 + 1) = v37;
    v59 = 0LL;
    if ( *((_QWORD *)&v88 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v88 + 1) + 8LL));
    v59 = v88;
    sub_18007BB80((__int64)a1, 5u, (__int64)&v59, (__int64)&v57);
    sub_180077C2C((__int64 *)&v74);
    sub_1801142C8(v91);
  }
  v38 = (volatile signed __int32 *)*((_QWORD *)&v88 + 1);
  if ( *((_QWORD *)&v88 + 1) )
  {
    if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v88 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *, __int64, __int64))v38)(v38, v14, v13);
      if ( !_InterlockedDecrement(v38 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v38 + 8LL))(v38);
    }
  }
  sub_1800A5650(a1[64], v14, v13);
  sub_180077C2C((__int64 *)&v76);
  return sub_1801142C8(v92);
}
