/*
 * XREFs of ?UpdateContactPrediction@@YGXPAUtagHID_POINTER_DEVICE_INFO@@UtagPOINT@@1PAUtagHPD_PREDICTION_INFO@@PAU2@3@Z @ 0x157E5A
 * Callers:
 *     _DoPrediction@36 @ 0x159075 (_DoPrediction@36.c)
 * Callees:
 *     ??DPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AD9 (--DPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 *     ??KPrediction@@YG?AVCFixPred@0@ABV10@0@Z @ 0x156AFF (--KPrediction@@YG-AVCFixPred@0@ABV10@0@Z.c)
 *     ?DeltaOvershootCompensation@Prediction@@YG_J_J0@Z @ 0x156D5F (-DeltaOvershootCompensation@Prediction@@YG_J_J0@Z.c)
 *     ?Filter@tagRlsFilter@Prediction@@QAE?AVCFixPred@2@V32@0PAH@Z @ 0x156F9C (-Filter@tagRlsFilter@Prediction@@QAE-AVCFixPred@2@V32@0PAH@Z.c)
 *     ?Smooth@tagExpoSmoother@Prediction@@QAE?AVCFixPred@2@V32@@Z @ 0x157DF2 (-Smooth@tagExpoSmoother@Prediction@@QAE-AVCFixPred@2@V32@@Z.c)
 *     ?abs@CFixPred@Prediction@@QBE?AV12@XZ @ 0x158C8E (-abs@CFixPred@Prediction@@QBE-AV12@XZ.c)
 */

void __userpurge UpdateContactPrediction(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagHID_POINTER_DEVICE_INFO *a3,
        struct tagPOINT a4,
        struct tagPOINT a5,
        struct tagHPD_PREDICTION_INFO *a6,
        struct tagPOINT *a7,
        struct tagPOINT *a8)
{
  int v9; // eax
  unsigned int v10; // esi
  unsigned int v11; // edi
  struct tagHPD_PREDICTION_INFO *x; // eax
  bool v13; // cf
  int v14; // ecx
  _QWORD *v15; // eax
  int *v16; // eax
  int v17; // ecx
  int v18; // eax
  int *v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int *v24; // eax
  _DWORD *v25; // eax
  _DWORD *v26; // eax
  _DWORD *v27; // edx
  unsigned int *v28; // eax
  unsigned int v29; // ecx
  unsigned int *v30; // eax
  unsigned int v31; // ecx
  unsigned int v32; // eax
  _QWORD *v33; // eax
  unsigned __int64 v34; // kr00_8
  int *v35; // eax
  int v36; // ecx
  int v37; // eax
  _QWORD *v38; // eax
  int v39; // edx
  int v40; // ecx
  int *v41; // eax
  _DWORD *v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // edx
  unsigned int *v45; // eax
  unsigned int v46; // esi
  unsigned int *v47; // eax
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // esi
  int v51; // eax
  __int64 v52; // rdi
  __int64 *v53; // eax
  __int64 *v54; // eax
  unsigned int v55; // ecx
  int v56; // eax
  __int64 *v57; // eax
  __int64 v58; // kr08_8
  unsigned int v59; // ecx
  int v60; // edx
  unsigned int *v61; // eax
  unsigned int v62; // ecx
  unsigned int v63; // edx
  char *v64; // esi
  _QWORD *v65; // eax
  unsigned int v66; // ecx
  unsigned int v67; // eax
  unsigned int v68; // edi
  int v69; // esi
  __int64 v70; // rax
  signed __int64 v71; // kr18_8
  unsigned int v72; // ecx
  unsigned int v73; // eax
  unsigned int v74; // ecx
  int v75; // edx
  int v76; // edi
  unsigned int v77; // eax
  unsigned int v78; // esi
  LONG v79; // esi
  __int64 v80; // rdi
  __int64 *v81; // eax
  __int64 *v82; // eax
  unsigned int v83; // ecx
  int v84; // eax
  __int64 *v85; // eax
  __int64 v86; // kr20_8
  unsigned int v87; // ecx
  int v88; // edx
  unsigned int *v89; // eax
  unsigned int v90; // ecx
  unsigned int v91; // edx
  char *v92; // esi
  _QWORD *v93; // eax
  unsigned int v94; // ecx
  unsigned int v95; // eax
  unsigned int v96; // edi
  int v97; // esi
  __int64 v98; // rax
  signed __int64 v99; // kr30_8
  unsigned int v100; // ecx
  unsigned int v101; // eax
  unsigned int v102; // ecx
  int v103; // edx
  int v104; // edi
  unsigned int v105; // eax
  unsigned int v106; // esi
  struct tagHPD_PREDICTION_INFO *v107; // esi
  __int64 v108; // rdi
  __int64 *v109; // eax
  __int64 *v110; // eax
  unsigned int v111; // ecx
  int v112; // eax
  __int64 *v113; // eax
  __int64 v114; // kr38_8
  unsigned int v115; // ecx
  int v116; // edx
  unsigned int *v117; // eax
  unsigned int v118; // ecx
  unsigned int v119; // edx
  char *v120; // esi
  _QWORD *v121; // eax
  unsigned int v122; // ecx
  unsigned int v123; // eax
  unsigned int v124; // edi
  int v125; // esi
  __int64 v126; // rax
  signed __int64 v127; // kr48_8
  unsigned int v128; // ecx
  unsigned int v129; // eax
  unsigned int v130; // ecx
  char *v131; // edx
  int v132; // edi
  unsigned int v133; // eax
  unsigned int v134; // esi
  struct tagHPD_PREDICTION_INFO *v135; // esi
  __int64 v136; // rdi
  __int64 *v137; // eax
  __int64 *v138; // eax
  unsigned int v139; // ecx
  int v140; // eax
  __int64 *v141; // eax
  __int64 v142; // kr50_8
  unsigned int v143; // ecx
  int v144; // edx
  unsigned int *v145; // eax
  unsigned int v146; // ecx
  unsigned int v147; // edx
  char *v148; // esi
  int v149; // ecx
  _QWORD *v150; // eax
  unsigned int v151; // ecx
  unsigned int v152; // eax
  unsigned int v153; // edi
  int v154; // esi
  __int64 v155; // rax
  signed __int64 v156; // kr60_8
  _QWORD *v157; // eax
  unsigned int v158; // ecx
  unsigned int v159; // eax
  unsigned int v160; // ecx
  char *v161; // edx
  unsigned int v162; // eax
  unsigned int v163; // esi
  LONG v164; // eax
  struct tagHPD_PREDICTION_INFO *v165; // eax
  _DWORD *v166; // ebx
  int v167; // ecx
  int v168; // eax
  int v169; // eax
  int v170; // ecx
  int v171; // eax
  int v172; // eax
  int v173; // eax
  int v174; // ecx
  int v175; // ecx
  int v176; // eax
  int v177; // ecx
  int v178; // ecx
  __int64 v179; // [esp-8h] [ebp-110h]
  __int64 v180; // [esp-4h] [ebp-10Ch]
  char v181; // [esp+10h] [ebp-F8h] BYREF
  char v182; // [esp+18h] [ebp-F0h] BYREF
  char v183; // [esp+20h] [ebp-E8h] BYREF
  char v184; // [esp+28h] [ebp-E0h] BYREF
  char v185; // [esp+30h] [ebp-D8h] BYREF
  char v186; // [esp+38h] [ebp-D0h] BYREF
  char v187; // [esp+40h] [ebp-C8h] BYREF
  char v188; // [esp+48h] [ebp-C0h] BYREF
  _BYTE v189[12]; // [esp+50h] [ebp-B8h] BYREF
  _DWORD *v190; // [esp+5Ch] [ebp-ACh]
  _BYTE v191[8]; // [esp+60h] [ebp-A8h] BYREF
  __int64 v192; // [esp+68h] [ebp-A0h] BYREF
  int v193; // [esp+70h] [ebp-98h] BYREF
  int v194; // [esp+74h] [ebp-94h]
  _BYTE v195[12]; // [esp+78h] [ebp-90h] BYREF
  int v196; // [esp+84h] [ebp-84h]
  _DWORD v197[2]; // [esp+88h] [ebp-80h] BYREF
  LONG v198; // [esp+90h] [ebp-78h]
  struct tagHPD_PREDICTION_INFO *v199; // [esp+94h] [ebp-74h]
  LONG y; // [esp+98h] [ebp-70h]
  unsigned int v201; // [esp+9Ch] [ebp-6Ch]
  unsigned int v202; // [esp+A0h] [ebp-68h]
  int v203; // [esp+A4h] [ebp-64h]
  char v204; // [esp+A8h] [ebp-60h] BYREF
  int v205; // [esp+ACh] [ebp-5Ch]
  unsigned int v206; // [esp+B0h] [ebp-58h]
  unsigned int v207; // [esp+B4h] [ebp-54h]
  __int64 v208; // [esp+B8h] [ebp-50h] BYREF
  unsigned __int64 v209; // [esp+C0h] [ebp-48h] BYREF
  int v210; // [esp+C8h] [ebp-40h] BYREF
  int v211; // [esp+CCh] [ebp-3Ch]
  unsigned int v212; // [esp+D0h] [ebp-38h] BYREF
  int v213; // [esp+D4h] [ebp-34h]
  int v214; // [esp+D8h] [ebp-30h] BYREF
  int v215; // [esp+DCh] [ebp-2Ch]
  int v216; // [esp+E4h] [ebp-24h]
  __int64 v217; // [esp+E8h] [ebp-20h] BYREF
  unsigned int v218; // [esp+F4h] [ebp-14h]
  unsigned int v219; // [esp+F8h] [ebp-10h]
  unsigned int v220; // [esp+FCh] [ebp-Ch]
  __int64 v221; // [esp+100h] [ebp-8h] BYREF

  v190 = a2;
  if ( gbTOUCH_DRIVER_HW_STACK_TIMESTAMP != 1 || (v9 = a2[183] - a2[184]) == 0 )
    v9 = glTOUCH_DRIVER_HW_STACK_SAMPLETIME;
  if ( !v9 )
  {
    *(_DWORD *)a3 = a4.y;
    *((_DWORD *)a3 + 1) = a5.x;
    *(_DWORD *)a4.x = a5.y;
    *(_DWORD *)(a4.x + 4) = a6;
    return;
  }
  v220 = 0;
  v213 = 0;
  v10 = 0;
  v11 = 0;
  v197[1] = v9;
  HIDWORD(v192) = glTOUCH_DRIVER_HW_STACK_LATENCY;
  y = a5.y;
  v199 = a6;
  v217 = 0LL;
  v207 = 0;
  v206 = 0;
  v219 = 0;
  v218 = 0;
  v214 = 0;
  v215 = 0;
  v202 = 0;
  v203 = 0;
  v201 = 0;
  v196 = 0;
  v197[0] = 0;
  LODWORD(v192) = 0;
  x = (struct tagHPD_PREDICTION_INFO *)a5.x;
  a5.x = 0;
  v198 = a4.y;
  v13 = *(_DWORD *)(a1 + 2160) != 0;
  LODWORD(v209) = -*(_DWORD *)(a1 + 2160);
  v14 = a4.y - (v13 + *(_DWORD *)(a1 + 2164));
  a6 = x;
  HIDWORD(v209) = v14;
  if ( v14 | (unsigned int)v209 )
  {
    v15 = Prediction::operator/(&v221, &v209, v197);
    if ( v189 != (_BYTE *)v15 )
    {
      v10 = *(_DWORD *)v15;
      v11 = *((_DWORD *)v15 + 1);
    }
    v11 += __CFADD__(v10, 0x80000000);
    v10 = 0;
    v13 = *(_DWORD *)(a1 + 2096) != 0;
    v210 = -*(_DWORD *)(a1 + 2096);
    v211 = v11 - (v13 + *(_DWORD *)(a1 + 2100));
    v16 = (int *)Prediction::operator/(&v221, &v210, v197);
    if ( &v214 != v16 )
    {
      v17 = *v16;
      v18 = v16[1];
      v214 = v17;
      v215 = v18;
    }
    v19 = (int *)Prediction::CFixPred::abs(&v214, &v221);
    v20 = *(_DWORD *)(a1 + 2132);
    v21 = *v19;
    v22 = v19[1];
    v211 = v21;
    v23 = *(_DWORD *)(a1 + 2128);
    if ( __SPAIR64__(v22, v211) > __SPAIR64__(v20, v23) )
    {
      v24 = (int *)Prediction::CFixPred::abs(&v214, &v221);
      v23 = *v24;
      v20 = v24[1];
      *(_DWORD *)(a1 + 2128) = *v24;
      *(_DWORD *)(a1 + 2132) = v20;
    }
    if ( __PAIR64__(v23, v20) )
    {
      v210 = v23;
      v211 = v20;
      v25 = (_DWORD *)Prediction::CFixPred::abs(&v214, &v221);
      v26 = Prediction::operator/(&v204, v25, &v210);
      v27 = (_DWORD *)(a1 + 1888);
      if ( (_DWORD *)(a1 + 1888) != v26 )
      {
        *v27 = *v26;
        *(_DWORD *)(a1 + 1892) = v26[1];
      }
      if ( (_DWORD *)(a1 + 1856) != v27 )
      {
        *(_DWORD *)(a1 + 1856) = *v27;
        *(_DWORD *)(a1 + 1860) = *(_DWORD *)(a1 + 1892);
      }
    }
    v193 = *(_DWORD *)(a1 + 2112);
    v194 = *(_DWORD *)(a1 + 2116);
    v28 = (unsigned int *)Prediction::CFixPred::abs(&v214, &v221);
    v29 = *v28;
    v203 = v28[1];
    v202 = v29;
    v30 = (unsigned int *)Prediction::CFixPred::abs(&v193, &v210);
    v31 = *v30;
    v32 = v30[1];
    v13 = v202 < v31;
    v202 -= v31;
    *(_DWORD *)(a1 + 2096) = 0;
    v203 -= v13 + v32;
    *(_DWORD *)(a1 + 2112) = v214;
    *(_DWORD *)(a1 + 2116) = v215;
    x = a6;
    *(_DWORD *)(a1 + 2100) = v11;
  }
  v13 = *(_DWORD *)(a1 + 2168) != 0;
  LODWORD(v209) = -*(_DWORD *)(a1 + 2168);
  HIDWORD(v209) = (char *)x - v13 - *(_DWORD *)(a1 + 2172);
  if ( v209 )
  {
    v33 = Prediction::operator/(&v221, &v209, v197);
    if ( v189 != (_BYTE *)v33 )
    {
      v10 = *(_DWORD *)v33;
      v11 = *((_DWORD *)v33 + 1);
    }
    v34 = __PAIR64__(v11, v10) + 0x80000000;
    v13 = *(_DWORD *)(a1 + 2104) != 0;
    v210 = -*(_DWORD *)(a1 + 2104);
    v211 = ((__PAIR64__(v11, v10) + 0x80000000) >> 32) - (v13 + *(_DWORD *)(a1 + 2108));
    v35 = (int *)Prediction::operator/(&v221, &v210, v197);
    if ( &v214 != v35 )
    {
      v36 = *v35;
      v37 = v35[1];
      v214 = v36;
      v215 = v37;
    }
    v38 = (_QWORD *)Prediction::CFixPred::abs(&v214, &v221);
    v39 = *(_DWORD *)(a1 + 2140);
    v40 = *(_DWORD *)(a1 + 2136);
    if ( *v38 > __SPAIR64__(v39, v40) )
    {
      v41 = (int *)Prediction::CFixPred::abs(&v214, &v221);
      v40 = *v41;
      v39 = v41[1];
      *(_DWORD *)(a1 + 2136) = *v41;
      *(_DWORD *)(a1 + 2140) = v39;
    }
    if ( __PAIR64__(v40, v39) )
    {
      v210 = v40;
      v211 = v39;
      v42 = (_DWORD *)Prediction::CFixPred::abs(&v214, &v221);
      v43 = Prediction::operator/(&v204, v42, &v210);
      v44 = (_DWORD *)(a1 + 1904);
      if ( (_DWORD *)(a1 + 1904) != v43 )
      {
        *v44 = *v43;
        *(_DWORD *)(a1 + 1908) = v43[1];
      }
      if ( (_DWORD *)(a1 + 1872) != v44 )
      {
        *(_DWORD *)(a1 + 1872) = *v44;
        *(_DWORD *)(a1 + 1876) = *(_DWORD *)(a1 + 1908);
      }
    }
    v193 = *(_DWORD *)(a1 + 2120);
    v194 = *(_DWORD *)(a1 + 2124);
    v45 = (unsigned int *)Prediction::CFixPred::abs(&v214, &v221);
    v46 = v45[1];
    v201 = *v45;
    v47 = (unsigned int *)Prediction::CFixPred::abs(&v193, &v210);
    v48 = *v47;
    v49 = v47[1];
    v13 = v201 < v48;
    v201 -= v48;
    *(_DWORD *)(a1 + 2108) = HIDWORD(v34);
    v50 = v46 - (v13 + v49);
    v51 = v214;
    *(_DWORD *)(a1 + 2104) = 0;
    *(_DWORD *)(a1 + 2120) = v51;
    v196 = v50;
    *(_DWORD *)(a1 + 2124) = v215;
  }
  v13 = *(_DWORD *)(a1 + 2144) != 0;
  v216 = -*(_DWORD *)(a1 + 2144);
  LODWORD(v52) = v216;
  v205 = y - (v13 + *(_DWORD *)(a1 + 2148));
  HIDWORD(v52) = v205;
  v209 = __PAIR64__(v205, v216);
  v211 = -1;
  if ( !v52 )
  {
    v71 = *(_QWORD *)(a1 + 2176);
    goto LABEL_63;
  }
  v53 = Prediction::operator/(&v221, &v209, v197);
  v54 = Prediction::operator*(&v208, v53, &v192);
  if ( &v217 == v54 )
  {
    v55 = v220;
    v56 = v213;
  }
  else
  {
    v55 = *(_DWORD *)v54;
    v56 = *((_DWORD *)v54 + 1);
    v220 = v55;
    v217 = __PAIR64__(v56, v55);
    v213 = v56;
  }
  if ( v203 < 0 )
  {
    v58 = 0x100000000LL - *(_QWORD *)(a1 + 1856);
    v221 = v58;
    v57 = Prediction::operator*(&v208, &v217, &v221);
    if ( &v217 == v57 )
    {
      v59 = v220;
      v60 = v213;
      goto LABEL_40;
    }
  }
  else
  {
    v213 = v56;
    v57 = (__int64 *)&v212;
    v212 = v55;
  }
  v60 = *((_DWORD *)v57 + 1);
  v220 = *(_DWORD *)v57;
  v59 = v220;
  v217 = __PAIR64__(v60, v220);
  v213 = v60;
LABEL_40:
  v61 = Prediction::tagRlsFilter::Filter((char *)a1, &v208, &a5, v52, SHIDWORD(v52), v59, v60);
  if ( v191 == (_BYTE *)v61 )
  {
    v62 = v207;
    v63 = v207;
  }
  else
  {
    v62 = *v61;
    v63 = v61[1];
    v207 = *v61;
    v206 = v63;
  }
  v64 = (char *)(a1 + 1856);
  v65 = Prediction::tagExpoSmoother::Smooth(a1 + 1856, &v208, __SPAIR64__(v63, v62));
  if ( a5.x )
  {
    if ( v195 == (_BYTE *)v65 )
    {
      v72 = v219;
      v73 = v219;
    }
    else
    {
      v72 = *(_DWORD *)v65;
      v73 = *((_DWORD *)v65 + 1);
      v219 = v72;
      v218 = v73;
    }
    v13 = __CFADD__(v72, *(_DWORD *)(a1 + 2208));
    *(_DWORD *)(a1 + 2208) += v72;
    v74 = *(_DWORD *)(a1 + 2208);
    *(_DWORD *)(a1 + 2212) += v73 + v13;
    v75 = y + *(_DWORD *)(a1 + 2212);
    *(_DWORD *)(a1 + 2176) = v74;
    *(_DWORD *)(a1 + 2180) = v75;
    v71 = __PAIR64__(v75, v74);
    if ( v64 != &v188 )
    {
      *(_DWORD *)v64 = gPredictorRLSExpoSmoothAlpha;
      *(_DWORD *)(a1 + 1860) = dword_273D24;
    }
    if ( (char *)(a1 + 1864) != &v187 )
    {
      *(_DWORD *)(a1 + 1864) = 0;
      *(_DWORD *)(a1 + 1868) = 0;
    }
  }
  else
  {
    if ( v195 != (_BYTE *)v65 )
    {
      v66 = *(_DWORD *)v65;
      v67 = *((_DWORD *)v65 + 1);
      v219 = v66;
      v218 = v67;
    }
    LODWORD(v180) = v205;
    v68 = *(_DWORD *)(a1 + 2212);
    v69 = *(_DWORD *)(a1 + 2208);
    LODWORD(v70) = Prediction::DeltaOvershootCompensation(v69, __SPAIR64__(v216, v68), v180);
    *(_DWORD *)(a1 + 2208) = v69 + v70;
    HIDWORD(v70) = (__PAIR64__(v68, v69) + v70) >> 32;
    *(_DWORD *)(a1 + 2212) = HIDWORD(v70);
    v71 = __PAIR64__(v218, v219) + __PAIR64__(y + HIDWORD(v70), v69 + (int)v70);
  }
  if ( v205 < 0 )
    v76 = -1;
  else
    v76 = 1;
  v77 = *(_DWORD *)(a1 + 2176);
  v78 = *(_DWORD *)(a1 + 2180);
  if ( v76 == 1 )
  {
    if ( v71 > __SPAIR64__(v78, v77) )
      goto LABEL_63;
  }
  else if ( v71 < __SPAIR64__(v78, v77) )
  {
    goto LABEL_63;
  }
  v71 = *(_QWORD *)(a1 + 2176);
LABEL_63:
  v79 = v198;
  *(_QWORD *)(a1 + 2176) = v71;
  *(_DWORD *)a4.x = (unsigned __int64)(v71 + 0x80000000LL) >> 32;
  v13 = *(_DWORD *)(a1 + 2160) != 0;
  v205 = -*(_DWORD *)(a1 + 2160);
  LODWORD(v80) = v205;
  HIDWORD(v80) = v79 - (v13 + *(_DWORD *)(a1 + 2164));
  v216 = HIDWORD(v80);
  v209 = __PAIR64__(HIDWORD(v80), v205);
  if ( !v80 )
  {
    v99 = *(_QWORD *)(a1 + 2192);
    goto LABEL_95;
  }
  v81 = Prediction::operator/(&v208, &v209, v197);
  v82 = Prediction::operator*(&v221, v81, &v192);
  if ( &v217 == v82 )
  {
    v83 = v220;
    v84 = v213;
  }
  else
  {
    v83 = *(_DWORD *)v82;
    v84 = *((_DWORD *)v82 + 1);
    v220 = v83;
    v217 = __PAIR64__(v84, v83);
    v213 = v84;
  }
  if ( v203 < 0 )
  {
    v86 = 0x100000000LL - *(_QWORD *)(a1 + 1888);
    v221 = v86;
    v85 = Prediction::operator*(&v208, &v217, &v221);
    if ( &v217 == v85 )
    {
      v87 = v220;
      v88 = v213;
      goto LABEL_72;
    }
  }
  else
  {
    HIDWORD(v221) = v84;
    v85 = &v221;
    LODWORD(v221) = v83;
  }
  v88 = *((_DWORD *)v85 + 1);
  v220 = *(_DWORD *)v85;
  v87 = v220;
  v217 = __PAIR64__(v88, v220);
  v213 = v88;
LABEL_72:
  v89 = Prediction::tagRlsFilter::Filter((char *)(a1 + 864), &v208, &a5, v80, SHIDWORD(v80), v87, v88);
  if ( v191 == (_BYTE *)v89 )
  {
    v90 = v207;
    v91 = v206;
  }
  else
  {
    v90 = *v89;
    v91 = v89[1];
    v207 = *v89;
    v206 = v91;
  }
  v92 = (char *)(a1 + 1888);
  v93 = Prediction::tagExpoSmoother::Smooth(a1 + 1888, &v208, __SPAIR64__(v91, v90));
  if ( a5.x )
  {
    if ( v195 == (_BYTE *)v93 )
    {
      v100 = v219;
      v101 = v218;
    }
    else
    {
      v100 = *(_DWORD *)v93;
      v101 = *((_DWORD *)v93 + 1);
      v219 = v100;
      v218 = v101;
    }
    v13 = __CFADD__(v100, *(_DWORD *)(a1 + 2224));
    *(_DWORD *)(a1 + 2224) += v100;
    v102 = *(_DWORD *)(a1 + 2224);
    *(_DWORD *)(a1 + 2228) += v101 + v13;
    v103 = v198 + *(_DWORD *)(a1 + 2228);
    *(_DWORD *)(a1 + 2192) = v102;
    *(_DWORD *)(a1 + 2196) = v103;
    v99 = __PAIR64__(v103, v102);
    if ( v92 != &v186 )
    {
      *(_DWORD *)v92 = gPredictorRLSExpoSmoothAlpha;
      *(_DWORD *)(a1 + 1892) = dword_273D24;
    }
    if ( (char *)(a1 + 1896) != &v185 )
    {
      *(_DWORD *)(a1 + 1896) = 0;
      *(_DWORD *)(a1 + 1900) = 0;
    }
  }
  else
  {
    if ( v195 != (_BYTE *)v93 )
    {
      v94 = *(_DWORD *)v93;
      v95 = *((_DWORD *)v93 + 1);
      v219 = v94;
      v218 = v95;
    }
    LODWORD(v180) = v216;
    v96 = *(_DWORD *)(a1 + 2228);
    v97 = *(_DWORD *)(a1 + 2224);
    LODWORD(v98) = Prediction::DeltaOvershootCompensation(v97, __SPAIR64__(v205, v96), v180);
    *(_DWORD *)(a1 + 2224) = v97 + v98;
    HIDWORD(v98) = (__PAIR64__(v96, v97) + v98) >> 32;
    *(_DWORD *)(a1 + 2228) = HIDWORD(v98);
    v99 = __PAIR64__(v218, v219) + __PAIR64__(v198 + HIDWORD(v98), v97 + (int)v98);
  }
  if ( v216 < 0 )
    v104 = -1;
  else
    v104 = 1;
  v105 = *(_DWORD *)(a1 + 2192);
  v106 = *(_DWORD *)(a1 + 2196);
  if ( v104 == 1 )
  {
    if ( v99 > __SPAIR64__(v106, v105) )
      goto LABEL_95;
  }
  else if ( v99 < __SPAIR64__(v106, v105) )
  {
    goto LABEL_95;
  }
  v99 = *(_QWORD *)(a1 + 2192);
LABEL_95:
  v107 = v199;
  *(_QWORD *)(a1 + 2192) = v99;
  *(_DWORD *)a3 = (unsigned __int64)(v99 + 0x80000000LL) >> 32;
  v13 = *(_DWORD *)(a1 + 2152) != 0;
  v205 = -*(_DWORD *)(a1 + 2152);
  LODWORD(v108) = v205;
  HIDWORD(v108) = (char *)v107 - v13 - *(_DWORD *)(a1 + 2156);
  v216 = HIDWORD(v108);
  v209 = __PAIR64__(HIDWORD(v108), v205);
  if ( !v108 )
  {
    v127 = *(_QWORD *)(a1 + 2184);
    goto LABEL_127;
  }
  v109 = Prediction::operator/(&v208, &v209, v197);
  v110 = Prediction::operator*(&v221, v109, &v192);
  if ( &v217 == v110 )
  {
    v111 = v220;
    v112 = v213;
  }
  else
  {
    v111 = *(_DWORD *)v110;
    v112 = *((_DWORD *)v110 + 1);
    v220 = v111;
    v217 = __PAIR64__(v112, v111);
    v213 = v112;
  }
  if ( v196 < 0 )
  {
    v114 = 0x100000000LL - *(_QWORD *)(a1 + 1872);
    v221 = v114;
    v113 = Prediction::operator*(&v208, &v217, &v221);
    if ( &v217 == v113 )
    {
      v115 = v220;
      v116 = v213;
      goto LABEL_104;
    }
  }
  else
  {
    HIDWORD(v221) = v112;
    v113 = &v221;
    LODWORD(v221) = v111;
  }
  v116 = *((_DWORD *)v113 + 1);
  v220 = *(_DWORD *)v113;
  v115 = v220;
  v217 = __PAIR64__(v116, v220);
  v213 = v116;
LABEL_104:
  v117 = Prediction::tagRlsFilter::Filter((char *)(a1 + 432), &v208, &a5, v108, SHIDWORD(v108), v115, v116);
  if ( v191 == (_BYTE *)v117 )
  {
    v118 = v207;
    v119 = v206;
  }
  else
  {
    v118 = *v117;
    v119 = v117[1];
    v207 = *v117;
    v206 = v119;
  }
  v120 = (char *)(a1 + 1872);
  v121 = Prediction::tagExpoSmoother::Smooth(a1 + 1872, &v208, __SPAIR64__(v119, v118));
  if ( a5.x )
  {
    if ( v195 == (_BYTE *)v121 )
    {
      v128 = v219;
      v129 = v218;
    }
    else
    {
      v128 = *(_DWORD *)v121;
      v129 = *((_DWORD *)v121 + 1);
      v219 = v128;
      v218 = v129;
    }
    v13 = __CFADD__(v128, *(_DWORD *)(a1 + 2216));
    *(_DWORD *)(a1 + 2216) += v128;
    v130 = *(_DWORD *)(a1 + 2216);
    *(_DWORD *)(a1 + 2220) += v129 + v13;
    v131 = (char *)v199 + *(_DWORD *)(a1 + 2220);
    *(_DWORD *)(a1 + 2184) = v130;
    *(_DWORD *)(a1 + 2188) = v131;
    v127 = __PAIR64__((unsigned int)v131, v130);
    if ( v120 != &v184 )
    {
      *(_DWORD *)v120 = gPredictorRLSExpoSmoothAlpha;
      *(_DWORD *)(a1 + 1876) = dword_273D24;
    }
    if ( (char *)(a1 + 1880) != &v183 )
    {
      *(_DWORD *)(a1 + 1880) = 0;
      *(_DWORD *)(a1 + 1884) = 0;
    }
  }
  else
  {
    if ( v195 != (_BYTE *)v121 )
    {
      v122 = *(_DWORD *)v121;
      v123 = *((_DWORD *)v121 + 1);
      v219 = v122;
      v218 = v123;
    }
    LODWORD(v180) = v216;
    v124 = *(_DWORD *)(a1 + 2220);
    v125 = *(_DWORD *)(a1 + 2216);
    LODWORD(v126) = Prediction::DeltaOvershootCompensation(v125, __SPAIR64__(v205, v124), v180);
    *(_DWORD *)(a1 + 2216) = v125 + v126;
    HIDWORD(v126) = (__PAIR64__(v124, v125) + v126) >> 32;
    *(_DWORD *)(a1 + 2220) = HIDWORD(v126);
    v127 = __PAIR64__(v218, v219) + __PAIR64__((unsigned int)v199 + HIDWORD(v126), v125 + (int)v126);
  }
  if ( v216 < 0 )
    v132 = -1;
  else
    v132 = 1;
  v133 = *(_DWORD *)(a1 + 2184);
  v134 = *(_DWORD *)(a1 + 2188);
  if ( v132 == 1 )
  {
    if ( v127 > __SPAIR64__(v134, v133) )
      goto LABEL_127;
  }
  else if ( v127 < __SPAIR64__(v134, v133) )
  {
    goto LABEL_127;
  }
  v127 = *(_QWORD *)(a1 + 2184);
LABEL_127:
  v135 = a6;
  *(_QWORD *)(a1 + 2184) = v127;
  *(_DWORD *)(a4.x + 4) = (unsigned __int64)(v127 + 0x80000000LL) >> 32;
  v13 = *(_DWORD *)(a1 + 2168) != 0;
  v205 = -*(_DWORD *)(a1 + 2168);
  LODWORD(v136) = v205;
  HIDWORD(v136) = (char *)v135 - v13 - *(_DWORD *)(a1 + 2172);
  v216 = HIDWORD(v136);
  v209 = __PAIR64__(HIDWORD(v136), v205);
  if ( !v136 )
  {
    v156 = *(_QWORD *)(a1 + 2200);
    goto LABEL_158;
  }
  v137 = Prediction::operator/(&v208, &v209, v197);
  v138 = Prediction::operator*(&v221, v137, &v192);
  if ( &v217 == v138 )
  {
    v139 = v220;
    v140 = v213;
  }
  else
  {
    v139 = *(_DWORD *)v138;
    v140 = *((_DWORD *)v138 + 1);
    v220 = v139;
    v217 = __PAIR64__(v140, v139);
    v213 = v140;
  }
  if ( v196 >= 0 )
  {
    HIDWORD(v221) = v140;
    v141 = &v221;
    LODWORD(v221) = v139;
LABEL_134:
    v143 = *(_DWORD *)v141;
    v144 = *((_DWORD *)v141 + 1);
    goto LABEL_136;
  }
  v142 = 0x100000000LL - *(_QWORD *)(a1 + 1904);
  v221 = v142;
  v141 = Prediction::operator*(&v208, &v217, &v221);
  if ( &v217 != v141 )
    goto LABEL_134;
  v143 = v220;
  v144 = v213;
LABEL_136:
  v145 = Prediction::tagRlsFilter::Filter((char *)(a1 + 1296), &v208, &a5, v136, SHIDWORD(v136), v143, v144);
  if ( v191 == (_BYTE *)v145 )
  {
    v146 = v207;
    v147 = v206;
  }
  else
  {
    v146 = *v145;
    v147 = v145[1];
  }
  v148 = (char *)(a1 + 1904);
  v179 = __PAIR64__(v147, v146);
  v149 = a1 + 1904;
  if ( a5.x )
  {
    v157 = Prediction::tagExpoSmoother::Smooth(v149, &a4.y, v179);
    if ( v195 == (_BYTE *)v157 )
    {
      v158 = v219;
      v159 = v218;
    }
    else
    {
      v158 = *(_DWORD *)v157;
      v159 = *((_DWORD *)v157 + 1);
    }
    v13 = __CFADD__(v158, *(_DWORD *)(a1 + 2232));
    *(_DWORD *)(a1 + 2232) += v158;
    v160 = *(_DWORD *)(a1 + 2232);
    *(_DWORD *)(a1 + 2236) += v159 + v13;
    v161 = (char *)a6 + *(_DWORD *)(a1 + 2236);
    *(_DWORD *)(a1 + 2200) = v160;
    *(_DWORD *)(a1 + 2204) = v161;
    v156 = __PAIR64__((unsigned int)v161, v160);
    if ( v148 != &v182 )
    {
      *(_DWORD *)v148 = gPredictorRLSExpoSmoothAlpha;
      *(_DWORD *)(a1 + 1908) = dword_273D24;
    }
    if ( (char *)(a1 + 1912) != &v181 )
    {
      *(_DWORD *)(a1 + 1912) = 0;
      *(_DWORD *)(a1 + 1916) = 0;
    }
  }
  else
  {
    v150 = Prediction::tagExpoSmoother::Smooth(v149, &a4.y, v179);
    if ( v195 != (_BYTE *)v150 )
    {
      v151 = *(_DWORD *)v150;
      v152 = *((_DWORD *)v150 + 1);
      v219 = v151;
      v218 = v152;
    }
    LODWORD(v180) = v216;
    v153 = *(_DWORD *)(a1 + 2236);
    v154 = *(_DWORD *)(a1 + 2232);
    LODWORD(v155) = Prediction::DeltaOvershootCompensation(v154, __SPAIR64__(v205, v153), v180);
    *(_DWORD *)(a1 + 2232) = v154 + v155;
    HIDWORD(v155) = (__PAIR64__(v153, v154) + v155) >> 32;
    *(_DWORD *)(a1 + 2236) = HIDWORD(v155);
    v156 = __PAIR64__(v218, v219) + __PAIR64__((unsigned int)a6 + HIDWORD(v155), v154 + (int)v155);
  }
  if ( v216 >= 0 )
    v211 = 1;
  v162 = *(_DWORD *)(a1 + 2200);
  v163 = *(_DWORD *)(a1 + 2204);
  if ( v211 == 1 )
  {
    if ( v156 <= __SPAIR64__(v163, v162) )
      goto LABEL_156;
  }
  else if ( v156 >= __SPAIR64__(v163, v162) )
  {
LABEL_156:
    v156 = *(_QWORD *)(a1 + 2200);
  }
LABEL_158:
  v164 = y;
  *(_QWORD *)(a1 + 2200) = v156;
  *((_DWORD *)a3 + 1) = __CFADD__((_DWORD)v156, 0x80000000) + HIDWORD(v156);
  *(_DWORD *)(a1 + 2148) = v164;
  *(_DWORD *)(a1 + 2156) = v199;
  *(_DWORD *)(a1 + 2164) = v198;
  v165 = a6;
  *(_DWORD *)(a1 + 2144) = 0;
  *(_DWORD *)(a1 + 2152) = 0;
  *(_DWORD *)(a1 + 2160) = 0;
  *(_DWORD *)(a1 + 2168) = 0;
  *(_DWORD *)(a1 + 2172) = v165;
  v166 = v190;
  v167 = *(_DWORD *)a4.x;
  v168 = v190[37];
  if ( *(_DWORD *)a4.x < v168 )
  {
    *(_DWORD *)a4.x = v168;
    v167 = v168;
  }
  v169 = v166[39] - 1;
  if ( v167 > v169 )
    *(_DWORD *)a4.x = v169;
  v170 = *(_DWORD *)(a4.x + 4);
  v171 = v166[38];
  if ( v170 < v171 )
  {
    *(_DWORD *)(a4.x + 4) = v171;
    v170 = v171;
  }
  v172 = v166[40] - 1;
  if ( v170 > v172 )
    *(_DWORD *)(a4.x + 4) = v172;
  v173 = *(_DWORD *)a3;
  v174 = v166[41];
  if ( *(_DWORD *)a3 < v174 )
  {
    *(_DWORD *)a3 = v174;
    v173 = v174;
  }
  v175 = v166[43];
  if ( v173 > v175 )
    *(_DWORD *)a3 = v175;
  v176 = *((_DWORD *)a3 + 1);
  v177 = v166[42];
  if ( v176 < v177 )
  {
    *((_DWORD *)a3 + 1) = v177;
    v176 = v177;
  }
  v178 = v166[44];
  if ( v176 > v178 )
    *((_DWORD *)a3 + 1) = v178;
}
