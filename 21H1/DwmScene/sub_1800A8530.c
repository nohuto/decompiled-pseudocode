/*
 * XREFs of sub_1800A8530 @ 0x1800A8530
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800687FC @ 0x1800687FC (sub_1800687FC.c)
 *     sub_180068860 @ 0x180068860 (sub_180068860.c)
 *     sub_1800689C8 @ 0x1800689C8 (sub_1800689C8.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_18007FC9C @ 0x18007FC9C (sub_18007FC9C.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_1800A1330 @ 0x1800A1330 (sub_1800A1330.c)
 *     sub_1800A133C @ 0x1800A133C (sub_1800A133C.c)
 *     sub_1800A1348 @ 0x1800A1348 (sub_1800A1348.c)
 *     sub_1800A13D0 @ 0x1800A13D0 (sub_1800A13D0.c)
 *     sub_1800AA03C @ 0x1800AA03C (sub_1800AA03C.c)
 *     sub_1800AA078 @ 0x1800AA078 (sub_1800AA078.c)
 *     sub_1800AA0C8 @ 0x1800AA0C8 (sub_1800AA0C8.c)
 *     sub_1800AA14C @ 0x1800AA14C (sub_1800AA14C.c)
 *     sub_1800AA188 @ 0x1800AA188 (sub_1800AA188.c)
 *     sub_1800ACD60 @ 0x1800ACD60 (sub_1800ACD60.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     sub_1801163DC @ 0x1801163DC (sub_1801163DC.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800A8530(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rbx
  volatile signed __int32 *v9; // rbx
  _QWORD *v10; // r8
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  volatile signed __int32 *v14; // rbx
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // rdi
  int v18; // xmm6_4
  int v19; // eax
  __int128 v20; // xmm13
  __m128 v21; // xmm11
  int v22; // edi
  __m128 v23; // xmm10
  int v24; // ebx
  char v25; // al
  __int128 v26; // xmm0
  int v27; // edx
  int v28; // r15d
  int v29; // r12d
  int v30; // esi
  int v31; // eax
  int v32; // esi
  int v33; // eax
  int v34; // ecx
  int v35; // r15d
  int v36; // r12d
  char v37; // bl
  __m128 v38; // xmm13
  __m128 v39; // xmm14
  float v40; // xmm6_4
  float v41; // xmm9_4
  __m128 v42; // xmm3
  __m128 v43; // xmm4
  __m128 v44; // xmm2
  float v45; // xmm10_4
  float v46; // xmm11_4
  __m128 v47; // xmm3
  __m128 v48; // xmm2
  unsigned __int32 v49; // xmm0_4
  __m128 v50; // xmm5
  __m128 v51; // xmm2
  __m128 v52; // xmm3
  int v53; // esi
  int v54; // edi
  int v55; // ebx
  int v56; // r9d
  int v57; // ecx
  int v58; // edx
  int v59; // r8d
  int v60; // eax
  __int64 v61; // r8
  __int64 v62; // r9
  int v63; // r15d
  int v64; // r15d
  const char *v65; // r9
  const char *v66; // r9
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // r8
  volatile signed __int32 *v70; // rbx
  __int64 v71; // rdx
  signed __int32 v72; // eax
  __int64 v73; // r8
  volatile signed __int32 *v74; // rbx
  __int64 v75; // rdx
  signed __int32 v76; // eax
  float *v77; // rax
  __m128 v78; // xmm2
  __int64 v79; // rax
  __int64 result; // rax
  volatile signed __int32 *v81; // rbx
  int v82; // [rsp+30h] [rbp-D8h]
  char v83; // [rsp+48h] [rbp-C0h]
  __int128 v84; // [rsp+50h] [rbp-B8h]
  __int128 v85; // [rsp+50h] [rbp-B8h]
  __int128 v86; // [rsp+50h] [rbp-B8h]
  int v87; // [rsp+60h] [rbp-A8h]
  int v88; // [rsp+64h] [rbp-A4h]
  unsigned __int64 v89; // [rsp+78h] [rbp-90h]
  __int64 v90; // [rsp+98h] [rbp-70h] BYREF
  __int128 v91; // [rsp+A8h] [rbp-60h] BYREF
  int v92; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v93; // [rsp+D0h] [rbp-38h] BYREF
  __int128 v94; // [rsp+E0h] [rbp-28h] BYREF
  char v95[8]; // [rsp+F0h] [rbp-18h] BYREF
  volatile signed __int32 *v96; // [rsp+F8h] [rbp-10h]
  char v97[8]; // [rsp+100h] [rbp-8h] BYREF
  volatile signed __int32 *v98; // [rsp+108h] [rbp+0h]
  __int128 v99; // [rsp+118h] [rbp+10h] BYREF
  __int128 v100; // [rsp+128h] [rbp+20h] BYREF
  __int64 v101; // [rsp+138h] [rbp+30h]
  volatile signed __int32 *v102; // [rsp+140h] [rbp+38h]
  __int64 v103; // [rsp+148h] [rbp+40h]
  volatile signed __int32 *v104; // [rsp+150h] [rbp+48h]
  __int128 v105; // [rsp+158h] [rbp+50h]
  __int128 v106; // [rsp+168h] [rbp+60h]
  __int128 v107; // [rsp+178h] [rbp+70h]
  __int128 v108; // [rsp+188h] [rbp+80h]
  __int128 v109; // [rsp+198h] [rbp+90h]
  __int128 v110; // [rsp+1A8h] [rbp+A0h]
  __int128 v111; // [rsp+1B8h] [rbp+B0h]
  __int128 v112; // [rsp+1C8h] [rbp+C0h]
  __int128 v113; // [rsp+1D8h] [rbp+D0h]
  __int128 v114; // [rsp+1E8h] [rbp+E0h]
  __int128 v115; // [rsp+1F8h] [rbp+F0h]
  char v116[64]; // [rsp+208h] [rbp+100h] BYREF
  char v117[64]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v118; // [rsp+288h] [rbp+180h] BYREF
  unsigned __int32 v119; // [rsp+290h] [rbp+188h]
  __int128 v120; // [rsp+298h] [rbp+190h] BYREF
  __int128 v121; // [rsp+2A8h] [rbp+1A0h]
  float v122; // [rsp+2B8h] [rbp+1B0h] BYREF
  float v123; // [rsp+2BCh] [rbp+1B4h]
  unsigned int v124; // [rsp+2C0h] [rbp+1B8h]
  float v125; // [rsp+2C4h] [rbp+1BCh]
  float v126; // [rsp+2C8h] [rbp+1C0h]
  unsigned int v127; // [rsp+2CCh] [rbp+1C4h]
  unsigned __int64 v128; // [rsp+2D0h] [rbp+1C8h]
  unsigned __int64 v129; // [rsp+2D8h] [rbp+1D0h]
  _DWORD v130[2]; // [rsp+2E0h] [rbp+1D8h] BYREF
  __int128 v131; // [rsp+2E8h] [rbp+1E0h]
  char v132; // [rsp+2F8h] [rbp+1F0h]
  __int128 v133; // [rsp+308h] [rbp+200h] BYREF
  __int128 v134; // [rsp+318h] [rbp+210h]
  __int128 v135; // [rsp+328h] [rbp+220h]
  __int128 v136; // [rsp+338h] [rbp+230h]

  v120 = 0LL;
  sub_1800AA078(a1, &v120, a2);
  if ( (*(_BYTE *)(a1 + 440) & 1) != 0 )
  {
    v5 = sub_1800EB244(a1);
    v6 = sub_1800759E4(v5);
    v7 = v6;
    if ( *(_QWORD *)(a1 + 200) )
    {
      v94 = 0LL;
      sub_1800A1348(v6, a1 + 184, &v94);
      v8 = (volatile signed __int32 *)*((_QWORD *)&v94 + 1);
      if ( *((_QWORD *)&v94 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v94 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 232) )
    {
      v93 = 0LL;
      sub_1800A1348(v7, a1 + 216, &v93);
      v9 = (volatile signed __int32 *)*((_QWORD *)&v93 + 1);
      if ( *((_QWORD *)&v93 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v93 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
          if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
        }
      }
    }
    if ( *(_QWORD *)(a1 + 264) )
    {
      v108 = xmmword_18020DC20;
      v109 = xmmword_18020DC30;
      v110 = xmmword_18020DC40;
      v111 = xmmword_18020DC50;
      sub_1800A1330(v7);
    }
  }
  v10 = (_QWORD *)(a1 + 152);
  if ( *(_QWORD *)(a1 + 136) || *v10 )
  {
    sub_1800687FC(v120, a1 + 136, (__int64)v10);
  }
  else
  {
    v11 = *a3;
    v12 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)*a3 + 40LL))(*a3, v97);
    v13 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v11 + 32LL))(v11, v95);
    sub_1800687FC(v120, v13, v12);
    v14 = v96;
    if ( v96 )
    {
      if ( _InterlockedExchangeAdd(v96 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
        if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
      }
    }
    v15 = v98;
    if ( v98 )
    {
      if ( _InterlockedExchangeAdd(v98 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
        if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
      }
    }
    v16 = *a3;
    v17 = v120;
    *(float *)&v18 = (float)(*(int (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 88LL))(*a3);
    v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 80LL))(v16);
    sub_1800689C8(v17, 0.0, 0.0, (float)v19, v18, 0, 1065353216);
  }
  v20 = xmmword_1801D1960;
  sub_1800AA03C(a1, v130);
  v21 = (__m128)v130[0];
  v22 = (int)o_roundf();
  v23 = (__m128)v130[1];
  v24 = (int)o_roundf();
  v25 = 0;
  v132 = 0;
  if ( *(_BYTE *)(a1 + 388) )
  {
    v26 = *(_OWORD *)(a1 + 372);
    v131 = v26;
    v25 = 1;
    v132 = 1;
  }
  else
  {
    v26 = v131;
  }
  if ( v25 )
  {
    v121 = v26;
    v27 = HIDWORD(v26);
    v28 = DWORD2(v26);
    v29 = DWORD1(v26);
    v30 = v26;
  }
  else
  {
    sub_1800AA188(a1, &v92);
    v30 = (int)o_roundf();
    v29 = (int)o_roundf();
    v28 = (int)o_roundf();
    v27 = (int)o_roundf();
  }
  v31 = 0;
  if ( v30 >= 0 )
    v31 = v30;
  v32 = v22;
  if ( v22 >= v31 )
    v32 = v31;
  v88 = v32;
  v33 = 0;
  if ( v29 >= 0 )
    v33 = v29;
  v34 = v24;
  if ( v24 >= v33 )
    v34 = v33;
  v87 = v34;
  if ( v22 >= v28 )
    v22 = v28;
  v35 = 0;
  if ( v22 >= 0 )
    v35 = v22;
  if ( v24 >= v27 )
    v24 = v27;
  v36 = 0;
  if ( v24 >= 0 )
    v36 = v24;
  *(_QWORD *)&v121 = __PAIR64__(v34, v32);
  *((_QWORD *)&v121 + 1) = __PAIR64__(v36, v35);
  v37 = 0;
  v83 = 0;
  sub_1800AA188(a1, &v122);
  if ( (*(_BYTE *)(a1 + 443) & 1) != 0 )
  {
    v38 = (__m128)v127;
    v39 = (__m128)v124;
    sub_1800689C8(v120, 0.0, 0.0, v21.m128_f32[0], v23.m128_i32[0], v124, v127);
    if ( v21.m128_f32[0] == 0.0 || v23.m128_f32[0] == 0.0 )
      v83 = 1;
    v40 = v122;
    v41 = v123;
    v42 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)LODWORD(v122), (__m128)LODWORD(v123)), v39);
    v43 = _mm_unpacklo_ps(v21, v23);
    v44 = _mm_div_ps(_mm_unpacklo_ps((__m128)v42.m128_u32[0], (__m128)_mm_shuffle_ps(v42, v42, 85).m128_u32[0]), v43);
    v129 = __PAIR64__(_mm_shuffle_ps(v44, v44, 85).m128_u32[0], v44.m128_u32[0]);
    v45 = v125;
    v46 = v126;
    v47 = _mm_movelh_ps(_mm_unpacklo_ps((__m128)LODWORD(v125), (__m128)LODWORD(v126)), v38);
    v48 = _mm_div_ps((__m128)__PAIR64__(_mm_shuffle_ps(v47, v47, 85).m128_u32[0], v47.m128_u32[0]), v43);
    v49 = _mm_shuffle_ps(v48, v48, 85).m128_u32[0];
    v128 = __PAIR64__(v49, v48.m128_u32[0]);
    v50 = _mm_sub_ps((__m128)__PAIR64__(v49, v48.m128_u32[0]), (__m128)v129);
    v51 = _mm_add_ps((__m128)v129, (__m128)__PAIR64__(v49, v48.m128_u32[0]));
    v52 = _mm_sub_ps(
            (__m128)__PAIR64__(_mm_shuffle_ps(v51, v51, 85).m128_u32[0], v51.m128_u32[0]),
            (__m128)0x3F8000003F800000uLL);
    LODWORD(v84) = v50.m128_i32[0];
    DWORD1(v84) = _mm_shuffle_ps(v50, v50, 85).m128_u32[0];
    DWORD2(v84) = v52.m128_i32[0];
    *((float *)&v84 + 3) = -_mm_shuffle_ps(v52, v52, 85).m128_f32[0];
    v53 = (int)o_roundf();
    v54 = (int)o_roundf();
    v55 = (int)o_roundf();
    v56 = (int)o_roundf();
    v57 = v53;
    if ( v88 >= v53 )
      v57 = v88;
    v58 = v54;
    if ( v87 >= v54 )
      v58 = v87;
    v59 = v55;
    if ( v55 >= v35 )
      v59 = v35;
    v60 = v56;
    if ( v56 >= v36 )
      v60 = v36;
    if ( v60 >= v54 )
      v54 = v60;
    if ( v55 >= v57 )
      v55 = v57;
    LODWORD(v91) = v55;
    if ( v56 >= v58 )
      v56 = v58;
    DWORD1(v91) = v56;
    if ( v59 >= v53 )
      v53 = v59;
    *((_QWORD *)&v91 + 1) = __PAIR64__(v54, v53);
    sub_180068860(v120, &v91);
    v63 = v35 - v88;
    v20 = v84;
    v37 = v83;
  }
  else
  {
    v45 = v125;
    v40 = v122;
    v46 = v126;
    v41 = v123;
    sub_1800689C8(v120, v122, v123, v125 - v122, COERCE_INT(v126 - v123), v124, v127);
    v99 = v121;
    sub_180068860(v120, &v99);
    v63 = v35 - v32;
  }
  v64 = (v36 - v87) * v63;
  if ( v40 == v45 || v41 == v46 )
    v37 = 1;
  if ( !v64 )
  {
    v65 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v65 = *(const char **)v65;
    sub_1801163DC(
      &unk_18020C648,
      4LL,
      "Warning: camera '%s' scissor rectangle is empty -- no pixels will be rendered",
      v65);
  }
  if ( v37 )
  {
    v66 = (const char *)(a1 + 24);
    if ( *(_QWORD *)(a1 + 48) >= 0x10uLL )
      v66 = *(const char **)v66;
    sub_1801163DC(
      &unk_18020C648,
      4LL,
      "Warning: camera '%s' viewport rectangle is empty -- no pixels will be rendered",
      v66);
  }
  LOBYTE(v61) = *(_BYTE *)(a1 + 465);
  if ( (v61 & 1) != 0 && *(_QWORD *)(a1 + 136) )
  {
    v100 = *(_OWORD *)(a1 + 296);
    (*(void (__fastcall **)(_QWORD, __int64, __int128 *))(*(_QWORD *)v120 + 88LL))(v120, a1 + 136, &v100);
    LOBYTE(v61) = *(_BYTE *)(a1 + 465);
  }
  if ( (v61 & 6) != 0 && *(_QWORD *)(a1 + 152) )
  {
    LOBYTE(v62) = (v61 & 4) != 0;
    LOBYTE(v61) = (v61 & 2) != 0;
    LOBYTE(v82) = *(_BYTE *)(a1 + 464);
    (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD, int))(*(_QWORD *)v120 + 104LL))(
      v120,
      a1 + 152,
      v61,
      v62,
      *(_DWORD *)(a1 + 312),
      v82);
  }
  v67 = sub_1800EB244(a1);
  v68 = sub_1800759E4(v67);
  v69 = 0LL;
  v70 = 0LL;
  v71 = *(_QWORD *)(a1 + 64);
  if ( v71 )
  {
    while ( 1 )
    {
      v72 = *(_DWORD *)(v71 + 8);
      if ( !v72 )
        break;
      if ( v72 == _InterlockedCompareExchange((volatile signed __int32 *)(v71 + 8), v72 + 1, v72) )
      {
        v69 = *(_QWORD *)(a1 + 56);
        v70 = *(volatile signed __int32 **)(a1 + 64);
        break;
      }
    }
  }
  v101 = v69;
  v102 = v70;
  sub_180080408(v69, (__int64)&v118);
  if ( v70 )
  {
    if ( _InterlockedExchangeAdd(v70 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v70)(v70);
      if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
    }
  }
  *(_QWORD *)&v85 = v118;
  *((_QWORD *)&v85 + 1) = v119 | 0x3F80000000000000LL;
  if ( *(_DWORD *)(a1 + 316) == 3 )
  {
    v73 = 0LL;
    v74 = 0LL;
    v75 = *(_QWORD *)(a1 + 64);
    if ( v75 )
    {
      while ( 1 )
      {
        v76 = *(_DWORD *)(v75 + 8);
        if ( !v76 )
          break;
        if ( v76 == _InterlockedCompareExchange((volatile signed __int32 *)(v75 + 8), v76 + 1, v76) )
        {
          v73 = *(_QWORD *)(a1 + 56);
          v74 = *(volatile signed __int32 **)(a1 + 64);
          break;
        }
      }
    }
    v103 = v73;
    v104 = v74;
    v77 = (float *)sub_18007FC9C(v73, (__int64)v116);
    *(float *)&v89 = -v77[8];
    *((float *)&v89 + 1) = -v77[9];
    v78 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v89, (__m128)COERCE_UNSIGNED_INT(-v77[10])));
    LODWORD(v118) = v78.m128_i32[0];
    HIDWORD(v118) = _mm_shuffle_ps(v78, v78, 85).m128_u32[0];
    v119 = _mm_shuffle_ps(v78, v78, 170).m128_u32[0];
    if ( v74 )
    {
      if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v74)(v74);
        if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
      }
    }
    *(_QWORD *)&v85 = v118;
    *((_QWORD *)&v85 + 1) = v119;
  }
  v105 = v85;
  sub_1800A13D0(v68);
  v106 = v20;
  sub_1800A13D0(v68);
  sub_1800A133C(v68);
  v133 = xmmword_1801D1940;
  v134 = xmmword_1801D1950;
  v135 = xmmword_1801D1970;
  v136 = xmmword_1801C6AC0;
  v79 = sub_1800AA14C(a1, v117);
  sub_1800ACD60(v79, &v133);
  v112 = v133;
  v113 = v134;
  v114 = v135;
  v115 = v136;
  sub_1800A1330(v68);
  sub_1800AA0C8(a1, &v90);
  *(_QWORD *)&v86 = v90;
  *((float *)&v86 + 2) = 1.0 / *(float *)&v90;
  *((float *)&v86 + 3) = 1.0 / *((float *)&v90 + 1);
  v107 = v86;
  result = sub_1800A13D0(v68);
  v81 = (volatile signed __int32 *)*((_QWORD *)&v120 + 1);
  if ( *((_QWORD *)&v120 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v120 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v81)(v81);
      result = (unsigned int)_InterlockedDecrement(v81 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v81 + 8LL))(v81);
    }
  }
  return result;
}
