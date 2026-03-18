/*
 * XREFs of ?bInitPlgDDA@@YAHPEAU_PLGDDA@@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1C02D481C
 * Callers:
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C00673AC (PALLOCMEM2.c)
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C013C1F4 (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     QDIV @ 0x1C02D4738 (QDIV.c)
 *     ROT_DIV @ 0x1C02D4788 (ROT_DIV.c)
 *     ?bAddOverflow@@YAH_J0@Z @ 0x1C02D47D8 (-bAddOverflow@@YAH_J0@Z.c)
 *     ?bMulOverflow@@YAH_J0@Z @ 0x1C02D5B28 (-bMulOverflow@@YAH_J0@Z.c)
 *     bScalePlgDDALToPlgDDA @ 0x1C02D5BAC (bScalePlgDDALToPlgDDA.c)
 *     ?bSubOverflow@@YAH_J0@Z @ 0x1C02D6834 (-bSubOverflow@@YAH_J0@Z.c)
 */

void *__fastcall bInitPlgDDA(struct _PLGDDA *a1, struct _RECTL *a2, struct _RECTL *a3, struct _POINTFIX *a4)
{
  unsigned int v6; // ebx
  void *result; // rax
  __int64 v9; // rdi
  struct _POINTFIX v10; // r8
  unsigned __int64 v11; // r11
  struct _POINTFIX v12; // r14
  LONG left; // r9d
  int v14; // r15d
  int x; // r12d
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r11
  unsigned __int64 v18; // r14
  int v19; // r10d
  LONG top; // r12d
  int v21; // r9d
  int v22; // r9d
  LONG right; // r13d
  int v24; // ecx
  int v25; // r9d
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // edx
  __int64 v29; // r9
  int v30; // edx
  int v31; // edx
  int v32; // ecx
  int v33; // edx
  __int64 v34; // r13
  __int64 v35; // r12
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // r10
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r11
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // r8
  __int64 v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rsi
  __int64 v52; // rax
  __int64 v53; // r9
  __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // r15
  __int64 v57; // rsi
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // r10
  __int64 v63; // rdx
  __int64 v64; // r10
  __int64 v65; // rcx
  unsigned int v66; // r11d
  unsigned __int64 v67; // r14
  __int64 v68; // r8
  unsigned __int64 v69; // r8
  _OWORD *v70; // rcx
  __int64 v71; // r9
  __int64 v72; // r10
  __int64 v73; // rdx
  unsigned __int64 v74; // rcx
  __int128 v75; // kr00_16
  __int64 v76; // r8
  unsigned __int64 v77; // rdx
  __int64 v78; // rdx
  unsigned __int64 v79; // rcx
  __int64 v80; // rcx
  __int64 v81; // r9
  __int64 v82; // rcx
  __int64 v83; // r11
  __int64 v84; // r9
  __int64 v85; // r10
  __int128 *v86; // rcx
  __int128 v87; // xmm0
  __int64 v88; // xmm1_8
  __int64 v89; // r8
  __int64 v90; // r9
  __int128 *v91; // rcx
  __int128 v92; // xmm0
  __int64 v93; // xmm1_8
  __int64 v94; // rcx
  __int64 v95; // rcx
  __int64 v96; // r9
  __int64 v97; // r14
  __int64 v98; // r9
  __int64 v99; // r11
  __int64 v100; // rcx
  __int64 v101; // r10
  __int64 v102; // r9
  __int64 v103; // r9
  __int64 v104; // r12
  __int64 v105; // r13
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // r9
  __int64 v109; // rsi
  __int64 v110; // r12
  __int64 v111; // rax
  __int64 v112; // r9
  __int64 v113; // rdx
  __int64 v114; // r9
  __int64 v115; // r13
  __int64 v116; // r12
  __int64 v117; // rdx
  __int64 v118; // r12
  __int64 v119; // r9
  __int64 v120; // r12
  __int64 v121; // r9
  __int64 v122; // r9
  __int64 v123; // r12
  __int64 v124; // rdx
  __int64 v125; // r9
  __int64 v126; // r10
  __int64 v127; // r11
  __int64 v128; // r9
  bool v129; // zf
  __int64 v130; // r10
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // r9
  __int64 v134; // rcx
  __int64 v135; // rdx
  __int64 v136; // r9
  __int64 v137; // r9
  __int64 v138; // rdx
  __int64 v139; // r9
  __int64 v140; // rcx
  __int64 v141; // r9
  unsigned __int64 v142; // r8
  __int64 v143; // r11
  __int64 v144; // r9
  __int64 v145; // r10
  __int64 v146; // r11
  __int64 v147; // r10
  __int64 v148; // r9
  __int64 v149; // r11
  __int64 *v150; // r13
  __int64 v151; // r9
  __int64 v152; // r9
  __int64 v153; // r10
  __int64 v154; // r11
  __int64 v155; // rcx
  __int64 v156; // r10
  unsigned __int64 v157; // r8
  __int64 v158; // r11
  __int64 v159; // r9
  __int64 v160; // r10
  __int64 v161; // r11
  __int64 v162; // r10
  __int64 v163; // r9
  __int64 v164; // r11
  __int64 v165; // r9
  __int64 v166; // r9
  __int64 v167; // r10
  __int64 v168; // r11
  __int64 v169; // rcx
  __int64 v170; // r10
  unsigned __int64 v171; // r8
  __int64 v172; // r9
  __int64 v173; // rdx
  __int64 v174; // r9
  unsigned int v175; // r11d
  __int64 v176; // rcx
  __int64 v177; // r9
  __int64 v178; // r11
  __int64 v179; // r9
  __int64 v180; // r11
  __int64 v181; // r9
  __int64 v182; // r11
  __int64 v183; // rdx
  __int64 v184; // r9
  __int64 v185; // r10
  __int64 v186; // r11
  __int64 v187; // rsi
  __int64 v188; // r9
  __int64 v189; // r10
  __int64 v190; // r11
  __int64 v191; // rdx
  __int64 v192; // r9
  __int64 v193; // r9
  __int64 v194; // r13
  __int64 v195; // r15
  __int64 v196; // rdx
  __int64 v197; // r9
  __int64 v198; // r10
  __int64 v199; // r9
  __int64 v200; // r10
  __int64 v201; // rdx
  __int64 v202; // r9
  __int64 v203; // rdx
  unsigned __int64 v204; // r8
  __int64 v205; // r11
  __int64 v206; // r9
  __int64 v207; // r10
  __int64 v208; // r11
  __int64 v209; // r9
  __int64 v210; // r11
  __int64 *v211; // r13
  __int64 v212; // r10
  __int64 v213; // r9
  __int64 v214; // r10
  __int64 v215; // r11
  __int64 v216; // r9
  __int64 v217; // r10
  unsigned __int64 v218; // r8
  __int64 v219; // r11
  __int64 v220; // r9
  __int64 v221; // r10
  __int64 v222; // r11
  __int64 v223; // r14
  __int64 v224; // r11
  __int64 v225; // r13
  __int64 v226; // r14
  __int64 v227; // r9
  __int64 v228; // r9
  __int64 v229; // r10
  __int64 v230; // r9
  unsigned __int64 v231; // r8
  __int64 v232; // rdx
  __int64 v233; // xmm1_8
  __int128 v234; // xmm0
  __int64 v235; // xmm1_8
  __int128 *v236; // rcx
  __int128 v237; // xmm0
  __int64 v238; // xmm1_8
  __int128 v239; // xmm0
  __int64 v240; // xmm1_8
  __int128 v241; // xmm0
  __int64 v242; // xmm1_8
  __int128 v243; // xmm0
  __int64 v244; // xmm1_8
  struct _PLGDDA *v245; // rdx
  __int64 v246[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v247; // [rsp+30h] [rbp-D0h]
  __int64 v248; // [rsp+38h] [rbp-C8h]
  __int64 v249; // [rsp+40h] [rbp-C0h]
  __int64 v250; // [rsp+48h] [rbp-B8h]
  __int64 v251; // [rsp+50h] [rbp-B0h]
  __int64 *p_left; // [rsp+58h] [rbp-A8h]
  __int64 v253; // [rsp+60h] [rbp-A0h]
  __int64 v254; // [rsp+68h] [rbp-98h]
  __int64 v255; // [rsp+70h] [rbp-90h]
  __int64 v256; // [rsp+78h] [rbp-88h]
  __int64 v257; // [rsp+80h] [rbp-80h]
  __int64 v258; // [rsp+88h] [rbp-78h]
  __int64 v259; // [rsp+90h] [rbp-70h]
  __int64 v260; // [rsp+98h] [rbp-68h]
  __int64 v261; // [rsp+A0h] [rbp-60h]
  __int64 v262; // [rsp+A8h] [rbp-58h]
  __int64 v263; // [rsp+B0h] [rbp-50h]
  __int64 v264; // [rsp+B8h] [rbp-48h]
  struct _PLGDDA *v265; // [rsp+C0h] [rbp-40h]
  __int64 v266[2]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v267; // [rsp+D8h] [rbp-28h]
  __int128 v268; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v269; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v270; // [rsp+F8h] [rbp-8h]
  struct _POINTFIX v271; // [rsp+100h] [rbp+0h]
  struct _POINTFIX v272; // [rsp+108h] [rbp+8h]
  int v273; // [rsp+110h] [rbp+10h]
  int v274; // [rsp+114h] [rbp+14h]

  p_left = (__int64 *)&a2->left;
  v265 = a1;
  v6 = 0;
  *(_OWORD *)v266 = 0LL;
  v268 = 0LL;
  result = PALLOCMEM2(0x318uLL, 1633969223LL, 1);
  v9 = (__int64)result;
  if ( result )
  {
    v10 = a4[1];
    v11 = (unsigned __int64)*a4;
    v12 = a4[2];
    left = a3->left;
    v14 = v12.x + v10.x - v11;
    v271 = v10;
    x = v12.x;
    v16 = HIDWORD(*(unsigned __int64 *)&v10);
    v270 = v11;
    v17 = HIDWORD(v11);
    v272 = v12;
    v18 = HIDWORD(*(unsigned __int64 *)&v12);
    v19 = v18 + v16 - v17;
    v273 = v14;
    v274 = v19;
    if ( left || a3->top )
    {
      LODWORD(v248) = a2->left;
      if ( bSubOverflow(v248, left) )
        goto LABEL_176;
      top = a3->top;
      LODWORD(v249) = a2->top;
      if ( bSubOverflow(v249, top) )
        goto LABEL_176;
      LODWORD(v247) = a2->right;
      if ( bSubOverflow(v247, v21) )
        goto LABEL_176;
      LODWORD(v246[0]) = a2->bottom;
      if ( bSubOverflow(v246[0], top) )
        goto LABEL_176;
      right = a3->right;
      if ( bSubOverflow(right, v22) || bSubOverflow(a3->bottom, top) )
        goto LABEL_176;
      a3 = (struct _RECTL *)&v268;
      LODWORD(v266[0]) = v248 - v25;
      DWORD2(v268) = right - v25;
      HIDWORD(v266[0]) = v249 - top;
      LODWORD(v266[1]) = v247 - v25;
      v26 = v24 - top;
      HIDWORD(v266[1]) = LODWORD(v246[0]) - top;
      x = v272.x;
      p_left = v266;
      HIDWORD(v268) = v26;
    }
    v27 = ((int)v16 <= v19) ^ (unsigned int)((int)v16 > (int)v17);
    v28 = ((int)v16 <= v19) ^ ((int)v16 > (int)v17);
    if ( *((_DWORD *)&v270 + 2 * v27 + 1) > *((_DWORD *)&v270 + 2 * ((unsigned int)v27 ^ 3LL) + 1) )
      v28 ^= 3u;
    v29 = 0LL;
    if ( v28 )
    {
      v30 = v28 - 1;
      if ( v30 )
      {
        v31 = v30 - 1;
        if ( v31 )
        {
          if ( v31 == 1 )
          {
            if ( (int)v16 < (int)v18 || (int)v16 <= (int)v18 && v271.x < x )
            {
              v29 = 6LL;
LABEL_19:
              v32 = a3->bottom - a3->top;
              v33 = a3->right - a3->left;
LABEL_20:
              v34 = v33;
              v35 = v32;
              if ( !v32 )
                goto LABEL_176;
              if ( !v33 )
                goto LABEL_176;
              v36 = 3 * v29;
              v37 = 2 * v29;
              v38 = dword_1C02FA40C[2 * v36];
              v39 = *((int *)p_left + 1);
              v40 = *(int *)p_left;
              v41 = dword_1C02FA410[2 * v36];
              v42 = dword_1C02FA404[2 * v36];
              v43 = (v35 - 1) * dword_1C02FA408[2 * v36];
              v253 = SLODWORD((&aiPlgConst)[v36]);
              v249 = v38;
              v257 = v41;
              v255 = v42;
              v256 = v42 * v39 + v253 * v40 + v43;
              v44 = v40 * v38;
              v45 = dword_1C02FA384[2 * v37];
              v46 = *((int *)&v270 + 2 * v45);
              v47 = v39 * v41 + v44 + (v34 - 1) * dword_1C02FA414[2 * v36];
              v48 = SLODWORD((&aiPlgSort)[v37]);
              v250 = v47;
              v49 = *((int *)&v270 + 2 * v48);
              v50 = *((int *)&v270 + 2 * v48 + 1);
              v51 = v46 - v49;
              v52 = dword_1C02FA388[2 * v37];
              v53 = *((int *)&v270 + 2 * v45 + 1) - v50;
              v261 = v49;
              v260 = v50;
              v54 = *((int *)&v270 + 2 * v52) - v49;
              v55 = *((int *)&v270 + 2 * v52 + 1) - v50;
              v254 = v51;
              v248 = v54;
              v251 = v53;
              v247 = v55;
              if ( v51 )
              {
                if ( (unsigned int)bMulOverflow(v34, v51) )
                  goto LABEL_176;
              }
              if ( v53 && (unsigned int)bMulOverflow(v34, v53) )
                goto LABEL_176;
              if ( v54 && (unsigned int)bMulOverflow(v35, v54) )
                goto LABEL_176;
              if ( v55 && (unsigned int)bMulOverflow(v35, v55) )
                goto LABEL_176;
              v56 = v35 * v55;
              v259 = v34 * v51;
              v57 = v34 * v53;
              v258 = v35 * v54;
              if ( !(v35 * v55) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v35, v34) )
                goto LABEL_176;
              if ( bAddOverflow(v260, 16LL) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v34 * v35, v58 + 16) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v256, v57) )
                goto LABEL_176;
              if ( bAddOverflow(v60, v59 * v57) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v250, v56) )
                goto LABEL_176;
              if ( bAddOverflow(v62, v61 * v56) )
                goto LABEL_176;
              if ( (unsigned int)bSubOverflow(v64 + v63, 1LL) )
                goto LABEL_176;
              v246[0] = v65 - 1;
              if ( (unsigned int)bMulOverflow(v34 * v35, v66) )
                goto LABEL_176;
              v67 = 16 * v34 * v35;
              if ( !v67 )
                goto LABEL_176;
              v267 = 0LL;
              v269 = 0LL;
              *(_OWORD *)v266 = 0LL;
              v268 = 0LL;
              ROT_DIV(v266, v57, v67);
              ROT_DIV((__int64 *)&v268, v56, v68);
              QDIV((unsigned __int64 *)(v9 + 8), (unsigned __int64 *)v246, v69);
              v71 = v266[0];
              v72 = v266[1];
              *(_OWORD *)(v9 + 24) = *v70;
              v73 = v71 + *(_QWORD *)(v9 + 24);
              v74 = v72 + *(_QWORD *)(v9 + 32);
              *(_QWORD *)(v9 + 24) = v73;
              *(_QWORD *)(v9 + 32) = v74;
              if ( v74 >= v67 )
              {
                *(_QWORD *)(v9 + 24) = v73 + 1;
                *(_QWORD *)(v9 + 32) = v74 - v67;
              }
              v75 = v268;
              *(_OWORD *)(v9 + 40) = *(_OWORD *)(v9 + 8);
              v76 = *(_QWORD *)(v9 + 40) + v75;
              v77 = *(_QWORD *)(v9 + 48) + *((_QWORD *)&v75 + 1);
              *(_QWORD *)(v9 + 40) = v76;
              *(_QWORD *)(v9 + 48) = v77;
              if ( v77 >= v67 )
              {
                *(_QWORD *)(v9 + 40) = v76 + 1;
                *(_QWORD *)(v9 + 48) = v77 - v67;
              }
              *(_OWORD *)(v9 + 56) = *(_OWORD *)(v9 + 40);
              v78 = v71 + *(_QWORD *)(v9 + 56);
              v79 = v72 + *(_QWORD *)(v9 + 64);
              *(_QWORD *)(v9 + 56) = v78;
              *(_QWORD *)(v9 + 64) = v79;
              if ( v79 >= v67 )
              {
                *(_QWORD *)(v9 + 56) = v78 + 1;
                *(_QWORD *)(v9 + 64) = v79 - v67;
              }
              if ( (unsigned int)bMulOverflow(v253, v57) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v249, v56) )
                goto LABEL_176;
              v266[0] = v81 * v57;
              if ( bAddOverflow(v81 * v57, v80 * v56) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v255, v57) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v257, v56) )
                goto LABEL_176;
              if ( bAddOverflow(v255 * v57, v82 * v56) )
                goto LABEL_176;
              ROT_DIV((__int64 *)(v9 + 264), v83 + v266[0], v67);
              *(_QWORD *)(v9 + 280) = v67;
              v87 = *v86;
              v88 = *((_QWORD *)v86 + 2);
              *(_OWORD *)(v9 + 288) = *v86;
              *(_OWORD *)(v9 + 312) = v87;
              *(_OWORD *)(v9 + 336) = v87;
              *(_QWORD *)(v9 + 304) = v88;
              *(_QWORD *)(v9 + 328) = v88;
              *(_QWORD *)(v9 + 352) = v88;
              ROT_DIV((__int64 *)(v9 + 360), v85 + v84, v89);
              v90 = v247;
              *(_QWORD *)(v9 + 376) = v67;
              v92 = *v91;
              v93 = *((_QWORD *)v91 + 2);
              v94 = v254;
              *(_OWORD *)(v9 + 384) = v92;
              *(_OWORD *)(v9 + 408) = v92;
              *(_OWORD *)(v9 + 432) = v92;
              *(_QWORD *)(v9 + 400) = v93;
              *(_QWORD *)(v9 + 424) = v93;
              *(_QWORD *)(v9 + 448) = v93;
              if ( (unsigned int)bMulOverflow(v94, v90) )
                goto LABEL_176;
              v97 = v95 * v96;
              if ( (unsigned int)bMulOverflow(v251, v248) )
                goto LABEL_176;
              p_left = (__int64 *)(v98 * v99);
              if ( (unsigned int)bSubOverflow(v97, v98 * v99) )
                goto LABEL_176;
              v262 = v100 - v101;
              *(_OWORD *)v246 = 0LL;
              *(_OWORD *)v266 = 0LL;
              if ( (unsigned int)bMulOverflow(v35, 16LL) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v34, 16LL) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v253, v102) )
                goto LABEL_176;
              if ( (unsigned int)bMulOverflow(v249, v247) )
                goto LABEL_176;
              v104 = 16 * v35;
              if ( !v104 )
                goto LABEL_176;
              v105 = 16 * v34;
              if ( !v105 )
                goto LABEL_176;
              ROT_DIV(v246, v253 * v103, v104);
              ROT_DIV(v266, v249 * v247, v105);
              v263 = v266[0];
              v264 = v246[0];
              if ( bAddOverflow(v246[0], v266[0]) )
                goto LABEL_176;
              ROT_DIV(v246, v255 * v106, v104);
              ROT_DIV(v266, v257 * v247, v105);
              v107 = v266[0];
              *(_QWORD *)&v268 = v266[0];
              v266[0] = v246[0];
              if ( bAddOverflow(v246[0], v107) )
                goto LABEL_176;
              if ( !v57 )
              {
                *(_QWORD *)(v9 + 648) = 0LL;
                v109 = 0LL;
                *(_QWORD *)(v9 + 656) = 0LL;
                v110 = v108;
                *(_QWORD *)(v9 + 664) = 0LL;
                *(_QWORD *)(v9 + 456) = 0LL;
                *(_QWORD *)(v9 + 464) = 0LL;
                *(_QWORD *)(v9 + 472) = 0LL;
                *(_QWORD *)(v9 + 552) = 0LL;
                *(_QWORD *)(v9 + 560) = 0LL;
                *(_QWORD *)(v9 + 568) = 0LL;
                *(_QWORD *)(v9 + 72) = 0LL;
                *(_QWORD *)(v9 + 80) = 0LL;
                *(_QWORD *)(v9 + 120) = 0LL;
                *(_QWORD *)(v9 + 128) = 0LL;
                *(_QWORD *)(v9 + 744) = 0LL;
                *(_QWORD *)(v9 + 752) = 0LL;
                goto LABEL_134;
              }
              if ( !(unsigned int)bMulOverflow(*(_QWORD *)(v9 + 8), 16LL)
                && !(unsigned int)bSubOverflow(16 * v112, v260) )
              {
                v115 = v259;
                if ( !(unsigned int)bMulOverflow(v259, v114 - v113) )
                {
                  v116 = v261;
                  if ( !bAddOverflow(v261, 16LL) )
                  {
                    v118 = v117 + v116;
                    if ( !(unsigned int)bMulOverflow(v57, v118) )
                    {
                      v120 = v57 * v118;
                      if ( !bAddOverflow(v119, v120) )
                      {
                        v122 = v120 + v121;
                        v123 = v250;
                        if ( (!v250 || !(unsigned int)bMulOverflow(v250, v97))
                          && !(unsigned int)bSubOverflow(v122, v123 * v97) )
                        {
                          v128 = v125 - v124;
                          v129 = v123 == 0;
                          v110 = v251;
                          if ( v129 )
                          {
                            v131 = v250;
                          }
                          else if ( (unsigned int)bMulOverflow(v127, v251) || (unsigned int)bMulOverflow(v250, v130) )
                          {
                            goto LABEL_176;
                          }
                          if ( !bAddOverflow(v128, v131 * v126) )
                          {
                            v251 = v133 + v132;
                            if ( !(unsigned int)bSubOverflow(v133 + v132, 1LL) )
                            {
                              v246[0] = v134 - 1;
                              if ( !(unsigned int)bMulOverflow(16LL, v57) )
                              {
                                v109 = 16 * v57;
                                *(_QWORD *)(v9 + 664) = v109;
                                *(_QWORD *)(v9 + 472) = v109;
                                *(_QWORD *)(v9 + 568) = v109;
                                if ( v109 )
                                {
                                  QDIV((unsigned __int64 *)(v9 + 72), (unsigned __int64 *)v246, v109);
                                  if ( !(unsigned int)bMulOverflow(16LL, v115)
                                    && !(unsigned int)bSubOverflow(*(_QWORD *)(v9 + 40), *(_QWORD *)(v9 + 8)) )
                                  {
                                    v250 = 16 * v115;
                                    if ( !(unsigned int)bMulOverflow(16 * v115, v136 - v135)
                                      && !(unsigned int)bSubOverflow(16 * v115 * v137, v262)
                                      && !bAddOverflow(v251 - 1, v139 - v138) )
                                    {
                                      v142 = *(_QWORD *)(v9 + 664);
                                      v246[0] = v141 + v140;
                                      QDIV((unsigned __int64 *)(v9 + 120), (unsigned __int64 *)v246, v142);
                                      ROT_DIV((__int64 *)(v9 + 648), v250, *(_QWORD *)(v9 + 664));
                                      v143 = v249;
                                      if ( !v247
                                        || !(unsigned int)bMulOverflow(v249, v254)
                                        && !(unsigned int)bMulOverflow(v146 * v145, v144) )
                                      {
                                        v147 = v143 * v97;
                                        if ( !v110
                                          || !(unsigned int)bMulOverflow(v143, v248)
                                          && !(unsigned int)bMulOverflow(v149 * v148, v110) )
                                        {
                                          v150 = p_left;
                                          if ( !(unsigned int)bSubOverflow(v147, v143 * (_QWORD)p_left)
                                            && !(unsigned int)bMulOverflow(16LL, v263 + v264)
                                            && !(unsigned int)bMulOverflow(16 * v151, v259)
                                            && !(unsigned int)bSubOverflow(16 * v154 * v152, v153) )
                                          {
                                            v157 = *(_QWORD *)(v9 + 472);
                                            v246[0] = v155 - v156;
                                            QDIV((unsigned __int64 *)(v9 + 456), (unsigned __int64 *)v246, v157);
                                            v158 = v257;
                                            if ( !v247
                                              || !(unsigned int)bMulOverflow(v257, v254)
                                              && !(unsigned int)bMulOverflow(v161 * v160, v159) )
                                            {
                                              v162 = v158 * v97;
                                              if ( (!v110
                                                 || !(unsigned int)bMulOverflow(v158, v248)
                                                 && !(unsigned int)bMulOverflow(v164 * v163, v110))
                                                && !(unsigned int)bSubOverflow(v162, v158 * (_QWORD)v150)
                                                && !(unsigned int)bMulOverflow(16LL, v268 + v266[0])
                                                && !(unsigned int)bMulOverflow(16 * v165, v259)
                                                && !(unsigned int)bSubOverflow(16 * v168 * v166, v167) )
                                              {
                                                v171 = *(_QWORD *)(v9 + 568);
                                                v246[0] = v169 - v170;
                                                QDIV((unsigned __int64 *)(v9 + 552), (unsigned __int64 *)v246, v171);
                                                ROT_DIV((__int64 *)(v9 + 744), v250, v109);
LABEL_134:
                                                *(_QWORD *)(v9 + 760) = v109;
                                                if ( !(unsigned int)bMulOverflow(16LL, *(_QWORD *)(v9 + 8))
                                                  && !(unsigned int)bSubOverflow(16 * v172, v260)
                                                  && !(unsigned int)bMulOverflow(v258, v174 - v173)
                                                  && !bAddOverflow(v261, v175)
                                                  && !(unsigned int)bMulOverflow(v56, v176 + 16)
                                                  && !bAddOverflow(v177, v56 * v178) )
                                                {
                                                  v181 = v180 + v179;
                                                  v182 = v256;
                                                  if ( (!v256 || !(unsigned int)bMulOverflow(v256, v97))
                                                    && !bAddOverflow(v181, v182 * v97) )
                                                  {
                                                    v187 = v248;
                                                    v188 = v183 + v184;
                                                    if ( (!v186
                                                       || !(unsigned int)bMulOverflow(v248, v110)
                                                       && !(unsigned int)bMulOverflow(v190, v189))
                                                      && !(unsigned int)bSubOverflow(v188, v186 * v185)
                                                      && !(unsigned int)bSubOverflow(v192 - v191, 1LL) )
                                                    {
                                                      v194 = v193 - 1;
                                                      v246[0] = v193 - 1;
                                                      if ( !(unsigned int)bMulOverflow(16LL, v56) )
                                                      {
                                                        v195 = 16 * v56;
                                                        *(_QWORD *)(v9 + 688) = v195;
                                                        *(_QWORD *)(v9 + 496) = v195;
                                                        *(_QWORD *)(v9 + 592) = v195;
                                                        if ( v195 )
                                                        {
                                                          QDIV(
                                                            (unsigned __int64 *)(v9 + 88),
                                                            (unsigned __int64 *)v246,
                                                            v195);
                                                          if ( !(unsigned int)bMulOverflow(16LL, v258)
                                                            && !(unsigned int)bSubOverflow(
                                                                                *(_QWORD *)(v9 + 24),
                                                                                *(_QWORD *)(v9 + 8)) )
                                                          {
                                                            v256 = 16 * v198;
                                                            if ( !(unsigned int)bMulOverflow(16 * v198, v197 - v196)
                                                              && !bAddOverflow(16 * v200 * v199, v262)
                                                              && !bAddOverflow(v194, v202 + v201) )
                                                            {
                                                              v204 = *(_QWORD *)(v9 + 688);
                                                              v246[0] = v203 + v194;
                                                              QDIV(
                                                                (unsigned __int64 *)(v9 + 104),
                                                                (unsigned __int64 *)v246,
                                                                v204);
                                                              ROT_DIV(
                                                                (__int64 *)(v9 + 672),
                                                                v256,
                                                                *(_QWORD *)(v9 + 688));
                                                              v205 = v253;
                                                              if ( !v247
                                                                || !(unsigned int)bMulOverflow(v253, v254)
                                                                && !(unsigned int)bMulOverflow(v208 * v207, v206) )
                                                              {
                                                                v209 = v205 * v97;
                                                                if ( !v110
                                                                  || !(unsigned int)bMulOverflow(v205, v187)
                                                                  && !(unsigned int)bMulOverflow(v210 * v187, v110) )
                                                                {
                                                                  v211 = p_left;
                                                                  if ( !(unsigned int)bSubOverflow(
                                                                                        v209,
                                                                                        v205 * (_QWORD)p_left)
                                                                    && !(unsigned int)bMulOverflow(16LL, v263 + v264)
                                                                    && !(unsigned int)bMulOverflow(16 * v212, v258)
                                                                    && !bAddOverflow(16 * v215 * v214, v213) )
                                                                  {
                                                                    v218 = *(_QWORD *)(v9 + 496);
                                                                    v246[0] = v216 + v217;
                                                                    QDIV(
                                                                      (unsigned __int64 *)(v9 + 480),
                                                                      (unsigned __int64 *)v246,
                                                                      v218);
                                                                    v219 = v255;
                                                                    if ( !v247
                                                                      || !(unsigned int)bMulOverflow(v255, v254)
                                                                      && !(unsigned int)bMulOverflow(v222 * v221, v220) )
                                                                    {
                                                                      v223 = v219 * v97;
                                                                      if ( !v110
                                                                        || !(unsigned int)bMulOverflow(v219, v187)
                                                                        && !(unsigned int)bMulOverflow(
                                                                                            v224 * v187,
                                                                                            v110) )
                                                                      {
                                                                        v225 = v219 * (_QWORD)v211;
                                                                        if ( !(unsigned int)bSubOverflow(v223, v225) )
                                                                        {
                                                                          v226 = v223 - v225;
                                                                          if ( !(unsigned int)bMulOverflow(
                                                                                                16LL,
                                                                                                v268 + v266[0])
                                                                            && !(unsigned int)bMulOverflow(
                                                                                                16 * v227,
                                                                                                v258)
                                                                            && !bAddOverflow(16 * v229 * v228, v226) )
                                                                          {
                                                                            v231 = *(_QWORD *)(v9 + 592);
                                                                            v246[0] = v226 + v230;
                                                                            QDIV(
                                                                              (unsigned __int64 *)(v9 + 576),
                                                                              (unsigned __int64 *)v246,
                                                                              v231);
                                                                            v232 = v256;
                                                                            v233 = *(_QWORD *)(v9 + 688);
                                                                            *(_OWORD *)(v9 + 696) = *(_OWORD *)(v9 + 672);
                                                                            v234 = *(_OWORD *)(v9 + 480);
                                                                            *(_QWORD *)(v9 + 712) = v233;
                                                                            v235 = *(_QWORD *)(v9 + 496);
                                                                            *(_OWORD *)(v9 + 504) = v234;
                                                                            v237 = *v236;
                                                                            *(_QWORD *)(v9 + 520) = v235;
                                                                            v238 = *((_QWORD *)v236 + 2);
                                                                            *(_OWORD *)(v9 + 600) = v237;
                                                                            v239 = *(_OWORD *)(v9 + 648);
                                                                            *(_QWORD *)(v9 + 616) = v238;
                                                                            v240 = *(_QWORD *)(v9 + 664);
                                                                            *(_OWORD *)(v9 + 720) = v239;
                                                                            v241 = *(_OWORD *)(v9 + 456);
                                                                            *(_QWORD *)(v9 + 736) = v240;
                                                                            v242 = *(_QWORD *)(v9 + 472);
                                                                            *(_OWORD *)(v9 + 528) = v241;
                                                                            v243 = *(_OWORD *)(v9 + 552);
                                                                            *(_QWORD *)(v9 + 544) = v242;
                                                                            v244 = *(_QWORD *)(v9 + 568);
                                                                            *(_OWORD *)(v9 + 624) = v243;
                                                                            *(_QWORD *)(v9 + 640) = v244;
                                                                            ROT_DIV((__int64 *)(v9 + 768), v232, v195);
                                                                            v245 = v265;
                                                                            *(_QWORD *)(v9 + 784) = v195;
                                                                            v6 = bScalePlgDDALToPlgDDA(v9, v245);
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
              }
LABEL_176:
              Win32FreePool(v9);
              return (void *)v6;
            }
            v29 = 7LL;
          }
          goto LABEL_89;
        }
        if ( (int)v17 >= v19 )
        {
          if ( (int)v17 > v19 || (v111 = 4LL, (int)v270 >= v14) )
            v111 = 5LL;
        }
        else
        {
          v111 = 4LL;
        }
        v29 = v111;
      }
      else if ( (int)v17 >= v19 && ((int)v17 > v19 || (int)v270 >= v14) )
      {
        LODWORD(v111) = 3;
        v29 = 3LL;
      }
      else
      {
        LODWORD(v111) = 2;
        v29 = 2LL;
      }
    }
    else
    {
      if ( (int)v16 < (int)v18 )
        goto LABEL_89;
      if ( (int)v16 > (int)v18 )
      {
        v29 = 1LL;
        goto LABEL_19;
      }
      if ( v271.x < x )
      {
LABEL_89:
        v32 = a3->right - a3->left;
        v33 = a3->bottom - a3->top;
        goto LABEL_20;
      }
      v29 = 1LL;
      LODWORD(v111) = 1;
    }
    if ( (_DWORD)v111 == 1 || (_DWORD)v111 != 2 && (unsigned int)v111 <= 4 )
      goto LABEL_19;
    goto LABEL_89;
  }
  return result;
}
