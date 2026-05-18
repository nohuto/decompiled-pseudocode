/*
 * XREFs of sub_1800C31B4 @ 0x1800C31B4
 * Callers:
 *     sub_1800BD760 @ 0x1800BD760 (sub_1800BD760.c)
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_180074F40 @ 0x180074F40 (sub_180074F40.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800759E4 @ 0x1800759E4 (sub_1800759E4.c)
 *     sub_1800843D0 @ 0x1800843D0 (sub_1800843D0.c)
 *     sub_18008D1C8 @ 0x18008D1C8 (sub_18008D1C8.c)
 *     sub_1800A0394 @ 0x1800A0394 (sub_1800A0394.c)
 *     sub_1800A0C9C @ 0x1800A0C9C (sub_1800A0C9C.c)
 *     sub_1800A1324 @ 0x1800A1324 (sub_1800A1324.c)
 *     sub_1800A1348 @ 0x1800A1348 (sub_1800A1348.c)
 *     sub_1800A138C @ 0x1800A138C (sub_1800A138C.c)
 *     sub_1800A13D0 @ 0x1800A13D0 (sub_1800A13D0.c)
 *     sub_1800A5420 @ 0x1800A5420 (sub_1800A5420.c)
 *     sub_1800ACE08 @ 0x1800ACE08 (sub_1800ACE08.c)
 *     sub_1800B3A38 @ 0x1800B3A38 (sub_1800B3A38.c)
 *     sub_1800B3B10 @ 0x1800B3B10 (sub_1800B3B10.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 *     sub_1800BCD8C @ 0x1800BCD8C (sub_1800BCD8C.c)
 *     sub_1800BE670 @ 0x1800BE670 (sub_1800BE670.c)
 *     sub_1800BF42C @ 0x1800BF42C (sub_1800BF42C.c)
 *     sub_1800C19D0 @ 0x1800C19D0 (sub_1800C19D0.c)
 *     sub_1800C1AF8 @ 0x1800C1AF8 (sub_1800C1AF8.c)
 *     sub_1800C1B38 @ 0x1800C1B38 (sub_1800C1B38.c)
 *     sub_1800F0038 @ 0x1800F0038 (sub_1800F0038.c)
 *     sub_1800F0588 @ 0x1800F0588 (sub_1800F0588.c)
 *     sub_1800FE950 @ 0x1800FE950 (sub_1800FE950.c)
 *     sub_1800FE97C @ 0x1800FE97C (sub_1800FE97C.c)
 *     sub_180100190 @ 0x180100190 (sub_180100190.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C31B4(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __m128 v4; // xmm0
  __int64 v7; // r14
  __m128 v8; // xmm13
  int v9; // r13d
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
  int v16; // esi
  __int64 **v17; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v20; // r13
  __int128 *v21; // rcx
  char v22; // di
  __m128 v23; // xmm0
  __int64 v24; // rbx
  volatile signed __int32 *v25; // rbx
  int v26; // xmm12_4
  int v27; // ebx
  int *v28; // rax
  __int32 v29; // xmm9_4
  __int32 v30; // xmm8_4
  __m128 v31; // xmm7
  __m128 v32; // xmm6
  double v33; // xmm0_8
  __m128 v34; // xmm0
  __int64 v35; // rax
  char v36; // al
  char v37; // bl
  __int64 v38; // r8
  __int64 v39; // rdx
  bool v40; // bl
  __int64 v41; // rcx
  __int64 *v42; // rbx
  __int64 v43; // rcx
  _QWORD *v44; // rdi
  int v45; // esi
  __int64 v46; // rbx
  float v47; // xmm14_4
  float v48; // xmm13_4
  double v49; // xmm0_8
  int v50; // xmm12_4
  double v51; // xmm0_8
  int v52; // xmm11_4
  double v53; // xmm0_8
  int v54; // xmm10_4
  double v55; // xmm0_8
  int v56; // xmm9_4
  double v57; // xmm0_8
  int v58; // xmm8_4
  double v59; // xmm0_8
  int v60; // xmm7_4
  float v61; // xmm7_4
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  volatile signed __int32 *v65; // rbx
  volatile signed __int32 *v66; // rbx
  double v67; // xmm0_8
  float v68; // xmm8_4
  double v69; // xmm0_8
  float v70; // xmm7_4
  double v71; // xmm0_8
  float v72; // xmm6_4
  double v73; // xmm0_8
  double v74; // xmm0_8
  float v75; // xmm8_4
  double v76; // xmm0_8
  float v77; // xmm7_4
  double v78; // xmm0_8
  float v79; // xmm6_4
  double v80; // xmm0_8
  double v81; // xmm0_8
  float v82; // xmm8_4
  double v83; // xmm0_8
  float v84; // xmm7_4
  double v85; // xmm0_8
  float v86; // xmm6_4
  double v87; // xmm0_8
  double v88; // xmm0_8
  float v89; // xmm7_4
  double v90; // xmm0_8
  float v91; // xmm6_4
  double v92; // xmm0_8
  __int64 v93; // rbx
  int v94; // edi
  unsigned int v95; // eax
  unsigned int v96; // eax
  unsigned int v97; // eax
  unsigned int v98; // eax
  __int64 result; // rax
  volatile signed __int32 *v100; // rbx
  volatile signed __int32 *v101; // rbx
  volatile signed __int32 *v102; // rbx
  volatile signed __int32 *v103; // rbx
  __int64 v104; // rbx
  int X; // [rsp+28h] [rbp-100h]
  __int128 v106; // [rsp+B8h] [rbp-70h] BYREF
  float v107; // [rsp+C8h] [rbp-60h]
  int v108; // [rsp+D0h] [rbp-58h]
  __int32 v109; // [rsp+D4h] [rbp-54h]
  __int32 v110; // [rsp+D8h] [rbp-50h]
  float v111; // [rsp+DCh] [rbp-4Ch]
  __int32 v112; // [rsp+E0h] [rbp-48h]
  __int32 v113; // [rsp+E4h] [rbp-44h]
  __int32 v114; // [rsp+E8h] [rbp-40h]
  __int32 v115; // [rsp+ECh] [rbp-3Ch]
  __int32 v116; // [rsp+F0h] [rbp-38h]
  __int32 v117; // [rsp+F4h] [rbp-34h]
  __int128 v118; // [rsp+F8h] [rbp-30h] BYREF
  __int64 v119; // [rsp+108h] [rbp-20h]
  __int128 v120; // [rsp+110h] [rbp-18h] BYREF
  __int128 v121; // [rsp+120h] [rbp-8h] BYREF
  __int128 v122; // [rsp+130h] [rbp+8h] BYREF
  float v123; // [rsp+140h] [rbp+18h]
  float v124; // [rsp+144h] [rbp+1Ch]
  int v125; // [rsp+148h] [rbp+20h]
  int v126; // [rsp+14Ch] [rbp+24h]
  size_t v127[5]; // [rsp+150h] [rbp+28h] BYREF
  __m128 v128; // [rsp+178h] [rbp+50h] BYREF
  __int64 v129; // [rsp+188h] [rbp+60h] BYREF
  volatile signed __int32 *v130; // [rsp+190h] [rbp+68h]
  __m128 v131; // [rsp+198h] [rbp+70h]
  __int128 v132; // [rsp+1A8h] [rbp+80h]
  __int64 v133; // [rsp+1B8h] [rbp+90h] BYREF
  volatile signed __int32 *v134; // [rsp+1C0h] [rbp+98h]
  __int64 v135; // [rsp+1C8h] [rbp+A0h] BYREF
  volatile signed __int32 *v136; // [rsp+1D0h] [rbp+A8h]
  __m128 v137; // [rsp+1D8h] [rbp+B0h] BYREF
  __int128 *v138; // [rsp+1E8h] [rbp+C0h]
  __m128 v139; // [rsp+1F8h] [rbp+D0h] BYREF
  __m128 v140[2]; // [rsp+208h] [rbp+E0h] BYREF
  __m128 v141; // [rsp+228h] [rbp+100h] BYREF
  __m128 v142; // [rsp+238h] [rbp+110h] BYREF
  __m128 v143; // [rsp+248h] [rbp+120h] BYREF
  __m128 v144; // [rsp+258h] [rbp+130h] BYREF
  __int128 v145; // [rsp+268h] [rbp+140h] BYREF
  __int128 v146; // [rsp+278h] [rbp+150h] BYREF
  __int128 v147; // [rsp+288h] [rbp+160h] BYREF
  __int128 v148; // [rsp+298h] [rbp+170h] BYREF
  __m128 v149; // [rsp+2A8h] [rbp+180h] BYREF
  __m128 v150; // [rsp+2B8h] [rbp+190h] BYREF
  __m128 v151; // [rsp+2C8h] [rbp+1A0h]

  v7 = sub_1800752B4(a1, *(_DWORD *)(*a4 + 112));
  v8 = 0LL;
  v9 = 0;
  LOBYTE(v10) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_180209D70, v10) )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209D90);
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_180209E10, v11) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209E30);
    v8 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180209F10, 0LL) )
    v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180209F10, 0LL);
  v118 = 0LL;
  v13 = sub_1800B5F5C(*a4, v12);
  v119 = v13;
  v14 = *(_QWORD **)(v13 + 104);
  v15 = (_QWORD *)*v14;
  if ( (_QWORD *)*v14 != v14 )
  {
    do
    {
      v16 = *((_DWORD *)v15 + 8);
      sub_1800B3B10(v15[5], v16 == v9);
      if ( v16 == v9 )
        std::shared_ptr<__ExceptionPtr>::operator=(&v118, v15 + 5);
      v17 = (__int64 **)v15[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( i = v15[1]; !*(_BYTE *)(i + 25) && v15 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v15 = (_QWORD *)i;
        v15 = (_QWORD *)i;
      }
      else
      {
        v15 = (_QWORD *)v15[2];
        for ( j = *v17; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v15 = j;
      }
    }
    while ( v15 != v14 );
    v13 = v119;
  }
  v20 = sub_1800759E4(a1);
  v147 = 0LL;
  if ( (_QWORD)v118 )
  {
    v21 = (__int128 *)sub_1800B3A38(v118, &v129);
    v22 = 1;
  }
  else
  {
    v121 = 0LL;
    v21 = &v121;
    v22 = 2;
  }
  v23 = 0LL;
  v147 = 0LL;
  v147 = *v21;
  *(_QWORD *)v21 = 0LL;
  *((_QWORD *)v21 + 1) = 0LL;
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( *((_QWORD *)&v121 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v121 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v24 = *((_QWORD *)&v121 + 1);
        (***((void (__fastcall ****)(_QWORD))&v121 + 1))(*((_QWORD *)&v121 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v24 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v121 + 1) + 8LL))(*((_QWORD *)&v121 + 1));
      }
    }
  }
  if ( (v22 & 1) != 0 )
  {
    v25 = v130;
    if ( v130 )
    {
      if ( _InterlockedExchangeAdd(v130 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v25)(v25);
        if ( _InterlockedExchangeAdd(v25 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v25 + 8LL))(v25);
      }
    }
  }
  if ( (_QWORD)v118 )
    v26 = *(_DWORD *)(v118 + 528);
  else
    v26 = 1065353216;
  v27 = 0;
  if ( (_QWORD)v147 )
  {
    v28 = *(int **)(v147 + 128);
    if ( v28 )
      v27 = *v28;
  }
  sub_1800A1348(v20, (__int64)&qword_18020C000, &v147);
  sub_1800A138C(v20, (__int64)&qword_18020C000, (_QWORD *)(v13 + 248));
  *(double *)v23.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209F30);
  v29 = v23.m128_i32[0];
  *(double *)v23.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209F50);
  v30 = v23.m128_i32[0];
  *(double *)v23.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209E50);
  v31 = v23;
  *(double *)v23.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209E70);
  v32 = v23;
  *(double *)v23.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209E90);
  v151 = _mm_mul_ps(
           _mm_shuffle_ps(v8, v8, 0),
           _mm_unpacklo_ps(_mm_unpacklo_ps(v31, v23), _mm_unpacklo_ps(v32, (__m128)0x3F800000u)));
  v131 = v151;
  sub_1800A1324(v20);
  *(float *)&v106 = (float)v27;
  *(_QWORD *)((char *)&v106 + 4) = __PAIR64__(v29, v26);
  HIDWORD(v106) = v30;
  v132 = v106;
  sub_1800A13D0(v20);
  v33 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209DB0);
  v108 = LODWORD(v33);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209EB0);
  v34 = _mm_movelh_ps((__m128)(unsigned __int64)qword_18020DBB8, (__m128)(unsigned int)dword_18020DBC0);
  sub_1800843D0(*(double *)v34.m128_u64);
  v149 = v34;
  sub_1800BE670(a1, &v149, a4);
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209DD0);
  v110 = v34.m128_i32[0];
  v111 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209DF0);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18020AD70, 0LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020AD90);
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020AFD0);
  v109 = v34.m128_i32[0];
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209CB0);
  v112 = v34.m128_i32[0];
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209CD0);
  v113 = v34.m128_i32[0];
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209CF0);
  v114 = v34.m128_i32[0];
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209D10);
  v115 = v34.m128_i32[0];
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209D30);
  v116 = v34.m128_i32[0];
  *(double *)v34.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209ED0);
  v32.m128_i32[0] = v34.m128_i32[0];
  v117 = v34.m128_i32[0];
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180209EF0);
  if ( v32.m128_f32[0] > 0.0 )
    *(_BYTE *)(a1 + 1457) = 1;
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_180209F90, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18020B010, 0LL);
  v145 = 0LL;
  v35 = sub_1800759E4(a1);
  sub_1800A0394(v35, &v145);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18020AD50, 0LL);
  v37 = v36;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020AD30);
  LOBYTE(v38) = v37;
  sub_1800C1AF8(a1, v39, v38, &v145, (__int64)&qword_18020BB00);
  v40 = (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208FD0, 0LL) != 0;
  v146 = 0LL;
  v127[2] = 0LL;
  v127[3] = 0LL;
  sub_18001CDF8(v127, (__int64)&qword_18020CFC8);
  sub_1800A0C9C(v20, &v146, v127);
  if ( v40 )
    v107 = 0.0;
  else
    v107 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A1D0);
  v138 = &v106;
  v106 = 0LL;
  if ( *((_QWORD *)&v146 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v146 + 1) + 8LL));
  v106 = v146;
  v120 = 0LL;
  v41 = a4[1];
  if ( v41 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v41 + 8));
    v41 = a4[1];
  }
  *(_QWORD *)&v120 = *a4;
  *((_QWORD *)&v120 + 1) = v41;
  v42 = sub_180074F40(a1, &v135, 0LL, &v120);
  v122 = 0LL;
  v43 = a4[1];
  if ( v43 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v43 + 8));
    v43 = a4[1];
  }
  *(_QWORD *)&v122 = *a4;
  *((_QWORD *)&v122 + 1) = v43;
  v44 = sub_180074F40(a1, &v133, 0LL, &v122);
  v45 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_18020A2D0, 0LL);
  v46 = *v42;
  sub_1800ACE08(v46);
  v47 = *(float *)(v46 + 332);
  v48 = *(float *)(*v44 + 328LL);
  v49 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A290);
  v50 = LODWORD(v49);
  v51 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A270);
  v52 = LODWORD(v51);
  v53 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A250);
  v54 = LODWORD(v53);
  v55 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A230);
  v56 = LODWORD(v55);
  v57 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A210);
  v58 = LODWORD(v57);
  v59 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A1F0);
  v60 = LODWORD(v59);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180208B50);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180208B30);
  X = v60;
  v61 = v107;
  sub_1800C1B38(a1, v62, v63, v64, X, v58, v56, v54, v52, v50, v48, v47, v45, (__int64)&v106, &v145);
  v65 = v134;
  if ( v134 )
  {
    if ( _InterlockedExchangeAdd(v134 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v65)(v65);
      if ( _InterlockedExchangeAdd(v65 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v65 + 8LL))(v65);
    }
  }
  v66 = v136;
  if ( v136 )
  {
    if ( _InterlockedExchangeAdd(v136 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v66)(v66);
      if ( _InterlockedExchangeAdd(v66 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v66 + 8LL))(v66);
    }
  }
  sub_1800A5420(v146, aVignette_0, v61 > 0.0);
  sub_1800A5420(v146, &qword_18020D088, 1);
  sub_1800A5420(v146, &qword_18020D0A8, 1);
  sub_1800A5420(v146, &qword_18020D0E8, 1);
  sub_1800A5420(v146, &qword_18020D108, 1);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  sub_1800F0038(v145);
  v67 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A4D0);
  v68 = *(float *)&v67;
  v69 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A470);
  v70 = *(float *)&v69;
  v71 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A3F0);
  v72 = *(float *)&v71;
  v73 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A370);
  v137 = *sub_1800BCD8C(&v141, *(float *)&v73, v72, v70, v68);
  v74 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A4F0);
  v75 = *(float *)&v74;
  v76 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A490);
  v77 = *(float *)&v76;
  v78 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A410);
  v79 = *(float *)&v78;
  v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A390);
  v128 = *sub_1800BCD8C(&v142, *(float *)&v80, v79, v77, v75);
  v81 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A510);
  v82 = *(float *)&v81;
  v83 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A4B0);
  v84 = *(float *)&v83;
  v85 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A430);
  v86 = *(float *)&v85;
  v87 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A3B0);
  v139 = *sub_1800BCD8C(&v143, *(float *)&v87, v86, v84, v82);
  v88 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A450);
  v89 = *(float *)&v88;
  v90 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A3D0);
  v91 = *(float *)&v90;
  v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A350);
  v140[0] = *sub_1800BCD8C(&v144, *(float *)&v92, v91, v89, 0.0);
  sub_1800C19D0(a1, v140, &v139, &v128, &v137, &v145);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18020A330);
  v93 = v119;
  sub_180100190(*(_QWORD *)(v119 + 120));
  v148 = 0LL;
  sub_1800FE950(*(_QWORD *)(v93 + 120), &v148);
  sub_1800FE97C(*(_QWORD *)(v93 + 120), &v150);
  sub_1800A1348(v20, (__int64)&qword_18020D2C8, &v148);
  sub_1800A138C(v20, (__int64)&qword_18020D2C8, (_QWORD *)(v93 + 232));
  v140[1] = v150;
  sub_1800A13D0(v20);
  LODWORD(v93) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208DD0, 0LL);
  v94 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208DF0, 0LL);
  v95 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208E30, 0LL);
  sub_18008D1C8(0, v95);
  v96 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208E50, 1LL);
  sub_18008D1C8(1, v96);
  v97 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208E90, 2LL);
  sub_18008D1C8(2, v97);
  v98 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_180208E70, 3LL);
  sub_18008D1C8(3, v98);
  v123 = (float)(int)v93;
  v124 = (float)v94;
  v125 = 0;
  v126 = 0;
  sub_1800F0588(v145);
  if ( (_DWORD)v93 || v94 )
    *(_BYTE *)(a1 + 1457) = 1;
  result = sub_1800BF42C(a1, (__int64)a4);
  v100 = (volatile signed __int32 *)*((_QWORD *)&v148 + 1);
  if ( *((_QWORD *)&v148 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v148 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v100)(v100);
      result = (unsigned int)_InterlockedDecrement(v100 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v100 + 8LL))(v100);
    }
  }
  v101 = (volatile signed __int32 *)*((_QWORD *)&v146 + 1);
  if ( *((_QWORD *)&v146 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v146 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v101)(v101);
      result = (unsigned int)_InterlockedDecrement(v101 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v101 + 8LL))(v101);
    }
  }
  v102 = (volatile signed __int32 *)*((_QWORD *)&v145 + 1);
  if ( *((_QWORD *)&v145 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v145 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v102)(v102);
      result = (unsigned int)_InterlockedDecrement(v102 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v102 + 8LL))(v102);
    }
  }
  v103 = (volatile signed __int32 *)*((_QWORD *)&v147 + 1);
  if ( *((_QWORD *)&v147 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v147 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v103)(v103);
      result = (unsigned int)_InterlockedDecrement(v103 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v103 + 8LL))(v103);
    }
  }
  if ( *((_QWORD *)&v118 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v118 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v104 = *((_QWORD *)&v118 + 1);
      (***((void (__fastcall ****)(_QWORD))&v118 + 1))(*((_QWORD *)&v118 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v104 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v118 + 1) + 8LL))(*((_QWORD *)&v118 + 1));
    }
  }
  return result;
}
