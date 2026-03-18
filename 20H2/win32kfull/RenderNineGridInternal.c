/*
 * XREFs of RenderNineGridInternal @ 0x1C00DFE40
 * Callers:
 *     RenderNineGrid @ 0x1C00DFB60 (RenderNineGrid.c)
 * Callees:
 *     DNG_StretchCol @ 0x1C00DF470 (DNG_StretchCol.c)
 *     DNG_DrawRow @ 0x1C00E0B60 (DNG_DrawRow.c)
 *     ?DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z @ 0x1C00E0EE0 (-DNG_CopyMemory@@YAHPEAU_DNGINTERNALDATA@@PEAX1J@Z.c)
 *     DNG_InitStretch @ 0x1C00E0F54 (DNG_InitStretch.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     memset @ 0x1C015F880 (memset.c)
 */

int __fastcall RenderNineGridInternal(
        __int64 a1,
        __int64 a2,
        __m128i *a3,
        __m128i *a4,
        int *a5,
        _DWORD *a6,
        int a7,
        int a8)
{
  __int64 v8; // r15
  unsigned __int64 v9; // xmm0_8
  __int64 v10; // r14
  int v11; // edi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // xmm0_8
  int v15; // edi
  int v16; // r14d
  int v17; // esi
  __int64 v18; // r15
  unsigned __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r12
  unsigned __int64 v22; // r12
  __int64 v23; // kr00_8
  __int64 v24; // kr08_8
  unsigned int v25; // r10d
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // r8d
  __int64 v29; // r11
  int v30; // r15d
  int v31; // ebx
  int v32; // ecx
  int v33; // edx
  int v34; // r11d
  int v35; // r10d
  int v36; // eax
  int v37; // r9d
  __int64 v38; // r8
  unsigned int v39; // r11d
  int v40; // eax
  int v41; // r14d
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // r8
  unsigned __int64 v47; // r8
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rdx
  int v50; // r9d
  int v51; // edi
  _DWORD *v52; // rsi
  int v53; // r15d
  int v54; // edx
  int v55; // r14d
  int v56; // edx
  int v57; // ecx
  int v58; // edi
  int v59; // r9d
  int v60; // r8d
  int v61; // r11d
  int v62; // edx
  int v63; // eax
  int v64; // r10d
  int v65; // esi
  __int64 v66; // r9
  int v67; // edi
  __int64 v68; // r15
  int v69; // eax
  unsigned __int64 v70; // rcx
  int v71; // r11d
  int v72; // r14d
  unsigned __int64 v73; // r10
  unsigned __int64 v74; // rax
  unsigned __int64 v75; // rsi
  unsigned __int64 v76; // r8
  int v77; // edx
  __int64 v78; // rdi
  __int64 v79; // rax
  unsigned int v80; // r14d
  __int64 v81; // r15
  int v82; // r8d
  char *v83; // rcx
  char *v84; // rdx
  char *v85; // rax
  char *v86; // r9
  int v87; // r10d
  int v88; // r8d
  unsigned __int64 v89; // rdx
  int v90; // edx
  __int64 v91; // rsi
  unsigned __int64 v92; // rdi
  int v93; // edx
  __int64 v94; // rdi
  __int64 v95; // rbx
  __int64 v96; // rbx
  __int64 v97; // rdi
  int v98; // esi
  int v99; // r14d
  int v100; // esi
  const void *v101; // rdx
  char *v102; // rcx
  char *v103; // r9
  unsigned __int64 v104; // rcx
  int v105; // r10d
  __int64 v106; // rdx
  unsigned __int64 v107; // kr10_8
  __int64 v108; // rbx
  int v109; // r12d
  int v110; // eax
  int v111; // ecx
  int v112; // r15d
  int v113; // r14d
  __int64 v114; // r13
  __int64 v115; // r15
  __int64 v116; // rdx
  __int64 v117; // rdi
  int v118; // r12d
  __int64 v119; // rsi
  __int64 v120; // rax
  BOOL v121; // eax
  __int64 v122; // r9
  __int64 v123; // r11
  __int64 v124; // r14
  __int64 v125; // rcx
  int *v126; // rdx
  _DWORD *v127; // r8
  __int64 v128; // r10
  int v129; // ecx
  int v131; // [rsp+38h] [rbp-D0h]
  int v132; // [rsp+40h] [rbp-C8h]
  int v133; // [rsp+40h] [rbp-C8h]
  int v134; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v135; // [rsp+50h] [rbp-B8h]
  int v136; // [rsp+50h] [rbp-B8h]
  int v137; // [rsp+58h] [rbp-B0h]
  int v138; // [rsp+60h] [rbp-A8h]
  int v139; // [rsp+68h] [rbp-A0h]
  int v140; // [rsp+70h] [rbp-98h]
  unsigned __int64 v141; // [rsp+70h] [rbp-98h]
  int v142; // [rsp+78h] [rbp-90h]
  __int64 v143; // [rsp+80h] [rbp-88h]
  __int64 v144; // [rsp+88h] [rbp-80h]
  __int64 i; // [rsp+90h] [rbp-78h]
  __int64 v146; // [rsp+90h] [rbp-78h]
  int v147; // [rsp+98h] [rbp-70h]
  unsigned int v148; // [rsp+A0h] [rbp-68h]
  _QWORD v149[32]; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v150; // [rsp+1A8h] [rbp+A0h] BYREF
  __int128 v151; // [rsp+1B8h] [rbp+B0h]
  int v154; // [rsp+228h] [rbp+120h]
  char v155; // [rsp+228h] [rbp+120h]
  int v156; // [rsp+228h] [rbp+120h]
  int v157; // [rsp+230h] [rbp+128h]
  int v158; // [rsp+248h] [rbp+140h]

  v8 = a4->m128i_i64[0];
  v9 = _mm_srli_si128(*a4, 8).m128i_u64[0];
  v10 = a3->m128i_i64[0];
  v11 = v9;
  v12 = HIDWORD(a4->m128i_i64[0]);
  LODWORD(v13) = HIDWORD(v9) - v12;
  v14 = _mm_srli_si128(*a3, 8).m128i_u64[0];
  v137 = v13;
  v142 = v14 - a3->m128i_i64[0];
  v15 = v11 - a4->m128i_i64[0];
  v135 = HIDWORD(a3->m128i_i64[0]);
  v147 = HIDWORD(v14) - HIDWORD(a3->m128i_i64[0]);
  if ( v15 >= 128000000 || (int)v13 >= 128000000 || v15 <= -128000000 || (int)v13 <= -128000000 )
    return v13;
  memset(v149, 0, 0xF8uLL);
  v16 = v10 - v8;
  v17 = v14 - v8;
  v139 = HIDWORD(v14) - v12;
  v18 = v16;
  v19 = *(_QWORD *)(a1 + 48);
  v20 = *(_QWORD *)(a2 + 48);
  v21 = *(unsigned int *)(a1 + 40);
  v149[30] = v20 + *(unsigned int *)(a2 + 40);
  v22 = v19 + v21;
  HIDWORD(v149[26]) = *(_DWORD *)(a1 + 32);
  v23 = *(int *)(a1 + 64);
  v149[29] = v20;
  v149[27] = v19;
  v136 = v135 - v12;
  v149[28] = v22;
  v24 = *(int *)(a2 + 64);
  v157 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
  LODWORD(v149[2]) = v157;
  v132 = v16;
  v149[0] = __PAIR64__(v17, v16);
  v158 = ((BYTE4(v24) & 3) + (int)v24) >> 2;
  LODWORD(v149[5]) = v158;
  v25 = *(_DWORD *)(a2 + 32);
  v144 = *(_QWORD *)(a1 + 56) + 4 * (v157 * (v137 - v136 - 1) - (__int64)v16);
  v26 = *a5;
  v27 = a5[1];
  v28 = a5[2] - v26;
  v134 = a5[3] - v27;
  v29 = v158 * (v134 - 1);
  v143 = *(_QWORD *)(a2 + 56) + 4 * (v26 + v29 + v158 * v27);
  if ( (*a6 & 0x20) != 0 )
  {
    v87 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
    v96 = v144 + 4 * (v157 * v136 - (__int64)(v157 * (v137 - 1)));
    LODWORD(v13) = v139;
    if ( v134 < v139 )
      LODWORD(v13) = a5[3] - v27;
    v97 = v143 + 4 * (v158 * v136 - v29);
    if ( v28 < v17 )
      v17 = a5[2] - v26;
    if ( v17 > v16 && v136 < (int)v13 )
    {
      v98 = v17 - v16;
      v99 = v13;
      v100 = 4 * v98;
      do
      {
        v101 = (const void *)(v97 + 4 * v18);
        v102 = (char *)(v96 + 4 * v18);
        if ( v100 <= 0 )
          break;
        v103 = &v102[v100];
        if ( v103 <= v102 )
          break;
        v13 = (unsigned __int64)v101 + v100;
        if ( v13 <= (unsigned __int64)v101 || v19 > (unsigned __int64)v102 || (unsigned __int64)v103 > v22 )
          break;
        if ( (v13 > v22 || v19 > (unsigned __int64)v101) && (v149[29] > (unsigned __int64)v101 || v13 > v149[30]) )
          break;
        memmove(v102, v101, v100);
        v87 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
        LODWORD(v13) = v158;
        ++v136;
        v96 += 4LL * v157;
        v97 += 4LL * v158;
      }
      while ( v136 < v99 );
    }
    goto LABEL_68;
  }
  v30 = a6[2];
  v31 = 1;
  LODWORD(v149[22]) = *a6 & 2;
  LODWORD(v149[3]) = v142;
  v149[6] = __PAIR64__(v25, v134);
  v32 = a6[1];
  HIDWORD(v149[2]) = v15;
  HIDWORD(v149[5]) = v28;
  HIDWORD(v149[7]) = v32;
  LODWORD(v149[9]) = v30;
  if ( v15 - v30 - v32 <= 0 || v28 - v30 - v32 <= 0 )
  {
    v33 = 0;
    HIDWORD(v149[12]) = 0;
    if ( v30 + v32 )
    {
      v33 = HIDWORD(v149[12]);
      v35 = v15 * v32 / (v30 + v32);
      LODWORD(v149[21]) = v35;
    }
    else
    {
      v35 = 0;
      LODWORD(v149[21]) = 0;
    }
    v34 = v15 - v35;
    v154 = v15 - v35;
    HIDWORD(v149[21]) = v15 - v35;
  }
  else
  {
    v33 = 1;
    HIDWORD(v149[12]) = 1;
    v34 = v30;
    v154 = v30;
    v35 = v32;
    v149[21] = __PAIR64__(v30, v32);
  }
  LODWORD(v149[8]) = v16;
  if ( v35 >= v17 )
    v36 = v17;
  else
    v36 = v35;
  HIDWORD(v149[8]) = v36;
  if ( !v33 && v35 )
  {
    DNG_InitStretch((unsigned int)&v149[13], v35, v32, v16, v36);
    v34 = HIDWORD(v149[21]);
    v16 = v149[0];
    v22 = v149[28];
    v19 = v149[27];
    v35 = v149[21];
    v30 = v149[9];
    v32 = HIDWORD(v149[7]);
    v28 = HIDWORD(v149[5]);
    v15 = HIDWORD(v149[2]);
    v17 = HIDWORD(v149[0]);
    v33 = HIDWORD(v149[12]);
    v154 = HIDWORD(v149[21]);
    v132 = v149[0];
  }
  v37 = v15 - v34;
  v38 = (unsigned int)(v28 - v30 - v32);
  v39 = v15 - v34 - v35;
  LODWORD(v149[11]) = v37 - v35;
  if ( v35 <= v16 )
  {
    HIDWORD(v149[11]) = v16;
  }
  else
  {
    v16 = v35;
    HIDWORD(v149[11]) = v35;
  }
  v40 = v39 + v35;
  if ( (int)(v39 + v35) >= v17 )
    v40 = v17;
  LODWORD(v149[12]) = v40;
  HIDWORD(v149[10]) = v38;
  if ( v33 )
  {
    LODWORD(v149[26]) = v40 - v35;
    v41 = v16 - v35;
    HIDWORD(v149[25]) = v41;
    v42 = (v38 << 32) - 1;
    if ( v39 == 4LL )
      v43 = v42 >> 2;
    else
      v43 = v42 / v39;
    v44 = v38 << 32;
    v45 = v43 + 1;
    v148 = v43 + 1;
    if ( v39 == 4LL )
    {
      v46 = v44 >> 2;
    }
    else
    {
      v45 = v43 + 1;
      v46 = v44 / v39;
    }
    v47 = v46 >> 1;
    v48 = HIDWORD(v45);
    HIDWORD(v149[23]) = v45;
    v49 = HIDWORD(v47);
    v140 = v48;
    LODWORD(v149[24]) = v48;
    if ( v41 > 5 )
    {
      v104 = (unsigned int)v47 + v41 * (unsigned __int64)v148;
      LODWORD(v47) = v47 + v41 * v148;
      LODWORD(v49) = HIDWORD(v104) + v41 * v48 + v49;
    }
    else if ( v41 > 0 )
    {
      v146 = (unsigned int)v41;
      do
      {
        v121 = (unsigned int)v47 + v148 < (unsigned int)v47;
        LODWORD(v47) = v47 + v148;
        LODWORD(v49) = v140 + v121 + v49;
        --v146;
      }
      while ( v146 );
      v39 = v37 - v35;
    }
    HIDWORD(v149[22]) = v49;
    v33 = HIDWORD(v149[12]);
    LODWORD(v149[23]) = v47;
  }
  if ( v37 <= v132 )
    v37 = v132;
  v50 = v37 - v39 - v35;
  HIDWORD(v149[9]) = v50;
  if ( v15 >= v17 )
    v15 = v17;
  v51 = v15 - v39 - v35;
  LODWORD(v149[10]) = v51;
  if ( !v33 && v154 )
  {
    DNG_InitStretch((unsigned int)&v149[17], v154, v30, v50, v51);
    v22 = v149[28];
    v19 = v149[27];
    v132 = v149[0];
  }
  v52 = a6;
  v53 = v137;
  v54 = a6[3];
  v55 = a6[4];
  v138 = v54;
  if ( v137 - v54 - v55 <= 0 || v134 - v54 - v55 <= 0 )
  {
    v155 = 0;
    if ( v55 + v54 )
      v105 = v137 * v54 / (v55 + v54);
    else
      v105 = 0;
    v131 = v105;
    v56 = v137 - v105;
  }
  else
  {
    v131 = a6[3];
    v56 = a6[4];
    v155 = 1;
  }
  v57 = v136;
  v58 = v137 - v56;
  v59 = v137 - v56;
  v60 = v139;
  if ( v137 - v56 <= v136 )
    v59 = v136;
  if ( v137 < v139 )
    v60 = v137;
  if ( v139 <= v58 )
    goto LABEL_37;
  v149[1] = v144;
  v149[4] = v143;
  if ( v55 != v56 )
  {
    if ( v56 > 0 )
    {
      v150 = 0LL;
      v151 = 0LL;
      DNG_InitStretch((unsigned int)&v150, v56, v55, v137 - v60, v137 - v59);
      DNG_StretchCol((struct _DNGINTERNALDATA *)v149, &v150);
      v61 = v149[0];
      v22 = v149[28];
      v19 = v149[27];
      v57 = v136;
      v132 = v149[0];
      goto LABEL_38;
    }
    goto LABEL_37;
  }
  v90 = v55 - v59 - v56 + v137 - 1;
  v149[1] = v144 - 4LL * v157 * v90;
  v149[4] = v143 - 4LL * v158 * v90;
  if ( v59 >= v60 )
  {
    v57 = v136;
LABEL_37:
    v61 = v132;
    goto LABEL_38;
  }
  v91 = (unsigned int)(v60 - v59);
  do
  {
    DNG_DrawRow(v149);
    v149[1] += 4LL * v157;
    v149[4] += 4LL * v158;
    --v91;
  }
  while ( v91 );
  v61 = v149[0];
  v22 = v149[28];
  v19 = v149[27];
  v53 = v137;
  v57 = v136;
  v52 = a6;
  v132 = v149[0];
LABEL_38:
  v62 = v52[4];
  v63 = v52[3];
  v64 = v53 - v63 - v62;
  v65 = v134 - v63 - v62;
  if ( !v155 || v65 <= 0 || v64 <= 0 || v57 >= v58 || v139 <= v131 )
    goto LABEL_64;
  v66 = v144 - 4LL * v157 * v62;
  v67 = v138;
  v68 = v143 - 4LL * v158 * v62;
  if ( v138 <= v136 )
    v67 = v136;
  if ( !LODWORD(v149[22]) )
  {
    v69 = v137 - v55;
    v70 = (unsigned int)v64;
    if ( v137 - v55 >= v139 )
      v69 = v139;
    v71 = v64 + v138 - v69;
    v72 = v64 + v138 - v67;
    v73 = (((unsigned __int64)(unsigned int)v65 << 32) - 1) / (unsigned int)v64 + 1;
    v74 = ((unsigned __int64)(unsigned int)v65 << 32) / v70;
    v156 = v73;
    v75 = v74 >> 1;
    v141 = HIDWORD(v73);
    v76 = v74 >> 33;
    if ( v71 > 5 )
    {
      v89 = (unsigned int)v75 + v71 * (unsigned __int64)(unsigned int)v73;
      LODWORD(v75) = v75 + v71 * v73;
      LODWORD(v76) = HIDWORD(v89) + v71 * HIDWORD(v73) + v76;
    }
    else if ( v71 > 0 )
    {
      v106 = (unsigned int)v71;
      do
      {
        v107 = __PAIR64__(v76, v75) + v73;
        LODWORD(v76) = (__PAIR64__(v76, v75) + v73) >> 32;
        LODWORD(v75) = v107;
        --v106;
      }
      while ( v106 );
    }
    v77 = v149[2];
    v78 = v66 - 4LL * LODWORD(v149[2]) * v71;
    v79 = 4LL * LODWORD(v149[2]) * v72;
    v80 = 0;
    v81 = v68 - 4LL * LODWORD(v149[5]) * (int)v76;
    for ( i = v66 - v79; v78 != i; v78 -= 4LL * SLODWORD(v149[2]) )
    {
      if ( v31 )
      {
        v149[1] = v78;
        v149[4] = v81;
        DNG_DrawRow(v149);
        v22 = v149[28];
        v19 = v149[27];
        v132 = v149[0];
      }
      else
      {
        v82 = 4 * LODWORD(v149[3]);
        v83 = (char *)(v78 + 4LL * v132);
        v84 = (char *)(v78 + 4 * (v132 + (__int64)v77));
        if ( 4 * LODWORD(v149[3]) <= 0 )
          break;
        v85 = &v83[v82];
        if ( v85 <= v83 )
          break;
        v86 = &v84[v82];
        if ( v86 <= v84 || v19 > (unsigned __int64)v83 || (unsigned __int64)v85 > v22 )
          break;
        if ( (v19 > (unsigned __int64)v84 || (unsigned __int64)v86 > v22)
          && (v149[29] > (unsigned __int64)v84 || (unsigned __int64)v86 > v149[30]) )
        {
          break;
        }
        memmove(v83, v84, v82);
      }
      v31 = ((int)v75 + v156 < (unsigned int)v75) + (_DWORD)v141;
      v80 += v31;
      if ( v80 < LODWORD(v149[6]) )
        v81 -= 4LL * LODWORD(v149[5]) * v31;
      LODWORD(v75) = v75 + v156;
      v77 = v149[2];
    }
LABEL_63:
    v53 = v137;
LABEL_64:
    v87 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
    goto LABEL_65;
  }
  v108 = v66 + 4 * (v157 * (v67 - v138) - (__int64)(v157 * (v64 - 1)));
  v149[1] = v108;
  v109 = v65 - (v67 - v138) % v65;
  v149[4] = v68 + 4 * (LODWORD(v149[5]) * ((v67 - v138) % v65) - (__int64)(v158 * (v65 - 1)));
  if ( v65 >= v64 )
    v110 = v64;
  else
    v110 = v134 - v63 - v62;
  v111 = v137 - v55;
  v112 = v137 - v55;
  if ( v137 - v55 >= v139 )
    v112 = v139;
  v133 = v112;
  if ( v67 + v110 >= v112 )
  {
    v113 = v139;
    if ( v111 < v139 )
      v113 = v111;
  }
  else
  {
    if ( v65 < v64 )
      v64 = v65;
    v113 = v67 + v64;
  }
  if ( v67 < v113 )
  {
    v114 = 4LL * v157;
    v115 = (unsigned int)(v113 - v67);
    do
    {
      DNG_DrawRow(v149);
      if ( --v109 )
      {
        v116 = v149[4];
      }
      else
      {
        v109 = v65;
        v116 = v149[4] - 4LL * v158 * v65;
      }
      v108 = v114 + v149[1];
      v149[4] = 4LL * v158 + v116;
      v149[1] += v114;
      --v115;
    }
    while ( v115 );
    v61 = v149[0];
    v112 = v133;
  }
  v87 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
  v117 = v108 - 4LL * v157 * v65;
  v149[4] = v117;
  if ( v113 < v112 )
  {
    v118 = 4 * LODWORD(v149[3]);
    v119 = 4LL * v61;
    while ( DNG_CopyMemory((struct _DNGINTERNALDATA *)v149, (void *)(v119 + v108), (void *)(v119 + v117), v118) )
    {
      v87 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
      ++v113;
      v120 = 4LL * v157;
      v108 += v120;
      v117 += v120;
      v149[1] = v108;
      v149[4] = v117;
      if ( v113 >= v112 )
        goto LABEL_133;
    }
    goto LABEL_63;
  }
LABEL_133:
  v53 = v137;
LABEL_65:
  v88 = v131;
  LODWORD(v13) = v139;
  if ( v131 >= v139 )
    v88 = v139;
  if ( v136 >= v131 )
    goto LABEL_68;
  v149[1] = v144 - 4LL * v87 * (v53 - v131);
  v13 = 4LL * v158 * (v134 - a6[3]);
  v92 = v143 - v13;
  v149[4] = v143 - v13;
  if ( v138 != v131 )
  {
    if ( v131 <= 0 )
      goto LABEL_68;
    v150 = 0LL;
    v151 = 0LL;
    DNG_InitStretch((unsigned int)&v150, v131, v138, v131 - v88, v131 - v136);
    LODWORD(v13) = DNG_StretchCol((struct _DNGINTERNALDATA *)v149, &v150);
    goto LABEL_83;
  }
  v93 = v138 - v136 - 1;
  LODWORD(v13) = v93 * v158;
  v149[1] = v144 - 4LL * v87 * (v53 - v131) - 4LL * v93 * v87;
  v149[4] = v92 - 4LL * v93 * v158;
  if ( v136 < v88 )
  {
    v94 = 4LL * v87;
    v95 = (unsigned int)(v88 - v136);
    do
    {
      LODWORD(v13) = DNG_DrawRow(v149);
      v149[1] += v94;
      v149[4] += 4LL * v158;
      --v95;
    }
    while ( v95 );
LABEL_83:
    v87 = ((BYTE4(v23) & 3) + (int)v23) >> 2;
  }
LABEL_68:
  if ( a8 && v147 <= *(_DWORD *)(a1 + 36) && v142 <= *(_DWORD *)(a1 + 32) && v147 > 0 )
  {
    v122 = 4LL * v87;
    LODWORD(v13) = v142 / 2;
    v123 = (unsigned int)v147;
    v124 = 0LL;
    do
    {
      v125 = *(_QWORD *)(a1 + 56);
      v126 = (int *)(v125 + v124);
      v127 = (_DWORD *)(v124 + 4LL * v142 + v125 - 4);
      if ( v142 / 2 > 0 )
      {
        v128 = (unsigned int)(v142 / 2);
        do
        {
          v129 = *v126++;
          LODWORD(v13) = *v127--;
          *(v126 - 1) = v13;
          v127[1] = v129;
          --v128;
        }
        while ( v128 );
      }
      v124 += v122;
      --v123;
    }
    while ( v123 );
  }
  return v13;
}
