/*
 * XREFs of sub_1800C4F74 @ 0x1800C4F74
 * Callers:
 *     sub_1800BF010 @ 0x1800BF010 (sub_1800BF010.c)
 *     sub_1800C3A30 @ 0x1800C3A30 (sub_1800C3A30.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18001145C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_18007A810 @ 0x18007A810 (sub_18007A810.c)
 *     sub_18007AB84 @ 0x18007AB84 (sub_18007AB84.c)
 *     sub_1800882A0 @ 0x1800882A0 (sub_1800882A0.c)
 *     sub_180089274 @ 0x180089274 (sub_180089274.c)
 *     sub_18008933C @ 0x18008933C (sub_18008933C.c)
 *     sub_1800B1EC0 @ 0x1800B1EC0 (sub_1800B1EC0.c)
 *     sub_1800BCE78 @ 0x1800BCE78 (sub_1800BCE78.c)
 *     sub_1800C2AF8 @ 0x1800C2AF8 (sub_1800C2AF8.c)
 *     sub_1800C8214 @ 0x1800C8214 (sub_1800C8214.c)
 *     sub_1800CBB74 @ 0x1800CBB74 (sub_1800CBB74.c)
 *     sub_1800FDD98 @ 0x1800FDD98 (sub_1800FDD98.c)
 *     sub_1800FDDA4 @ 0x1800FDDA4 (sub_1800FDDA4.c)
 *     sub_1800FDDAC @ 0x1800FDDAC (sub_1800FDDAC.c)
 *     sub_1800FDDB8 @ 0x1800FDDB8 (sub_1800FDDB8.c)
 *     sub_1800FDDC4 @ 0x1800FDDC4 (sub_1800FDDC4.c)
 *     sub_1800FDDD0 @ 0x1800FDDD0 (sub_1800FDDD0.c)
 *     sub_1800FDE08 @ 0x1800FDE08 (sub_1800FDE08.c)
 *     sub_1800FDE14 @ 0x1800FDE14 (sub_1800FDE14.c)
 *     sub_1800FDE20 @ 0x1800FDE20 (sub_1800FDE20.c)
 *     sub_1800FDE58 @ 0x1800FDE58 (sub_1800FDE58.c)
 *     sub_1800FDE88 @ 0x1800FDE88 (sub_1800FDE88.c)
 *     sub_1800FDE94 @ 0x1800FDE94 (sub_1800FDE94.c)
 *     sub_1800FDEA0 @ 0x1800FDEA0 (sub_1800FDEA0.c)
 *     sub_1800FDEAC @ 0x1800FDEAC (sub_1800FDEAC.c)
 *     sub_1800FDEB8 @ 0x1800FDEB8 (sub_1800FDEB8.c)
 *     sub_1800FDF14 @ 0x1800FDF14 (sub_1800FDF14.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800C4F74(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // xmm7_4
  int v9; // xmm8_4
  int v10; // xmm9_4
  float v11; // xmm6_4
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __m128 v17; // xmm2
  _QWORD *v18; // rax
  __int64 v19; // rcx
  double v20; // xmm0_8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  double v23; // xmm0_8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  double v26; // xmm0_8
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  double v37; // xmm0_8
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // eax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  unsigned int v74; // eax
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // r8
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rbx
  __int64 v84; // rbx
  volatile signed __int32 *v85; // rbx
  __int128 v86; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v87; // [rsp+38h] [rbp-D0h]
  int v88; // [rsp+40h] [rbp-C8h]
  __int128 v89; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v90; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v91; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v92[2]; // [rsp+78h] [rbp-90h] BYREF
  _QWORD v93[2]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v94; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v95; // [rsp+A0h] [rbp-68h]
  _QWORD *v96; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v97; // [rsp+B0h] [rbp-58h]
  _QWORD *v98; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v99; // [rsp+C0h] [rbp-48h]
  _QWORD *v100; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v101; // [rsp+D0h] [rbp-38h]
  _QWORD *v102; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD *v103; // [rsp+E0h] [rbp-28h]
  _QWORD *v104; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v105; // [rsp+F0h] [rbp-18h]
  _QWORD *v106; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v107; // [rsp+100h] [rbp-8h]
  _QWORD *v108; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v109; // [rsp+110h] [rbp+8h]
  _QWORD *v110; // [rsp+118h] [rbp+10h] BYREF
  _QWORD *v111; // [rsp+120h] [rbp+18h]
  _QWORD *v112; // [rsp+128h] [rbp+20h] BYREF
  _QWORD *v113; // [rsp+130h] [rbp+28h]
  _QWORD *v114; // [rsp+138h] [rbp+30h] BYREF
  _QWORD *v115; // [rsp+140h] [rbp+38h]
  _QWORD *v116; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v117; // [rsp+150h] [rbp+48h]
  _QWORD *v118; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v119; // [rsp+160h] [rbp+58h]
  _QWORD *v120; // [rsp+168h] [rbp+60h] BYREF
  _QWORD *v121; // [rsp+170h] [rbp+68h]
  _QWORD *v122; // [rsp+178h] [rbp+70h] BYREF
  _QWORD *v123; // [rsp+180h] [rbp+78h]
  _QWORD *v124; // [rsp+188h] [rbp+80h] BYREF
  _QWORD *v125; // [rsp+190h] [rbp+88h]
  _QWORD *v126; // [rsp+198h] [rbp+90h] BYREF
  _QWORD *v127; // [rsp+1A0h] [rbp+98h]
  _QWORD *v128; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD *v129; // [rsp+1B0h] [rbp+A8h]
  _QWORD *v130; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD *v131; // [rsp+1C0h] [rbp+B8h]
  _QWORD *v132; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD *v133; // [rsp+1D0h] [rbp+C8h]
  _QWORD *v134; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD *v135; // [rsp+1E0h] [rbp+D8h]
  _QWORD *v136; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD *v137; // [rsp+1F0h] [rbp+E8h]
  _QWORD *v138; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD *v139; // [rsp+200h] [rbp+F8h]
  _QWORD *v140; // [rsp+208h] [rbp+100h] BYREF
  _QWORD *v141; // [rsp+210h] [rbp+108h]
  __m128 v142; // [rsp+218h] [rbp+110h] BYREF
  __int128 v143; // [rsp+228h] [rbp+120h] BYREF
  __int128 v144; // [rsp+238h] [rbp+130h] BYREF

  if ( *(_QWORD *)(a3 + 16) )
  {
    v6 = sub_18007AB84(a1, *(_DWORD *)(*a2 + 112LL));
    v144 = 0LL;
    v91 = 0LL;
    v7 = a2[1];
    if ( v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      v7 = a2[1];
    }
    *(_QWORD *)&v91 = *a2;
    *((_QWORD *)&v91 + 1) = v7;
    sub_18007A810(a1, &v144, 0LL, &v91);
    if ( (*(_DWORD *)(v144 + 440) & 0x2000000) != 0 )
    {
      v89 = 0LL;
      sub_1800BCE78((__int64 *)&v89, &v144);
      v8 = qword_180221E80;
      v9 = HIDWORD(qword_180221E80);
      v10 = dword_180221E88;
      v143 = xmmword_180214CD0;
      v11 = 0.0;
      v86 = 0LL;
      v12 = v144;
      if ( (_QWORD)v144 )
      {
        v90 = 0LL;
        v13 = *(_QWORD *)(v144 + 64);
        if ( v13 )
        {
          while ( 1 )
          {
            v14 = *(_DWORD *)(v13 + 8);
            if ( !v14 )
              break;
            if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
            {
              v90 = *(_OWORD *)(v12 + 56);
              break;
            }
          }
        }
        std::shared_ptr<__ExceptionPtr>::operator=(&v86, (__int64 *)&v90);
        if ( *((_QWORD *)&v90 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v90 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v15 = *((_QWORD *)&v90 + 1);
            (***((void (__fastcall ****)(_QWORD))&v90 + 1))(*((_QWORD *)&v90 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v90 + 1) + 8LL))(*((_QWORD *)&v90 + 1));
          }
        }
        v11 = *(float *)(v144 + 328);
        v16 = v86;
        if ( (_QWORD)v86 )
        {
          sub_180089274(v86);
          v87 = *(_QWORD *)(v16 + 144);
          v88 = *(_DWORD *)(v16 + 152);
          v8 = v87;
          v9 = HIDWORD(v87);
          v10 = v88;
          sub_180089274(v16);
          v17 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 156));
          LODWORD(v143) = v17.m128_i32[0];
          DWORD1(v143) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
          DWORD2(v143) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
          HIDWORD(v143) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        }
      }
      else
      {
        v16 = v86;
      }
      sub_1800CBB74(a3, &v94, &unk_180211C48);
      v18 = v94;
      v19 = 0LL;
      if ( v94 != v95 )
      {
        do
        {
          ++v19;
          v18 = (_QWORD *)*v18;
        }
        while ( v18 != v95 );
        if ( v19 )
        {
          v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211C48);
          v8 = LODWORD(v20);
        }
      }
      sub_1800CBB74(a3, &v96, &unk_180211C68);
      v21 = v96;
      v22 = 0LL;
      if ( v96 != v97 )
      {
        do
        {
          ++v22;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 != v97 );
        if ( v22 )
        {
          v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211C68);
          v9 = LODWORD(v23);
        }
      }
      sub_1800CBB74(a3, &v98, &unk_180211C88);
      v24 = v98;
      v25 = 0LL;
      if ( v98 != v99 )
      {
        do
        {
          ++v25;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 != v99 );
        if ( v25 )
        {
          v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211C88);
          v10 = LODWORD(v26);
        }
      }
      sub_1800CBB74(a3, &v100, &unk_180211CA8);
      v27 = v100;
      v28 = 0LL;
      if ( v100 != v101 )
      {
        do
        {
          ++v28;
          v27 = (_QWORD *)*v27;
        }
        while ( v27 != v101 );
        if ( v28 )
          LODWORD(v143) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211CA8);
      }
      sub_1800CBB74(a3, &v102, &unk_180211CC8);
      v29 = v102;
      v30 = 0LL;
      if ( v102 != v103 )
      {
        do
        {
          ++v30;
          v29 = (_QWORD *)*v29;
        }
        while ( v29 != v103 );
        if ( v30 )
          DWORD1(v143) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211CC8);
      }
      sub_1800CBB74(a3, &v104, &unk_180211CE8);
      v31 = v104;
      v32 = 0LL;
      if ( v104 != v105 )
      {
        do
        {
          ++v32;
          v31 = (_QWORD *)*v31;
        }
        while ( v31 != v105 );
        if ( v32 )
          DWORD2(v143) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211CE8);
      }
      sub_1800CBB74(a3, &v106, &unk_180211D08);
      v33 = v106;
      v34 = 0LL;
      if ( v106 != v107 )
      {
        do
        {
          ++v34;
          v33 = (_QWORD *)*v33;
        }
        while ( v33 != v107 );
        if ( v34 )
          HIDWORD(v143) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211D08);
      }
      sub_1800CBB74(a3, &v108, &unk_180211D28);
      v35 = v108;
      v36 = 0LL;
      if ( v108 != v109 )
      {
        do
        {
          ++v36;
          v35 = (_QWORD *)*v35;
        }
        while ( v35 != v109 );
        if ( v36 )
        {
          v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211D28);
          v11 = *(float *)&v37;
        }
      }
      sub_1800C2AF8((__m128 *)&v143);
      v38 = v144;
      if ( (_QWORD)v144 && v11 != *(float *)(v144 + 328) )
      {
        *(float *)(v144 + 328) = v11;
        sub_1800B1EC0(v38, 2);
      }
      if ( v16 )
      {
        sub_18008933C(v16);
        *(_DWORD *)(v16 + 144) = v8;
        *(_DWORD *)(v16 + 148) = v9;
        *(_DWORD *)(v16 + 152) = v10;
        v39 = _InterlockedIncrement64(&qword_18020F6C0);
        v40 = v86;
        *(_QWORD *)(v86 + 208) = v39;
        v41 = *(_QWORD *)(v40 + 216);
        if ( v39 >= v41 )
          v41 = v39;
        *(_QWORD *)(v40 + 216) = v41;
        v142 = (__m128)v143;
        sub_1800882A0(v40, &v142);
      }
      v42 = v89;
      if ( (_QWORD)v89 )
      {
        sub_1800CBB74(a3, &v110, &unk_180211F68);
        v43 = v110;
        v44 = 0LL;
        if ( v110 != v111 )
        {
          do
          {
            ++v44;
            v43 = (_QWORD *)*v43;
          }
          while ( v43 != v111 );
          if ( v44 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211F68);
            sub_1800FDDC4(v42);
          }
        }
        sub_1800CBB74(a3, &v112, &unk_180211F48);
        v45 = v112;
        v46 = 0LL;
        if ( v112 != v113 )
        {
          do
          {
            ++v46;
            v45 = (_QWORD *)*v45;
          }
          while ( v45 != v113 );
          if ( v46 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211F48);
            sub_1800FDD98(v42);
          }
        }
        sub_1800CBB74(a3, &v114, &unk_180211FC8);
        v47 = v114;
        v48 = 0LL;
        if ( v114 != v115 )
        {
          do
          {
            ++v48;
            v47 = (_QWORD *)*v47;
          }
          while ( v47 != v115 );
          if ( v48 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211FC8);
            sub_1800FDDB8(v42);
          }
        }
        sub_1800CBB74(a3, &v116, &unk_180211E68);
        v49 = v116;
        v50 = 0LL;
        if ( v116 != v117 )
        {
          do
          {
            ++v50;
            v49 = (_QWORD *)*v49;
          }
          while ( v49 != v117 );
          if ( v50 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211E68);
            sub_1800FDE08(v42);
          }
        }
        sub_1800CBB74(a3, &v118, &unk_180211E48);
        v51 = v118;
        v52 = 0LL;
        if ( v118 != v119 )
        {
          do
          {
            ++v52;
            v51 = (_QWORD *)*v51;
          }
          while ( v51 != v119 );
          if ( v52 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211E48);
            sub_1800FDE14(v42);
          }
        }
        sub_1800CBB74(a3, &v120, &unk_180211EA8);
        v53 = v120;
        v54 = 0LL;
        if ( v120 != v121 )
        {
          do
          {
            ++v54;
            v53 = (_QWORD *)*v53;
          }
          while ( v53 != v121 );
          if ( v54 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211EA8);
            sub_1800FDE20(v42);
          }
        }
        sub_1800CBB74(a3, &v122, &unk_180211EC8);
        v55 = v122;
        v56 = 0LL;
        if ( v122 != v123 )
        {
          do
          {
            ++v56;
            v55 = (_QWORD *)*v55;
          }
          while ( v55 != v123 );
          if ( v56 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211EC8);
            sub_1800FDDD0(v42);
          }
        }
        sub_1800CBB74(a3, &v124, &unk_180211E88);
        v57 = v124;
        v58 = 0LL;
        if ( v124 != v125 )
        {
          do
          {
            ++v58;
            v57 = (_QWORD *)*v57;
          }
          while ( v57 != v125 );
          if ( v58 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211E88);
            sub_1800FDDAC(v42);
          }
        }
        sub_1800CBB74(a3, &v126, &unk_180211EE8);
        v59 = v126;
        v60 = 0LL;
        if ( v126 != v127 )
        {
          do
          {
            ++v60;
            v59 = (_QWORD *)*v59;
          }
          while ( v59 != v127 );
          if ( v60 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211EE8);
            sub_1800FDE88(v42);
          }
        }
        sub_1800CBB74(a3, &v128, &unk_180211F08);
        v61 = v128;
        v62 = 0LL;
        if ( v128 != v129 )
        {
          do
          {
            ++v62;
            v61 = (_QWORD *)*v61;
          }
          while ( v61 != v129 );
          if ( v62 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211F08);
            sub_1800FDEA0(v42);
          }
        }
        sub_1800CBB74(a3, &v130, &unk_180211F28);
        v63 = v130;
        v64 = 0LL;
        if ( v130 != v131 )
        {
          do
          {
            ++v64;
            v63 = (_QWORD *)*v63;
          }
          while ( v63 != v131 );
          if ( v64 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211F28);
            sub_1800FDE94(v42);
          }
        }
        sub_1800CBB74(a3, &v132, &unk_180211FE8);
        v65 = v132;
        v66 = 0LL;
        if ( v132 != v133 )
        {
          do
          {
            ++v66;
            v65 = (_QWORD *)*v65;
          }
          while ( v65 != v133 );
          if ( v66 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180211FE8);
            sub_1800FDEB8(v42);
          }
        }
        sub_1800CBB74(a3, &v134, &unk_180212008);
        v67 = v134;
        v68 = 0LL;
        if ( v134 != v135 )
        {
          do
          {
            ++v68;
            v67 = (_QWORD *)*v67;
          }
          while ( v67 != v135 );
          if ( v68 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_180212008);
            sub_1800FDEAC(v42);
          }
        }
        sub_1800CBB74(a3, &v136, &unk_180211E28);
        v69 = v136;
        v70 = 0LL;
        if ( v136 != v137 )
        {
          do
          {
            ++v70;
            v69 = (_QWORD *)*v69;
          }
          while ( v69 != v137 );
          if ( v70 )
          {
            v71 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_180211E28, 0LL);
            sub_1800FDDA4(v42, v71);
          }
        }
        sub_1800CBB74(a3, &v138, &unk_180212028);
        v72 = v138;
        v73 = 0LL;
        if ( v138 != v139 )
        {
          do
          {
            ++v73;
            v72 = (_QWORD *)*v72;
          }
          while ( v72 != v139 );
          if ( v73 )
          {
            v74 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_180212028, 0LL);
            sub_1800FDE58(v42, v74);
          }
        }
        sub_1800CBB74(a3, &v140, &unk_180211FA8);
        v75 = v140;
        v76 = 0LL;
        if ( v140 != v141 )
        {
          do
          {
            ++v76;
            v75 = (_QWORD *)*v75;
          }
          while ( v75 != v141 );
          if ( v76 )
          {
            LOBYTE(v77) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                            v6,
                            &unk_180211FA8,
                            0LL);
            sub_1800FDF14(v42, v77);
          }
        }
        sub_1800CBB74(a3, v92, &unk_180211D88);
        v78 = (_QWORD *)v92[0];
        v79 = 0LL;
        while ( v78 != (_QWORD *)v92[1] )
        {
          ++v79;
          v78 = (_QWORD *)*v78;
        }
        sub_1800CBB74(a3, v93, &unk_180211F88);
        v81 = (_QWORD *)v93[0];
        v82 = 0LL;
        while ( v81 != (_QWORD *)v93[1] )
        {
          ++v82;
          v81 = (_QWORD *)*v81;
        }
        LOBYTE(v80) = v82 != 0;
        sub_1800C8214(a1, &v89, v80);
      }
      if ( *((_QWORD *)&v86 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL)) )
        {
          v83 = *((_QWORD *)&v86 + 1);
          (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v83 + 12)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
        }
      }
      if ( *((_QWORD *)&v89 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v89 + 1) + 8LL)) )
        {
          v84 = *((_QWORD *)&v89 + 1);
          (***((void (__fastcall ****)(_QWORD))&v89 + 1))(*((_QWORD *)&v89 + 1));
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v84 + 12)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v89 + 1) + 8LL))(*((_QWORD *)&v89 + 1));
        }
      }
    }
    v85 = (volatile signed __int32 *)*((_QWORD *)&v144 + 1);
    if ( *((_QWORD *)&v144 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v144 + 1) + 8LL)) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v85)(v85);
      if ( !_InterlockedDecrement(v85 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
    }
  }
}
