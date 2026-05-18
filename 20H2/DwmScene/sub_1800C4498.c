/*
 * XREFs of sub_1800C4498 @ 0x1800C4498
 * Callers:
 *     sub_1800BDD30 @ 0x1800BDD30 (sub_1800BDD30.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001137C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_1800194D4 @ 0x1800194D4 (sub_1800194D4.c)
 *     sub_18001CDF8 @ 0x18001CDF8 (sub_18001CDF8.c)
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_180026B88 @ 0x180026B88 (sub_180026B88.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x180026DC8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 *     sub_1800752B4 @ 0x1800752B4 (sub_1800752B4.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_18007FCB4 @ 0x18007FCB4 (sub_18007FCB4.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_180080974 @ 0x180080974 (sub_180080974.c)
 *     GsDriverEntry @ 0x180082150 (GsDriverEntry.c)
 *     sub_1800833A8 @ 0x1800833A8 (sub_1800833A8.c)
 *     sub_1800839A4 @ 0x1800839A4 (sub_1800839A4.c)
 *     sub_180087A00 @ 0x180087A00 (sub_180087A00.c)
 *     sub_1800AC2E8 @ 0x1800AC2E8 (sub_1800AC2E8.c)
 *     sub_1800AC348 @ 0x1800AC348 (sub_1800AC348.c)
 *     sub_1800AC570 @ 0x1800AC570 (sub_1800AC570.c)
 *     sub_1800AC5F0 @ 0x1800AC5F0 (sub_1800AC5F0.c)
 *     sub_1800AC6E0 @ 0x1800AC6E0 (sub_1800AC6E0.c)
 *     sub_1800ACE08 @ 0x1800ACE08 (sub_1800ACE08.c)
 *     sub_1800B5F5C @ 0x1800B5F5C (sub_1800B5F5C.c)
 *     sub_1800B61C4 @ 0x1800B61C4 (sub_1800B61C4.c)
 *     sub_1800B7ACC @ 0x1800B7ACC (sub_1800B7ACC.c)
 *     sub_1800B7D78 @ 0x1800B7D78 (sub_1800B7D78.c)
 *     sub_1800C5C50 @ 0x1800C5C50 (sub_1800C5C50.c)
 *     sub_1800D6470 @ 0x1800D6470 (sub_1800D6470.c)
 *     sub_1800D8238 @ 0x1800D8238 (sub_1800D8238.c)
 *     sub_1800D8398 @ 0x1800D8398 (sub_1800D8398.c)
 *     memcmp @ 0x18011E0BE (memcmp.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800C4498(__int64 a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  __m128 v4; // xmm2
  __m128 v5; // xmm3
  __int64 v8; // rax
  volatile signed __int32 *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // r8
  char v12; // bl
  __int64 v13; // rcx
  char v14; // r13
  __int64 v15; // rbx
  float v16; // xmm10_4
  volatile signed __int32 *v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rdx
  signed __int32 v20; // eax
  __int64 v21; // rbx
  __int64 *v22; // rdi
  __int64 *v23; // r14
  const void **v24; // rax
  void **v25; // rdx
  const void *v26; // rcx
  void *v27; // r8
  bool v28; // bl
  __int64 v29; // rcx
  __int64 v30; // rax
  __m128 *v31; // rax
  __m128 v32; // xmm6
  __int128 v33; // xmm0
  __m128 v34; // xmm1
  __m128 v35; // xmm0
  __m128 v36; // xmm1
  float v37; // xmm9_4
  bool v38; // bl
  float v39; // xmm6_4
  _QWORD *v40; // rax
  volatile signed __int32 *v41; // r14
  _OWORD *v42; // rax
  __int64 v43; // rdx
  signed __int32 v44; // eax
  __int64 v45; // rbx
  float v46; // xmm0_4
  char v47; // al
  __int64 v48; // rax
  float v49; // xmm0_4
  float v50; // xmm0_4
  double v51; // xmm0_8
  __int64 *v52; // rax
  volatile signed __int32 *v53; // rbx
  __int64 v54; // rbx
  _QWORD *v55; // rdx
  volatile signed __int32 *v56; // rbx
  __int64 v57; // rbx
  char v58; // r12
  unsigned int v59; // ebx
  __int64 *v60; // rax
  __int64 *v61; // rax
  float v62; // xmm2_4
  float v63; // xmm0_4
  float v64; // xmm7_4
  float v65; // xmm6_4
  float v66; // xmm6_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  float v69; // xmm10_4
  volatile signed __int32 *v70; // rbx
  __int64 v71; // rbx
  void *v72; // rcx
  _QWORD *v73; // rax
  volatile signed __int32 *v74; // rdi
  __int64 v75; // r8
  __int64 v76; // rbx
  __int64 v77; // rbx
  __int64 v78; // rbx
  volatile signed __int32 *v79; // rbx
  __int64 v80; // rcx
  __int64 result; // rax
  __int128 v82; // [rsp+38h] [rbp-D0h]
  __int64 v83; // [rsp+48h] [rbp-C0h]
  __int128 v84; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v85; // [rsp+68h] [rbp-A0h]
  __int128 v86; // [rsp+70h] [rbp-98h]
  __int128 v87; // [rsp+80h] [rbp-88h] BYREF
  __int128 v88; // [rsp+98h] [rbp-70h] BYREF
  __int128 v89; // [rsp+A8h] [rbp-60h]
  _QWORD *v90; // [rsp+B8h] [rbp-50h]
  __int128 v91; // [rsp+C0h] [rbp-48h] BYREF
  _DWORD v92[4]; // [rsp+D0h] [rbp-38h]
  __int128 v93; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v94; // [rsp+F8h] [rbp-10h] BYREF
  int v95; // [rsp+100h] [rbp-8h]
  char v96[16]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v97; // [rsp+118h] [rbp+10h]
  __int64 v98; // [rsp+120h] [rbp+18h]
  __int128 v99; // [rsp+128h] [rbp+20h] BYREF
  __int128 v100; // [rsp+138h] [rbp+30h] BYREF
  __int128 v101; // [rsp+148h] [rbp+40h]
  char v102[16]; // [rsp+158h] [rbp+50h] BYREF
  __int64 v103; // [rsp+168h] [rbp+60h]
  __int64 v104; // [rsp+170h] [rbp+68h]
  unsigned __int64 v105[2]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v106[4]; // [rsp+188h] [rbp+80h] BYREF
  __int64 v107[4]; // [rsp+1A8h] [rbp+A0h] BYREF
  __int64 v108[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v109[4]; // [rsp+1E8h] [rbp+E0h] BYREF
  __int64 v110[4]; // [rsp+208h] [rbp+100h] BYREF
  __int64 v111[4]; // [rsp+228h] [rbp+120h] BYREF
  __int64 v112[4]; // [rsp+248h] [rbp+140h] BYREF
  __int64 v113[4]; // [rsp+268h] [rbp+160h] BYREF
  __int128 v114; // [rsp+288h] [rbp+180h] BYREF
  __int128 v115; // [rsp+298h] [rbp+190h] BYREF
  __int128 v116; // [rsp+2A8h] [rbp+1A0h] BYREF
  __int128 v117; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v118[16]; // [rsp+2C8h] [rbp+1C0h] BYREF
  _BYTE v119[16]; // [rsp+2D8h] [rbp+1D0h] BYREF
  _BYTE v120[8]; // [rsp+2E8h] [rbp+1E0h] BYREF
  volatile signed __int32 *v121; // [rsp+2F0h] [rbp+1E8h]
  _BYTE v122[8]; // [rsp+2F8h] [rbp+1F0h] BYREF
  volatile signed __int32 *v123; // [rsp+300h] [rbp+1F8h]
  _QWORD v124[7]; // [rsp+308h] [rbp+200h] BYREF
  _QWORD *v125; // [rsp+340h] [rbp+238h]
  _QWORD v126[3]; // [rsp+348h] [rbp+240h] BYREF
  unsigned __int64 v127; // [rsp+360h] [rbp+258h]
  _BYTE v128[12]; // [rsp+368h] [rbp+260h] BYREF
  __m128 v129; // [rsp+374h] [rbp+26Ch] BYREF
  _BYTE v130[68]; // [rsp+384h] [rbp+27Ch] BYREF
  __int64 v131; // [rsp+3C8h] [rbp+2C0h] BYREF
  int v132; // [rsp+3D0h] [rbp+2C8h]
  __int128 v133; // [rsp+3D8h] [rbp+2D0h] BYREF
  __int128 v134; // [rsp+3E8h] [rbp+2E0h]
  unsigned __int64 v135; // [rsp+3F8h] [rbp+2F0h] BYREF
  unsigned int v136; // [rsp+400h] [rbp+2F8h]
  __m128 v137; // [rsp+408h] [rbp+300h]
  __int128 v138; // [rsp+418h] [rbp+310h] BYREF
  __int128 v139; // [rsp+428h] [rbp+320h] BYREF
  __int128 v140; // [rsp+438h] [rbp+330h]
  void *Buf2[3]; // [rsp+448h] [rbp+340h] BYREF
  unsigned __int64 v142; // [rsp+460h] [rbp+358h]
  _QWORD v143[2]; // [rsp+468h] [rbp+360h] BYREF
  __m128i si128; // [rsp+478h] [rbp+370h]
  _BYTE v145[64]; // [rsp+488h] [rbp+380h] BYREF
  _BYTE v146[64]; // [rsp+4C8h] [rbp+3C0h] BYREF
  __int64 v147[4]; // [rsp+508h] [rbp+400h] BYREF
  __int64 v148[4]; // [rsp+528h] [rbp+420h] BYREF
  __int128 v149; // [rsp+548h] [rbp+440h]
  _OWORD v150[4]; // [rsp+558h] [rbp+450h] BYREF
  _BYTE v151[64]; // [rsp+598h] [rbp+490h] BYREF

  v90 = a4;
  v85 = a3;
  v8 = sub_1800B5F5C(*a2, (__int64)a2);
  v9 = *(volatile signed __int32 **)(v8 + 192);
  if ( v9 )
  {
    _InterlockedAdd(v9 + 2, 1u);
    v9 = *(volatile signed __int32 **)(v8 + 192);
  }
  v83 = *(_QWORD *)(v8 + 184);
  v10 = sub_1800752B4(a1, *(_DWORD *)(*a2 + 112));
  LOBYTE(v11) = 1;
  v12 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(v10, &unk_18020A0F0, v11);
  v97 = 0LL;
  v98 = 7LL;
  *(_WORD *)v96 = 0;
  std::wstring::assign(v96, &unk_1801C5518, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, void *, char *))(*(_QWORD *)v10 + 96LL))(v10, v147, &unk_18020A190, v96);
  sub_18001EF80(v143);
  v133 = 0LL;
  v93 = 0LL;
  v13 = a2[1];
  if ( v13 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v13 + 8), 1u);
    v13 = a2[1];
  }
  *(_QWORD *)&v93 = *a2;
  *((_QWORD *)&v93 + 1) = v13;
  (*(void (__fastcall **)(__int64, __int128 *, _QWORD *, __int128 *))(*(_QWORD *)a1 + 32LL))(a1, &v133, v143, &v93);
  v14 = (_QWORD)v133 != 0LL ? v12 : 0;
  v87 = 0LL;
  v131 = qword_18021AB50;
  v132 = dword_18021AB58;
  v106[2] = 0LL;
  v106[3] = 0LL;
  sub_18001269C(v106, (__int64)&qword_1802086F0);
  v15 = *(_QWORD *)sub_180087A00(*a2, (__int64)v120, v106);
  sub_1800839A4(v15);
  v16 = *(float *)(v15 + 172);
  v17 = v121;
  if ( v121 )
  {
    if ( _InterlockedExchangeAdd(v121 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
      if ( _InterlockedExchangeAdd(v17 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v17 + 8LL))(v17);
    }
  }
  if ( v14 )
  {
    v103 = 0LL;
    v104 = 7LL;
    *(_WORD *)v102 = 0;
    std::wstring::assign(v102, &unk_1801C5518, 0LL);
    (*(void (__fastcall **)(__int64, __int64 *, void *, char *))(*(_QWORD *)v10 + 96LL))(
      v10,
      v148,
      &unk_18020A1B0,
      v102);
    sub_18001EF80(Buf2);
    v18 = v133;
    v134 = 0LL;
    v19 = *(_QWORD *)(v133 + 64);
    if ( v19 )
    {
      while ( 1 )
      {
        v20 = *(_DWORD *)(v19 + 8);
        if ( !v20 )
          break;
        if ( v20 == _InterlockedCompareExchange((volatile signed __int32 *)(v19 + 8), v20 + 1, v20) )
        {
          v134 = *(_OWORD *)(v18 + 56);
          break;
        }
      }
    }
    sub_180080974(v134, v150);
    v140 = xmmword_1801D1960;
    v139 = 0LL;
    v107[2] = 0LL;
    v107[3] = 0LL;
    sub_18001269C(v107, (__int64)&unk_180208670);
    sub_180087A00(*a2, (__int64)&v139, v107);
    v21 = v139;
    sub_1800839A4(v139);
    v22 = *(__int64 **)(v21 + 32);
    v23 = *(__int64 **)(v21 + 40);
    while ( v22 != v23 )
    {
      v24 = (const void **)sub_18007FCB4(*v22, v126);
      v25 = Buf2;
      if ( v142 >= 0x10 )
        v25 = (void **)Buf2[0];
      v26 = v24;
      if ( (unsigned __int64)v24[3] >= 0x10 )
        v26 = *v24;
      v27 = (void *)v24[2];
      v28 = v27 == Buf2[2] && !memcmp(v26, v25, (size_t)v27);
      if ( v127 >= 0x10 )
      {
        v29 = v126[0];
        if ( v127 + 1 >= 0x1000 )
        {
          v29 = *(_QWORD *)(v126[0] - 8LL);
          if ( (unsigned __int64)(v126[0] - v29 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v29, v127 + 40);
            __debugbreak();
          }
        }
        j_j__o_free(v29);
      }
      if ( v28 )
      {
        std::shared_ptr<__ExceptionPtr>::operator=(&v87, v22);
        v30 = sub_180080408(v87, (__int64)v128);
        v131 = *(_QWORD *)v30;
        v132 = *(_DWORD *)(v30 + 8);
        v94 = qword_18020DBB8;
        v95 = dword_18020DBC0;
        sub_1800833A8(v87, v105, (__int64)&v94, 2);
        v31 = sub_1800B7D78(&v129, (unsigned __int64 *)&v131, v105);
        v4 = _mm_unpacklo_ps((__m128)v31->m128_u32[1], (__m128)v31->m128_u32[3]);
        v5 = _mm_unpacklo_ps(_mm_unpacklo_ps((__m128)v31->m128_u32[0], (__m128)v31->m128_u32[2]), v4);
        v140 = (__int128)v5;
      }
      v22 += 2;
    }
    *(_OWORD *)&v146[4] = 0LL;
    *(_OWORD *)&v146[24] = 0LL;
    *(_OWORD *)&v146[44] = 0LL;
    v32 = (__m128)v140;
    *((_QWORD *)&v33 + 1) = *((_QWORD *)&v140 + 1);
    *(double *)&v33 = sub_1800C5C50();
    *(_OWORD *)v146 = v33;
    *(_OWORD *)&v146[16] = 0LL;
    *(__m128 *)&v146[32] = v4;
    *(__m128 *)&v146[48] = v5;
    sub_180080408(v134, (__int64)&v135);
    v137.m128_u64[0] = v135;
    v137.m128_u64[1] = v136 | 0x3F80000000000000LL;
    v34 = _mm_mul_ps(v137, v32);
    v35 = _mm_add_ps(_mm_shuffle_ps(v137, v34, 64), v34);
    v36 = _mm_add_ps(_mm_shuffle_ps(v34, v35, 48), v35);
    v37 = 0.0;
    v38 = _mm_shuffle_ps(v36, v36, 170).m128_f32[0] < 0.0;
    v39 = 0.0;
    v89 = 0LL;
    v40 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v90 + 152LL))(*v90);
    v41 = (volatile signed __int32 *)v40[1];
    if ( v41 )
    {
      _InterlockedIncrement(v41 + 2);
      v41 = (volatile signed __int32 *)v40[1];
    }
    *(_QWORD *)&v89 = *v40;
    *((_QWORD *)&v89 + 1) = v41;
    if ( !v38 )
    {
      v149 = xmmword_1801D1960;
      *(_OWORD *)&v145[4] = 0LL;
      *(_OWORD *)&v145[24] = 0LL;
      *(_OWORD *)&v145[44] = 0LL;
      *(_OWORD *)v145 = COERCE_UNSIGNED_INT64(sub_1800C5C50());
      memset(&v145[16], 0, 32);
      *(__m128 *)&v145[48] = v5;
      v42 = (_OWORD *)sub_1800194D4((__int64)v130, v145, v150);
      sub_1800194D4((__int64)v151, v42, v146);
      v86 = 0LL;
      v43 = *(_QWORD *)(v83 + 64);
      if ( v43 )
      {
        while ( 1 )
        {
          v44 = *(_DWORD *)(v43 + 8);
          if ( !v44 )
            break;
          if ( v44 == _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 8), v44 + 1, v44) )
          {
            v86 = *(_OWORD *)(v83 + 56);
            break;
          }
        }
      }
      GsDriverEntry(v86, (__int64)v151);
      if ( *((_QWORD *)&v86 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
        }
      }
      v45 = v133;
      v46 = *(float *)(v133 + 328);
      if ( v46 != *(float *)(v83 + 328) )
      {
        *(float *)(v83 + 328) = v46;
        sub_1800AC5F0(v83, 2);
        v45 = v133;
      }
      v47 = *(_BYTE *)(v45 + 336);
      if ( v47 != *(_BYTE *)(v83 + 336) )
      {
        *(_BYTE *)(v83 + 336) = v47;
        *(_BYTE *)(v83 + 1612) = v47;
        v45 = v133;
      }
      sub_1800ACE08(v45);
      sub_1800AC2E8(v83, *(float *)(v45 + 332));
      v48 = v133;
      v49 = *(float *)(v133 + 320);
      if ( v49 != *(float *)(v83 + 320) )
      {
        *(float *)(v83 + 320) = v49;
        sub_1800AC5F0(v83, 2);
        v48 = v133;
      }
      v50 = *(float *)(v48 + 324);
      if ( v50 != *(float *)(v83 + 324) )
      {
        *(float *)(v83 + 324) = v50;
        sub_1800AC5F0(v83, 2);
      }
      v51 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v10 + 88LL))(v10, &unk_18020A110);
      v39 = *(float *)&v51;
      v84 = 0LL;
      sub_1800B61C4(v89, &v84);
      if ( !(_QWORD)v84 )
      {
        v138 = 0LL;
        sub_1800753CC(a1, &v138, v85);
        v52 = (__int64 *)sub_1800B7ACC((__int64)v122);
        std::shared_ptr<__ExceptionPtr>::operator=(&v84, v52);
        v53 = v123;
        if ( v123 )
        {
          if ( _InterlockedExchangeAdd(v123 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
            if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          }
        }
        v54 = v84;
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v84 + 40LL))(v84, v138, 1LL);
        *(_DWORD *)(v54 + 176) = 1;
        v99 = v84;
        v84 = 0uLL;
        sub_1800D6470(v89, &v99);
        *(_QWORD *)(v83 + 1696) = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
        v124[0] = &std::_Func_impl_no_alloc<_lambda_51c74e53204191cb67d63f0dab9dcb28_,void,Spectre::Engine::ImageProcessingEffect const &,std::shared_ptr<Spectre::Engine::Texture> const &>::`vftable';
        v124[1] = a1;
        v125 = v124;
        sub_180026B88((__int64)v124, v83 + 1704);
        if ( v125 )
        {
          v55 = v124;
          LOBYTE(v55) = v125 != v124;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v125 + 32LL))(v125, v55);
        }
        v56 = (volatile signed __int32 *)*((_QWORD *)&v138 + 1);
        if ( *((_QWORD *)&v138 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v138 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v56)(v56);
            if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
          }
        }
      }
      if ( *((_QWORD *)&v84 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v84 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v57 = *((_QWORD *)&v84 + 1);
          (***((void (__fastcall ****)(_QWORD))&v84 + 1))(*((_QWORD *)&v84 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v84 + 1) + 8LL))(*((_QWORD *)&v84 + 1));
        }
      }
    }
    v58 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v10 + 64LL))(v10, &unk_18020A170, 0LL);
    v92[0] = 5;
    v92[1] = 4;
    v92[2] = 2;
    v59 = v92[(*(int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 72LL))(v10, &unk_18020A130, 2LL)];
    v60 = (__int64 *)sub_1800D8398(v89, v118, v59);
    sub_1800AC570(v83, v60);
    v61 = (__int64 *)sub_1800D8238(v89, v119, v59);
    sub_1800AC348(v83, v61);
    *(_BYTE *)(v83 + 465) |= 3u;
    v62 = v39 + v39;
    if ( v39 >= 0.5 )
    {
      v66 = 1.0 - (float)(v62 - 1.0);
      v64 = (float)(v66 * 0.050000001) + (float)(v62 - 1.0);
      v65 = (float)(v66 * 0.5) + (float)(v62 - 1.0);
    }
    else
    {
      v63 = (float)(1.0 - v62) * 0.0;
      v64 = (float)(v62 * 0.050000001) + v63;
      v65 = (float)(v62 * 0.5) + v63;
    }
    if ( v58 )
    {
      v64 = 1.0;
      v65 = 1.0;
    }
    v67 = fmaxf(v62, 0.0);
    v68 = fminf(v67, 1.0);
    v69 = v16 * 3.5;
    if ( !v58 )
      v37 = 1.0 / v69;
    *(_QWORD *)&v88 = __PAIR64__(LODWORD(v64), LODWORD(v68));
    *((_QWORD *)&v88 + 1) = __PAIR64__(LODWORD(v37), LODWORD(v65));
    if ( (_QWORD)v133 )
    {
      v117 = v88;
      v108[2] = 0LL;
      v108[3] = 0LL;
      sub_18001CDF8(v108, (__int64)&qword_18020BA00);
      sub_1800AC6E0(v133, v108, &v117, -1);
      v116 = xmmword_18021AB60;
      v109[2] = 0LL;
      v109[3] = 0LL;
      sub_18001CDF8(v109, (__int64)&qword_18020B9E0);
      sub_1800AC6E0(v133, v109, &v116, -1);
      v115 = xmmword_18021AB60;
      v110[2] = 0LL;
      v110[3] = 0LL;
      sub_18001CDF8(v110, (__int64)&qword_18020BA20);
      sub_1800AC6E0(v133, v110, &v115, -1);
    }
    v88 = xmmword_18021AB60;
    v111[2] = 0LL;
    v111[3] = 0LL;
    sub_18001CDF8(v111, (__int64)&qword_18020BA00);
    sub_1800AC6E0(v83, v111, &v88, -1);
    LODWORD(v82) = 1053609165;
    *(_QWORD *)((char *)&v82 + 4) = v131;
    HIDWORD(v82) = v132;
    v100 = v82;
    v112[2] = 0LL;
    v112[3] = 0LL;
    sub_18001CDF8(v112, (__int64)&qword_18020B9E0);
    sub_1800AC6E0(v83, v112, &v100, -1);
    v114 = v140;
    v113[2] = 0LL;
    v113[3] = 0LL;
    sub_18001CDF8(v113, (__int64)&qword_18020BA20);
    sub_1800AC6E0(v83, v113, &v114, -1);
    if ( v41 )
    {
      if ( _InterlockedExchangeAdd(v41 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v41)(v41);
        if ( _InterlockedExchangeAdd(v41 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v41 + 8LL))(v41);
      }
    }
    v70 = (volatile signed __int32 *)*((_QWORD *)&v139 + 1);
    if ( *((_QWORD *)&v139 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v139 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v70)(v70);
        if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
      }
    }
    if ( *((_QWORD *)&v134 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v134 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v71 = *((_QWORD *)&v134 + 1);
        (***((void (__fastcall ****)(_QWORD))&v134 + 1))(*((_QWORD *)&v134 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v71 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v134 + 1) + 8LL))(*((_QWORD *)&v134 + 1));
      }
    }
    if ( v142 >= 0x10 )
    {
      v72 = Buf2[0];
      if ( v142 + 1 >= 0x1000 )
      {
        v72 = (void *)*((_QWORD *)Buf2[0] - 1);
        if ( (unsigned __int64)((char *)Buf2[0] - (char *)v72 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v72, v142 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v72);
    }
    unknown_libname_101(v148);
  }
  *(_BYTE *)(v83 + 72) = v14;
  v101 = 0LL;
  v73 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v90 + 152LL))(*v90);
  v74 = (volatile signed __int32 *)v73[1];
  if ( v74 )
  {
    _InterlockedAdd(v74 + 2, 1u);
    v74 = (volatile signed __int32 *)v73[1];
  }
  *(_QWORD *)&v101 = *v73;
  *((_QWORD *)&v101 + 1) = v74;
  v91 = 0LL;
  sub_1800B61C4(v101, &v91);
  v76 = v91;
  if ( (_QWORD)v91 )
  {
    LOBYTE(v75) = 1;
    *(_BYTE *)(v76 + 232) = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v10 + 64LL))(
                              v10,
                              &unk_18020A150,
                              v75);
  }
  if ( *((_QWORD *)&v91 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v77 = *((_QWORD *)&v91 + 1);
      (***((void (__fastcall ****)(_QWORD))&v91 + 1))(*((_QWORD *)&v91 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v77 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v91 + 1) + 8LL))(*((_QWORD *)&v91 + 1));
    }
  }
  if ( v74 )
  {
    if ( _InterlockedExchangeAdd(v74 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v74)(v74);
      if ( _InterlockedExchangeAdd(v74 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v74 + 8LL))(v74);
    }
  }
  if ( *((_QWORD *)&v87 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v87 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v78 = *((_QWORD *)&v87 + 1);
      (***((void (__fastcall ****)(_QWORD))&v87 + 1))(*((_QWORD *)&v87 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v78 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v87 + 1) + 8LL))(*((_QWORD *)&v87 + 1));
    }
  }
  v79 = (volatile signed __int32 *)*((_QWORD *)&v133 + 1);
  if ( *((_QWORD *)&v133 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v133 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v79)(v79);
      if ( _InterlockedExchangeAdd(v79 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v79 + 8LL))(v79);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v80 = v143[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v80 = *(_QWORD *)(v143[0] - 8LL);
      if ( (unsigned __int64)(v143[0] - v80 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v80, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v80);
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_18013A450);
  LOBYTE(v143[0]) = 0;
  result = unknown_libname_101(v147);
  if ( v9 )
  {
    result = (unsigned int)_InterlockedDecrement(v9 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      result = (unsigned int)_InterlockedDecrement(v9 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  return result;
}
