/*
 * XREFs of RenderNineGridInternal @ 0x50CC0
 * Callers:
 *     RenderNineGrid @ 0x50852 (RenderNineGrid.c)
 * Callees:
 *     DNG_DrawRow @ 0x51780 (DNG_DrawRow.c)
 *     DNG_InitStretch @ 0x52622 (DNG_InitStretch.c)
 *     DNG_StretchCol @ 0xB7EF6 (DNG_StretchCol.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?DNG_CopyMemory@@YGHPAU_DNGINTERNALDATA@@PAX1J@Z @ 0x1EBE92 (-DNG_CopyMemory@@YGHPAU_DNGINTERNALDATA@@PAX1J@Z.c)
 */

signed int __fastcall RenderNineGridInternal(
        _DWORD *a1,
        char *a2,
        int *a3,
        char **a4,
        int *a5,
        int *a6,
        int a7,
        int a8)
{
  char *v8; // edx
  int v9; // ebx
  int v10; // edi
  int v12; // edx
  int v13; // esi
  signed int result; // eax
  int v15; // esi
  int v16; // ecx
  unsigned int v17; // ebx
  int v18; // edi
  int v19; // eax
  int v20; // kr04_4
  int v21; // ecx
  int v22; // edx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // edi
  unsigned __int64 v26; // rcx
  int v27; // edx
  int v28; // edi
  unsigned int v29; // eax
  int v30; // edi
  signed int v31; // eax
  unsigned __int64 v32; // rax
  signed int v33; // ecx
  unsigned int v34; // edx
  int v35; // eax
  unsigned __int64 v37; // rax
  int v38; // eax
  int v39; // ecx
  int v40; // esi
  int v41; // edi
  int v42; // ebx
  int v43; // edx
  int v44; // ecx
  int v45; // edx
  int v46; // ecx
  int v47; // eax
  int v48; // ebx
  int v49; // edi
  int v50; // ebx
  int v51; // edx
  int v52; // edi
  char *v53; // edx
  int v54; // ecx
  unsigned __int64 v55; // rax
  int v56; // edx
  unsigned int v57; // ebx
  unsigned int v58; // eax
  int v59; // esi
  int v60; // ecx
  int v61; // esi
  char *v62; // edi
  int v63; // eax
  int v64; // edx
  char *v65; // ecx
  unsigned int v66; // eax
  char *v67; // ebx
  unsigned int v68; // edx
  int v69; // ebx
  unsigned int v70; // ecx
  BOOL v71; // eax
  int v72; // eax
  int v73; // esi
  int v74; // edi
  int v75; // ebx
  int v76; // edx
  int v77; // edi
  int v78; // esi
  int v79; // ebx
  int v80; // edx
  int v81; // eax
  int v82; // edx
  unsigned int v83; // ebx
  int v84; // esi
  char *v85; // edx
  char *v86; // ecx
  char *v87; // esi
  int v88; // edi
  int v89; // eax
  int v90; // ecx
  int v91; // edi
  int v92; // eax
  int v93; // edx
  char *v94; // eax
  int v95; // ebx
  int v96; // esi
  bool v97; // zf
  int v98; // eax
  int v99; // ebx
  int v100; // ecx
  int v101; // edx
  int v102; // esi
  int v103; // edi
  void *v104; // eax
  _DWORD *v105; // esi
  int v106; // ebx
  int v107; // edi
  int v108; // ecx
  int v109; // eax
  int *v110; // esi
  int *v111; // edx
  int v112; // ecx
  int v113; // eax
  unsigned __int64 v114; // [esp-10h] [ebp-188h]
  void *v115; // [esp+0h] [ebp-178h]
  int v116; // [esp+4h] [ebp-174h]
  _BYTE v117[32]; // [esp+10h] [ebp-168h] BYREF
  _QWORD v118[28]; // [esp+30h] [ebp-148h] BYREF
  signed int v119; // [esp+114h] [ebp-64h]
  int v120; // [esp+118h] [ebp-60h]
  _DWORD *v121; // [esp+11Ch] [ebp-5Ch]
  int v122; // [esp+124h] [ebp-54h]
  int v123; // [esp+12Ch] [ebp-4Ch]
  unsigned int v124; // [esp+130h] [ebp-48h]
  unsigned int v125; // [esp+134h] [ebp-44h]
  int v126; // [esp+138h] [ebp-40h]
  int v127; // [esp+13Ch] [ebp-3Ch]
  int v128; // [esp+140h] [ebp-38h]
  int v129; // [esp+144h] [ebp-34h]
  int v130; // [esp+148h] [ebp-30h]
  int v131; // [esp+14Ch] [ebp-2Ch]
  unsigned int v132; // [esp+150h] [ebp-28h]
  int v133; // [esp+154h] [ebp-24h]
  char *i; // [esp+15Ch] [ebp-1Ch]
  unsigned int v135; // [esp+160h] [ebp-18h]
  int v136; // [esp+164h] [ebp-14h]
  int v137; // [esp+168h] [ebp-10h]
  char *v138; // [esp+16Ch] [ebp-Ch]
  int v139; // [esp+170h] [ebp-8h]
  int v140; // [esp+174h] [ebp-4h]
  int v141; // [esp+180h] [ebp+8h]
  int v142; // [esp+180h] [ebp+8h]
  int v143; // [esp+180h] [ebp+8h]
  int v144; // [esp+184h] [ebp+Ch]
  signed int v145; // [esp+184h] [ebp+Ch]
  int v146; // [esp+184h] [ebp+Ch]
  int j; // [esp+184h] [ebp+Ch]
  int v148; // [esp+184h] [ebp+Ch]
  char *v149; // [esp+184h] [ebp+Ch]
  char v150; // [esp+187h] [ebp+Fh]
  int v151; // [esp+188h] [ebp+10h]
  signed int v152; // [esp+18Ch] [ebp+14h]
  int v153; // [esp+18Ch] [ebp+14h]

  v138 = a2;
  v8 = *a4;
  v9 = (int)a4[1];
  v10 = a4[2] - *a4;
  v130 = (int)a4[3];
  v121 = a1;
  i = v8;
  v12 = v130 - v9;
  v13 = *a3;
  v141 = a3[1];
  v144 = a3[2];
  v131 = a3[3];
  result = v131 - v141;
  v140 = v9;
  v129 = v10;
  v130 -= v9;
  v119 = v144 - v13;
  v120 = v131 - v141;
  if ( v10 >= 128000000 || v12 >= 128000000 || v10 <= -128000000 || v12 <= -128000000 )
    return result;
  memset(v118, 0, 0xDCu);
  v15 = v13 - (_DWORD)i;
  v128 = v15;
  v16 = *((_DWORD *)v138 + 7);
  v17 = v121[7];
  v18 = v121[6];
  LODWORD(v118[27]) = v16 + *((_DWORD *)v138 + 6);
  LODWORD(v118[25]) = v121[4];
  v19 = v121[9];
  v124 = v17 + v18;
  LODWORD(v118[26]) = v17 + v18;
  HIDWORD(v118[26]) = v16;
  v125 = v17;
  HIDWORD(v118[25]) = v17;
  v136 = v19 / 4;
  HIDWORD(v118[1]) = v19 / 4;
  v20 = *((_DWORD *)v138 + 9);
  LODWORD(v118[0]) = v15;
  v127 = v20 / 4;
  HIDWORD(v118[3]) = v20 / 4;
  v145 = v144 - (_DWORD)i;
  HIDWORD(v118[0]) = v145;
  v131 -= v140;
  v21 = v19 / 4 * (v130 - (v141 - v140) - 1);
  v142 = v141 - v140;
  v126 = v121[8] + 4 * (v21 - v15);
  v22 = *a5;
  i = (char *)*((_DWORD *)v138 + 4);
  v137 = a5[2] - v22;
  v23 = a5[3];
  v151 = v23 - a5[1];
  v123 = *((_DWORD *)v138 + 8) + 4 * (v22 + v20 / 4 * (v23 - 1));
  v24 = *a6;
  v25 = v17 + v18;
  if ( (*a6 & 0x20) != 0 )
  {
    v82 = v126 + 4 * v136 * (v142 - v130 + 1);
    v140 = v82;
    v152 = v123 + 4 * v127 * (v142 - v151 + 1);
    if ( v151 >= v131 )
      v151 = v131;
    result = v137;
    if ( v137 >= v145 )
      result = v145;
    v83 = v125;
    if ( result > v15 && v142 < v151 )
    {
      result = 4 * (result - v15);
      v84 = 4 * v15;
      v137 = result;
      for ( i = (char *)v84; ; v84 = (int)i )
      {
        v85 = (char *)(v84 + v82);
        v86 = (char *)(v84 + v152);
        if ( result <= 0 )
          break;
        if ( &v85[result] <= v85 )
          break;
        v87 = &v86[result];
        if ( &v86[result] <= v86 || v83 > (unsigned int)v85 || (unsigned int)&v85[result] > v25 )
          break;
        if ( (v83 > (unsigned int)v86 || (unsigned int)v87 > v25)
          && (HIDWORD(v118[26]) > (unsigned int)v86 || (unsigned int)v87 > LODWORD(v118[27])) )
        {
          break;
        }
        memcpy(v85, v86, result);
        v82 = v140 + 4 * v136;
        ++v142;
        v140 = v82;
        result = v152 + 4 * v127;
        v152 = result;
        if ( v142 >= v151 )
          break;
        result = v137;
      }
    }
    goto LABEL_64;
  }
  v26 = __PAIR64__(v137, v129);
  LODWORD(v118[5]) = i;
  HIDWORD(v118[20]) = v24 & 2;
  v27 = a6[1];
  v28 = a6[2];
  v118[2] = __PAIR64__(v119, v129);
  v118[4] = __PAIR64__(v151, v137);
  i = (char *)v27;
  LODWORD(v118[6]) = v27;
  v140 = v28;
  HIDWORD(v118[7]) = v28;
  if ( v129 - v28 - v27 <= 0 || v137 - v28 - v27 <= 0 )
  {
    LODWORD(v118[11]) = 0;
    v88 = v27 + v28;
    if ( v88 )
    {
      v89 = v129 * v27 / v88;
      v27 = (int)i;
      v30 = v89;
    }
    else
    {
      v30 = 0;
    }
    v29 = v129 - v30;
  }
  else
  {
    v29 = v28;
    LODWORD(v118[11]) = 1;
    v30 = v27;
  }
  LODWORD(v118[20]) = v29;
  v132 = v29;
  v31 = v145;
  HIDWORD(v118[19]) = v30;
  HIDWORD(v118[6]) = v15;
  if ( v30 < v145 )
    v31 = v30;
  LODWORD(v118[7]) = v31;
  if ( !LODWORD(v118[11]) && v30 )
  {
    DNG_InitStretch(v27, v15, v31);
    v26 = __PAIR64__(v118[4], v118[2]);
    v15 = v118[0];
    v27 = v118[6];
    v132 = v118[20];
    v140 = HIDWORD(v118[7]);
    v124 = v118[26];
    v30 = HIDWORD(v118[19]);
    v125 = HIDWORD(v118[25]);
    v129 = v118[2];
    v145 = HIDWORD(v118[0]);
    v128 = v118[0];
  }
  LODWORD(v32) = v26 - v132;
  HIDWORD(v26) = HIDWORD(v26) - v140 - v27;
  i = (char *)(v26 - v132);
  HIDWORD(v32) = v26 - v132 - v30;
  v133 = HIDWORD(v32);
  HIDWORD(v118[9]) = HIDWORD(v32);
  if ( v30 <= v15 )
  {
    v137 = v15;
    LODWORD(v118[10]) = v15;
    LODWORD(v32) = i;
  }
  else
  {
    v137 = v30;
    LODWORD(v118[10]) = v30;
  }
  v135 = v26 - v132;
  v33 = v129;
  if ( HIDWORD(v32) + v30 >= v145 )
  {
    v34 = v145;
    v135 = v145;
  }
  else
  {
    v34 = v135;
  }
  HIDWORD(v118[10]) = v34;
  HIDWORD(v32) = v133;
  LODWORD(v118[9]) = HIDWORD(v26);
  if ( LODWORD(v118[11]) )
  {
    HIDWORD(v118[24]) = v135 - v30;
    LODWORD(v26) = 0;
    v137 -= v30;
    LODWORD(v118[24]) = v137;
    v35 = ((v26 - 1) / (unsigned int)v133 + 1) >> 32;
    LODWORD(v26) = (v26 - 1) / (unsigned int)v133 + 1;
    v135 = v26;
    v139 = v35;
    v37 = __PAIR64__(HIDWORD(v26), 0) / (unsigned int)v133;
    v138 = (char *)(v37 >> 1);
    HIDWORD(v26) = v137;
    HIDWORD(v37) >>= 1;
    v122 = HIDWORD(v37);
    v118[22] = __PAIR64__(v139, v26);
    if ( v137 > 5 )
    {
      v80 = (v137 * (unsigned __int64)v135 + __PAIR64__(v122, (unsigned int)v138)) >> 32;
      v138 += v137 * v135;
      HIDWORD(v37) = v137 * v139 + v80;
      LODWORD(v37) = v138;
    }
    else
    {
      LODWORD(v37) = v138;
      if ( v137 <= 0 )
      {
LABEL_19:
        v33 = v129;
        v118[21] = __PAIR64__(v37, HIDWORD(v37));
        v32 = __PAIR64__(v133, (unsigned int)i);
        goto LABEL_20;
      }
      do
      {
        v37 += __PAIR64__(v139, v135);
        --HIDWORD(v26);
      }
      while ( HIDWORD(v26) );
    }
    v15 = v128;
    goto LABEL_19;
  }
LABEL_20:
  if ( (int)v32 <= v15 )
    LODWORD(v32) = v15;
  v38 = v32 - HIDWORD(v32) - v30;
  LODWORD(v118[8]) = v38;
  if ( v33 >= v145 )
    v33 = v145;
  v39 = v33 - HIDWORD(v32) - v30;
  HIDWORD(v118[8]) = v39;
  if ( LODWORD(v118[11]) || !v132 )
  {
    v40 = v128;
  }
  else
  {
    DNG_InitStretch(v140, v38, v39);
    v40 = v118[0];
    v124 = v118[26];
    v125 = HIDWORD(v118[25]);
    v128 = v118[0];
  }
  v41 = v130;
  v42 = a6[4];
  v43 = a6[3];
  v133 = v42;
  v138 = (char *)v43;
  if ( v130 - v43 - v42 <= 0 || v151 - v43 - v42 <= 0 )
  {
    v150 = 0;
    if ( v42 + v43 )
      v81 = v130 * v43 / (v42 + v43);
    else
      v81 = 0;
    v137 = v81;
    v44 = v130 - v81;
    v132 = v130 - v81;
  }
  else
  {
    v150 = 1;
    v44 = v42;
    v137 = v43;
    v132 = v42;
  }
  v45 = v130 - v44;
  v139 = v130 - v44;
  if ( v130 - v44 <= v142 )
    v140 = v142;
  else
    v140 = v130 - v44;
  if ( v130 < v131 )
  {
    i = (char *)v130;
  }
  else
  {
    v41 = v131;
    i = (char *)v131;
  }
  if ( v131 > v45 )
  {
    LODWORD(v118[1]) = v126;
    LODWORD(v118[3]) = v123;
    if ( v42 == v44 )
    {
      v76 = v42 - v140 - v44 + v130 - 1;
      LODWORD(v118[1]) = v126 - 4 * v136 * v76;
      LODWORD(v118[3]) = v123 - 4 * v127 * v76;
      if ( v140 >= v41 )
      {
LABEL_81:
        v45 = v139;
        goto LABEL_34;
      }
      v77 = v41 - v140;
      v78 = 4 * v136;
      v79 = 4 * v127;
      do
      {
        DNG_DrawRow(v118);
        LODWORD(v118[1]) += v78;
        LODWORD(v118[3]) += v79;
        --v77;
      }
      while ( v77 );
    }
    else
    {
      if ( v44 <= 0 )
        goto LABEL_34;
      memset(v117, 0, sizeof(v117));
      DNG_InitStretch(v42, v130 - (_DWORD)i, v130 - v140);
      DNG_StretchCol(v118, v117);
    }
    v40 = v118[0];
    v128 = v118[0];
    v125 = HIDWORD(v118[25]);
    v124 = v118[26];
    goto LABEL_81;
  }
LABEL_34:
  v46 = a6[4];
  v47 = a6[3];
  v48 = v130 - v47;
  v49 = v151 - v47 - v46;
  result = v142;
  v50 = v48 - v46;
  v140 = v49;
  if ( !v150 || v49 <= 0 || v50 <= 0 || v142 >= v45 )
  {
LABEL_61:
    v69 = v131;
    v51 = v137;
    if ( v137 < v131 )
      v69 = v137;
    goto LABEL_63;
  }
  v51 = v137;
  if ( v131 > v137 )
  {
    v52 = v123 - 4 * v127 * v46;
    v146 = v126 - 4 * v136 * v46;
    v129 = v52;
    if ( (int)v138 > v142 )
    {
      v53 = v138;
      i = v138;
    }
    else
    {
      v53 = (char *)v142;
      i = (char *)v142;
    }
    if ( !HIDWORD(v118[20]) )
    {
      v54 = v130 - v133;
      if ( v130 - v133 >= v131 )
        v54 = v131;
      i = 0;
      v139 = (int)&v138[v50 - v54];
      v122 = v50 + v138 - v53;
      HIDWORD(v114) = v140 - 1;
      LODWORD(v114) = -1;
      v55 = v114 / (unsigned int)v50;
      HIDWORD(v114) = v140;
      v133 = v55 + 1;
      LODWORD(v114) = 0;
      v140 = (v55 + 1) >> 32;
      LODWORD(v55) = (v114 / (unsigned int)v50) >> 32;
      v56 = v139;
      v57 = (v114 / (unsigned int)v50) >> 1;
      v58 = (unsigned int)v55 >> 1;
      v135 = v57;
      v132 = v58;
      if ( v139 <= 5 )
      {
        if ( v139 <= 0 )
        {
LABEL_47:
          v60 = HIDWORD(v118[1]);
          v61 = v146 - 4 * HIDWORD(v118[1]) * v56;
          v129 = v52 - 4 * HIDWORD(v118[3]) * v58;
          v62 = 0;
          v63 = 1;
          i = 0;
          for ( j = v146 - 4 * HIDWORD(v118[1]) * v122; v61 != j; v60 = HIDWORD(v118[1]) )
          {
            if ( v63 )
            {
              LODWORD(v118[1]) = v61;
              LODWORD(v118[3]) = v129;
              DNG_DrawRow(v118);
              v124 = v118[26];
              v125 = HIDWORD(v118[25]);
              v128 = v118[0];
            }
            else
            {
              v64 = 4 * HIDWORD(v118[2]);
              v65 = (char *)(v61 + 4 * (v128 + v60));
              v66 = v61 + 4 * v128;
              if ( 4 * HIDWORD(v118[2]) <= 0 )
                goto LABEL_60;
              if ( v66 + v64 <= v66 )
                goto LABEL_60;
              v67 = &v65[v64];
              if ( &v65[v64] <= v65 || v125 > v66 || v66 + v64 > v124 )
                goto LABEL_60;
              if ( (v125 > (unsigned int)v65 || (unsigned int)v67 > v124)
                && (HIDWORD(v118[26]) > (unsigned int)v65 || (unsigned int)v67 > LODWORD(v118[27])) )
              {
                goto LABEL_60;
              }
              memcpy((void *)(v61 + 4 * v128), v65, 4 * HIDWORD(v118[2]));
              v57 = v135;
              v62 = i;
            }
            v68 = v57 + v133;
            v63 = v140 + (v57 + v133 < v57);
            v62 += v63;
            i = v62;
            if ( (unsigned int)v62 < HIDWORD(v118[4]) )
              v129 -= 4 * HIDWORD(v118[3]) * v63;
            v57 += v133;
            v135 = v68;
            v61 -= 4 * HIDWORD(v118[1]);
          }
          goto LABEL_60;
        }
        v70 = v132;
        i = (char *)v139;
        do
        {
          v71 = v57 + v133 < v57;
          v57 += v133;
          v70 += v140 + v71;
          --i;
        }
        while ( i );
        v52 = v129;
        v58 = v70;
        v56 = v139;
        v132 = v70;
      }
      else
      {
        v56 = v139;
        v59 = (v139 * (unsigned __int64)(unsigned int)v133 + __PAIR64__(v132, v57)) >> 32;
        v57 += v139 * v133;
        v58 = v59 + v139 * v140;
      }
      v135 = v57;
      goto LABEL_47;
    }
    v122 = v146 + v136 * (4 * (v53 - v138) - (4 * v50 - 4));
    LODWORD(v118[1]) = v122;
    v90 = v52 + 4 * HIDWORD(v118[3]) * ((v53 - v138) % v140) - v127 * (4 * v140 - 4);
    v91 = v140;
    LODWORD(v118[3]) = v90;
    v140 -= (v53 - v138) % v140;
    v92 = v91;
    if ( v91 >= v50 )
      v92 = v50;
    v93 = v130 - v133;
    v139 = v130 - v133;
    v148 = v130 - v133;
    if ( v130 - v133 >= v131 )
      v148 = v131;
    if ( (int)&i[v92] >= v148 )
    {
      v94 = (char *)v131;
      if ( v93 < v131 )
      {
        v94 = (char *)(v130 - v133);
        v149 = (char *)(v130 - v133);
        goto LABEL_136;
      }
    }
    else
    {
      if ( v91 < v50 )
        v50 = v91;
      v94 = &i[v50];
    }
    v149 = v94;
LABEL_136:
    if ( (int)i >= (int)v94 )
    {
      v99 = v122;
    }
    else
    {
      v95 = v127;
      v96 = v94 - i;
      while ( 1 )
      {
        DNG_DrawRow(v118);
        v97 = v140-- == 1;
        v98 = v118[3];
        if ( v97 )
        {
          v140 = v91;
          v98 = LODWORD(v118[3]) - 4 * v95 * v91;
        }
        v99 = 4 * v136 + LODWORD(v118[1]);
        LODWORD(v118[1]) = v99;
        LODWORD(v118[3]) = 4 * v127 + v98;
        if ( !--v96 )
          break;
        v95 = v127;
      }
      v40 = v118[0];
      v93 = v139;
      v94 = v149;
    }
    v100 = v99 - 4 * v136 * v91;
    i = (char *)v100;
    LODWORD(v118[3]) = v100;
    if ( v93 >= v131 )
    {
      v93 = v131;
      v139 = v131;
    }
    if ( (int)v94 < v93 )
    {
      v101 = 4 * v40;
      v102 = v139;
      v103 = (int)v149;
      v104 = (void *)(4 * HIDWORD(v118[2]));
      v140 = 4 * HIDWORD(v118[2]);
      v122 = v101;
      do
      {
        if ( !DNG_CopyMemory((struct _DNGINTERNALDATA *)(v101 + v100), v104, v115, v116) )
          break;
        ++v103;
        v101 = v122;
        v100 = (int)&i[4 * v136];
        v99 += 4 * v136;
        v104 = (void *)v140;
        LODWORD(v118[1]) = v99;
        i = (char *)v100;
        LODWORD(v118[3]) = v100;
      }
      while ( v103 < v102 );
    }
LABEL_60:
    result = v142;
    goto LABEL_61;
  }
  v69 = v131;
LABEL_63:
  if ( result < v51 )
  {
    v126 -= 4 * v136 * (v130 - v51);
    LODWORD(v118[1]) = v126;
    result = 4 * v127 * (v151 - a6[3]);
    v123 -= result;
    LODWORD(v118[3]) = v123;
    if ( v138 == (char *)v51 )
    {
      v72 = (int)&v138[-v142 - 1];
      v126 -= 4 * v136 * v72;
      LODWORD(v118[1]) = v126;
      result = v123 - 4 * v127 * v72;
      LODWORD(v118[3]) = result;
      if ( v142 < v69 )
      {
        v73 = 4 * v136;
        v74 = 4 * v127;
        v75 = v69 - v142;
        do
        {
          result = DNG_DrawRow(v118);
          LODWORD(v118[1]) += v73;
          LODWORD(v118[3]) += v74;
          --v75;
        }
        while ( v75 );
      }
    }
    else if ( v51 > 0 )
    {
      memset(v117, 0, sizeof(v117));
      DNG_InitStretch(v138, v51 - v69, v51 - v142);
      result = DNG_StretchCol(v118, v117);
    }
  }
LABEL_64:
  if ( a8 )
  {
    v105 = v121;
    result = v120;
    if ( v120 <= v121[5] && v119 <= v121[4] && v120 > 0 )
    {
      v106 = 0;
      v107 = v119 / 2;
      v108 = 4 * v119;
      v143 = v119 / 2;
      v153 = 4 * v119;
      do
      {
        v109 = v105[8];
        v110 = (int *)(v108 + v109 - 4);
        v111 = (int *)(v106 + v109);
        if ( v107 > 0 )
        {
          do
          {
            v112 = *v111++;
            v113 = *v110--;
            *(v111 - 1) = v113;
            v110[1] = v112;
            --v107;
          }
          while ( v107 );
          v107 = v143;
          v108 = v153;
        }
        v105 = v121;
        result = 4 * v136;
        v108 += 4 * v136;
        v106 += 4 * v136;
        v97 = v120-- == 1;
        v153 = v108;
      }
      while ( !v97 );
    }
  }
  return result;
}
