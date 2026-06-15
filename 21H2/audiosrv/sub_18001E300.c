/*
 * XREFs of sub_18001E300 @ 0x18001E300
 * Callers:
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_180046A30 @ 0x180046A30 (sub_180046A30.c)
 *     sub_1800D5E18 @ 0x1800D5E18 (sub_1800D5E18.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 * Callees:
 *     sub_180012550 @ 0x180012550 (sub_180012550.c)
 *     sub_18001F490 @ 0x18001F490 (sub_18001F490.c)
 *     sub_18001FEF0 @ 0x18001FEF0 (sub_18001FEF0.c)
 *     sub_180020B78 @ 0x180020B78 (sub_180020B78.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 *     sub_1800233E0 @ 0x1800233E0 (sub_1800233E0.c)
 *     sub_180032210 @ 0x180032210 (sub_180032210.c)
 *     sub_1800322B0 @ 0x1800322B0 (sub_1800322B0.c)
 *     sub_1800326B0 @ 0x1800326B0 (sub_1800326B0.c)
 *     sub_18004BB48 @ 0x18004BB48 (sub_18004BB48.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180052550 @ 0x180052550 (sub_180052550.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180069110 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     sub_18006A1B0 @ 0x18006A1B0 (sub_18006A1B0.c)
 *     memcpy @ 0x18007443F (memcpy.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB2C8 @ 0x1800BB2C8 (sub_1800BB2C8.c)
 *     sub_180118968 @ 0x180118968 (sub_180118968.c)
 *     sub_180118A38 @ 0x180118A38 (sub_180118A38.c)
 *     sub_18011C754 @ 0x18011C754 (sub_18011C754.c)
 */

// Hidden C++ exception states: #wind=81
__int64 __fastcall sub_18001E300(
        __int64 a1,
        __int128 *a2,
        int a3,
        unsigned __int16 *a4,
        unsigned __int16 *Src,
        _QWORD *a6)
{
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rbx
  char *v10; // rax
  char *v11; // r12
  __int64 v12; // rbx
  _WORD *v13; // rax
  _WORD *v14; // rdi
  __int16 v15; // ax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rsi
  struct _RTL_CRITICAL_SECTION *v20; // r13
  volatile signed __int32 **v21; // rdi
  volatile signed __int32 *v22; // rbx
  int v23; // r14d
  int v24; // r12d
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // rax
  volatile signed __int32 **v28; // rcx
  __int64 v29; // rax
  int v30; // r12d
  int v31; // r14d
  volatile signed __int32 **v32; // r15
  __int64 v33; // rbx
  struct _RTL_CRITICAL_SECTION *v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r14
  unsigned int v37; // r15d
  unsigned int v38; // r15d
  __int64 v39; // r14
  struct _RTL_CRITICAL_SECTION *v40; // r13
  volatile signed __int32 **v41; // rdi
  volatile signed __int32 *v42; // rbx
  int v43; // esi
  __int64 v44; // r15
  __int64 v45; // r13
  __int64 v46; // rax
  volatile signed __int32 **v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rsi
  volatile signed __int32 **v50; // r15
  __int64 v51; // r14
  __int64 v52; // rsi
  volatile signed __int32 *v53; // rbx
  int v54; // edi
  int v55; // r13d
  __int64 v56; // r15
  __int64 v57; // rdx
  __int64 v58; // rax
  _QWORD *v59; // rcx
  __int64 v60; // rax
  volatile signed __int32 **v61; // rdi
  __int64 v62; // r15
  struct _RTL_CRITICAL_SECTION *v63; // rcx
  __int64 v64; // rbx
  struct _RTL_CRITICAL_SECTION *v65; // rdi
  __int64 v66; // rsi
  __int64 v67; // r14
  unsigned int v68; // r15d
  unsigned int v69; // r15d
  __int64 v70; // r14
  volatile signed __int32 *v71; // rbx
  __int64 v72; // rdi
  int v73; // esi
  int v74; // r13d
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // rax
  volatile signed __int32 *v78; // rcx
  __int64 v79; // rax
  volatile signed __int32 **v80; // rsi
  volatile signed __int32 *v81; // r15
  BOOL v82; // ebx
  __int64 v83; // rcx
  int v84; // ecx
  __int128 *v85; // rsi
  __int128 v86; // xmm0
  __int64 v87; // rax
  __int64 v88; // rbx
  BOOL v89; // eax
  int v90; // edi
  __int64 v91; // rsi
  int v92; // ecx
  __int64 v93; // rdi
  __int64 v94; // r9
  __int64 *v95; // rdx
  int v96; // r8d
  int v97; // r11d
  __int64 v98; // r10
  __int64 v99; // rax
  __int64 v100; // r11
  __int64 v101; // rcx
  int v102; // eax
  int v103; // ecx
  __int64 v104; // r9
  __int64 *v105; // rdx
  int v106; // r8d
  int v107; // r11d
  __int64 v108; // r10
  __int64 v109; // rax
  int v110; // eax
  void *v111; // rbx
  bool v112; // zf
  unsigned __int64 v113; // rcx
  unsigned __int64 v114; // rax
  unsigned __int64 v115; // rcx
  void *v116; // rax
  int v117; // eax
  int v118; // r14d
  int v119; // eax
  _DWORD *v120; // rsi
  int v121; // eax
  __int64 v122; // rbx
  __int64 v123; // rdi
  __int64 v124; // rax
  int v125; // eax
  bool v126; // di
  void *v127; // rcx
  unsigned __int16 *v128; // r14
  __int64 v129; // rdi
  void *v130; // rax
  void *v131; // rcx
  int v133; // ecx
  int v134; // ecx
  _QWORD *v135; // rax
  int v136; // eax
  __int64 v137; // rax
  _QWORD *v138; // rax
  int v139; // eax
  __int64 v140; // rbx
  _QWORD *v141; // rax
  int v142; // eax
  _QWORD *v143; // rax
  int v144; // eax
  __int64 v145; // rax
  _QWORD *v146; // rax
  int v147; // eax
  __int64 v148; // rbx
  _QWORD *v149; // rax
  int v150; // eax
  _QWORD *v151; // rax
  _QWORD *v152; // rax
  volatile signed __int32 *v153; // rdi
  _QWORD *v154; // rax
  _QWORD *v155; // rax
  __int64 v156; // rax
  __int64 v157; // rax
  __int64 v158; // rax
  __int64 v159; // rax
  __int64 v160; // rax
  __int64 v161; // rax
  __int64 v162; // rax
  __int64 v163; // rax
  __int64 v164; // rax
  __int64 v165; // rax
  bool v166; // [rsp+40h] [rbp-C0h]
  struct _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+48h] [rbp-B8h]
  __int64 *v168; // [rsp+50h] [rbp-B0h] BYREF
  LPVOID v169; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID v170; // [rsp+60h] [rbp-A0h]
  volatile signed __int32 *v171; // [rsp+68h] [rbp-98h] BYREF
  __int64 v172; // [rsp+70h] [rbp-90h]
  __int64 v173; // [rsp+78h] [rbp-88h] BYREF
  __int64 v174; // [rsp+80h] [rbp-80h]
  volatile signed __int32 **v175; // [rsp+88h] [rbp-78h] BYREF
  __int64 v176; // [rsp+90h] [rbp-70h]
  volatile signed __int32 **v177; // [rsp+98h] [rbp-68h] BYREF
  __int64 v178; // [rsp+A0h] [rbp-60h]
  void *v179; // [rsp+A8h] [rbp-58h]
  __int64 v180; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v181; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v182; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v183; // [rsp+C8h] [rbp-38h]
  __int64 v184; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v185; // [rsp+D8h] [rbp-28h]
  int v186; // [rsp+E0h] [rbp-20h]
  void *v187; // [rsp+E8h] [rbp-18h]
  __int64 v188; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v189; // [rsp+F8h] [rbp-8h]
  __int64 v190; // [rsp+100h] [rbp+0h]
  LPVOID pv; // [rsp+108h] [rbp+8h]
  int v192; // [rsp+110h] [rbp+10h] BYREF
  int v193; // [rsp+118h] [rbp+18h] BYREF
  int v194; // [rsp+120h] [rbp+20h] BYREF
  int v195; // [rsp+128h] [rbp+28h] BYREF
  char *v196; // [rsp+130h] [rbp+30h]
  __int64 v197; // [rsp+138h] [rbp+38h]
  void *v198; // [rsp+140h] [rbp+40h]
  LPVOID *v199; // [rsp+148h] [rbp+48h]
  void *v200; // [rsp+150h] [rbp+50h] BYREF
  char v201; // [rsp+158h] [rbp+58h]
  void *v202; // [rsp+160h] [rbp+60h] BYREF
  __int128 v203; // [rsp+170h] [rbp+70h] BYREF
  __int128 v204; // [rsp+180h] [rbp+80h] BYREF
  PROPVARIANT pvar[2]; // [rsp+190h] [rbp+90h] BYREF
  __int64 v206; // [rsp+1A0h] [rbp+A0h]
  __int128 v207; // [rsp+1A8h] [rbp+A8h]
  __int128 v208; // [rsp+1B8h] [rbp+B8h]
  __int64 v209; // [rsp+1C8h] [rbp+C8h]
  __int64 v210; // [rsp+1D0h] [rbp+D0h]
  __int64 v211; // [rsp+1D8h] [rbp+D8h]
  __int64 v212; // [rsp+1E0h] [rbp+E0h]
  __int64 v213; // [rsp+1E8h] [rbp+E8h]
  __int64 v214; // [rsp+1F0h] [rbp+F0h]
  __int128 v215; // [rsp+200h] [rbp+100h] BYREF
  __int128 v216; // [rsp+210h] [rbp+110h] BYREF
  __int128 v217; // [rsp+220h] [rbp+120h] BYREF
  __int128 v218; // [rsp+230h] [rbp+130h] BYREF
  __int128 v219; // [rsp+240h] [rbp+140h] BYREF
  __int64 v220; // [rsp+250h] [rbp+150h]
  __int64 v221; // [rsp+258h] [rbp+158h]
  char v222[24]; // [rsp+260h] [rbp+160h] BYREF
  char v223[24]; // [rsp+278h] [rbp+178h] BYREF
  char v224[24]; // [rsp+290h] [rbp+190h] BYREF
  char v225[24]; // [rsp+2A8h] [rbp+1A8h] BYREF
  char v226[24]; // [rsp+2C0h] [rbp+1C0h] BYREF
  char v227[24]; // [rsp+2D8h] [rbp+1D8h] BYREF
  char v228[24]; // [rsp+2F0h] [rbp+1F0h] BYREF
  char v229[24]; // [rsp+308h] [rbp+208h] BYREF
  char v230[24]; // [rsp+320h] [rbp+220h] BYREF
  char v231[88]; // [rsp+338h] [rbp+238h] BYREF
  void *retaddr; // [rsp+398h] [rbp+298h]

  v7 = a3;
  v8 = a1;
  v168 = 0LL;
  v166 = 1;
  v196 = 0LL;
  pv = 0LL;
  v9 = Src[8];
  v10 = (char *)CoTaskMemAlloc(v9 + 18);
  v11 = v10;
  v170 = v10;
  if ( !v10 )
  {
    v196 = 0LL;
    goto LABEL_459;
  }
  memcpy(v10, Src, v9 + 18);
  v196 = v11;
  v12 = a4[8];
  v13 = CoTaskMemAlloc(v12 + 18);
  v14 = v13;
  v198 = v13;
  if ( !v13 )
  {
    pv = 0LL;
LABEL_459:
    v30 = -2147024882;
    goto LABEL_460;
  }
  memcpy(v13, a4, v12 + 18);
  pv = v14;
  if ( (*((_WORD *)v11 + 7) & 0xFFF8u) > 0x100 )
  {
    v30 = -2004287480;
LABEL_460:
    v120 = v170;
    goto LABEL_270;
  }
  v15 = *(_WORD *)v11;
  if ( *(_WORD *)v11 == 0xFFFE )
    v166 = (v11[18] & 7) == 0;
  if ( v15 == 1 )
  {
    *(_WORD *)v11 = 3;
LABEL_276:
    *((_WORD *)v11 + 7) = 32;
    v133 = (unsigned __int16)(4 * *((_WORD *)v11 + 1));
    *((_WORD *)v11 + 6) = v133;
    *((_DWORD *)v11 + 2) = v133 * *((_DWORD *)v11 + 1);
    goto LABEL_11;
  }
  if ( v15 == -2 )
  {
    v16 = 0x10000000000001LL - *((_QWORD *)v11 + 3);
    if ( *((_QWORD *)v11 + 3) == 0x10000000000001LL )
      v16 = 0x719B3800AA000080LL - *((_QWORD *)v11 + 4);
    if ( !v16 && (v11[18] & 7) == 0 )
    {
      *(_OWORD *)(v11 + 24) = *(_OWORD *)&xmmword_18015B720;
      *((_WORD *)v11 + 9) = 32;
      goto LABEL_276;
    }
  }
LABEL_11:
  if ( *v14 == 1 )
  {
    *v14 = 3;
    goto LABEL_283;
  }
  if ( *v14 == 0xFFFE )
  {
    v17 = 0x10000000000001LL - *((_QWORD *)v14 + 3);
    if ( *((_QWORD *)v14 + 3) == 0x10000000000001LL )
      v17 = 0x719B3800AA000080LL - *((_QWORD *)v14 + 4);
    if ( !v17 && (v14[9] & 7) == 0 )
    {
      *(_OWORD *)(v14 + 12) = *(_OWORD *)&xmmword_18015B720;
      v14[9] = 32;
LABEL_283:
      v14[7] = 32;
      v134 = (unsigned __int16)(4 * v14[1]);
      v14[6] = v134;
      *((_DWORD *)v14 + 2) = v134 * *((_DWORD *)v14 + 1);
    }
  }
  v18 = v7;
  v189 = v7;
  if ( v7 >= *(_QWORD *)(v8 + 1656) )
  {
    v165 = sub_180118A38(v231, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v165);
  }
  v19 = *(_QWORD *)(v8 + 1664) + 96 * v7;
  if ( *(_BYTE *)(v19 + 52) )
  {
    v20 = (struct _RTL_CRITICAL_SECTION *)(v19 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v19 + 56));
    v220 = v19 + 56;
    v21 = 0LL;
    v177 = 0LL;
    v22 = 0LL;
    v178 = 0LL;
    v23 = 0;
    v24 = 0;
    if ( *(int *)(v19 + 40) > 0 )
    {
      v25 = 0LL;
      while ( 1 )
      {
        if ( v25 < 0 || v24 >= *(_DWORD *)(v19 + 40) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v26 = *(_QWORD *)(v19 + 32);
        if ( (_DWORD)v22 == v23 )
        {
          if ( v23 )
          {
            v23 = 2 * (_DWORD)v22;
            if ( ((unsigned int)v22 & 0x40000000) != 0 )
              goto LABEL_285;
          }
          else
          {
            v23 = 1;
          }
          if ( (unsigned __int64)v23 > 0x7FFFFFF
            || (v27 = o__recalloc(v21, v23, 16LL), (v21 = (volatile signed __int32 **)v27) == 0LL) )
          {
LABEL_285:
            sub_18004BD84(
              retaddr,
              502LL,
              "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              2147942414LL);
            sub_180032210(&v177);
            if ( v19 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v19 + 56));
            v30 = 0;
            goto LABEL_49;
          }
          HIDWORD(v178) = v23;
          v177 = (volatile signed __int32 **)v27;
        }
        v28 = &v21[2 * (int)v22];
        if ( v28 )
        {
          *v28 = 0LL;
          v28[1] = 0LL;
          v29 = *(_QWORD *)(v25 + v26 + 8);
          if ( v29 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v29 + 8));
            v23 = HIDWORD(v178);
            LODWORD(v22) = v178;
            v21 = v177;
          }
          *v28 = *(volatile signed __int32 **)(v25 + v26);
          v28[1] = *(volatile signed __int32 **)(v25 + v26 + 8);
        }
        v22 = (volatile signed __int32 *)(unsigned int)((_DWORD)v22 + 1);
        LODWORD(v178) = (_DWORD)v22;
        ++v24;
        v25 += 16LL;
        if ( v24 >= *(_DWORD *)(v19 + 40) )
        {
          v20 = (struct _RTL_CRITICAL_SECTION *)(v19 + 56);
          break;
        }
      }
    }
    v30 = 0;
    v31 = 0;
    if ( (int)v22 <= 0 )
    {
LABEL_39:
      if ( v21 )
      {
        if ( (int)v22 > 0 )
        {
          ++v21;
          v19 = (unsigned int)v22;
          do
          {
            v22 = *v21;
            if ( *v21 && _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_294:
              (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v22);
            }
            v21 += 2;
            --v19;
          }
          while ( v19 );
          v21 = v177;
        }
        _o_free(v21);
        v177 = 0LL;
      }
      v178 = 0LL;
      if ( v20 )
LABEL_48:
        LeaveCriticalSection(v20);
    }
    else
    {
      v32 = v21;
      while ( 1 )
      {
        if ( v31 < 0 )
        {
          sub_1800BB2C8(3221225612LL);
          goto LABEL_294;
        }
        if ( *((_BYTE *)*v32 + 20) )
        {
          v135 = (_QWORD *)sub_180023320(&v177, (unsigned int)v31);
          v136 = sub_180052550(*v135, v19);
          if ( v136 < 0 )
            break;
        }
        ++v31;
        v32 += 2;
        if ( v31 >= (int)v22 )
          goto LABEL_39;
      }
      sub_18004BD84(
        retaddr,
        508LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (unsigned int)v136);
      sub_180032210(&v177);
      if ( v20 )
        goto LABEL_48;
    }
LABEL_49:
    v18 = v189;
    v8 = a1;
  }
  else
  {
    v30 = 0;
  }
  if ( v18 >= *(_QWORD *)(v8 + 1672) )
  {
    v164 = sub_180118A38(v230, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v164);
  }
  v33 = *(_QWORD *)(v8 + 1680) + 96 * v18;
  if ( !*(_BYTE *)(v33 + 52) )
    goto LABEL_58;
  v34 = (struct _RTL_CRITICAL_SECTION *)(v33 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v33 + 56));
  v211 = v33 + 56;
  v35 = 0LL;
  v184 = 0LL;
  v36 = 0LL;
  v185 = 0LL;
  v37 = 0;
  if ( *(int *)(v33 + 40) > 0 )
  {
    while ( 1 )
    {
      v137 = sub_180023320(v33 + 32, v37);
      if ( !(unsigned int)sub_1800233E0(&v184, v137) )
        break;
      if ( (signed int)++v37 >= *(_DWORD *)(v33 + 40) )
      {
        v36 = (unsigned int)v185;
        v35 = v184;
        goto LABEL_53;
      }
    }
    sub_18004BD84(retaddr, 502LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
    sub_180032210(&v184);
    if ( v33 == -56 )
      goto LABEL_57;
  }
  else
  {
LABEL_53:
    v38 = 0;
    if ( (int)v36 > 0 )
    {
      while ( 1 )
      {
        if ( *(_BYTE *)(*(_QWORD *)sub_180023320(&v184, v38) + 20LL) )
        {
          v138 = (_QWORD *)sub_180023320(&v184, v38);
          v139 = sub_180052550(*v138, v33);
          if ( v139 < 0 )
            break;
        }
        if ( (int)++v38 >= (int)v36 )
          goto LABEL_54;
      }
      sub_18004BD84(
        retaddr,
        508LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (unsigned int)v139);
      sub_180032210(&v184);
      if ( v33 == -56 )
        goto LABEL_57;
    }
    else
    {
LABEL_54:
      if ( v35 )
      {
        if ( (int)v36 > 0 )
        {
          v140 = v35;
          do
          {
            sub_1800322B0(v140);
            v140 += 16LL;
            --v36;
          }
          while ( v36 );
        }
        _o_free(v35);
        v184 = 0LL;
      }
      v185 = 0LL;
      if ( !v34 )
        goto LABEL_57;
    }
  }
  LeaveCriticalSection(v34);
LABEL_57:
  v8 = a1;
LABEL_58:
  if ( v18 >= *(_QWORD *)(v8 + 1688) )
  {
    v163 = sub_180118A38(v229, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v163);
  }
  v39 = *(_QWORD *)(v8 + 1696) + 96 * v18;
  if ( *(_BYTE *)(v39 + 52) )
  {
    v40 = (struct _RTL_CRITICAL_SECTION *)(v39 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v39 + 56));
    v210 = v39 + 56;
    v41 = 0LL;
    v175 = 0LL;
    v42 = 0LL;
    v176 = 0LL;
    v43 = 0;
    if ( *(int *)(v39 + 40) > 0 )
    {
      v44 = 0LL;
      while ( 1 )
      {
        if ( v44 < 0 || v30 >= *(_DWORD *)(v39 + 40) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v45 = *(_QWORD *)(v39 + 32);
        if ( (_DWORD)v42 == v43 )
        {
          if ( v43 )
          {
            v43 = 2 * (_DWORD)v42;
            if ( ((unsigned int)v42 & 0x40000000) != 0 )
              goto LABEL_312;
          }
          else
          {
            v43 = 1;
          }
          if ( (unsigned __int64)v43 > 0x7FFFFFF
            || (v46 = o__recalloc(v41, v43, 16LL), (v41 = (volatile signed __int32 **)v46) == 0LL) )
          {
LABEL_312:
            sub_18004BD84(
              retaddr,
              502LL,
              "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              2147942414LL);
            sub_180032210(&v175);
            if ( v39 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v39 + 56));
            v30 = 0;
            goto LABEL_91;
          }
          HIDWORD(v176) = v43;
          v175 = (volatile signed __int32 **)v46;
        }
        v47 = &v41[2 * (int)v42];
        if ( v47 )
        {
          *v47 = 0LL;
          v47[1] = 0LL;
          v48 = *(_QWORD *)(v44 + v45 + 8);
          if ( v48 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v48 + 8));
            v43 = HIDWORD(v176);
            LODWORD(v42) = v176;
            v41 = v175;
          }
          *v47 = *(volatile signed __int32 **)(v44 + v45);
          v47[1] = *(volatile signed __int32 **)(v44 + v45 + 8);
        }
        v42 = (volatile signed __int32 *)(unsigned int)((_DWORD)v42 + 1);
        LODWORD(v176) = (_DWORD)v42;
        ++v30;
        v44 += 16LL;
        if ( v30 >= *(_DWORD *)(v39 + 40) )
        {
          v40 = (struct _RTL_CRITICAL_SECTION *)(v39 + 56);
          break;
        }
      }
    }
    v30 = 0;
    v49 = 0LL;
    if ( (int)v42 <= 0 )
    {
LABEL_81:
      if ( v41 )
      {
        if ( (int)v42 > 0 )
        {
          ++v41;
          v49 = (unsigned int)v42;
          do
          {
            v42 = *v41;
            if ( *v41 && _InterlockedExchangeAdd(v42 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_321:
              (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v42);
            }
            v41 += 2;
            --v49;
          }
          while ( v49 );
          v41 = v175;
          v40 = (struct _RTL_CRITICAL_SECTION *)(v39 + 56);
        }
        _o_free(v41);
        v175 = 0LL;
      }
      v176 = 0LL;
      if ( v40 )
LABEL_90:
        LeaveCriticalSection(v40);
    }
    else
    {
      v50 = v41;
      while ( 1 )
      {
        if ( (int)v49 < 0 )
        {
          sub_1800BB2C8(3221225612LL);
          goto LABEL_321;
        }
        if ( *((_BYTE *)*v50 + 20) )
        {
          v141 = (_QWORD *)sub_180023320(&v175, (unsigned int)v49);
          v142 = sub_180052550(*v141, v39);
          if ( v142 < 0 )
            break;
        }
        v49 = (unsigned int)(v49 + 1);
        v50 += 2;
        if ( (int)v49 >= (int)v42 )
          goto LABEL_81;
      }
      sub_18004BD84(
        retaddr,
        508LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (unsigned int)v142);
      sub_180032210(&v175);
      if ( v40 )
        goto LABEL_90;
    }
LABEL_91:
    v18 = v189;
    v8 = a1;
  }
  if ( v18 >= *(_QWORD *)(v8 + 64) )
  {
    v162 = sub_180118A38(v228, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v162);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 72) + 4 * v18) )
  {
    v118 = a3;
    v30 = sub_18011C754(v8, (unsigned int)a3, 0LL, &v168);
    goto LABEL_242;
  }
  v186 = 0;
  v168 = 0LL;
  if ( v18 >= *(_QWORD *)(v8 + 1656) )
  {
    v161 = sub_180118A38(v227, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v161);
  }
  v51 = *(_QWORD *)(v8 + 1664) + 96 * v18;
  if ( !*(_BYTE *)(v51 + 52) )
    goto LABEL_127;
  EnterCriticalSection((LPCRITICAL_SECTION)(v51 + 56));
  v209 = v51 + 56;
  v52 = 0LL;
  v173 = 0LL;
  v53 = 0LL;
  v174 = 0LL;
  v54 = 0;
  v55 = 0;
  if ( *(int *)(v51 + 40) <= 0 )
  {
LABEL_111:
    v61 = 0LL;
    if ( (int)v53 <= 0 )
    {
LABEL_116:
      if ( v52 )
      {
        if ( (int)v53 > 0 )
        {
          v61 = (volatile signed __int32 **)(v52 + 8);
          v52 = (unsigned int)v53;
          do
          {
            v53 = *v61;
            if ( *v61 && _InterlockedExchangeAdd(v53 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_331:
              (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v53);
            }
            v61 += 2;
            --v52;
          }
          while ( v52 );
          v52 = v173;
          v30 = v186;
        }
        _o_free(v52);
        v173 = 0LL;
      }
      v174 = 0LL;
      v63 = (struct _RTL_CRITICAL_SECTION *)(v51 + 56);
      if ( v51 == -56 )
        goto LABEL_126;
    }
    else
    {
      v62 = v52;
      while ( 1 )
      {
        if ( (int)v61 < 0 )
        {
          sub_1800BB2C8(3221225612LL);
          goto LABEL_331;
        }
        if ( *(_BYTE *)(*(_QWORD *)v62 + 20LL) )
        {
          v143 = (_QWORD *)sub_180023320(&v173, (unsigned int)v61);
          v144 = sub_180052550(*v143, v51);
          if ( v144 < 0 )
            break;
        }
        v61 = (volatile signed __int32 **)(unsigned int)((_DWORD)v61 + 1);
        v62 += 16LL;
        if ( (int)v61 >= (int)v53 )
          goto LABEL_116;
      }
      sub_18004BD84(
        retaddr,
        508LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (unsigned int)v144);
      sub_180032210(&v173);
      v63 = (struct _RTL_CRITICAL_SECTION *)(v51 + 56);
      if ( v51 == -56 )
        goto LABEL_126;
    }
LABEL_125:
    LeaveCriticalSection(v63);
    goto LABEL_126;
  }
  v56 = 0LL;
  while ( 1 )
  {
    if ( v56 < 0 || v55 >= *(_DWORD *)(v51 + 40) )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v57 = *(_QWORD *)(v51 + 32);
    v197 = v57;
    if ( (_DWORD)v53 != v54 )
      goto LABEL_106;
    if ( v54 )
    {
      v54 = 2 * (_DWORD)v53;
      if ( ((unsigned int)v53 & 0x40000000) != 0 )
        break;
    }
    else
    {
      v54 = 1;
    }
    if ( (unsigned __int64)v54 > 0x7FFFFFF )
      break;
    v58 = o__recalloc(v52, v54, 16LL);
    v52 = v58;
    if ( !v58 )
      break;
    HIDWORD(v174) = v54;
    v173 = v58;
    v57 = v197;
LABEL_106:
    v59 = (_QWORD *)(v52 + 16LL * (int)v53);
    if ( v59 )
    {
      *v59 = 0LL;
      v59[1] = 0LL;
      v60 = *(_QWORD *)(v56 + v57 + 8);
      if ( v60 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v60 + 8));
        v54 = HIDWORD(v174);
        LODWORD(v53) = v174;
        v52 = v173;
      }
      *v59 = *(_QWORD *)(v56 + v57);
      v59[1] = *(_QWORD *)(v56 + v57 + 8);
    }
    v53 = (volatile signed __int32 *)(unsigned int)((_DWORD)v53 + 1);
    LODWORD(v174) = (_DWORD)v53;
    ++v55;
    v56 += 16LL;
    if ( v55 >= *(_DWORD *)(v51 + 40) )
      goto LABEL_111;
  }
  sub_18004BD84(retaddr, 502LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  sub_180032210(&v173);
  v63 = (struct _RTL_CRITICAL_SECTION *)(v51 + 56);
  if ( v51 != -56 )
    goto LABEL_125;
LABEL_126:
  v18 = v189;
  v8 = a1;
LABEL_127:
  if ( v18 >= *(_QWORD *)(v8 + 1672) )
  {
    v160 = sub_180118A38(v226, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v160);
  }
  v64 = *(_QWORD *)(v8 + 1680) + 96 * v18;
  if ( !*(_BYTE *)(v64 + 52) )
    goto LABEL_135;
  v65 = (struct _RTL_CRITICAL_SECTION *)(v64 + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(v64 + 56));
  v221 = v64 + 56;
  v66 = 0LL;
  v182 = 0LL;
  v67 = 0LL;
  v183 = 0LL;
  v68 = 0;
  if ( *(int *)(v64 + 40) > 0 )
  {
    while ( 1 )
    {
      v145 = sub_180023320(v64 + 32, v68);
      if ( !(unsigned int)sub_1800233E0(&v182, v145) )
        break;
      if ( (signed int)++v68 >= *(_DWORD *)(v64 + 40) )
      {
        v67 = (unsigned int)v183;
        v66 = v182;
        goto LABEL_130;
      }
    }
    sub_18004BD84(retaddr, 502LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
    sub_180032210(&v182);
    if ( v64 == -56 )
      goto LABEL_134;
LABEL_133:
    LeaveCriticalSection(v65);
    goto LABEL_134;
  }
LABEL_130:
  v69 = 0;
  if ( (int)v67 > 0 )
  {
    while ( 1 )
    {
      if ( *(_BYTE *)(*(_QWORD *)sub_180023320(&v182, v69) + 20LL) )
      {
        v146 = (_QWORD *)sub_180023320(&v182, v69);
        v147 = sub_180052550(*v146, v64);
        if ( v147 < 0 )
          break;
      }
      if ( (int)++v69 >= (int)v67 )
        goto LABEL_131;
    }
    sub_18004BD84(
      retaddr,
      508LL,
      "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
      (unsigned int)v147);
    sub_180032210(&v182);
    if ( v64 == -56 )
      goto LABEL_134;
    goto LABEL_133;
  }
LABEL_131:
  if ( v66 )
  {
    if ( (int)v67 > 0 )
    {
      v148 = v66;
      do
      {
        sub_1800322B0(v148);
        v148 += 16LL;
        --v67;
      }
      while ( v67 );
    }
    _o_free(v66);
    v182 = 0LL;
  }
  v183 = 0LL;
  if ( v65 )
    goto LABEL_133;
LABEL_134:
  v8 = a1;
LABEL_135:
  if ( v18 >= *(_QWORD *)(v8 + 1688) )
  {
    v159 = sub_180118A38(v225, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v159);
  }
  v70 = *(_QWORD *)(v8 + 1696) + 96 * v18;
  if ( *(_BYTE *)(v70 + 52) )
  {
    lpCriticalSection = (struct _RTL_CRITICAL_SECTION *)(v70 + 56);
    EnterCriticalSection((LPCRITICAL_SECTION)(v70 + 56));
    v214 = v70 + 56;
    v71 = 0LL;
    v171 = 0LL;
    v72 = 0LL;
    v172 = 0LL;
    v73 = 0;
    v74 = 0;
    if ( *(int *)(v70 + 40) > 0 )
    {
      v75 = 0LL;
      do
      {
        if ( v75 < 0 || v74 >= *(_DWORD *)(v70 + 40) )
        {
          sub_1800BB2C8(3221225612LL);
          __debugbreak();
        }
        v76 = *(_QWORD *)(v70 + 32);
        v197 = v76;
        if ( (_DWORD)v72 == v73 )
        {
          if ( v73 )
          {
            v73 = 2 * v72;
            if ( (v72 & 0x40000000) != 0 )
              goto LABEL_348;
          }
          else
          {
            v73 = 1;
          }
          if ( (unsigned __int64)v73 > 0x7FFFFFF
            || (v77 = o__recalloc(v71, v73, 16LL), (v71 = (volatile signed __int32 *)v77) == 0LL) )
          {
LABEL_348:
            sub_18004BD84(
              retaddr,
              502LL,
              "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
              2147942414LL);
            sub_180032210(&v171);
            goto LABEL_350;
          }
          HIDWORD(v172) = v73;
          v171 = (volatile signed __int32 *)v77;
          v76 = v197;
        }
        v78 = &v71[4 * (int)v72];
        if ( v78 )
        {
          *(_QWORD *)v78 = 0LL;
          *((_QWORD *)v78 + 1) = 0LL;
          v79 = *(_QWORD *)(v75 + v76 + 8);
          if ( v79 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v79 + 8));
            v73 = HIDWORD(v172);
            LODWORD(v72) = v172;
            v71 = v171;
          }
          *(_QWORD *)v78 = *(_QWORD *)(v75 + v76);
          *((_QWORD *)v78 + 1) = *(_QWORD *)(v75 + v76 + 8);
        }
        v72 = (unsigned int)(v72 + 1);
        LODWORD(v172) = v72;
        ++v74;
        v75 += 16LL;
      }
      while ( v74 < *(_DWORD *)(v70 + 40) );
    }
    v80 = 0LL;
    if ( (int)v72 <= 0 )
    {
LABEL_157:
      if ( v71 )
      {
        if ( (int)v72 > 0 )
        {
          v80 = (volatile signed __int32 **)(v71 + 2);
          do
          {
            v71 = *v80;
            if ( *v80 && _InterlockedExchangeAdd(v71 + 2, 0xFFFFFFFF) == 1 )
            {
LABEL_357:
              (**(void (__fastcall ***)(volatile signed __int32 *))v71)(v71);
              std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v71);
            }
            v80 += 2;
            --v72;
          }
          while ( v72 );
          v71 = v171;
          v30 = v186;
        }
        _o_free(v71);
        v171 = 0LL;
      }
      v172 = 0LL;
      if ( v70 != -56 )
        LeaveCriticalSection(lpCriticalSection);
    }
    else
    {
      v81 = v71;
      while ( 1 )
      {
        if ( (int)v80 < 0 )
        {
          sub_1800BB2C8(3221225612LL);
          goto LABEL_357;
        }
        if ( *(_BYTE *)(*(_QWORD *)v81 + 20LL) )
        {
          v149 = (_QWORD *)sub_180023320(&v171, (unsigned int)v80);
          v150 = sub_180052550(*v149, v70);
          if ( v150 < 0 )
            break;
        }
        v80 = (volatile signed __int32 **)(unsigned int)((_DWORD)v80 + 1);
        v81 += 4;
        if ( (int)v80 >= (int)v72 )
          goto LABEL_157;
      }
      sub_18004BD84(
        retaddr,
        508LL,
        "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (unsigned int)v150);
      sub_180032210(&v171);
LABEL_350:
      if ( v70 != -56 )
        LeaveCriticalSection(lpCriticalSection);
    }
    v18 = v189;
    v8 = a1;
  }
  if ( v18 >= *(_QWORD *)(v8 + 64) )
  {
    v158 = sub_180118A38(v224, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v158);
  }
  if ( !*(_DWORD *)(*(_QWORD *)(v8 + 72) + 4 * v18) )
    goto LABEL_241;
  v82 = 1;
  v83 = *(_QWORD *)(v8 + 80);
  if ( !v83 )
    goto LABEL_175;
  *(_OWORD *)pvar = 0LL;
  v206 = 0LL;
  if ( (*(int (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v83 + 40LL))(
         v83,
         &xmmword_18015B7F8,
         pvar) >= 0
    && LOWORD(pvar[0]) == 19 )
  {
    v82 = LODWORD(pvar[1]) == 0;
  }
  PropVariantClear(pvar);
  if ( v82 || (v84 = 0, a3 == 3) )
LABEL_175:
    v84 = 1;
  v85 = a2;
  v86 = *a2;
  v215 = *a2;
  if ( v18 >= *(_QWORD *)(v8 + 1656) )
  {
    v157 = sub_180118A38(v223, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v157);
  }
  v87 = *(_QWORD *)(v8 + 1664);
  v88 = v87 + 96 * v18;
  if ( !v84 )
  {
    if ( (unsigned int)sub_180022EE0(v87 + 96 * v18, &v215) != -1 )
      goto LABEL_201;
    goto LABEL_241;
  }
  v89 = *(_BYTE *)(v88 + 52) == 0;
  v216 = v86;
  v203 = v86;
  if ( v89 || (v90 = 0, *(int *)(v88 + 40) <= 0) )
  {
LABEL_186:
    v92 = 0;
    LODWORD(v93) = *(_DWORD *)(v88 + 40);
    if ( (int)v93 <= 0 )
      goto LABEL_373;
    v94 = 0LL;
    while ( 1 )
    {
      if ( v94 < 0 || v92 >= (int)v93 )
      {
        sub_1800BB2C8(3221225612LL);
        goto LABEL_387;
      }
      v95 = *(__int64 **)(v94 + *(_QWORD *)(v88 + 32));
      v96 = 0;
      v97 = *((_DWORD *)v95 + 2);
      if ( v97 > 0 )
      {
        v98 = *v95;
        while ( 1 )
        {
          v99 = *(_QWORD *)(v98 + 16LL * v96) - v203;
          if ( !v99 )
            v99 = *(_QWORD *)(v98 + 16LL * v96 + 8) - *((_QWORD *)&v203 + 1);
          if ( !v99 )
            break;
          if ( ++v96 >= v97 )
            goto LABEL_383;
        }
        if ( v96 != -1 )
          break;
      }
LABEL_383:
      ++v92;
      v94 += 16LL;
      if ( v92 >= (int)v93 )
        goto LABEL_373;
    }
    if ( v92 == -1 )
      goto LABEL_373;
    if ( v92 < 0 || v92 >= (int)v93 )
    {
      sub_1800BB2C8(3221225612LL);
      __debugbreak();
    }
    v100 = *(_QWORD *)(*(_QWORD *)(v88 + 32) + 16LL * v92);
  }
  else
  {
    v91 = 0LL;
    while ( 1 )
    {
      if ( v90 < 0 || v90 >= *(_DWORD *)(v88 + 40) )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      if ( *(_BYTE *)(*(_QWORD *)(v91 + *(_QWORD *)(v88 + 32)) + 20LL) )
      {
        v151 = (_QWORD *)sub_180023320(v88 + 32, (unsigned int)v90);
        if ( (unsigned int)sub_180022EE0(*v151, &v203) != -1 )
          break;
      }
      ++v90;
      v91 += 16LL;
      if ( v90 >= *(_DWORD *)(v88 + 40) )
        goto LABEL_185;
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
    v212 = v88 + 56;
    v152 = (_QWORD *)sub_180023320(v88 + 32, (unsigned int)v90);
    v207 = 0LL;
    v153 = (volatile signed __int32 *)v152[1];
    if ( v153 )
    {
      _InterlockedIncrement(v153 + 2);
      v153 = (volatile signed __int32 *)v152[1];
    }
    *(_QWORD *)&v207 = *v152;
    *((_QWORD *)&v207 + 1) = v153;
    if ( (int)sub_180052550(v207, v88) >= 0 )
    {
      if ( v153 )
        sub_180052600((std::_Ref_count_base *)v153);
      if ( v88 != -56 )
        LeaveCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
LABEL_185:
      v85 = a2;
      goto LABEL_186;
    }
    if ( v153 )
      sub_180052600((std::_Ref_count_base *)v153);
    if ( v88 != -56 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
    v85 = a2;
LABEL_373:
    if ( !*(_QWORD *)(v88 + 16) || (unsigned int)sub_180022EE0(*(_QWORD *)(v88 + 16), &v216) == -1 )
      v100 = 0LL;
  }
  if ( !v100 )
    goto LABEL_241;
LABEL_201:
  if ( v18 >= *(_QWORD *)(v8 + 1656) )
  {
    v156 = sub_180118A38(v222, "GSL: Precondition failure at oss\\gsl\\current\\include\\gsl\\span: 499");
    sub_180118968(v156);
  }
  v101 = *(_QWORD *)(v8 + 1664);
  v180 = 0LL;
  v168 = 0LL;
  v88 = v101 + 96 * v18;
  if ( !v88 )
    goto LABEL_238;
  v179 = 0LL;
  v217 = *v85;
  v204 = v217;
  v93 = 0LL;
  v102 = *(_DWORD *)(v88 + 40);
  if ( v102 > 0 )
  {
    v85 = 0LL;
    while ( 1 )
    {
      if ( (int)v93 < 0 || (int)v93 >= *(_DWORD *)(v88 + 40) )
      {
        sub_1800BB2C8(3221225612LL);
        __debugbreak();
      }
      if ( *(_BYTE *)(*(_QWORD *)((char *)v85 + *(_QWORD *)(v88 + 32)) + 20LL) )
      {
LABEL_387:
        v154 = (_QWORD *)sub_180023320(v88 + 32, (unsigned int)v93);
        if ( (unsigned int)sub_180022EE0(*v154, &v204) != -1 )
        {
          EnterCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
          v213 = v88 + 56;
          v155 = (_QWORD *)sub_180023320(v88 + 32, (unsigned int)v93);
          v208 = 0LL;
          v93 = v155[1];
          if ( v93 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v93 + 8));
            v93 = v155[1];
          }
          *(_QWORD *)&v208 = *v155;
          *((_QWORD *)&v208 + 1) = v93;
          if ( (int)sub_180052550(v208, v88) >= 0 )
          {
            if ( v93 )
              sub_180052600((std::_Ref_count_base *)v93);
            if ( v88 != -56 )
              LeaveCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
            v102 = *(_DWORD *)(v88 + 40);
LABEL_209:
            v85 = a2;
            break;
          }
          if ( v93 )
            sub_180052600((std::_Ref_count_base *)v93);
          if ( v88 != -56 )
            LeaveCriticalSection((LPCRITICAL_SECTION)(v88 + 56));
          v85 = a2;
LABEL_396:
          v93 = *(_QWORD *)(v88 + 16);
          if ( !v93 || (unsigned int)sub_180022EE0(*(_QWORD *)(v88 + 16), &v217) == -1 )
            v93 = 0LL;
          goto LABEL_224;
        }
      }
      v93 = (unsigned int)(v93 + 1);
      ++v85;
      v102 = *(_DWORD *)(v88 + 40);
      if ( (int)v93 >= v102 )
        goto LABEL_209;
    }
  }
  v103 = 0;
  if ( v102 <= 0 )
    goto LABEL_396;
  v104 = 0LL;
  while ( 1 )
  {
    if ( v104 < 0 || v103 >= *(_DWORD *)(v88 + 40) )
    {
      sub_1800BB2C8(3221225612LL);
      goto LABEL_410;
    }
    v105 = *(__int64 **)(v104 + *(_QWORD *)(v88 + 32));
    v106 = 0;
    v107 = *((_DWORD *)v105 + 2);
    if ( v107 > 0 )
    {
      v108 = *v105;
      while ( 1 )
      {
        v109 = *(_QWORD *)(v108 + 16LL * v106) - v204;
        if ( !v109 )
          v109 = *(_QWORD *)(v108 + 16LL * v106 + 8) - *((_QWORD *)&v204 + 1);
        if ( !v109 )
          break;
        if ( ++v106 >= v107 )
          goto LABEL_406;
      }
      if ( v106 != -1 )
        break;
    }
LABEL_406:
    ++v103;
    v104 += 16LL;
    if ( v103 >= *(_DWORD *)(v88 + 40) )
      goto LABEL_396;
  }
  if ( v103 == -1 )
    goto LABEL_396;
  if ( v103 < 0 || v103 >= *(_DWORD *)(v88 + 40) )
  {
    sub_1800BB2C8(3221225612LL);
    __debugbreak();
  }
  v93 = *(_QWORD *)(*(_QWORD *)(v88 + 32) + 16LL * v103);
LABEL_224:
  v110 = 0;
  v111 = 0LL;
  v179 = 0LL;
  if ( !v93 )
    goto LABEL_233;
  v110 = *(_DWORD *)(v93 + 48);
  v112 = v110 == 0;
  if ( v110 <= 0 )
    goto LABEL_234;
  v187 = 0LL;
  v113 = *(int *)(v93 + 48);
  if ( !*(_DWORD *)(v93 + 48) )
  {
LABEL_410:
    LODWORD(v115) = 0;
LABEL_231:
    v116 = CoTaskMemAlloc((unsigned int)v115);
    v111 = v116;
    v187 = v116;
    if ( !v116 )
      goto LABEL_412;
    memcpy(v116, *(const void **)(v93 + 40), 16LL * *(int *)(v93 + 48));
    v187 = 0LL;
    v179 = v111;
    CoTaskMemFree(0LL);
    v187 = 0LL;
    v110 = *(_DWORD *)(v93 + 48);
LABEL_233:
    v112 = v110 == 0;
LABEL_234:
    if ( !v112 )
    {
      v194 = 0;
      v202 = v111;
      v192 = v110;
      v193 = *(_DWORD *)(v8 + 188);
      v195 = 1;
      v117 = sub_1800326B0(
               (unsigned int)&v180,
               (unsigned int)&v195,
               (unsigned int)&v194,
               (unsigned int)&v193,
               (__int64)&v192,
               (__int64)&v202);
      v30 = v117;
      if ( v117 < 0 )
      {
        sub_18004BD84(
          retaddr,
          1203LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v117);
        CoTaskMemFree(v111);
        v179 = 0LL;
        sub_180020B78(&v180);
        goto LABEL_241;
      }
      v218 = *v85;
      v118 = a3;
      v119 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, int, __int64 **, _QWORD))(*(_QWORD *)v180 + 24LL))(
               v180,
               *(_QWORD *)(v8 + 16),
               &v218,
               0LL,
               a3,
               &v168,
               0LL);
      v30 = v119;
      if ( v119 < 0 )
      {
        sub_18004BD84(
          retaddr,
          1207LL,
          "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
          (unsigned int)v119);
        CoTaskMemFree(v111);
        v179 = 0LL;
        sub_180020B78(&v180);
        goto LABEL_242;
      }
    }
    CoTaskMemFree(v111);
    v179 = 0LL;
LABEL_238:
    if ( v180 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v180 + 16LL))(v180);
    v30 = 0;
    goto LABEL_241;
  }
  v114 = -1LL;
  if ( v113 != 1 )
    v114 = 0xFFFFFFFFFFFFFFFFuLL / v113;
  if ( v114 >= 0x10 )
  {
    v115 = 16 * v113;
    if ( v115 <= 0x7FFFFFFF )
      goto LABEL_231;
    v111 = 0LL;
    v187 = 0LL;
  }
LABEL_412:
  sub_18004BD84(retaddr, 626LL, "avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp", 2147942414LL);
  CoTaskMemFree(v111);
  v187 = 0LL;
  sub_18004BD84(
    retaddr,
    1193LL,
    "avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    2147942414LL);
  CoTaskMemFree(0LL);
  v179 = 0LL;
  sub_180020B78(&v180);
  v30 = -2147024882;
LABEL_241:
  v118 = a3;
LABEL_242:
  if ( v30 < 0 )
    goto LABEL_460;
  if ( !v168 )
  {
    v120 = v170;
    if ( (unsigned int)sub_18004BB48(v170) )
    {
      v30 = -2004287480;
    }
    else
    {
      if ( v120[1] != *((_DWORD *)v198 + 1)
        || *((_WORD *)v120 + 1) != *((_WORD *)v198 + 1)
        || !v166
        || (unsigned int)sub_18001FEF0(Src) )
      {
        v30 = 1;
        goto LABEL_257;
      }
      v30 = 0;
    }
    goto LABEL_270;
  }
  v188 = 0LL;
  v190 = 0LL;
  v181 = 0LL;
  v30 = sub_18001F490(v198, 0);
  if ( v30 < 0 )
  {
    if ( v181 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v181 + 16LL))(v181);
    if ( v188 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v188 + 16LL))(v188);
    goto LABEL_460;
  }
  v120 = v170;
  v30 = sub_18001F490(v170, 0);
  if ( v30 < 0 )
  {
    if ( v181 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v181 + 16LL))(v181);
    if ( v190 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v190 + 16LL))(v190);
    if ( v188 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v188 + 16LL))(v188);
  }
  else
  {
    v121 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8);
    v122 = v190;
    v123 = v188;
    v112 = v121 == 0;
    v124 = *v168;
    if ( v112 )
      v125 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v124 + 56))(v168, v188, v190, &v181);
    else
      v125 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, __int64 *))(v124 + 64))(v168, v188, v190, &v181);
    v30 = v125;
    if ( v125 < 0 )
    {
      if ( v181 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v181 + 16LL))(v181);
      if ( v122 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v122 + 16LL))(v122);
      if ( v123 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v123 + 16LL))(v123);
    }
    else
    {
      if ( v125 == 1 || (unsigned int)sub_18001FEF0(Src) )
        v30 = 1;
      if ( v181 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v181 + 16LL))(v181);
      if ( v122 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v122 + 16LL))(v122);
      if ( v123 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v123 + 16LL))(v123);
LABEL_257:
      if ( a6 && v30 )
      {
        v169 = 0LL;
        v199 = &v169;
        v200 = 0LL;
        v201 = 1;
        v219 = *a2;
        v126 = (int)sub_180012550(v8, v118, &v219, &v200) >= 0 && v169;
        if ( v201 )
        {
          v127 = *v199;
          *v199 = v200;
          if ( v127 )
            CoTaskMemFree(v127);
        }
        if ( v126 )
          v128 = (unsigned __int16 *)v169;
        else
          v128 = a4;
        v129 = v128[8];
        v130 = (void *)sub_18006A1B0(v129 + 18, &unk_18019F848);
        *a6 = v130;
        if ( v130 )
        {
          memcpy(v130, v128, v129 + 18);
          v30 = 1;
          v131 = v169;
          v169 = 0LL;
          if ( v131 )
            goto LABEL_269;
        }
        else
        {
          v30 = -2147024882;
          v131 = v169;
          v169 = 0LL;
          if ( v131 )
LABEL_269:
            CoTaskMemFree(v131);
        }
      }
    }
  }
LABEL_270:
  CoTaskMemFree(pv);
  pv = 0LL;
  CoTaskMemFree(v120);
  v196 = 0LL;
  if ( v168 )
    (*(void (__fastcall **)(__int64 *))(*v168 + 16))(v168);
  return (unsigned int)v30;
}
