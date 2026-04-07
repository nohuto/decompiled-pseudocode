/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18001AC00
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x180024190 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z @ 0x18003C40C (-s_ChooseWindowFrameFromStyle@CTopLevelWindow@@CAPEAUWindowFrame@1@I_N0@Z.c)
 *     __security_check_cookie @ 0x180053520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v3; // edi
  int v4; // esi
  int v5; // r15d
  __int32 v6; // ebx
  struct CTopLevelWindow::WindowFrame *v7; // rax
  int v8; // r10d
  int v9; // r9d
  double v10; // xmm1_8
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  int v14; // r14d
  int v15; // r15d
  __int32 v16; // r13d
  int v17; // ebx
  int v18; // edi
  int v19; // edx
  int v20; // ecx
  __int64 v21; // rax
  int v22; // esi
  __int64 v23; // rax
  int v24; // edi
  __int64 v25; // rax
  int v26; // ebx
  __int64 v27; // rax
  int v28; // r11d
  int v29; // r8d
  int v30; // ecx
  int v31; // edx
  int v32; // ecx
  char *v33; // rbx
  _DWORD *v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // [rsp+20h] [rbp-E0h]
  int v46; // [rsp+24h] [rbp-DCh]
  int v47; // [rsp+28h] [rbp-D8h]
  __int32 v48; // [rsp+2Ch] [rbp-D4h]
  int v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+30h] [rbp-D0h]
  int v51; // [rsp+38h] [rbp-C8h]
  __int64 v52; // [rsp+38h] [rbp-C8h]
  __int128 v54; // [rsp+48h] [rbp-B8h]
  __m128i v55; // [rsp+60h] [rbp-A0h]
  int v56; // [rsp+90h] [rbp-70h]
  int v57; // [rsp+94h] [rbp-6Ch]
  _DWORD v58[19]; // [rsp+98h] [rbp-68h] BYREF
  int v59; // [rsp+E4h] [rbp-1Ch]
  int v60; // [rsp+E8h] [rbp-18h]
  int v61; // [rsp+ECh] [rbp-14h]
  int v62; // [rsp+F0h] [rbp-10h]
  __int32 v63; // [rsp+F4h] [rbp-Ch]
  int v64; // [rsp+F8h] [rbp-8h]
  int v65; // [rsp+FCh] [rbp-4h]
  int v66; // [rsp+100h] [rbp+0h]
  int v67; // [rsp+104h] [rbp+4h]
  int v68; // [rsp+108h] [rbp+8h]
  int v69; // [rsp+10Ch] [rbp+Ch]
  int v70; // [rsp+110h] [rbp+10h]
  __int32 v71; // [rsp+114h] [rbp+14h]
  int v72; // [rsp+118h] [rbp+18h]
  int v73; // [rsp+11Ch] [rbp+1Ch]
  int v74; // [rsp+120h] [rbp+20h]
  int v75; // [rsp+124h] [rbp+24h]
  int v76; // [rsp+128h] [rbp+28h]
  __int32 v77; // [rsp+12Ch] [rbp+2Ch]
  int v78; // [rsp+130h] [rbp+30h]
  int v79; // [rsp+134h] [rbp+34h]
  int v80; // [rsp+138h] [rbp+38h]
  __int32 v81; // [rsp+13Ch] [rbp+3Ch]
  int v82; // [rsp+140h] [rbp+40h]
  __int32 v83; // [rsp+144h] [rbp+44h]
  int v84; // [rsp+148h] [rbp+48h]
  int v85; // [rsp+14Ch] [rbp+4Ch]
  int v86; // [rsp+150h] [rbp+50h]
  int v87; // [rsp+154h] [rbp+54h]
  int v88; // [rsp+158h] [rbp+58h]
  int v89; // [rsp+15Ch] [rbp+5Ch]
  int v90; // [rsp+160h] [rbp+60h]
  int v91; // [rsp+164h] [rbp+64h]
  int v92; // [rsp+168h] [rbp+68h]
  int v93; // [rsp+16Ch] [rbp+6Ch]
  int v94; // [rsp+170h] [rbp+70h]
  int v95; // [rsp+174h] [rbp+74h]
  int v96; // [rsp+178h] [rbp+78h]
  int v97; // [rsp+17Ch] [rbp+7Ch]
  int v98; // [rsp+180h] [rbp+80h]
  int v99; // [rsp+184h] [rbp+84h]
  int v100; // [rsp+188h] [rbp+88h]
  int v101; // [rsp+18Ch] [rbp+8Ch]
  int v102; // [rsp+190h] [rbp+90h]
  int v103; // [rsp+194h] [rbp+94h]
  int v104; // [rsp+198h] [rbp+98h]
  __int32 v105; // [rsp+19Ch] [rbp+9Ch]
  int v106; // [rsp+1A0h] [rbp+A0h]
  int v107; // [rsp+1A4h] [rbp+A4h]
  int v108; // [rsp+1A8h] [rbp+A8h]
  int v109; // [rsp+1ACh] [rbp+ACh]
  int v110; // [rsp+1B0h] [rbp+B0h]
  int v111; // [rsp+1B4h] [rbp+B4h]
  int v112; // [rsp+1B8h] [rbp+B8h]
  __int32 v113; // [rsp+1BCh] [rbp+BCh]
  int v114; // [rsp+1C0h] [rbp+C0h]
  int v115; // [rsp+1C4h] [rbp+C4h]
  int v116; // [rsp+1C8h] [rbp+C8h]
  __int32 v117; // [rsp+1CCh] [rbp+CCh]
  int v118; // [rsp+1D0h] [rbp+D0h]
  __int32 v119; // [rsp+1D4h] [rbp+D4h]
  int v120; // [rsp+1D8h] [rbp+D8h]
  int v121; // [rsp+1DCh] [rbp+DCh]
  int v122; // [rsp+1E0h] [rbp+E0h]
  int v123; // [rsp+1E4h] [rbp+E4h]
  int v124; // [rsp+1E8h] [rbp+E8h]
  __int32 v125; // [rsp+1ECh] [rbp+ECh]
  int v126; // [rsp+1F0h] [rbp+F0h]
  int v127; // [rsp+1F4h] [rbp+F4h]
  int v128; // [rsp+1F8h] [rbp+F8h]
  int v129; // [rsp+1FCh] [rbp+FCh]
  int v130; // [rsp+200h] [rbp+100h]
  __int32 v131; // [rsp+204h] [rbp+104h]
  int v132; // [rsp+208h] [rbp+108h]
  int v133; // [rsp+20Ch] [rbp+10Ch]
  int v134; // [rsp+210h] [rbp+110h]
  __int32 v135; // [rsp+214h] [rbp+114h]
  int v136; // [rsp+218h] [rbp+118h]
  __int32 v137; // [rsp+21Ch] [rbp+11Ch]
  int v138; // [rsp+220h] [rbp+120h]
  int v139; // [rsp+224h] [rbp+124h]
  int v140; // [rsp+228h] [rbp+128h]
  int v141; // [rsp+22Ch] [rbp+12Ch]
  int v142; // [rsp+230h] [rbp+130h]
  __int32 v143; // [rsp+234h] [rbp+134h]
  int v144; // [rsp+238h] [rbp+138h]
  int v145; // [rsp+23Ch] [rbp+13Ch]
  int v146; // [rsp+240h] [rbp+140h]
  int v147; // [rsp+244h] [rbp+144h]
  int v148; // [rsp+248h] [rbp+148h]
  __int32 v149; // [rsp+24Ch] [rbp+14Ch]
  int v150; // [rsp+250h] [rbp+150h]
  int v151; // [rsp+254h] [rbp+154h]
  int v152; // [rsp+258h] [rbp+158h]
  int v153; // [rsp+25Ch] [rbp+15Ch]
  int v154; // [rsp+260h] [rbp+160h]
  __int32 v155; // [rsp+264h] [rbp+164h]
  int v156; // [rsp+268h] [rbp+168h]
  int v157; // [rsp+26Ch] [rbp+16Ch]
  int v158; // [rsp+270h] [rbp+170h]
  int v159; // [rsp+274h] [rbp+174h]
  int v160; // [rsp+278h] [rbp+178h]
  int v161; // [rsp+27Ch] [rbp+17Ch]
  int v162; // [rsp+280h] [rbp+180h]
  int v163; // [rsp+284h] [rbp+184h]
  int v164; // [rsp+288h] [rbp+188h]
  int v165; // [rsp+28Ch] [rbp+18Ch]
  int v166; // [rsp+290h] [rbp+190h]
  int v167; // [rsp+294h] [rbp+194h]
  int v168; // [rsp+298h] [rbp+198h]
  int v169; // [rsp+29Ch] [rbp+19Ch]

  v1 = *(__m128i *)((char *)this + 628);
  v3 = *((_DWORD *)this + 154) - v1.m128i_i32[1];
  v4 = _mm_cvtsi128_si32(v1);
  v55 = v1;
  v51 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v5 = *((_DWORD *)this + 153) - v4;
  v47 = *((_DWORD *)this + 155) - v51;
  v6 = *((_DWORD *)this + 156) - _mm_srli_si128(v1, 8).m128i_i32[1];
  v54 = 0LL;
  v7 = CTopLevelWindow::s_ChooseWindowFrameFromStyle(
         *((_DWORD *)this + 148),
         1,
         (*(_BYTE *)(*((_QWORD *)this + 91) + 611LL) & 0x20) != 0);
  v8 = 0;
  v9 = 0;
  if ( v7 )
  {
    v10 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 60);
    v8 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 187) + 24LL) - 1) * v10);
    v9 = (int)((double)(*(_DWORD *)(*((_QWORD *)v7 + 205) + 24LL) - 1) * v10);
  }
  v11 = 0;
  v12 = 0;
  v13 = 0;
  if ( *((_DWORD *)this + 149) - v8 >= 0 )
    v11 = *((_DWORD *)this + 149) - v8;
  if ( *((_DWORD *)this + 150) - v8 >= 0 )
    v12 = *((_DWORD *)this + 150) - v8;
  v14 = v11 + v4;
  v48 = v12 + v55.m128i_i32[1];
  v55.m128i_i32[1] += v12;
  if ( *((_DWORD *)this + 152) - v8 >= 0 )
    v13 = *((_DWORD *)this + 152) - v8;
  v15 = v5 - v11;
  v16 = v13 + v55.m128i_i32[3];
  v45 = v15;
  v17 = v6 - v13;
  v18 = v3 - v12;
  v49 = v17;
  v46 = v18;
  if ( v15 < 0 )
  {
    v19 = 0;
    v45 = 0;
  }
  else
  {
    v19 = v15;
  }
  if ( v18 < 0 )
  {
    v20 = 0;
    v46 = 0;
  }
  else
  {
    v20 = v18;
  }
  if ( v17 < 0 )
    v49 = 0;
  v21 = *((_QWORD *)this + 56);
  if ( v21 )
  {
    v22 = *(_DWORD *)(v21 + 24);
    LODWORD(v54) = v22;
  }
  else
  {
    v22 = 0;
  }
  v23 = *((_QWORD *)this + 57);
  if ( v23 )
  {
    v24 = *(_DWORD *)(v23 + 24);
    DWORD1(v54) = v24;
  }
  else
  {
    v24 = 0;
  }
  v25 = *((_QWORD *)this + 58);
  if ( v25 )
  {
    v26 = *(_DWORD *)(v25 + 28);
    DWORD2(v54) = v26;
  }
  else
  {
    v26 = 0;
  }
  v27 = *((_QWORD *)this + 59);
  if ( v27 )
  {
    v28 = *(_DWORD *)(v27 + 28);
    HIDWORD(v54) = v28;
  }
  else
  {
    v28 = 0;
  }
  v58[0] = v51;
  v58[6] = v51;
  v58[12] = v51;
  v58[15] = v47;
  *(_OWORD *)((char *)this + 660) = v54;
  v29 = *((_DWORD *)this + 153);
  v58[2] = v19;
  v58[14] = v20;
  v30 = *((_DWORD *)this + 155);
  v31 = *((_DWORD *)this + 154);
  v59 = *((_DWORD *)this + 156);
  v65 = v59;
  v58[3] = v47;
  v58[9] = v47;
  v72 = v45;
  v58[11] = v48;
  v58[18] = v30;
  v64 = v30;
  v58[5] = v31;
  v75 = v31;
  v87 = v31;
  v73 = v49;
  v79 = v49;
  v85 = v49;
  v60 = v45;
  v66 = v46;
  v84 = v46;
  v91 = v47;
  v56 = v14;
  v57 = 0x7FFFFFFF;
  v58[1] = 0x7FFFFFFF;
  v58[4] = v29;
  v58[7] = 0x7FFFFFFF;
  v58[8] = 0x7FFFFFFF;
  v58[10] = 0x7FFFFFFF;
  v58[13] = 0x7FFFFFFF;
  v58[16] = v14;
  v58[17] = 0x7FFFFFFF;
  v61 = 0x7FFFFFFF;
  v62 = 0x7FFFFFFF;
  v63 = v48;
  v67 = 0x7FFFFFFF;
  v68 = v14;
  v69 = 0x7FFFFFFF;
  v70 = 0x7FFFFFFF;
  v71 = v16;
  v74 = v29;
  v76 = 0x7FFFFFFF;
  v77 = v16;
  v78 = 0x7FFFFFFF;
  v80 = 0x7FFFFFFF;
  v81 = v48;
  v82 = 0x7FFFFFFF;
  v83 = v16;
  v86 = v29;
  v88 = v51;
  v89 = 0x7FFFFFFF;
  v90 = 0x7FFFFFFF;
  v92 = v14;
  v93 = 0x7FFFFFFF;
  v94 = v51;
  v95 = 0x7FFFFFFF;
  v96 = v9;
  v97 = v9;
  v98 = v14 + v9;
  v105 = v55.m128i_i32[1];
  v117 = v55.m128i_i32[1];
  v135 = v55.m128i_i32[1];
  v163 = v26;
  v100 = v51;
  v106 = v51;
  v148 = v51;
  v154 = v51;
  v32 = v51 - v26;
  v110 = v14;
  v122 = v14;
  v125 = v16;
  v131 = v16;
  v137 = v16;
  v149 = v16;
  v155 = v16;
  v153 = v48 - v24;
  v33 = (char *)this + 304;
  v159 = v48 - v24;
  v165 = v48 - v24;
  v99 = v9 + v55.m128i_i32[1];
  v101 = 0x7FFFFFFF;
  v102 = 0x7FFFFFFF;
  v103 = v9;
  v104 = 0x7FFFFFFF;
  v107 = 0x7FFFFFFF;
  v108 = v9;
  v109 = v9;
  v111 = 0x7FFFFFFF;
  v112 = v9 + v55.m128i_i32[2];
  v113 = v9 + v16;
  v114 = v9;
  v115 = 0x7FFFFFFF;
  v116 = 0x7FFFFFFF;
  v118 = v9 + v55.m128i_i32[2];
  v119 = v9 + v16;
  v120 = v9;
  v121 = 0x7FFFFFFF;
  v123 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v126 = v9;
  v127 = v9;
  v128 = v14 + v9;
  v129 = v9 + v55.m128i_i32[1];
  v130 = 0x7FFFFFFF;
  v132 = 0x7FFFFFFF;
  v133 = v9;
  v134 = 0x7FFFFFFF;
  v136 = 0x7FFFFFFF;
  v138 = v9;
  v139 = v9;
  v140 = v14 + v9;
  v141 = v9 + v55.m128i_i32[1];
  v142 = v9 + v55.m128i_i32[2];
  v143 = v9 + v16;
  v144 = 0x7FFFFFFF;
  v145 = 0x7FFFFFFF;
  v146 = v14 - v22;
  v147 = 0x7FFFFFFF;
  v150 = v22;
  v151 = 0x7FFFFFFF;
  v152 = 0x7FFFFFFF;
  v156 = v24;
  v157 = 0x7FFFFFFF;
  v158 = v14 - v22;
  v160 = v32;
  v161 = 0x7FFFFFFF;
  v162 = 0x7FFFFFFF;
  v164 = v14 - v22;
  v166 = 0x7FFFFFFF;
  v167 = v16 - v28;
  v168 = 0x7FFFFFFF;
  v169 = v28;
  v34 = v58;
  v35 = 22LL;
  do
  {
    v36 = *(_QWORD *)v33;
    if ( *(_QWORD *)v33 )
    {
      if ( *(_DWORD *)(v36 + 32) != *(v34 - 2)
        || *(_DWORD *)(v36 + 36) != *(v34 - 1)
        || *(_DWORD *)(v36 + 40) != *v34
        || *(_DWORD *)(v36 + 44) != v34[1] )
      {
        *(_DWORD *)(v36 + 96) |= 1u;
        *(_OWORD *)(v36 + 32) = *(_OWORD *)(v34 - 2);
        v44 = *(_QWORD *)(v36 + 80);
        if ( v44 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v44 + 24LL))(v44, 4096LL);
      }
      v38 = v34[2];
      if ( v38 != 0x7FFFFFFF )
      {
        v39 = *(_QWORD *)v33;
        LODWORD(v52) = v34[2];
        HIDWORD(v52) = *(_DWORD *)(*(_QWORD *)v33 + 28LL);
        if ( *(_DWORD *)(*(_QWORD *)v33 + 24LL) != v38 )
        {
          *(_DWORD *)(v39 + 96) |= 1u;
          *(_QWORD *)(v39 + 24) = v52;
          v40 = *(_QWORD *)(v39 + 80);
          if ( v40 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 24LL))(v40, 0x2000LL);
        }
      }
      v41 = v34[3];
      if ( v41 != 0x7FFFFFFF )
      {
        v42 = *(_QWORD *)v33;
        HIDWORD(v50) = v34[3];
        LODWORD(v50) = *(_DWORD *)(*(_QWORD *)v33 + 24LL);
        if ( *(_DWORD *)(*(_QWORD *)v33 + 28LL) != v41 )
        {
          *(_DWORD *)(v42 + 96) |= 1u;
          *(_QWORD *)(v42 + 24) = v50;
          v43 = *(_QWORD *)(v42 + 80);
          if ( v43 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 24LL))(v43, 0x2000LL);
        }
      }
    }
    v33 += 8;
    v34 += 6;
    --v35;
  }
  while ( v35 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 24LL))(*((_QWORD *)this + 35), 4096LL);
  return 0LL;
}
