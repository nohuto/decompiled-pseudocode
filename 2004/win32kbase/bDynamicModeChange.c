/*
 * XREFs of bDynamicModeChange @ 0x1C00BE134
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00B7324 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0027540 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C007FBC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0080D68 (PALLOCMEM2.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C008447C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgShareLockEx @ 0x1C0087EB0 (HmgShareLockEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0089440 (HmgDecrementShareReferenceCountEx.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00A609C (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00BE074 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C00BF0A0 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C00BF210 (HmgSafeNextObjt.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00C1150 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C00C1804 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00C1A7C (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00C1B48 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00C1BBC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C01462E4 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0146370 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(struct PDEV *a1, struct PDEV *a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r12d
  struct tagSIZE *v12; // rax
  struct tagSIZE v13; // rdi
  struct tagSIZE *v14; // rax
  struct SURFACE *v15; // r9
  struct SURFACE *v16; // rcx
  struct tagSIZE v17; // rbx
  __int64 cy; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  struct SURFACE *v21; // r15
  __int64 Objt; // rax
  __int64 v23; // r12
  bool v24; // zf
  struct SURFACE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  int *v29; // r13
  struct SURFACE *v30; // rdi
  struct SURFACE *v31; // rcx
  struct SURFACE *v32; // r12
  struct SURFACE **v33; // rax
  __int64 v34; // r8
  struct SURFACE **v35; // rbx
  struct PDEV *v36; // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rbx
  __int64 *v40; // rax
  int v41; // r8d
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // ecx
  int v46; // eax
  char *v47; // rax
  _OWORD *v48; // rdx
  __int64 v49; // r8
  _OWORD *v50; // rcx
  __int64 v51; // r9
  _OWORD *v52; // rax
  __int128 v53; // xmm1
  __int64 v54; // r9
  _OWORD *v55; // rcx
  _OWORD *v56; // rax
  __int128 v57; // xmm1
  _OWORD *v58; // rax
  __int64 v59; // rdx
  __int128 v60; // xmm1
  __int64 v61; // r9
  _OWORD *v62; // rax
  _OWORD *v63; // rdx
  _OWORD *v64; // rcx
  __int128 v65; // xmm1
  __int64 v66; // r9
  __int128 v67; // xmm1
  _OWORD *v68; // rdx
  _OWORD *v69; // rcx
  __int128 v70; // xmm1
  _OWORD *v71; // rax
  __int128 v72; // xmm1
  int *v73; // r11
  int v74; // ecx
  int v75; // r10d
  int v76; // ebx
  int v77; // ebx
  int v78; // ebx
  int v79; // ebx
  int v80; // ebx
  int v81; // ebx
  int v82; // ecx
  int v83; // ett
  int v84; // ett
  __int64 v85; // r8
  _OWORD *v86; // rcx
  __int64 v87; // r9
  _OWORD *v88; // rax
  _OWORD *v89; // rdx
  __int128 v90; // xmm1
  __int64 v91; // r9
  __int128 v92; // xmm1
  _OWORD *v93; // rdx
  _OWORD *v94; // rcx
  __int128 v95; // xmm1
  _OWORD *v96; // rax
  __int128 v97; // xmm1
  int v98; // eax
  char v100; // al
  __int64 v101; // rax
  struct PDEV *v102; // r8
  struct PDEV *v103; // rdx
  struct PDEV *v104; // rcx
  int v105; // r8d
  struct PDEV **v106; // rcx
  unsigned int v107; // r8d
  volatile unsigned int *v108; // r11
  unsigned int v109; // r8d
  volatile unsigned int *v110; // r11
  unsigned int v111; // r8d
  volatile unsigned int *v112; // r11
  unsigned int v113; // r8d
  volatile unsigned int *v114; // r11
  unsigned int v115; // r8d
  volatile unsigned int *v116; // r11
  unsigned int v117; // r8d
  volatile unsigned int *v118; // r11
  unsigned int v119; // r8d
  int v120; // r10d
  volatile unsigned int *v121; // r11
  struct SURFACE *v122; // [rsp+48h] [rbp-49h]
  struct SURFACE *v123; // [rsp+48h] [rbp-49h]
  __int64 v124; // [rsp+50h] [rbp-41h]
  int v125; // [rsp+58h] [rbp-39h]
  __int64 v126; // [rsp+60h] [rbp-31h]
  struct PDEV *v127; // [rsp+68h] [rbp-29h] BYREF
  struct PDEV *v128; // [rsp+70h] [rbp-21h] BYREF
  int v129; // [rsp+78h] [rbp-19h]
  int v130; // [rsp+7Ch] [rbp-15h]
  __int64 v131; // [rsp+80h] [rbp-11h]
  struct tagSIZE v132; // [rsp+88h] [rbp-9h]
  struct SURFACE *v133; // [rsp+90h] [rbp-1h]
  __int64 v134; // [rsp+98h] [rbp+7h]
  __int64 v135; // [rsp+A0h] [rbp+Fh]
  struct tagSIZE v136; // [rsp+A8h] [rbp+17h]
  void *v137; // [rsp+B0h] [rbp+1Fh]
  __int64 v138; // [rsp+B8h] [rbp+27h] BYREF
  __int64 v139; // [rsp+C0h] [rbp+2Fh] BYREF
  int v140; // [rsp+110h] [rbp+7Fh]

  v3 = 0;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange((HDEV)a1, (HDEV)a2) )
    return v3;
  v137 = PALLOCMEM2(0x840uLL, 0x706D7447u, 0);
  v7 = (__int64)v137;
  if ( !v137 )
    return v3;
  v8 = *((_DWORD *)a2 + 10) & 0x400;
  v127 = a1;
  v129 = v8;
  v9 = *((_DWORD *)a1 + 10) & 0x400;
  v128 = a2;
  v130 = v9;
  if ( qword_1C02515E0 )
    v10 = qword_1C02515E0();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    if ( qword_1C02515E8 )
    {
      qword_1C02515E8(a2);
      if ( qword_1C02515E8 )
        qword_1C02515E8(a1);
    }
  }
  v11 = 1;
  v125 = *((_DWORD *)a2 + 540) * *((_DWORD *)a2 + 541);
  v140 = *((_DWORD *)a1 + 540) * *((_DWORD *)a1 + 541);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_99;
  }
  v12 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v127, &v138);
  v133 = (struct SURFACE *)*((_QWORD *)a1 + 319);
  v13 = *v12;
  v134 = *((_QWORD *)a1 + 226);
  v131 = *((_QWORD *)a1 + 225);
  v132 = v13;
  v14 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v128, &v139);
  v16 = (struct SURFACE *)*((_QWORD *)a2 + 319);
  v122 = v16;
  v17 = *v14;
  v135 = *((_QWORD *)a2 + 226);
  v126 = *((_QWORD *)a2 + 225);
  v136 = v17;
  if ( v17.cx < v13.cx || (cy = (unsigned int)v132.cy, v17.cy < v132.cy) )
  {
    v100 = bDynamicIntersectVisRect(v15, v17);
    v16 = v122;
    cy = (unsigned int)v132.cy;
    v11 = v100 & 1;
  }
  if ( v13.cx < v17.cx || (int)cy < v136.cy )
    v11 &= bDynamicIntersectVisRect(v16, v13);
  v19 = *((_QWORD *)a2 + 343);
  if ( v19 && v19 == *((_QWORD *)a1 + 343) && *((_QWORD *)a2 + 224) == *((_QWORD *)a1 + 224) )
  {
    if ( !v11 )
      goto LABEL_103;
    v11 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 343))(v131, v126);
  }
  if ( !v11 )
  {
LABEL_103:
    v3 = 0;
    goto LABEL_99;
  }
  v20 = 0LL;
  v21 = v133;
  while ( 1 )
  {
    LOBYTE(cy) = 1;
    Objt = HmgSafeNextObjt(v20, cy);
    v23 = Objt;
    if ( !Objt )
      break;
    v24 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
    v20 = *(_QWORD *)Objt;
    v124 = v20;
    if ( v24 )
    {
      v25 = *(struct SURFACE **)(v23 + 496);
      if ( v25 == v21 )
      {
        DC::pSurface((DC *)v23, v122);
        *(struct tagSIZE *)(v23 + 512) = v17;
LABEL_30:
        *(_DWORD *)(v23 + 316) |= 0xFu;
        goto LABEL_22;
      }
      if ( v25 == v122 )
      {
        DC::pSurface((DC *)v23, v21);
        *(struct tagSIZE *)(v23 + 512) = v13;
        goto LABEL_30;
      }
LABEL_22:
      cy = *(unsigned int *)(v23 + 36);
      if ( (cy & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v23 + 496) + 112LL) & 0x200) != 0 )
        LODWORD(cy) = cy | 0x8000;
      else
        LODWORD(cy) = cy & 0xFFFF7FFF;
      v26 = *(_QWORD *)(v23 + 24);
      v27 = v131;
      *(_DWORD *)(v23 + 36) = cy;
      if ( v26 == v27 )
      {
        *(_QWORD *)(v23 + 24) = v126;
        *(_DWORD *)(v23 + 72) = *((_DWORD *)a2 + 456);
        v28 = *((_DWORD *)a2 + 532);
        goto LABEL_26;
      }
      v24 = v26 == v126;
      v20 = v124;
      if ( v24 )
      {
        *(_QWORD *)(v23 + 24) = v27;
        *(_DWORD *)(v23 + 72) = *((_DWORD *)a1 + 456);
        v28 = *((_DWORD *)a1 + 532);
LABEL_26:
        *(_DWORD *)(v23 + 76) = v28;
        v20 = v124;
      }
    }
  }
  v7 = (__int64)v137;
  v29 = (int *)((char *)a1 + 40);
  v30 = v122;
  v31 = 0LL;
  v32 = v133;
  while ( 1 )
  {
    LOBYTE(cy) = 5;
    v33 = (struct SURFACE **)HmgSafeNextObjt(v31, cy);
    v35 = v33;
    if ( !v33 )
      break;
    v31 = *v33;
    v36 = v33[6];
    v123 = v31;
    if ( v36 == a1 )
    {
      v38 = *((_DWORD *)v35 + 28);
      if ( (v38 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v35 + 29) & 0x2001) == 0x2001 )
        {
          v101 = WdLogNewEntry5_WdAssertion(v31, 8193LL, v34);
          WdLogEvent5_WdAssertion(v101);
          v31 = v123;
          v35[6] = a2;
        }
        if ( v140 != v125 && *((_DWORD *)v35 + 24) == *((_DWORD *)v32 + 24) )
        {
          v102 = a2;
          v103 = a1;
          goto LABEL_116;
        }
      }
      else if ( (v38 & 0x300000) == 0x200000 )
      {
        v35[6] = a2;
      }
    }
    else if ( v36 == a2 )
    {
      v37 = *((_DWORD *)v35 + 28);
      if ( (v37 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v35 + 29) & 0x2001) == 0x2001 )
          v35[6] = a1;
        if ( v140 != v125 && *((_DWORD *)v35 + 24) == *((_DWORD *)v30 + 24) )
        {
          v102 = a1;
          v103 = a2;
LABEL_116:
          vDynamicSwitchPalettes((struct SURFACE *)v35, v103, v102);
          v31 = v123;
        }
      }
      else if ( (v37 & 0x300000) == 0x200000 )
      {
        v35[6] = a1;
      }
    }
  }
  v39 = 0LL;
  while ( 1 )
  {
    LOBYTE(cy) = 28;
    v40 = (__int64 *)HmgSafeNextObjt(v39, cy);
    if ( !v40 )
      break;
    v104 = (struct PDEV *)v40[5];
    v39 = *v40;
    if ( v104 == a1 )
    {
      v40[5] = (__int64)a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v128, cy, v41);
      v106 = &v127;
      goto LABEL_123;
    }
    if ( v104 == a2 )
    {
      v40[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v127, cy, v41);
      v106 = &v128;
LABEL_123:
      PDEVOBJ::vUnreferencePdev(v106, 0, v105);
    }
  }
  vChangeWndObjs(v32, (HDEV)a1, v30, (HDEV)a2);
  v42 = HmgShareLockEx(WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, 16, 0);
  *(_QWORD *)(v7 + 976) = v7 + 544;
  *(_DWORD *)(v7 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
  v43 = *(_QWORD *)(v7 + 976);
  *(_DWORD *)(v7 + 120) = 0;
  *(_QWORD *)(v43 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush((char *)a1 + 1544, v7, v42, ppalDefault, v135, v30, 1);
  EBRUSHOBJ::vInitBrush((char *)a2 + 1544, v7, v42, ppalDefault, v134, v32, 1);
  HmgDecrementShareReferenceCountEx(v42, 0LL);
  *((_QWORD *)a2 + 226) = v134;
  *((_QWORD *)a2 + 225) = v131;
  v44 = v135;
  *((_QWORD *)a2 + 319) = v32;
  *((_QWORD *)a1 + 226) = v44;
  *((_QWORD *)a1 + 225) = v126;
  *((_QWORD *)a1 + 319) = v30;
  v45 = *((_DWORD *)v32 + 28);
  v46 = *((_DWORD *)v30 + 28);
  if ( (v45 & 0x10000000) != 0 )
  {
    *((_DWORD *)v30 + 28) = v46 | 0x10000000;
    if ( a1 != (struct PDEV *)-88LL
      && ((*((_DWORD *)a1 + 45) & 0x10000000) != 0 || (*((_DWORD *)a1 + 47) & 0x10000000) != 0) )
    {
      v47 = (char *)a2 + 88;
LABEL_55:
      if ( v47 )
      {
        *((_DWORD *)v47 + 23) |= 0x10000000u;
        *((_DWORD *)v47 + 25) |= 0x10000000u;
      }
    }
  }
  else if ( (v46 & 0x10000000) != 0 )
  {
    *((_DWORD *)v32 + 28) = v45 | 0x10000000;
    if ( a2 != (struct PDEV *)-88LL
      && ((*((_DWORD *)a2 + 45) & 0x10000000) != 0 || (*((_DWORD *)a2 + 47) & 0x10000000) != 0) )
    {
      v47 = (char *)a1 + 88;
      goto LABEL_55;
    }
  }
  v48 = (_OWORD *)((char *)a2 + 1824);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
  v49 = 2LL;
  v50 = (_OWORD *)v7;
  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
  v51 = 2LL;
  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
  v52 = (_OWORD *)((char *)a2 + 1824);
  do
  {
    *v50 = *v52;
    v50[1] = v52[1];
    v50[2] = v52[2];
    v50[3] = v52[3];
    v50[4] = v52[4];
    v50[5] = v52[5];
    v50[6] = v52[6];
    v50 += 8;
    v53 = v52[7];
    v52 += 8;
    *(v50 - 1) = v53;
    --v51;
  }
  while ( v51 );
  v54 = 2LL;
  *v50 = *v52;
  v50[1] = v52[1];
  v50[2] = v52[2];
  *((_QWORD *)v50 + 6) = *((_QWORD *)v52 + 6);
  v55 = (_OWORD *)((char *)a1 + 1824);
  v56 = (_OWORD *)((char *)a1 + 1824);
  do
  {
    *v48 = *v56;
    v48[1] = v56[1];
    v48[2] = v56[2];
    v48[3] = v56[3];
    v48[4] = v56[4];
    v48[5] = v56[5];
    v48[6] = v56[6];
    v48 += 8;
    v57 = v56[7];
    v56 += 8;
    *(v48 - 1) = v57;
    --v54;
  }
  while ( v54 );
  *v48 = *v56;
  v48[1] = v56[1];
  v48[2] = v56[2];
  *((_QWORD *)v48 + 6) = *((_QWORD *)v56 + 6);
  v58 = (_OWORD *)v7;
  v59 = 2LL;
  do
  {
    *v55 = *v58;
    v55[1] = v58[1];
    v55[2] = v58[2];
    v55[3] = v58[3];
    v55[4] = v58[4];
    v55[5] = v58[5];
    v55[6] = v58[6];
    v55 += 8;
    v60 = v58[7];
    v58 += 8;
    *(v55 - 1) = v60;
    --v59;
  }
  while ( v59 );
  v61 = 2LL;
  *v55 = *v58;
  v55[1] = v58[1];
  v55[2] = v58[2];
  *((_QWORD *)v55 + 6) = *((_QWORD *)v58 + 6);
  v62 = (_OWORD *)((char *)a2 + 2136);
  v63 = (_OWORD *)((char *)a2 + 2136);
  v64 = (_OWORD *)v7;
  do
  {
    *v64 = *v63;
    v64[1] = v63[1];
    v64[2] = v63[2];
    v64[3] = v63[3];
    v64[4] = v63[4];
    v64[5] = v63[5];
    v64[6] = v63[6];
    v64 += 8;
    v65 = v63[7];
    v63 += 8;
    *(v64 - 1) = v65;
    --v61;
  }
  while ( v61 );
  v66 = 2LL;
  *v64 = *v63;
  v64[1] = v63[1];
  v64[2] = v63[2];
  v67 = v63[3];
  v68 = (_OWORD *)((char *)a1 + 2136);
  v64[3] = v67;
  v69 = (_OWORD *)((char *)a1 + 2136);
  do
  {
    *v62 = *v69;
    v62[1] = v69[1];
    v62[2] = v69[2];
    v62[3] = v69[3];
    v62[4] = v69[4];
    v62[5] = v69[5];
    v62[6] = v69[6];
    v62 += 8;
    v70 = v69[7];
    v69 += 8;
    *(v62 - 1) = v70;
    --v66;
  }
  while ( v66 );
  *v62 = *v69;
  v62[1] = v69[1];
  v62[2] = v69[2];
  v62[3] = v69[3];
  v71 = (_OWORD *)v7;
  do
  {
    *v68 = *v71;
    v68[1] = v71[1];
    v68[2] = v71[2];
    v68[3] = v71[3];
    v68[4] = v71[4];
    v68[5] = v71[5];
    v68[6] = v71[6];
    v68 += 8;
    v72 = v71[7];
    v71 += 8;
    *(v68 - 1) = v72;
    --v49;
  }
  while ( v49 );
  *v68 = *v71;
  v68[1] = v71[1];
  v68[2] = v71[2];
  v68[3] = v71[3];
  *(_OWORD *)v7 = *(_OWORD *)((char *)a2 + 2456);
  *(_OWORD *)(v7 + 16) = *(_OWORD *)((char *)a2 + 2472);
  *(_OWORD *)(v7 + 32) = *(_OWORD *)((char *)a2 + 2488);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)((char *)a2 + 2504);
  *(_OWORD *)(v7 + 64) = *(_OWORD *)((char *)a2 + 2520);
  *(_OWORD *)(v7 + 80) = *(_OWORD *)((char *)a2 + 2536);
  *(_OWORD *)((char *)a2 + 2456) = *(_OWORD *)((char *)a1 + 2456);
  *(_OWORD *)((char *)a2 + 2472) = *(_OWORD *)((char *)a1 + 2472);
  *(_OWORD *)((char *)a2 + 2488) = *(_OWORD *)((char *)a1 + 2488);
  *(_OWORD *)((char *)a2 + 2504) = *(_OWORD *)((char *)a1 + 2504);
  *(_OWORD *)((char *)a2 + 2520) = *(_OWORD *)((char *)a1 + 2520);
  *(_OWORD *)((char *)a2 + 2536) = *(_OWORD *)((char *)a1 + 2536);
  *(_OWORD *)((char *)a1 + 2456) = *(_OWORD *)v7;
  *(_OWORD *)((char *)a1 + 2472) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)((char *)a1 + 2488) = *(_OWORD *)(v7 + 32);
  *(_OWORD *)((char *)a1 + 2504) = *(_OWORD *)(v7 + 48);
  *(_OWORD *)((char *)a1 + 2520) = *(_OWORD *)(v7 + 64);
  *(_OWORD *)((char *)a1 + 2536) = *(_OWORD *)(v7 + 80);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 320);
  *((_QWORD *)a2 + 320) = *((_QWORD *)a1 + 320);
  *((_QWORD *)a1 + 320) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 321);
  *((_QWORD *)a2 + 321) = *((_QWORD *)a1 + 321);
  *((_QWORD *)a1 + 321) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 322);
  *((_QWORD *)a2 + 322) = *((_QWORD *)a1 + 322);
  *((_QWORD *)a1 + 322) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 323);
  *((_QWORD *)a2 + 323) = *((_QWORD *)a1 + 323);
  *((_QWORD *)a1 + 323) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 324);
  *((_QWORD *)a2 + 324) = *((_QWORD *)a1 + 324);
  *((_QWORD *)a1 + 324) = *(_QWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 888);
  *((_DWORD *)a2 + 888) = *((_DWORD *)a1 + 888);
  *((_DWORD *)a1 + 888) = *(_DWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 325);
  v73 = (int *)((char *)a2 + 40);
  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 652);
  *((_DWORD *)a2 + 652) = *((_DWORD *)a1 + 652);
  *((_DWORD *)a1 + 652) = *(_DWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 653);
  *((_DWORD *)a2 + 653) = *((_DWORD *)a1 + 653);
  *((_DWORD *)a1 + 653) = *(_DWORD *)v7;
  v74 = *((_DWORD *)a2 + 10);
  v75 = *v29;
  v76 = *v29 & 0x20000;
  if ( v76 != (v74 & 0x20000) )
  {
    SETFLAG(v74 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000u);
    SETFLAG(v76, v108, v107);
    v74 = *v73;
    v75 = *v29;
  }
  v77 = v75 & 0x1000000;
  if ( (v75 & 0x1000000) != (v74 & 0x1000000) )
  {
    SETFLAG(v74 & 0x1000000, (volatile unsigned int *)a1 + 10, 0x1000000u);
    SETFLAG(v77, v110, v109);
    v74 = *v73;
    v75 = *v29;
  }
  v78 = v75 & 0x20000000;
  if ( (v75 & 0x20000000) != (v74 & 0x20000000) )
  {
    SETFLAG(v74 & 0x20000000, (volatile unsigned int *)a1 + 10, 0x20000000u);
    SETFLAG(v78, v112, v111);
    v74 = *v73;
    v75 = *v29;
  }
  v79 = v75 & 0x2000000;
  if ( (v75 & 0x2000000) != (v74 & 0x2000000) )
  {
    SETFLAG(v74 & 0x2000000, (volatile unsigned int *)a1 + 10, 0x2000000u);
    SETFLAG(v79, v114, v113);
    v74 = *v73;
    v75 = *v29;
  }
  v80 = v75 & 0x8000000;
  if ( (v75 & 0x8000000) != (v74 & 0x8000000) )
  {
    SETFLAG(v74 & 0x8000000, (volatile unsigned int *)a1 + 10, 0x8000000u);
    SETFLAG(v80, v116, v115);
    v74 = *v73;
    v75 = *v29;
  }
  v81 = v75 & 0x4000000;
  if ( (v75 & 0x4000000) != (v74 & 0x4000000) )
  {
    SETFLAG(v74 & 0x4000000, (volatile unsigned int *)a1 + 10, 0x4000000u);
    SETFLAG(v81, v118, v117);
    v74 = *v73;
    v75 = *v29;
  }
  v82 = v74 & 0x40000000;
  if ( (v75 & 0x40000000) != v82 )
  {
    SETFLAG(v82, (volatile unsigned int *)a1 + 10, 0x40000000u);
    SETFLAG(v120, v121, v119);
  }
  _m_prefetchw(v29);
  do
    v83 = *v29;
  while ( v83 != _InterlockedCompareExchange(v29, *v29 & 0xEFFFFFFF, *v29) );
  _m_prefetchw(v73);
  do
    v84 = *v73;
  while ( v84 != _InterlockedCompareExchange(v73, *v73 & 0xEFFFFFFF, *v73) );
  *((_QWORD *)a1 + 4) = 0LL;
  v85 = 6LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v86 = (_OWORD *)v7;
  v87 = 6LL;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 215);
  *((_QWORD *)a2 + 215) = *((_QWORD *)a1 + 215);
  *((_QWORD *)a1 + 215) = *(_QWORD *)v7;
  *(_OWORD *)v7 = *((_OWORD *)a2 + 91);
  *(_OWORD *)(v7 + 16) = *((_OWORD *)a2 + 92);
  *(_OWORD *)(v7 + 32) = *((_OWORD *)a2 + 93);
  *((_OWORD *)a2 + 91) = *((_OWORD *)a1 + 91);
  *((_OWORD *)a2 + 92) = *((_OWORD *)a1 + 92);
  *((_OWORD *)a2 + 93) = *((_OWORD *)a1 + 93);
  *((_OWORD *)a1 + 91) = *(_OWORD *)v7;
  *((_OWORD *)a1 + 92) = *(_OWORD *)(v7 + 16);
  *((_OWORD *)a1 + 93) = *(_OWORD *)(v7 + 32);
  *(_QWORD *)v7 = *((_QWORD *)a2 + 179);
  *((_QWORD *)a2 + 179) = *((_QWORD *)a1 + 179);
  *((_QWORD *)a1 + 179) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 180);
  *((_QWORD *)a2 + 180) = *((_QWORD *)a1 + 180);
  *((_QWORD *)a1 + 180) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 181);
  *((_QWORD *)a2 + 181) = *((_QWORD *)a1 + 181);
  *((_QWORD *)a1 + 181) = *(_QWORD *)v7;
  v88 = (_OWORD *)((char *)a2 + 2688);
  v89 = (_OWORD *)((char *)a2 + 2688);
  do
  {
    *v86 = *v89;
    v86[1] = v89[1];
    v86[2] = v89[2];
    v86[3] = v89[3];
    v86[4] = v89[4];
    v86[5] = v89[5];
    v86[6] = v89[6];
    v86 += 8;
    v90 = v89[7];
    v89 += 8;
    *(v86 - 1) = v90;
    --v87;
  }
  while ( v87 );
  v91 = 6LL;
  *v86 = *v89;
  v86[1] = v89[1];
  v86[2] = v89[2];
  v92 = v89[3];
  v93 = (_OWORD *)((char *)a1 + 2688);
  v86[3] = v92;
  v94 = (_OWORD *)((char *)a1 + 2688);
  do
  {
    *v88 = *v94;
    v88[1] = v94[1];
    v88[2] = v94[2];
    v88[3] = v94[3];
    v88[4] = v94[4];
    v88[5] = v94[5];
    v88[6] = v94[6];
    v88 += 8;
    v95 = v94[7];
    v94 += 8;
    *(v88 - 1) = v95;
    --v91;
  }
  while ( v91 );
  *v88 = *v94;
  v88[1] = v94[1];
  v88[2] = v94[2];
  v88[3] = v94[3];
  v96 = (_OWORD *)v7;
  do
  {
    *v93 = *v96;
    v93[1] = v96[1];
    v93[2] = v96[2];
    v93[3] = v96[3];
    v93[4] = v96[4];
    v93[5] = v96[5];
    v93[6] = v96[6];
    v93 += 8;
    v97 = v96[7];
    v96 += 8;
    *(v93 - 1) = v97;
    --v85;
  }
  while ( v85 );
  *v93 = *v96;
  v93[1] = v96[1];
  v93[2] = v96[2];
  v93[3] = v96[3];
  *(_QWORD *)v7 = *((_QWORD *)a2 + 216);
  *((_QWORD *)a2 + 216) = *((_QWORD *)a1 + 216);
  *((_QWORD *)a1 + 216) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 217);
  *((_QWORD *)a2 + 217) = *((_QWORD *)a1 + 217);
  *((_QWORD *)a1 + 217) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 219);
  *((_QWORD *)a2 + 219) = *((_QWORD *)a1 + 219);
  *((_QWORD *)a1 + 219) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 220);
  *((_QWORD *)a2 + 220) = *((_QWORD *)a1 + 220);
  *((_QWORD *)a1 + 220) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 221);
  *((_QWORD *)a2 + 221) = *((_QWORD *)a1 + 221);
  *((_QWORD *)a1 + 221) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 222);
  *((_QWORD *)a2 + 222) = *((_QWORD *)a1 + 222);
  *((_QWORD *)a1 + 222) = *(_QWORD *)v7;
  *(_DWORD *)v7 = *((_DWORD *)a2 + 661);
  *((_DWORD *)a2 + 661) = *((_DWORD *)a1 + 661);
  *((_DWORD *)a1 + 661) = *(_DWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 331);
  *((_QWORD *)a2 + 331) = *((_QWORD *)a1 + 331);
  *((_QWORD *)a1 + 331) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 332);
  *((_QWORD *)a2 + 332) = *((_QWORD *)a1 + 332);
  *((_QWORD *)a1 + 332) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 334);
  *((_QWORD *)a2 + 334) = *((_QWORD *)a1 + 334);
  *((_QWORD *)a1 + 334) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 335);
  *((_QWORD *)a2 + 335) = *((_QWORD *)a1 + 335);
  *((_QWORD *)a1 + 335) = *(_QWORD *)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 333);
  *((_QWORD *)a2 + 333) = *((_QWORD *)a1 + 333);
  *((_QWORD *)a1 + 333) = *(_QWORD *)v7;
  (*((void (__fastcall **)(_QWORD, struct PDEV *))a2 + 337))(*((_QWORD *)a2 + 225), a2);
  (*((void (__fastcall **)(_QWORD, struct PDEV *))a1 + 337))(*((_QWORD *)a1 + 225), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v127, v129);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v128, v130);
  vResetSurfacePalette((HDEV)a1);
  vResetSurfacePalette((HDEV)a2);
  if ( qword_1C02515F0 )
    v98 = qword_1C02515F0();
  else
    v98 = -1073741637;
  if ( v98 >= 0 && qword_1C02515F8 )
    qword_1C02515F8(a1, a2);
  ++gcModeChanges;
  v3 = 1;
LABEL_99:
  Win32FreePool(v7);
  if ( qword_1C02512C8 )
  {
    qword_1C02512C8(a2);
    if ( qword_1C02512C8 )
      qword_1C02512C8(a1);
  }
  return v3;
}
