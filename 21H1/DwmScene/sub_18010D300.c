/*
 * XREFs of sub_18010D300 @ 0x18010D300
 * Callers:
 *     <none>
 * Callees:
 *     ??0bad_function_call@std@@QEAA@XZ @ 0x18000FF20 (--0bad_function_call@std@@QEAA@XZ.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180065A68 @ 0x180065A68 (sub_180065A68.c)
 *     sub_18006AB04 @ 0x18006AB04 (sub_18006AB04.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800A13D0 @ 0x1800A13D0 (sub_1800A13D0.c)
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 *     sub_1800EFB3C @ 0x1800EFB3C (sub_1800EFB3C.c)
 *     sub_1800F05F8 @ 0x1800F05F8 (sub_1800F05F8.c)
 *     sub_18010CABC @ 0x18010CABC (sub_18010CABC.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
_QWORD *__fastcall sub_18010D300(unsigned __int64 *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v5; // r13
  __int64 v9; // rcx
  char *v10; // rax
  __int64 v11; // rcx
  char *v12; // rax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  int *v18; // rax
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rsi
  _QWORD *v22; // r15
  __int64 v23; // r13
  int *v24; // rax
  int v25; // edx
  int v26; // ecx
  __m128 v27; // xmm3
  __int64 v28; // rcx
  __int64 v29; // rax
  int v30; // edx
  int *v31; // rax
  int v32; // eax
  __m128 v33; // xmm3
  __m128 v34; // xmm2
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  char v38; // al
  volatile signed __int32 *v39; // rsi
  volatile signed __int32 *v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rax
  int v43; // eax
  signed __int32 v44; // eax
  int *v45; // rcx
  int v46; // edx
  __int64 *v47; // rax
  unsigned __int16 v48; // r15
  volatile signed __int32 *v49; // rsi
  __int64 v50; // rcx
  int *v51; // rax
  int v52; // edx
  int v53; // ecx
  __m128 v54; // xmm3
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // edx
  int *v58; // rax
  int v59; // eax
  __m128 v60; // xmm2
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rdx
  signed __int32 v64; // eax
  volatile signed __int32 *v65; // rsi
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // edx
  int *v69; // rax
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rax
  int v73; // edx
  int *v74; // rax
  int v75; // eax
  __m128 v76; // xmm2
  __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rcx
  __int64 v80; // rax
  __int64 v81; // rdx
  signed __int32 v82; // eax
  volatile signed __int32 *v83; // rdi
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // rax
  __int64 v87; // rbx
  __int128 v89; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v90; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+68h] [rbp-98h]
  _QWORD *v92; // [rsp+70h] [rbp-90h]
  unsigned __int64 v93; // [rsp+78h] [rbp-88h]
  unsigned __int64 v94; // [rsp+80h] [rbp-80h]
  unsigned __int64 v95; // [rsp+88h] [rbp-78h] BYREF
  __int128 *v96; // [rsp+90h] [rbp-70h]
  __int64 v97; // [rsp+98h] [rbp-68h]
  __int128 *v98; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v100; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v101; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v102; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v103; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v104; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v105; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v106; // [rsp+108h] [rbp+8h] BYREF
  __int128 v107; // [rsp+118h] [rbp+18h] BYREF
  _QWORD v108[3]; // [rsp+128h] [rbp+28h] BYREF
  unsigned __int64 v109; // [rsp+140h] [rbp+40h]
  __int128 v110; // [rsp+148h] [rbp+48h] BYREF
  __int128 v111; // [rsp+160h] [rbp+60h] BYREF
  __int128 v112; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int64 v113; // [rsp+180h] [rbp+80h]
  __int64 v114; // [rsp+188h] [rbp+88h]
  unsigned __int64 v115; // [rsp+190h] [rbp+90h]
  __int64 v116; // [rsp+198h] [rbp+98h]
  unsigned __int64 v117; // [rsp+1A0h] [rbp+A0h]
  __int64 v118; // [rsp+1A8h] [rbp+A8h]
  __int64 v119; // [rsp+1B0h] [rbp+B0h]
  unsigned __int64 v120; // [rsp+1B8h] [rbp+B8h]
  int v121; // [rsp+1C0h] [rbp+C0h] BYREF
  __int64 v122; // [rsp+1C8h] [rbp+C8h] BYREF
  volatile signed __int32 *v123; // [rsp+1D0h] [rbp+D0h]
  int v124; // [rsp+1D8h] [rbp+D8h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+1E0h] [rbp+E0h] BYREF
  _BYTE v126[24]; // [rsp+1F8h] [rbp+F8h] BYREF
  _BYTE v127[24]; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v128[24]; // [rsp+228h] [rbp+128h] BYREF
  unsigned __int64 v129; // [rsp+240h] [rbp+140h]
  unsigned __int64 v130; // [rsp+248h] [rbp+148h]
  unsigned __int64 v131; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int64 v132; // [rsp+258h] [rbp+158h]
  unsigned __int64 v133; // [rsp+260h] [rbp+160h]
  unsigned __int64 v134; // [rsp+268h] [rbp+168h]
  __int128 v135; // [rsp+270h] [rbp+170h] BYREF
  char v136[8]; // [rsp+280h] [rbp+180h] BYREF
  char v137; // [rsp+288h] [rbp+188h] BYREF
  char v138[8]; // [rsp+380h] [rbp+280h] BYREF
  char v139; // [rsp+388h] [rbp+288h] BYREF

  v5 = a4;
  v97 = a4;
  v92 = a2;
  v9 = 16LL;
  v10 = &v137;
  do
  {
    *((_QWORD *)v10 - 1) = 0LL;
    *(_QWORD *)v10 = 0LL;
    v10 += 16;
    --v9;
  }
  while ( v9 );
  v11 = 16LL;
  v12 = &v139;
  do
  {
    *((_QWORD *)v12 - 1) = 0LL;
    *(_QWORD *)v12 = 0LL;
    v12 += 16;
    --v11;
  }
  while ( v11 );
  v13 = a1[3];
  v110 = 0LL;
  v14 = *(_QWORD *)(a3 + 16);
  if ( !v14 )
  {
LABEL_136:
    std::bad_function_call::bad_function_call((std::bad_function_call *)v128);
    throw (std::bad_weak_ptr *)v128;
  }
  do
  {
    v15 = *(_DWORD *)(v14 + 8);
    if ( !v15 )
      goto LABEL_136;
  }
  while ( v15 != _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) );
  v110 = *(_OWORD *)(a3 + 8);
  (*(void (__fastcall **)(unsigned __int64, __int128 *))(*(_QWORD *)v13 + 88LL))(v13, &v110);
  v89 = 0LL;
  v16 = a5[1];
  if ( v16 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v16 = a5[1];
  }
  v17 = *a5;
  *(_QWORD *)&v89 = v17;
  *((_QWORD *)&v89 + 1) = v16;
  v18 = *(int **)(v17 + 128);
  if ( v18 )
    v19 = v18[1];
  else
    v19 = 0;
  if ( v18 )
    v20 = *v18;
  else
    v20 = 0;
  *(float *)&v130 = (float)v20;
  *((float *)&v130 + 1) = (float)v19;
  v21 = sub_18006AB04(a3);
  v90 = v21;
  v22 = (_QWORD *)a1[27];
  v92 = (_QWORD *)a1[28];
  if ( v22 != v92 )
  {
    v23 = 0LL;
    do
    {
      v132 = *(_QWORD *)(a1[30] + v23);
      v24 = *(int **)(v17 + 128);
      if ( v24 )
        v25 = v24[1];
      else
        v25 = 0;
      if ( v24 )
        v26 = *v24;
      else
        v26 = 0;
      *(float *)&v91 = (float)v26;
      *((float *)&v91 + 1) = (float)v25;
      v27 = _mm_div_ps((__m128)v130, (__m128)v91);
      LODWORD(v133) = v27.m128_i32[0];
      HIDWORD(v133) = _mm_shuffle_ps(v27, v27, 85).m128_u32[0];
      v28 = *(_QWORD *)(*v22 + 136LL);
      if ( v28 && (v29 = *(_QWORD *)(v28 + 128)) != 0 )
        v30 = *(_DWORD *)(v29 + 4);
      else
        v30 = 0;
      if ( v28 && (v31 = *(int **)(v28 + 128)) != 0LL )
        v32 = *v31;
      else
        v32 = 0;
      *(float *)&v93 = (float)v32;
      *((float *)&v93 + 1) = (float)v30;
      v33 = _mm_div_ps((__m128)v93, (__m128)v132);
      v134 = __PAIR64__(_mm_shuffle_ps(v33, v33, 85).m128_u32[0], v33.m128_u32[0]);
      v34 = _mm_mul_ps((__m128)v134, (__m128)v133);
      v113 = __PAIR64__(_mm_shuffle_ps(v34, v34, 85).m128_u32[0], v34.m128_u32[0]);
      v114 = 0LL;
      v35 = sub_1800759E4(v21);
      sub_1800A13D0(v35);
      v135 = 0LL;
      v96 = &v107;
      v98 = &v111;
      v107 = 0LL;
      v36 = v22[1];
      if ( v36 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v36 + 8));
        v36 = v22[1];
      }
      *(_QWORD *)&v107 = *v22;
      *((_QWORD *)&v107 + 1) = v36;
      v111 = 0LL;
      if ( *((_QWORD *)&v89 + 1) )
        _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL));
      v111 = v89;
      v102 = 0LL;
      v37 = *(_QWORD *)(a3 + 16);
      if ( v37 )
      {
        while ( 1 )
        {
          v44 = *(_DWORD *)(v37 + 8);
          if ( !v44 )
            break;
          if ( v44 == _InterlockedCompareExchange((volatile signed __int32 *)(v37 + 8), v44 + 1, v44) )
          {
            v102 = *(_OWORD *)(a3 + 8);
            v38 = 1;
            goto LABEL_40;
          }
        }
      }
      v38 = 0;
LABEL_40:
      if ( !v38 )
      {
        std::bad_function_call::bad_function_call((std::bad_function_call *)pExceptionObject);
        throw (std::bad_weak_ptr *)pExceptionObject;
      }
      (*(void (__fastcall **)(unsigned __int64 *, __int128 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 56))(
        a1,
        &v135,
        &v102,
        v97,
        &v111,
        &v107);
      v39 = (volatile signed __int32 *)*((_QWORD *)&v102 + 1);
      if ( *((_QWORD *)&v102 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v102 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        }
      }
      std::shared_ptr<__ExceptionPtr>::operator=(&v89, &v135);
      v130 = v132;
      v23 += 8LL;
      v40 = (volatile signed __int32 *)*((_QWORD *)&v135 + 1);
      if ( *((_QWORD *)&v135 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v135 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v40)(v40);
          if ( _InterlockedExchangeAdd(v40 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v40 + 8LL))(v40);
        }
      }
      v22 += 2;
      v17 = v89;
      v21 = v90;
    }
    while ( v22 != v92 );
    v5 = v97;
  }
  if ( v17 )
  {
    v41 = *(_QWORD *)(a1[23] + 136);
    if ( v41 && (v42 = *(_QWORD *)(v41 + 128)) != 0 )
      v43 = *(_DWORD *)(v42 + 4);
    else
      v43 = 0;
    v45 = *(int **)(v17 + 128);
    if ( v45 )
      v46 = *v45;
    else
      v46 = 0;
    sub_18010CABC((__int64)a1, (__int64)v136, (__int64)v138, (float)v46, (float)v43);
    v109 = 15LL;
    v108[2] = 15LL;
    strcpy((char *)v108, "BlurSampleArray");
    v47 = sub_1800EFB3C(a1[36], &v122);
    v48 = sub_1800ED08C(*v47, (__int64)v108);
    v49 = v123;
    if ( v123 )
    {
      if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v49)(v49);
        if ( _InterlockedExchangeAdd(v49 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v49 + 8LL))(v49);
      }
    }
    if ( v109 >= 0x10 )
    {
      v50 = v108[0];
      if ( v109 + 1 >= 0x1000 )
      {
        v50 = *(_QWORD *)(v108[0] - 8LL);
        if ( (unsigned __int64)(v108[0] - v50 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v50, v109 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v50);
    }
    sub_1800F05F8(a1[36], v48, v136, 0x10u);
    v51 = *(int **)(v17 + 128);
    if ( v51 )
      v52 = v51[1];
    else
      v52 = 0;
    if ( v51 )
      v53 = *v51;
    else
      v53 = 0;
    *(float *)&v94 = (float)v53;
    *((float *)&v94 + 1) = (float)v52;
    v54 = _mm_div_ps((__m128)v130, (__m128)v94);
    LODWORD(v129) = v54.m128_i32[0];
    HIDWORD(v129) = _mm_shuffle_ps(v54, v54, 85).m128_u32[0];
    v55 = *(_QWORD *)(a1[23] + 136);
    if ( v55 && (v56 = *(_QWORD *)(v55 + 128)) != 0 )
      v57 = *(_DWORD *)(v56 + 4);
    else
      v57 = 0;
    if ( v55 && (v58 = *(int **)(v55 + 128)) != 0LL )
      v59 = *v58;
    else
      v59 = 0;
    *(float *)&v99 = (float)v59;
    *((float *)&v99 + 1) = (float)v57;
    sub_180065A68(&v131, &v99, a1 + 33);
    v60 = _mm_mul_ps((__m128)v131, (__m128)v129);
    v115 = __PAIR64__(_mm_shuffle_ps(v60, v60, 85).m128_u32[0], v60.m128_u32[0]);
    v116 = 0LL;
    v61 = sub_1800759E4(v90);
    sub_1800A13D0(v61);
    v98 = &v103;
    v96 = &v112;
    v103 = 0LL;
    v62 = a1[24];
    if ( v62 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v62 + 8));
      v62 = a1[24];
    }
    *(_QWORD *)&v103 = a1[23];
    *((_QWORD *)&v103 + 1) = v62;
    v112 = 0LL;
    if ( *((_QWORD *)&v89 + 1) )
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL));
    v112 = v89;
    v104 = 0LL;
    v63 = *(_QWORD *)(a3 + 16);
    if ( !v63 )
    {
LABEL_137:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v127);
      throw (std::bad_weak_ptr *)v127;
    }
    do
    {
      v64 = *(_DWORD *)(v63 + 8);
      if ( !v64 )
        goto LABEL_137;
    }
    while ( v64 != _InterlockedCompareExchange((volatile signed __int32 *)(v63 + 8), v64 + 1, v64) );
    v104 = *(_OWORD *)(a3 + 8);
    (*(void (__fastcall **)(unsigned __int64 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 48))(
      a1,
      &v104,
      v5,
      &v112,
      &v103);
    v65 = (volatile signed __int32 *)*((_QWORD *)&v104 + 1);
    if ( *((_QWORD *)&v104 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v104 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v65)(v65);
        if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
      }
    }
    sub_1800F05F8(a1[36], v48, v138, 0x10u);
    v66 = *(_QWORD *)(a1[23] + 136);
    if ( v66 && (v67 = *(_QWORD *)(v66 + 128)) != 0 )
      v68 = *(_DWORD *)(v67 + 4);
    else
      v68 = 0;
    if ( v66 && (v69 = *(int **)(v66 + 128)) != 0LL )
      v70 = *v69;
    else
      v70 = 0;
    *(float *)&v100 = (float)v70;
    *((float *)&v100 + 1) = (float)v68;
    v129 = *(_QWORD *)sub_180065A68(&v124, a1 + 33, &v100);
    v71 = *(_QWORD *)(a1[25] + 136);
    if ( v71 && (v72 = *(_QWORD *)(v71 + 128)) != 0 )
      v73 = *(_DWORD *)(v72 + 4);
    else
      v73 = 0;
    if ( v71 && (v74 = *(int **)(v71 + 128)) != 0LL )
      v75 = *v74;
    else
      v75 = 0;
    *(float *)&v95 = (float)v75;
    *((float *)&v95 + 1) = (float)v73;
    v131 = *(_QWORD *)sub_180065A68(&v121, &v95, a1 + 33);
    v76 = _mm_mul_ps((__m128)v131, (__m128)v129);
    v117 = __PAIR64__(_mm_shuffle_ps(v76, v76, 85).m128_u32[0], v76.m128_u32[0]);
    v118 = 0LL;
    v21 = v90;
    v77 = sub_1800759E4(v90);
    sub_1800A13D0(v77);
    v98 = &v105;
    v96 = &v101;
    v105 = 0LL;
    v78 = a1[26];
    if ( v78 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v78 + 8));
      v78 = a1[26];
    }
    *(_QWORD *)&v105 = a1[25];
    *((_QWORD *)&v105 + 1) = v78;
    v79 = a1[23];
    v101 = 0LL;
    v80 = *(_QWORD *)(v79 + 144);
    if ( v80 )
      _InterlockedIncrement((volatile signed __int32 *)(v80 + 8));
    v101 = *(_OWORD *)(v79 + 136);
    v106 = 0LL;
    v81 = *(_QWORD *)(a3 + 16);
    if ( !v81 )
    {
LABEL_138:
      std::bad_function_call::bad_function_call((std::bad_function_call *)v126);
      throw (std::bad_weak_ptr *)v126;
    }
    do
    {
      v82 = *(_DWORD *)(v81 + 8);
      if ( !v82 )
        goto LABEL_138;
    }
    while ( v82 != _InterlockedCompareExchange((volatile signed __int32 *)(v81 + 8), v82 + 1, v82) );
    v106 = *(_OWORD *)(a3 + 8);
    (*(void (__fastcall **)(unsigned __int64 *, __int128 *, __int64, __int128 *, __int128 *))(*a1 + 48))(
      a1,
      &v106,
      v5,
      &v101,
      &v105);
    v83 = (volatile signed __int32 *)*((_QWORD *)&v106 + 1);
    if ( *((_QWORD *)&v106 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v106 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v83)(v83);
        if ( _InterlockedExchangeAdd(v83 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v83 + 8LL))(v83);
      }
    }
  }
  v119 = 0x3F8000003F800000LL;
  v120 = _mm_srli_si128((__m128i)xmmword_1801D1960, 8).m128i_u64[0];
  v84 = sub_1800759E4(v21);
  sub_1800A13D0(v84);
  v85 = a1[25];
  *a2 = 0LL;
  a2[1] = 0LL;
  v86 = *(_QWORD *)(v85 + 144);
  if ( v86 )
    _InterlockedIncrement((volatile signed __int32 *)(v86 + 8));
  *a2 = *(_QWORD *)(v85 + 136);
  a2[1] = *(_QWORD *)(v85 + 144);
  if ( *((_QWORD *)&v89 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v87 = *((_QWORD *)&v89 + 1);
      (***((void (__fastcall ****)(_QWORD))&v89 + 1))(*((_QWORD *)&v89 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v87 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v89 + 1) + 8LL))(*((_QWORD *)&v89 + 1));
    }
  }
  return a2;
}
