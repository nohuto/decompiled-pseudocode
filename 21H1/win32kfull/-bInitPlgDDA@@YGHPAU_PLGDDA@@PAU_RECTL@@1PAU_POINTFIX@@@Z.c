/*
 * XREFs of ?bInitPlgDDA@@YGHPAU_PLGDDA@@PAU_RECTL@@1PAU_POINTFIX@@@Z @ 0x2414A8
 * Callers:
 *     _EngPlgBlt@44 @ 0x1ECC18 (_EngPlgBlt@44.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?bSubOverflow@@YGHJJ@Z @ 0x1E555E (-bSubOverflow@@YGHJJ@Z.c)
 *     QDIV @ 0x241344 (QDIV.c)
 *     ROT_DIV @ 0x2413D5 (ROT_DIV.c)
 *     ?bAddOverflow@@YGH_J0@Z @ 0x241442 (-bAddOverflow@@YGH_J0@Z.c)
 *     ?bMulOverflow@@YGH_J0@Z @ 0x24356D (-bMulOverflow@@YGH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x243641 (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YGH_J0@Z @ 0x2446D9 (-bSubOverflow@@YGH_J0@Z.c)
 */

void *__userpurge bInitPlgDDA@<eax>(
        int *a1@<edx>,
        int a2@<ecx>,
        struct _PLGDDA *a3,
        struct _RECTL *a4,
        struct _RECTL *a5,
        struct _POINTFIX *a6)
{
  void *result; // eax
  LONG left; // ebx
  LONG top; // edx
  LONG v9; // edi
  LONG bottom; // ecx
  int v11; // eax
  LONG v12; // ebx
  __int64 *v13; // edi
  int v14; // eax
  int v15; // edi
  int v16; // edx
  int v17; // edi
  int v18; // edx
  int v19; // ecx
  int v20; // edx
  int v21; // edx
  int v22; // esi
  int v23; // eax
  int v24; // eax
  int v25; // eax
  __int64 v26; // kr10_8
  __int64 v27; // kr20_8
  int *v28; // ecx
  int v29; // esi
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ebx
  unsigned int v33; // kr38_4
  unsigned __int64 v34; // kr18_8
  unsigned int v35; // esi
  int v36; // kr50_4
  unsigned int v37; // ebx
  int v38; // edi
  int v39; // ebx
  __int64 v40; // kr68_8
  unsigned __int64 v41; // kr70_8
  unsigned __int64 v42; // kr78_8
  unsigned __int64 v43; // kr30_8
  unsigned int v44; // esi
  int v45; // ebx
  unsigned int v46; // ecx
  unsigned __int64 v47; // kr80_8
  unsigned int v48; // esi
  unsigned __int64 v49; // kr88_8
  unsigned int v50; // edx
  unsigned __int64 v51; // kr90_8
  unsigned int v52; // esi
  unsigned int v53; // edx
  unsigned int v54; // kr00_4
  unsigned __int64 v55; // kr98_8
  __int64 v56; // rdi
  unsigned __int64 v57; // krA0_8
  unsigned __int64 v58; // krC0_8
  __int64 v59; // krE8_8
  __int64 v60; // rdi
  unsigned __int64 v61; // rt0
  int v62; // edi
  unsigned int v63; // edx
  __int64 v64; // rcx
  unsigned int v65; // edi
  unsigned int v66; // ebx
  unsigned int v67; // krF8_4
  int v68; // eax
  int v69; // ebx
  unsigned __int64 v70; // kr100_8
  __int64 v71; // kr108_8
  unsigned __int64 v72; // kr40_8
  unsigned int v73; // ecx
  unsigned int v74; // edx
  unsigned __int64 v75; // kr118_8
  unsigned __int64 v76; // kr120_8
  unsigned __int64 v77; // kr130_8
  int v78; // ecx
  __int64 v79; // kr138_8
  unsigned __int64 v80; // kr140_8
  __int64 v81; // kr148_8
  __int64 v82; // kr158_8
  __int64 v83; // kr160_8
  unsigned __int64 v84; // kr168_8
  __int64 v85; // kr170_8
  unsigned int v86; // ebx
  unsigned int v87; // ebx
  unsigned int v88; // edi
  unsigned __int64 v89; // kr180_8
  int v90; // edi
  int v91; // ebx
  __int64 v92; // kr188_8
  int v93; // ebx
  unsigned int v94; // edi
  __int64 v95; // rax
  unsigned int v96; // ebx
  unsigned int v97; // edi
  unsigned int v98; // ecx
  __int64 v99; // kr190_8
  unsigned int v100; // edx
  unsigned __int64 v101; // kr198_8
  __int64 v102; // kr1A0_8
  unsigned __int64 v103; // kr1A8_8
  unsigned __int64 v104; // kr1B0_8
  unsigned int v105; // ebx
  unsigned int v106; // edi
  unsigned __int64 v107; // kr48_8
  unsigned int v108; // edx
  int v109; // ecx
  unsigned __int64 v110; // kr1B8_8
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // kr58_8
  unsigned int v113; // ebx
  unsigned int v114; // esi
  unsigned int v115; // edi
  unsigned int v116; // esi
  __int64 v117; // kr1C0_8
  unsigned __int64 v118; // kr1C8_8
  __int64 v119; // kr1D0_8
  unsigned int v120; // ebx
  unsigned int v121; // edi
  __int64 v122; // kr1E0_8
  unsigned __int64 v123; // kr1E8_8
  __int64 v124; // kr1F0_8
  unsigned int v125; // esi
  int v126; // eax
  int v127; // ebx
  unsigned int v128; // esi
  int v129; // edx
  __int64 v130; // [esp-10h] [ebp-150h]
  __int64 v131; // [esp-10h] [ebp-150h]
  __int64 v132; // [esp-10h] [ebp-150h]
  __int64 v133; // [esp-10h] [ebp-150h]
  __int64 v134; // [esp-10h] [ebp-150h]
  __int64 v135; // [esp-8h] [ebp-148h]
  __int64 v136; // [esp-8h] [ebp-148h]
  __int64 v137; // [esp-8h] [ebp-148h]
  __int64 v138; // [esp-8h] [ebp-148h]
  __int64 v139; // [esp-8h] [ebp-148h]
  __int64 v140; // [esp-8h] [ebp-148h]
  __int64 v141; // [esp-8h] [ebp-148h]
  __int64 v142; // [esp-8h] [ebp-148h]
  __int64 v143; // [esp-8h] [ebp-148h]
  __int64 v144; // [esp-8h] [ebp-148h]
  __int64 v145; // [esp-8h] [ebp-148h]
  int v146; // [esp-4h] [ebp-144h]
  int v147; // [esp+10h] [ebp-130h]
  LONG v148; // [esp+14h] [ebp-12Ch]
  __int64 v149; // [esp+14h] [ebp-12Ch]
  unsigned int v150; // [esp+14h] [ebp-12Ch]
  unsigned int v151; // [esp+14h] [ebp-12Ch]
  __int64 v152; // [esp+14h] [ebp-12Ch]
  unsigned int v153; // [esp+14h] [ebp-12Ch]
  unsigned int v154; // [esp+14h] [ebp-12Ch]
  int v155; // [esp+18h] [ebp-128h]
  unsigned int v156; // [esp+18h] [ebp-128h]
  int v157; // [esp+18h] [ebp-128h]
  unsigned int v158; // [esp+18h] [ebp-128h]
  unsigned int v159; // [esp+18h] [ebp-128h]
  unsigned int v160; // [esp+18h] [ebp-128h]
  int v161; // [esp+1Ch] [ebp-124h]
  unsigned int v162; // [esp+1Ch] [ebp-124h]
  unsigned int v163; // [esp+1Ch] [ebp-124h]
  int v164; // [esp+1Ch] [ebp-124h]
  unsigned int v165; // [esp+1Ch] [ebp-124h]
  unsigned int v166; // [esp+1Ch] [ebp-124h]
  unsigned int v167; // [esp+1Ch] [ebp-124h]
  unsigned int v168; // [esp+1Ch] [ebp-124h]
  int v169; // [esp+20h] [ebp-120h]
  int v170; // [esp+20h] [ebp-120h]
  unsigned int v171; // [esp+20h] [ebp-120h]
  unsigned int v172; // [esp+24h] [ebp-11Ch]
  unsigned int v173; // [esp+24h] [ebp-11Ch]
  unsigned int v174; // [esp+24h] [ebp-11Ch]
  unsigned int v175; // [esp+24h] [ebp-11Ch]
  unsigned int v176; // [esp+24h] [ebp-11Ch]
  unsigned int v177; // [esp+24h] [ebp-11Ch]
  unsigned int v178; // [esp+24h] [ebp-11Ch]
  int v179; // [esp+28h] [ebp-118h]
  unsigned int v180; // [esp+28h] [ebp-118h]
  int v181; // [esp+2Ch] [ebp-114h]
  __int64 v182; // [esp+2Ch] [ebp-114h]
  int v183; // [esp+2Ch] [ebp-114h]
  unsigned int v184; // [esp+2Ch] [ebp-114h]
  int v185; // [esp+30h] [ebp-110h]
  unsigned int v186; // [esp+30h] [ebp-110h]
  int v187; // [esp+30h] [ebp-110h]
  int v188; // [esp+34h] [ebp-10Ch]
  unsigned int v189; // [esp+34h] [ebp-10Ch]
  unsigned int v190; // [esp+34h] [ebp-10Ch]
  int v191; // [esp+34h] [ebp-10Ch]
  int v192; // [esp+38h] [ebp-108h]
  __int64 *v193; // [esp+38h] [ebp-108h]
  unsigned int v194; // [esp+38h] [ebp-108h]
  unsigned int v195; // [esp+38h] [ebp-108h]
  int v197; // [esp+3Ch] [ebp-104h]
  LONG right; // [esp+40h] [ebp-100h]
  unsigned int v199; // [esp+40h] [ebp-100h]
  unsigned int v200; // [esp+40h] [ebp-100h]
  unsigned int v201; // [esp+40h] [ebp-100h]
  unsigned int v202; // [esp+40h] [ebp-100h]
  int v203; // [esp+44h] [ebp-FCh]
  unsigned int v204; // [esp+44h] [ebp-FCh]
  LONG v205; // [esp+48h] [ebp-F8h]
  unsigned __int64 v206; // [esp+48h] [ebp-F8h]
  unsigned int v207; // [esp+4Ch] [ebp-F4h]
  unsigned int v208; // [esp+4Ch] [ebp-F4h]
  unsigned int v209; // [esp+4Ch] [ebp-F4h]
  unsigned int v210; // [esp+50h] [ebp-F0h]
  int v211[4]; // [esp+54h] [ebp-ECh] BYREF
  unsigned int v212; // [esp+64h] [ebp-DCh]
  int v213; // [esp+68h] [ebp-D8h]
  unsigned int v214; // [esp+6Ch] [ebp-D4h]
  unsigned int v215; // [esp+70h] [ebp-D0h]
  unsigned int v216; // [esp+74h] [ebp-CCh]
  int v217; // [esp+78h] [ebp-C8h]
  int v218; // [esp+7Ch] [ebp-C4h]
  int v219; // [esp+80h] [ebp-C0h]
  unsigned int v220; // [esp+84h] [ebp-BCh]
  int v221; // [esp+88h] [ebp-B8h]
  unsigned int v222; // [esp+8Ch] [ebp-B4h]
  int v223; // [esp+90h] [ebp-B0h]
  unsigned int v224; // [esp+94h] [ebp-ACh]
  int v225; // [esp+98h] [ebp-A8h]
  int v226; // [esp+9Ch] [ebp-A4h]
  LONG v227; // [esp+A0h] [ebp-A0h]
  int v228; // [esp+A4h] [ebp-9Ch]
  int v229; // [esp+A8h] [ebp-98h]
  int v230; // [esp+ACh] [ebp-94h]
  __int64 v231; // [esp+B0h] [ebp-90h]
  __int64 v232; // [esp+B8h] [ebp-88h]
  __int64 v233; // [esp+C0h] [ebp-80h]
  _DWORD v234[3]; // [esp+C8h] [ebp-78h]
  unsigned int v235; // [esp+D4h] [ebp-6Ch]
  unsigned __int64 v236; // [esp+D8h] [ebp-68h] BYREF
  int v237; // [esp+E0h] [ebp-60h]
  int v238; // [esp+E4h] [ebp-5Ch]
  __int64 v239[3]; // [esp+E8h] [ebp-58h] BYREF
  __int64 v240[3]; // [esp+100h] [ebp-40h] BYREF
  LONG v241; // [esp+11Ch] [ebp-24h]
  _DWORD v242[7]; // [esp+120h] [ebp-20h]

  v238 = a2;
  memset(v239, 0, 16);
  v237 = 0;
  memset(v240, 0, 16);
  result = PALLOCMEM2(0x318u, 1633969223, 1);
  v147 = (int)result;
  if ( result )
  {
    left = a4->left;
    top = a4->top;
    v205 = a4[1].left;
    right = a4->right;
    v242[3] = v205;
    v9 = a4[1].top;
    v242[1] = right;
    bottom = a4->bottom;
    v229 = left;
    v11 = v205 + right - left;
    v241 = left;
    v227 = v9;
    v12 = v9 + bottom - top;
    v242[4] = v9;
    v13 = (__int64 *)a3;
    v228 = v11;
    v242[5] = v11;
    v148 = top;
    v14 = *(_DWORD *)a3;
    v242[0] = top;
    v211[0] = bottom;
    v242[2] = bottom;
    v242[6] = v12;
    v169 = v14;
    if ( v14 || *((_DWORD *)a3 + 1) )
    {
      v192 = *a1;
      if ( bSubOverflow(*a1, v14) )
        goto LABEL_175;
      v155 = *((_DWORD *)a3 + 1);
      v181 = a1[1];
      if ( bSubOverflow(v181, v155) )
        goto LABEL_175;
      v230 = a1[2];
      if ( bSubOverflow(v230, v169) )
        goto LABEL_175;
      v197 = a1[3];
      if ( bSubOverflow(v197, v155) )
        goto LABEL_175;
      v188 = *((_DWORD *)a3 + 2);
      if ( bSubOverflow(v188, v169) )
        goto LABEL_175;
      v15 = *((_DWORD *)a3 + 3);
      if ( bSubOverflow(v15, v155) )
        goto LABEL_175;
      LODWORD(v239[0]) = v192 - v169;
      HIDWORD(v239[0]) = v181 - v16;
      LODWORD(v239[1]) = v230 - v169;
      HIDWORD(v239[1]) = v197 - v16;
      a1 = (int *)v239;
      v17 = v15 - v16;
      top = v148;
      LODWORD(v240[1]) = v188 - v169;
      bottom = v211[0];
      HIDWORD(v240[1]) = v17;
      v13 = v240;
    }
    v179 = 0;
    v18 = (bottom > top) ^ (bottom <= v12);
    v19 = 0;
    if ( v242[2 * v18] > v242[2 * (v18 ^ 3)] )
      v18 ^= 3u;
    if ( !v18 )
    {
      if ( v211[0] >= v227 )
        v19 = v211[0] > v227 || right >= v205;
      goto LABEL_37;
    }
    v20 = v18 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        if ( v21 != 1 )
          goto LABEL_38;
        if ( v211[0] >= v227 )
        {
          if ( v211[0] <= v227 )
          {
            v19 = (right >= v205) + 6;
            goto LABEL_37;
          }
          v146 = 7;
        }
        else
        {
          v146 = 6;
        }
      }
      else if ( v148 >= v12 )
      {
        if ( v148 <= v12 )
        {
          v19 = (v229 >= v228) + 4;
          goto LABEL_37;
        }
        v146 = 5;
      }
      else
      {
        v146 = 4;
      }
    }
    else if ( v148 >= v12 )
    {
      if ( v148 <= v12 )
      {
        v19 = (v229 >= v228) + 2;
        goto LABEL_37;
      }
      v146 = 3;
    }
    else
    {
      v146 = 2;
    }
    v19 = v146;
LABEL_37:
    v179 = v19;
LABEL_38:
    switch ( v19 )
    {
      case 0:
      case 2:
      case 5:
      case 7:
        v22 = *((_DWORD *)v13 + 2) - *(_DWORD *)v13;
        v23 = *((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1);
        break;
      case 1:
      case 3:
      case 4:
      case 6:
        v22 = *((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1);
        v23 = *((_DWORD *)v13 + 2) - *(_DWORD *)v13;
        break;
    }
    v211[0] = v23;
    v161 = v23 >> 31;
    v217 = v22;
    v185 = v22 >> 31;
    if ( !v22 || !v23 )
      goto LABEL_175;
    v223 = (int)(&aiPlgConst)[6 * v19];
    v24 = dword_25D894[6 * v19];
    v221 = v223 >> 31;
    v231 = v24;
    v219 = dword_25D89C[6 * v19];
    v25 = dword_25D8A0[6 * v19];
    v218 = v219 >> 31;
    v232 = v25;
    v170 = a1[1];
    v26 = *a1;
    v27 = v170 * v231 + v26 * v223 + dword_25D898[6 * v19] * (v22 - 1LL);
    v220 = HIDWORD(v27);
    LODWORD(v182) = v170 * v25 + v26 * v219 + dword_25D8A4[6 * v19] * (v211[0] - 1);
    v211[1] = (v170 * (__int64)v25 + v26 * v219 + dword_25D8A4[6 * v19] * (__PAIR64__(v161, v211[0]) - 1)) >> 32;
    v28 = (int *)(&aiPlgSort)[4 * v179];
    v29 = dword_25D814[4 * v179];
    v229 = v242[2 * (_DWORD)v28 - 1];
    LODWORD(v30) = v242[2 * (_DWORD)v28];
    v31 = dword_25D818[4 * v179];
    v228 = v229 >> 31;
    v30 = (int)v30;
    v227 = v30;
    LODWORD(v30) = v242[2 * v29 - 1];
    v235 = HIDWORD(v30);
    v34 = (int)v30 - (__int64)v229;
    v216 = HIDWORD(v34);
    v234[0] = v34;
    v33 = v30 - v229;
    v32 = v30 - v229;
    HIDWORD(v30) = (unsigned __int64)(v242[2 * v31 - 1] - (__int64)v229) >> 32;
    v213 = v242[2 * v31 - 1] - v229;
    LODWORD(v30) = v242[2 * v29];
    v180 = HIDWORD(v30);
    v35 = v30 - v227;
    v210 = ((int)v30 - __PAIR64__(v235, v227)) >> 32;
    v212 = v30 - v227;
    v36 = v242[2 * v31] - v227;
    v214 = ((int)v242[2 * v31] - __PAIR64__(v235, v227)) >> 32;
    v222 = v36;
    if ( __PAIR64__(v33, v216) )
    {
      v135 = __PAIR64__(v216, v32);
      v37 = v211[0];
      if ( bMulOverflow(__SPAIR64__(v161, v211[0]), v135) )
        goto LABEL_175;
    }
    else
    {
      v37 = v211[0];
    }
    if ( v210 | v35 && bMulOverflow(__SPAIR64__(v161, v37), __SPAIR64__(v210, v35)) )
      goto LABEL_175;
    if ( v180 | v213 && bMulOverflow(__SPAIR64__(v185, v217), __SPAIR64__(v180, v213)) )
      goto LABEL_175;
    if ( v214 | v222 && bMulOverflow(__SPAIR64__(v185, v217), __SPAIR64__(v214, v222)) )
      goto LABEL_175;
    *(_QWORD *)&v234[1] = __PAIR64__(v161, v37) * __PAIR64__(v216, v234[0]);
    LODWORD(v149) = (__PAIR64__(v161, v37) * __PAIR64__(v210, v212)) >> 32;
    HIDWORD(v149) = v37 * v212;
    v38 = v37 * v212;
    v233 = __PAIR64__(v185, v217) * __PAIR64__(v180, v213);
    v215 = (__PAIR64__(v185, v217) * __PAIR64__(v214, v222)) >> 32;
    v230 = v217 * v222;
    if ( !(__PAIR64__(v185, v217) * __PAIR64__(v214, v222)) )
      goto LABEL_175;
    if ( bMulOverflow(__SPAIR64__(v185, v217), __SPAIR64__(v161, v37)) )
      goto LABEL_175;
    v207 = (__PAIR64__(v185, v217) * __PAIR64__(v161, v37)) >> 32;
    v39 = v217 * v37;
    if ( bAddOverflow(__SPAIR64__(v235, v227), 16LL) )
      goto LABEL_175;
    HIDWORD(v136) = __CFADD__(v227, 16) + v235;
    LODWORD(v136) = v227 + 16;
    if ( bMulOverflow(__SPAIR64__(v207, v39), v136) )
      goto LABEL_175;
    v40 = __PAIR64__(v207, v39) * (__PAIR64__(v235, v227) + 16);
    if ( bMulOverflow(__SPAIR64__(v220, v27), __SPAIR64__(v149, v38)) )
      goto LABEL_175;
    v41 = __PAIR64__(v149, v38) * __PAIR64__(v220, v27);
    if ( bAddOverflow(v40, __PAIR64__(v149, v38) * __PAIR64__(v220, v27)) )
      goto LABEL_175;
    v189 = (v41 + v40) >> 32;
    v171 = v41 + v40;
    if ( bMulOverflow(__SPAIR64__(v211[1], v182), __SPAIR64__(v215, v230)) )
      goto LABEL_175;
    v42 = __PAIR64__(v215, v230) * __PAIR64__(v211[1], v182);
    if ( bAddOverflow(__SPAIR64__(v189, v171), __PAIR64__(v215, v230) * __PAIR64__(v211[1], v182)) )
      goto LABEL_175;
    v43 = v42 + __PAIR64__(v189, v171);
    v190 = HIDWORD(v43);
    LODWORD(v130) = v43;
    HIDWORD(v130) = v190;
    if ( bSubOverflow(v130, 1LL) )
      goto LABEL_175;
    v236 = __PAIR64__(v190, (unsigned int)v42 + v171) - 1;
    if ( bMulOverflow(__SPAIR64__(v207, v39), 16LL) )
      goto LABEL_175;
    v44 = __PAIR64__(v207, v39) >> 28;
    v45 = 16 * v39;
    v206 = __PAIR64__(v44, v45);
    if ( !__PAIR64__(v44, v45) )
      goto LABEL_175;
    memset(v239, 0, sizeof(v239));
    memset(v240, 0, sizeof(v240));
    ROT_DIV(v239, __SPAIR64__(v149, HIDWORD(v149)), __SPAIR64__(v44, v45));
    ROT_DIV(v240, __SPAIR64__(v215, v230), __SPAIR64__(v44, v45));
    v193 = (__int64 *)(v147 + 8);
    QDIV(v147 + 8, (int *)&v236, __PAIR64__(v44, v45));
    v46 = HIDWORD(v239[0]);
    *(_DWORD *)(v147 + 24) = *(_DWORD *)(v147 + 8);
    *(_DWORD *)(v147 + 28) = *(_DWORD *)(v147 + 12);
    *(_DWORD *)(v147 + 32) = *(_DWORD *)(v147 + 16);
    *(_DWORD *)(v147 + 36) = *(_DWORD *)(v147 + 20);
    v48 = *(_DWORD *)(v147 + 36);
    v47 = *(_QWORD *)(v147 + 24) + __PAIR64__(v46, v239[0]);
    *(_QWORD *)(v147 + 24) = v47;
    v49 = v239[1] + __PAIR64__(v48, *(_DWORD *)(v147 + 32));
    *(_QWORD *)(v147 + 32) = v239[1] + __PAIR64__(v48, *(_DWORD *)(v147 + 32));
    if ( v49 >= __PAIR64__(HIDWORD(v206), v45) )
    {
      *(_DWORD *)(v147 + 24) = v47 + 1;
      *(_DWORD *)(v147 + 28) = __CFADD__((_DWORD)v47, 1) + HIDWORD(v47);
      *(_QWORD *)(v147 + 32) = v49 - __PAIR64__(HIDWORD(v206), v45);
    }
    v50 = HIDWORD(v240[0]);
    *(_DWORD *)(v147 + 40) = *(_DWORD *)(v147 + 8);
    *(_DWORD *)(v147 + 44) = *(_DWORD *)(v147 + 12);
    *(_DWORD *)(v147 + 48) = *(_DWORD *)(v147 + 16);
    *(_DWORD *)(v147 + 52) = *(_DWORD *)(v147 + 20);
    v52 = *(_DWORD *)(v147 + 52);
    v51 = *(_QWORD *)(v147 + 40) + __PAIR64__(v50, v240[0]);
    *(_DWORD *)(v147 + 44) = HIDWORD(v51);
    v53 = *(_DWORD *)(v147 + 48);
    v54 = v240[1];
    *(_DWORD *)(v147 + 40) = v51;
    v55 = __PAIR64__(v52, v54) + __PAIR64__(HIDWORD(v240[1]), v53);
    *(_QWORD *)(v147 + 48) = __PAIR64__(v52, v54) + __PAIR64__(HIDWORD(v240[1]), v53);
    if ( v55 >= __PAIR64__(HIDWORD(v206), v45) )
    {
      *(_DWORD *)(v147 + 40) = v51 + 1;
      *(_DWORD *)(v147 + 44) = __CFADD__((_DWORD)v51, 1) + HIDWORD(v51);
      *(_QWORD *)(v147 + 48) = v55 - __PAIR64__(HIDWORD(v206), v45);
    }
    *(_DWORD *)(v147 + 56) = *(_DWORD *)(v147 + 40);
    *(_DWORD *)(v147 + 60) = *(_DWORD *)(v147 + 44);
    *(_DWORD *)(v147 + 64) = *(_DWORD *)(v147 + 48);
    *(_DWORD *)(v147 + 68) = *(_DWORD *)(v147 + 52);
    v56 = v239[0] + *(_QWORD *)(v147 + 56);
    *(_QWORD *)(v147 + 56) = v56;
    v57 = v239[1] + *(_QWORD *)(v147 + 64);
    *(_QWORD *)(v147 + 64) = v57;
    if ( v57 >= __PAIR64__(HIDWORD(v206), v45) )
    {
      *(_DWORD *)(v147 + 56) = v56 + 1;
      *(_DWORD *)(v147 + 60) = __CFADD__((_DWORD)v56, 1) + HIDWORD(v56);
      *(_QWORD *)(v147 + 64) = v57 - __PAIR64__(HIDWORD(v206), v45);
    }
    if ( bMulOverflow(__SPAIR64__(v221, v223), __SPAIR64__(v149, HIDWORD(v149))) )
      goto LABEL_175;
    if ( bMulOverflow(__SPAIR64__(v218, v219), __SPAIR64__(v215, v230)) )
      goto LABEL_175;
    v225 = (__PAIR64__(v149, HIDWORD(v149)) * __PAIR64__(v221, v223)) >> 32;
    v226 = HIDWORD(v149) * v223;
    if ( bAddOverflow(
           __PAIR64__(v149, HIDWORD(v149)) * __PAIR64__(v221, v223),
           __PAIR64__(v215, v230) * __PAIR64__(v218, v219)) )
    {
      goto LABEL_175;
    }
    if ( bMulOverflow(v231, __SPAIR64__(v149, HIDWORD(v149))) )
      goto LABEL_175;
    if ( bMulOverflow(v232, __SPAIR64__(v215, v230)) )
      goto LABEL_175;
    v58 = __PAIR64__(v215, v230) * v232;
    v172 = (__PAIR64__(v149, HIDWORD(v149)) * v231) >> 32;
    v224 = HIDWORD(v149) * v231;
    if ( bAddOverflow(__PAIR64__(v149, HIDWORD(v149)) * v231, __PAIR64__(v215, v230) * v232) )
      goto LABEL_175;
    ROT_DIV((_DWORD *)(v147 + 264), __PAIR64__(v215, v230) * __PAIR64__(v218, v219) + __PAIR64__(v225, v226), v206);
    *(_QWORD *)(v147 + 280) = v206;
    qmemcpy((void *)(v147 + 288), (const void *)(v147 + 264), 0x18u);
    qmemcpy((void *)(v147 + 312), (const void *)(v147 + 264), 0x18u);
    qmemcpy((void *)(v147 + 336), (const void *)(v147 + 264), 0x18u);
    ROT_DIV((_DWORD *)(v147 + 360), v58 + __PAIR64__(v172, v224), v206);
    *(_QWORD *)(v147 + 376) = v206;
    qmemcpy((void *)(v147 + 384), (const void *)(v147 + 360), 0x18u);
    qmemcpy((void *)(v147 + 408), (const void *)(v147 + 360), 0x18u);
    qmemcpy((void *)(v147 + 432), (const void *)(v147 + 360), 0x18u);
    if ( bMulOverflow(__SPAIR64__(v216, v234[0]), __SPAIR64__(v214, v222)) )
      goto LABEL_175;
    v224 = (__PAIR64__(v214, v222) * __PAIR64__(v216, v234[0])) >> 32;
    v225 = v222 * v234[0];
    if ( bMulOverflow(__SPAIR64__(v210, v212), __SPAIR64__(v180, v213)) )
      goto LABEL_175;
    v226 = (__PAIR64__(v180, v213) * __PAIR64__(v210, v212)) >> 32;
    v191 = v213 * v212;
    if ( bSubOverflow(
           __PAIR64__(v214, v222) * __PAIR64__(v216, v234[0]),
           __PAIR64__(v180, v213) * __PAIR64__(v210, v212)) )
    {
      goto LABEL_175;
    }
    v59 = __PAIR64__(v214, v222) * __PAIR64__(v216, v234[0]) - __PAIR64__(v180, v213) * __PAIR64__(v210, v212);
    memset(v239, 0, 16);
    memset(v240, 0, 16);
    v60 = (unsigned int)v217;
    if ( bMulOverflow(__SPAIR64__(v185, v217), 16LL) )
      goto LABEL_175;
    if ( bMulOverflow(__SPAIR64__(v161, v211[0]), 16LL) )
      goto LABEL_175;
    if ( bMulOverflow(__SPAIR64__(v221, v223), __SPAIR64__(v210, v212)) )
      goto LABEL_175;
    if ( bMulOverflow(__SPAIR64__(v218, v219), __SPAIR64__(v214, v222)) )
      goto LABEL_175;
    v61 = 16 * __PAIR64__(v185, v217);
    v62 = 16 * v217;
    v63 = __PAIR64__(v185, v217) >> 28;
    v186 = v63;
    if ( !__PAIR64__(HIDWORD(v61), 16 * v217) )
      goto LABEL_175;
    LODWORD(v64) = __PAIR64__(v161, v211[0]) >> 28;
    HIDWORD(v64) = 16 * v211[0];
    v162 = v64;
    if ( !v64 )
      goto LABEL_175;
    ROT_DIV(v239, __PAIR64__(v210, v212) * __PAIR64__(v221, v223), __SPAIR64__(v63, v62));
    ROT_DIV(v240, __PAIR64__(v214, v222) * __PAIR64__(v218, v219), __SPAIR64__(v162, HIDWORD(v64)));
    v208 = HIDWORD(v239[0]);
    v217 = v239[0];
    if ( bAddOverflow(v239[0], v240[0]) )
      goto LABEL_175;
    v209 = (v240[0] + __PAIR64__(v208, v217)) >> 32;
    v217 += LODWORD(v240[0]);
    ROT_DIV(v239, __PAIR64__(v210, v212) * v231, __SPAIR64__(v186, v62));
    ROT_DIV(v240, __PAIR64__(v214, v222) * v232, __SPAIR64__(v162, HIDWORD(v64)));
    v65 = HIDWORD(v239[0]);
    v66 = v239[0];
    if ( bAddOverflow(v239[0], v240[0]) )
      goto LABEL_175;
    v67 = LODWORD(v240[0]) + v66;
    v211[0] = (v240[0] + __PAIR64__(v65, v66)) >> 32;
    LODWORD(v60) = v149;
    if ( v149 )
    {
      HIDWORD(v137) = HIDWORD(v60);
      LODWORD(v137) = 16;
      v163 = *(_DWORD *)v193;
      v150 = *(_DWORD *)(v147 + 12);
      if ( bMulOverflow(*v193, v137) )
        goto LABEL_175;
      v131 = 16 * __PAIR64__(v150, v163);
      v151 = __PAIR64__(v150, v163) >> 28;
      v164 = 16 * v163;
      if ( bSubOverflow(v131, __SPAIR64__(v235, v227)) )
        goto LABEL_175;
      v70 = __PAIR64__(v151, v164) - __PAIR64__(v235, v227);
      v138 = __PAIR64__(v151, v164) - __PAIR64__(v235, v227);
      v165 = v164 - v227;
      if ( bMulOverflow(*(__int64 *)&v234[1], v138) )
        goto LABEL_175;
      HIDWORD(v139) = HIDWORD(v60);
      LODWORD(v139) = 16;
      v71 = *(_QWORD *)&v234[1] * __PAIR64__(HIDWORD(v70), v165);
      if ( bAddOverflow(__SPAIR64__(v228, v229), v139) )
        goto LABEL_175;
      v203 = v229 + 16;
      HIDWORD(v140) = HIDWORD(v60) + __CFADD__(v229, 16) + v228;
      LODWORD(v140) = v229 + 16;
      v173 = HIDWORD(v140);
      if ( bMulOverflow(__SPAIR64__(v60, HIDWORD(v149)), v140)
        || bAddOverflow(v71, __PAIR64__(v173, v203) * __PAIR64__(v60, HIDWORD(v149))) )
      {
        goto LABEL_175;
      }
      v72 = v71 + __PAIR64__(v173, v203) * __PAIR64__(v60, HIDWORD(v149));
      HIDWORD(v182) = HIDWORD(v72);
      v166 = v72;
      v73 = v182;
      v74 = v211[1];
      if ( v211[1] | (unsigned int)v182 )
      {
        if ( bMulOverflow(__SPAIR64__(v211[1], v182), __SPAIR64__(v224, v225)) )
          goto LABEL_175;
        v73 = v182;
        v74 = v211[1];
      }
      v75 = __PAIR64__(v74, v73) * __PAIR64__(v224, v225);
      if ( bSubOverflow(__SPAIR64__(HIDWORD(v182), v166), __PAIR64__(v74, v73) * __PAIR64__(v224, v225)) )
        goto LABEL_175;
      v76 = __PAIR64__(HIDWORD(v182), v166) - v75;
      HIDWORD(v182) = (__PAIR64__(HIDWORD(v182), v166) - v75) >> 32;
      if ( v211[1] | (unsigned int)v182 )
      {
        if ( bMulOverflow(__SPAIR64__(v180, v213), __SPAIR64__(v210, v212))
          || bMulOverflow(__SPAIR64__(v211[1], v182), __SPAIR64__(v226, v191)) )
        {
          goto LABEL_175;
        }
      }
      v211[1] = (__PAIR64__(v211[1], v182) * __PAIR64__(v226, v191)) >> 32;
      LODWORD(v182) = v182 * v191;
      if ( bAddOverflow(__SPAIR64__(HIDWORD(v182), v76), __SPAIR64__(v211[1], v182)) )
        goto LABEL_175;
      v77 = __PAIR64__(v211[1], v76) + v182;
      HIDWORD(v141) = HIDWORD(v60);
      LODWORD(v141) = 1;
      v132 = __PAIR64__(v211[1], v76) + v182;
      v183 = v76 + v182;
      v211[1] = HIDWORD(v77);
      if ( bSubOverflow(v132, v141) )
        goto LABEL_175;
      v78 = v211[1] - ((v183 == 0) + HIDWORD(v60));
      v184 = v183 - 1;
      HIDWORD(v133) = HIDWORD(v60);
      LODWORD(v133) = 16;
      v211[1] = v78;
      v236 = __PAIR64__(v78, v184);
      if ( bMulOverflow(v133, __SPAIR64__(v60, HIDWORD(v149))) )
        goto LABEL_175;
      HIDWORD(v60) = v147;
      LODWORD(v60) = __PAIR64__(v60, HIDWORD(v149)) >> 28;
      v69 = 16 * HIDWORD(v149);
      *(_DWORD *)(v147 + 664) = 16 * HIDWORD(v149);
      *(_DWORD *)(v147 + 668) = v60;
      *(_DWORD *)(v147 + 472) = 16 * HIDWORD(v149);
      *(_DWORD *)(v147 + 476) = v60;
      *(_DWORD *)(v147 + 568) = 16 * HIDWORD(v149);
      *(_DWORD *)(v147 + 572) = v60;
      if ( !__PAIR64__(v60, 16 * HIDWORD(v149)) )
        goto LABEL_176;
      QDIV(v147 + 72, (int *)&v236, __PAIR64__(v60, v69));
      if ( bMulOverflow(16LL, *(__int64 *)&v234[1]) )
        goto LABEL_176;
      v167 = *(_DWORD *)(v147 + 12);
      v174 = *(_DWORD *)(v147 + 8);
      v152 = *(_QWORD *)(v147 + 40);
      if ( bSubOverflow(v152, *(_QWORD *)(v147 + 8)) )
        goto LABEL_176;
      v79 = v152 - __PAIR64__(v167, v174);
      v168 = *(_QWORD *)&v234[1] >> 28;
      v187 = 16 * v234[1];
      HIDWORD(v60) = v147;
      if ( bMulOverflow(16LL * *(_QWORD *)&v234[1], v79) )
        goto LABEL_176;
      v153 = (unsigned __int64)(v79 * *(_QWORD *)&v234[1]) >> 28;
      v156 = 16 * v79 * v234[1];
      if ( bSubOverflow(16 * v79 * *(_QWORD *)&v234[1], v59) )
        goto LABEL_176;
      v80 = __PAIR64__(v153, v156) - v59;
      v142 = __PAIR64__(v153, v156) - v59;
      v157 = v156 - v59;
      if ( bAddOverflow(__SPAIR64__(v211[1], v184), v142) )
        goto LABEL_176;
      LODWORD(v236) = v157 + v184;
      HIDWORD(v236) = HIDWORD(v80) + __CFADD__(v157, v184) + v211[1];
      QDIV(v147 + 120, (int *)&v236, *(_QWORD *)(v147 + 664));
      ROT_DIV((_DWORD *)(v147 + 648), __SPAIR64__(v168, v187), *(_QWORD *)(v147 + 664));
      if ( v214 | v222 )
      {
        if ( bMulOverflow(__SPAIR64__(v218, v219), __SPAIR64__(v216, v234[0]))
          || bMulOverflow(__PAIR64__(v216, v234[0]) * __PAIR64__(v218, v219), __SPAIR64__(v214, v222)) )
        {
          goto LABEL_175;
        }
      }
      v81 = __PAIR64__(v218, v219) * __PAIR64__(v224, v225);
      if ( v210 | v212 )
      {
        if ( bMulOverflow(__SPAIR64__(v218, v219), __SPAIR64__(v180, v213))
          || bMulOverflow(__PAIR64__(v180, v213) * __PAIR64__(v218, v219), __SPAIR64__(v210, v212)) )
        {
          goto LABEL_175;
        }
      }
      if ( bSubOverflow(v81, __PAIR64__(v218, v219) * __PAIR64__(v226, v191)) )
        goto LABEL_175;
      v82 = v81 - __PAIR64__(v218, v219) * __PAIR64__(v226, v191);
      if ( bMulOverflow(16LL, __SPAIR64__(v209, v217)) )
        goto LABEL_175;
      if ( bMulOverflow(16 * __PAIR64__(v209, v217), *(__int64 *)&v234[1]) )
        goto LABEL_175;
      if ( bSubOverflow(16 * __PAIR64__(v209, v217) * *(_QWORD *)&v234[1], v82) )
        goto LABEL_175;
      *(_QWORD *)&v211[1] = 16 * __PAIR64__(v209, v217) * *(_QWORD *)&v234[1] - v82;
      QDIV(v147 + 456, &v211[1], *(_QWORD *)(v147 + 472));
      if ( v214 | v222 )
      {
        if ( bMulOverflow(v232, __SPAIR64__(v216, v234[0]))
          || bMulOverflow(__PAIR64__(v216, v234[0]) * v232, __SPAIR64__(v214, v222)) )
        {
          goto LABEL_175;
        }
      }
      v83 = v232 * __PAIR64__(v224, v225);
      if ( v210 | v212 )
      {
        if ( bMulOverflow(v232, __SPAIR64__(v180, v213))
          || bMulOverflow(__PAIR64__(v180, v213) * v232, __SPAIR64__(v210, v212)) )
        {
          goto LABEL_175;
        }
      }
      v84 = v232 * __PAIR64__(v226, v191);
      if ( bSubOverflow(v83, v232 * __PAIR64__(v226, v191)) )
        goto LABEL_175;
      v85 = v83 - v84;
      if ( bMulOverflow(16LL, __SPAIR64__(v211[0], v67)) )
        goto LABEL_175;
      if ( bMulOverflow(16 * __PAIR64__(v211[0], v67), *(__int64 *)&v234[1]) )
        goto LABEL_175;
      HIDWORD(v60) = 16 * v67 * v234[1];
      v175 = (__PAIR64__(v211[0], v67) * *(_QWORD *)&v234[1]) >> 28;
      if ( bSubOverflow(16 * __PAIR64__(v211[0], v67) * *(_QWORD *)&v234[1], v85) )
        goto LABEL_175;
      *(_QWORD *)&v211[1] = __PAIR64__(v175, HIDWORD(v60)) - v85;
      QDIV(v147 + 552, &v211[1], *(_QWORD *)(v147 + 568));
      ROT_DIV((_DWORD *)(v147 + 744), __SPAIR64__(v168, v187), __SPAIR64__(v60, v69));
      v68 = v147;
      HIDWORD(v60) = 0;
    }
    else
    {
      v68 = v147;
      v69 = HIDWORD(v60);
      LODWORD(v60) = HIDWORD(v60);
      *(_DWORD *)(v147 + 656) = HIDWORD(v60);
      *(_DWORD *)(v147 + 648) = HIDWORD(v60);
      *(_DWORD *)(v147 + 652) = HIDWORD(v60);
      *(_DWORD *)(v147 + 456) = HIDWORD(v60);
      *(_DWORD *)(v147 + 460) = HIDWORD(v60);
      *(_DWORD *)(v147 + 660) = HIDWORD(v60);
      *(_DWORD *)(v147 + 664) = HIDWORD(v60);
      *(_DWORD *)(v147 + 668) = HIDWORD(v60);
      *(_DWORD *)(v147 + 464) = HIDWORD(v60);
      *(_DWORD *)(v147 + 468) = HIDWORD(v60);
      *(_DWORD *)(v147 + 472) = HIDWORD(v60);
      *(_DWORD *)(v147 + 476) = HIDWORD(v60);
      *(_DWORD *)(v147 + 552) = HIDWORD(v60);
      *(_DWORD *)(v147 + 556) = HIDWORD(v60);
      *(_DWORD *)(v147 + 560) = HIDWORD(v60);
      *(_DWORD *)(v147 + 564) = HIDWORD(v60);
      *(_DWORD *)(v147 + 568) = HIDWORD(v60);
      *(_DWORD *)(v147 + 572) = HIDWORD(v60);
      *(_DWORD *)(v147 + 72) = HIDWORD(v60);
      *(_DWORD *)(v147 + 76) = HIDWORD(v60);
      *(_DWORD *)(v147 + 80) = HIDWORD(v60);
      *(_DWORD *)(v147 + 84) = HIDWORD(v60);
      *(_DWORD *)(v147 + 120) = HIDWORD(v60);
      *(_DWORD *)(v147 + 124) = HIDWORD(v60);
      *(_DWORD *)(v147 + 128) = HIDWORD(v60);
      *(_DWORD *)(v147 + 132) = HIDWORD(v60);
      *(_DWORD *)(v147 + 744) = HIDWORD(v60);
      *(_DWORD *)(v147 + 748) = HIDWORD(v60);
      *(_DWORD *)(v147 + 752) = HIDWORD(v60);
      *(_DWORD *)(v147 + 756) = HIDWORD(v60);
    }
    *(_DWORD *)(v68 + 760) = v69;
    *(_DWORD *)(v68 + 764) = v60;
    v86 = *(_DWORD *)(v147 + 12);
    LODWORD(v60) = *(_DWORD *)v193;
    HIDWORD(v134) = HIDWORD(v60);
    LODWORD(v134) = 16;
    if ( bMulOverflow(v134, *v193) )
      goto LABEL_175;
    v87 = __PAIR64__(v86, v60) >> 28;
    v88 = 16 * v60;
    if ( bSubOverflow(__SPAIR64__(v87, v88), __SPAIR64__(v235, v227)) )
      goto LABEL_175;
    v89 = __PAIR64__(v87, v88) - __PAIR64__(v235, v227);
    if ( bMulOverflow(v233, __PAIR64__(v87, v88) - __PAIR64__(v235, v227)) )
      goto LABEL_175;
    v90 = v228;
    v91 = v229;
    v92 = v233 * v89;
    if ( bAddOverflow(__SPAIR64__(v228, v229), 16LL) )
      goto LABEL_175;
    v229 = v91 + 16;
    HIDWORD(v143) = __CFADD__(v91, 16) + v90;
    LODWORD(v143) = v91 + 16;
    v93 = v230;
    v228 = HIDWORD(v143);
    v94 = v215;
    if ( bMulOverflow(__SPAIR64__(v215, v230), v143) )
      goto LABEL_175;
    v95 = __PAIR64__(v228, v229) * __PAIR64__(v94, v93);
    v96 = (__PAIR64__(v228, v229) * __PAIR64__(v94, v93)) >> 32;
    v97 = v95;
    if ( bAddOverflow(v92, v95) )
      goto LABEL_175;
    v98 = v27;
    v99 = v92 + __PAIR64__(v96, v97);
    v100 = v220;
    if ( v220 | (unsigned int)v27 )
    {
      if ( bMulOverflow(__SPAIR64__(v220, v27), __SPAIR64__(v224, v225)) )
        goto LABEL_175;
      v98 = v27;
      v100 = v220;
    }
    v101 = __PAIR64__(v100, v98) * __PAIR64__(v224, v225);
    if ( !bAddOverflow(v99, __PAIR64__(v100, v98) * __PAIR64__(v224, v225)) )
    {
      v102 = v101 + v99;
      if ( !(v220 | (unsigned int)v27)
        || !bMulOverflow(__SPAIR64__(v180, v213), __SPAIR64__(v210, v212))
        && !bMulOverflow(__SPAIR64__(v220, v27), __SPAIR64__(v226, v191)) )
      {
        v103 = __PAIR64__(v220, v27) * __PAIR64__(v226, v191);
        if ( !bSubOverflow(v102, __PAIR64__(v220, v27) * __PAIR64__(v226, v191)) )
        {
          v104 = v102 - v103;
          if ( !bSubOverflow(v102 - v103, 1LL) )
          {
            v107 = v104 - 1;
            v105 = HIDWORD(v107);
            v106 = v107;
            v236 = v104 - 1;
            if ( !bMulOverflow(16LL, __SPAIR64__(v215, v230)) )
            {
              HIDWORD(v60) = v147;
              v108 = __PAIR64__(v215, v230) >> 28;
              v109 = 16 * v230;
              *(_DWORD *)(v147 + 688) = 16 * v230;
              *(_DWORD *)(v147 + 692) = v108;
              *(_DWORD *)(v147 + 496) = v109;
              *(_DWORD *)(v147 + 500) = v108;
              *(_DWORD *)(v147 + 592) = v109;
              *(_DWORD *)(v147 + 596) = v108;
              v215 = v108;
              v230 = v109;
              if ( !__PAIR64__(v109, v108) )
                goto LABEL_176;
              QDIV(v147 + 88, (int *)&v236, __PAIR64__(v108, v109));
              if ( bMulOverflow(16LL, v233) )
                goto LABEL_176;
              v194 = *(_DWORD *)(v147 + 12);
              v176 = *(_DWORD *)(v147 + 8);
              v199 = *(_DWORD *)(v147 + 24);
              v158 = *(_DWORD *)(v147 + 28);
              if ( bSubOverflow(*(_QWORD *)(v147 + 24), *(_QWORD *)(v147 + 8)) )
                goto LABEL_176;
              v110 = __PAIR64__(v158, v199) - __PAIR64__(v194, v176);
              v154 = (unsigned __int64)v233 >> 28;
              v144 = __PAIR64__(v158, v199) - __PAIR64__(v194, v176);
              v200 = v199 - v176;
              v195 = 16 * v233;
              HIDWORD(v60) = v147;
              if ( bMulOverflow(16 * v233, v144) )
                goto LABEL_176;
              v111 = __PAIR64__(HIDWORD(v110), v200) * v233;
              v201 = (__PAIR64__(HIDWORD(v110), v200) * v233) >> 28;
              v159 = 16 * v111;
              if ( bAddOverflow(16 * v111, v59) )
                goto LABEL_176;
              v112 = v59 + __PAIR64__(v201, v159);
              HIDWORD(v145) = HIDWORD(v112);
              v160 = v112;
              LODWORD(v145) = v160;
              v202 = HIDWORD(v145);
              if ( bAddOverflow(__SPAIR64__(v105, v106), v145) )
                goto LABEL_176;
              v236 = __PAIR64__(v202, v160) + __PAIR64__(v105, v106);
              QDIV(v147 + 104, (int *)&v236, *(_QWORD *)(v147 + 688));
              ROT_DIV((_DWORD *)(v147 + 672), __SPAIR64__(v154, v195), *(_QWORD *)(v147 + 688));
              v113 = v222;
              v114 = v214;
              if ( !(v214 | v222)
                || (v115 = v234[0], !bMulOverflow(__SPAIR64__(v221, v223), __SPAIR64__(v216, v234[0])))
                && !bMulOverflow(__PAIR64__(v216, v115) * __PAIR64__(v221, v223), __SPAIR64__(v114, v113)) )
              {
                v116 = v212;
                v117 = __PAIR64__(v224, v225) * __PAIR64__(v221, v223);
                if ( !(v210 | v212)
                  || !bMulOverflow(__SPAIR64__(v221, v223), __SPAIR64__(v180, v213))
                  && !bMulOverflow(__PAIR64__(v180, v213) * __PAIR64__(v221, v223), __SPAIR64__(v210, v116)) )
                {
                  v118 = __PAIR64__(v226, v191) * __PAIR64__(v221, v223);
                  if ( !bSubOverflow(v117, __PAIR64__(v226, v191) * __PAIR64__(v221, v223)) )
                  {
                    v119 = v117 - v118;
                    if ( !bMulOverflow(16LL, __SPAIR64__(v209, v217))
                      && !bMulOverflow(16 * __PAIR64__(v209, v217), v233) )
                    {
                      v204 = (__PAIR64__(v209, v217) * v233) >> 28;
                      v177 = 16 * v217 * v233;
                      if ( !bAddOverflow(16 * __PAIR64__(v209, v217) * v233, v119) )
                      {
                        *(_QWORD *)&v211[1] = __PAIR64__(v204, v177) + v119;
                        QDIV(v147 + 480, &v211[1], *(_QWORD *)(v147 + 496));
                        v120 = v222;
                        v121 = v214;
                        if ( !(v214 | v222)
                          || !bMulOverflow(v231, __SPAIR64__(v216, v234[0]))
                          && !bMulOverflow(__PAIR64__(v216, v234[0]) * v231, __SPAIR64__(v121, v120)) )
                        {
                          v122 = __PAIR64__(v224, v225) * v231;
                          if ( !(v210 | v212)
                            || !bMulOverflow(v231, __SPAIR64__(v180, v213))
                            && !bMulOverflow(__PAIR64__(v180, v213) * v231, __SPAIR64__(v210, v212)) )
                          {
                            v123 = __PAIR64__(v226, v191) * v231;
                            if ( !bSubOverflow(v122, __PAIR64__(v226, v191) * v231) )
                            {
                              v124 = v122 - v123;
                              if ( !bMulOverflow(16LL, __SPAIR64__(v211[0], v67))
                                && !bMulOverflow(16 * __PAIR64__(v211[0], v67), v233) )
                              {
                                v125 = 16 * v67 * v233;
                                v178 = (__PAIR64__(v211[0], v67) * v233) >> 28;
                                if ( !bAddOverflow(16 * __PAIR64__(v211[0], v67) * v233, v124) )
                                {
                                  *(_QWORD *)&v211[1] = __PAIR64__(v178, v125) + v124;
                                  QDIV(v147 + 576, &v211[1], *(_QWORD *)(v147 + 592));
                                  v126 = v147;
                                  qmemcpy((void *)(v147 + 696), (const void *)(v147 + 672), 0x18u);
                                  qmemcpy((void *)(v126 + 504), (const void *)(v126 + 480), 0x18u);
                                  v127 = v230;
                                  qmemcpy((void *)(v147 + 600), (const void *)(v147 + 576), 0x18u);
                                  qmemcpy((void *)(v126 + 720), (const void *)(v126 + 648), 0x18u);
                                  qmemcpy((void *)(v126 + 528), (const void *)(v126 + 456), 0x18u);
                                  qmemcpy((void *)(v126 + 624), (const void *)(v126 + 552), 0x18u);
                                  v128 = v215;
                                  ROT_DIV((_DWORD *)(v147 + 768), __SPAIR64__(v154, v195), __SPAIR64__(v215, v127));
                                  v129 = v238;
                                  *(_DWORD *)(v147 + 784) = v127;
                                  *(_DWORD *)(v147 + 788) = v128;
                                  v237 = bScalePlgDDALToPlgDDA(v147, v129);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_175:
    HIDWORD(v60) = v147;
LABEL_176:
    Win32FreePool((PATHOBJ *)HIDWORD(v60));
    return (void *)v237;
  }
  return result;
}
