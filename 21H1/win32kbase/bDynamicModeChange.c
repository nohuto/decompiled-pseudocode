/*
 * XREFs of bDynamicModeChange @ 0x1C0099854
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C00AF6FC (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C00058E0 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C00177C0 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C004C084 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C004DF64 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C004E7DC (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C007D4D8 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C008B8E0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     PALLOCMEM2 @ 0x1C008D744 (PALLOCMEM2.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0099794 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C009A7C0 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C009A930 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C009B1C4 (-SETFLAG@@YAXHAECKK@Z.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C00B69CC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C014C634 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C014C6C0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // r15
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r12d
  __int64 cy; // rdx
  __int64 v13; // r8
  struct tagSIZE *v14; // rax
  struct tagSIZE v15; // rdi
  struct tagSIZE *v16; // rax
  struct SURFACE *v17; // r9
  struct SURFACE *v18; // rcx
  struct tagSIZE v19; // rbx
  __int64 v20; // rax
  struct SURFACE *v21; // r15
  __int64 Objt; // rax
  __int64 v23; // r12
  bool v24; // zf
  struct SURFACE *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // eax
  HDEV v29; // r13
  struct SURFACE *v30; // rdi
  struct SURFACE *v31; // rcx
  struct SURFACE *v32; // r12
  struct SURFACE **v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  struct SURFACE **v36; // rbx
  HDEV v37; // rax
  int v38; // eax
  int v39; // eax
  __int64 v40; // rbx
  __int64 *v41; // rax
  int v42; // r8d
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  int v46; // ecx
  int v47; // eax
  HDEV v48; // rax
  HDEV v49; // rdx
  __int64 v50; // r8
  _OWORD *v51; // rcx
  __int64 v52; // r9
  HDEV v53; // rax
  __int128 v54; // xmm1
  __int64 v55; // r9
  HDEV v56; // rcx
  HDEV v57; // rax
  __int128 v58; // xmm1
  _OWORD *v59; // rax
  __int64 v60; // rdx
  __int128 v61; // xmm1
  __int64 v62; // r9
  HDEV v63; // rax
  HDEV v64; // rdx
  _OWORD *v65; // rcx
  __int128 v66; // xmm1
  __int64 v67; // r9
  __int128 v68; // xmm1
  HDEV v69; // rdx
  HDEV v70; // rcx
  __int128 v71; // xmm1
  _OWORD *v72; // rax
  __int128 v73; // xmm1
  HDEV v74; // r11
  signed __int32 v75; // ecx
  signed __int32 v76; // r10d
  int v77; // ebx
  int v78; // ebx
  int v79; // ebx
  int v80; // ebx
  int v81; // ebx
  int v82; // ebx
  int v83; // ecx
  signed __int32 v84; // ett
  signed __int32 v85; // ett
  __int64 v86; // r8
  _OWORD *v87; // rcx
  __int64 v88; // r9
  HDEV v89; // rax
  HDEV v90; // rdx
  __int128 v91; // xmm1
  __int64 v92; // r9
  __int128 v93; // xmm1
  HDEV v94; // rdx
  HDEV v95; // rcx
  __int128 v96; // xmm1
  _OWORD *v97; // rax
  __int128 v98; // xmm1
  int v99; // eax
  char v101; // al
  __int64 v102; // rax
  HDEV v103; // r8
  HDEV v104; // rdx
  HDEV v105; // rcx
  int v106; // r8d
  HDEV *v107; // rcx
  unsigned int v108; // r8d
  volatile unsigned int *v109; // r11
  unsigned int v110; // r8d
  volatile unsigned int *v111; // r11
  unsigned int v112; // r8d
  volatile unsigned int *v113; // r11
  unsigned int v114; // r8d
  volatile unsigned int *v115; // r11
  unsigned int v116; // r8d
  volatile unsigned int *v117; // r11
  unsigned int v118; // r8d
  volatile unsigned int *v119; // r11
  unsigned int v120; // r8d
  int v121; // r10d
  volatile unsigned int *v122; // r11
  struct SURFACE *v123; // [rsp+48h] [rbp-49h]
  struct SURFACE *v124; // [rsp+48h] [rbp-49h]
  __int64 v125; // [rsp+50h] [rbp-41h]
  int v126; // [rsp+58h] [rbp-39h]
  __int64 v127; // [rsp+60h] [rbp-31h]
  HDEV v128; // [rsp+68h] [rbp-29h] BYREF
  HDEV v129; // [rsp+70h] [rbp-21h] BYREF
  int v130; // [rsp+78h] [rbp-19h]
  int v131; // [rsp+7Ch] [rbp-15h]
  __int64 v132; // [rsp+80h] [rbp-11h]
  struct tagSIZE v133; // [rsp+88h] [rbp-9h]
  struct SURFACE *v134; // [rsp+90h] [rbp-1h]
  __int64 v135; // [rsp+98h] [rbp+7h]
  __int64 v136; // [rsp+A0h] [rbp+Fh]
  struct tagSIZE v137; // [rsp+A8h] [rbp+17h]
  void *v138; // [rsp+B0h] [rbp+1Fh]
  int v139; // [rsp+110h] [rbp+7Fh]

  v3 = 0;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
    return v3;
  v138 = PALLOCMEM2(0x840uLL, 0x706D7447u, 0);
  v7 = (__int64)v138;
  if ( !v138 )
    return v3;
  v8 = (_DWORD)a2[10] & 0x400;
  v128 = a1;
  v130 = v8;
  v9 = (_DWORD)a1[10] & 0x400;
  v129 = a2;
  v131 = v9;
  if ( qword_1C02575A0 )
    v10 = qword_1C02575A0();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    if ( qword_1C02575A8 )
    {
      qword_1C02575A8(a2);
      if ( qword_1C02575A8 )
        qword_1C02575A8(a1);
    }
  }
  v11 = 1;
  v126 = *((_DWORD *)a2 + 540) * *((_DWORD *)a2 + 541);
  v139 = *((_DWORD *)a1 + 540) * *((_DWORD *)a1 + 541);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_99;
  }
  v14 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v128);
  v134 = (struct SURFACE *)*((_QWORD *)a1 + 319);
  v15 = *v14;
  v135 = *((_QWORD *)a1 + 226);
  v132 = *((_QWORD *)a1 + 225);
  v133 = v15;
  v16 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v129);
  v18 = (struct SURFACE *)*((_QWORD *)a2 + 319);
  v123 = v18;
  v19 = *v16;
  v136 = *((_QWORD *)a2 + 226);
  v127 = *((_QWORD *)a2 + 225);
  v137 = v19;
  if ( v19.cx < v15.cx || (cy = (unsigned int)v133.cy, v19.cy < v133.cy) )
  {
    v101 = bDynamicIntersectVisRect(v17, v19);
    v18 = v123;
    cy = (unsigned int)v133.cy;
    v11 = v101 & 1;
  }
  if ( v15.cx < v19.cx || (int)cy < v137.cy )
    v11 &= bDynamicIntersectVisRect(v18, v15);
  v13 = *((_QWORD *)a2 + 343);
  if ( v13 && v13 == *((_QWORD *)a1 + 343) && *((_QWORD *)a2 + 224) == *((_QWORD *)a1 + 224) )
  {
    if ( !v11 )
      goto LABEL_103;
    v11 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 343))(v132, v127);
  }
  if ( !v11 )
  {
LABEL_103:
    v3 = 0;
    goto LABEL_99;
  }
  v20 = 0LL;
  v21 = v134;
  while ( 1 )
  {
    LOBYTE(cy) = 1;
    Objt = HmgSafeNextObjt(v20, cy);
    v23 = Objt;
    if ( !Objt )
      break;
    v24 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
    v20 = *(_QWORD *)Objt;
    v125 = v20;
    if ( v24 )
    {
      v25 = *(struct SURFACE **)(v23 + 496);
      if ( v25 == v21 )
      {
        DC::pSurface((DC *)v23, v123);
        *(struct tagSIZE *)(v23 + 512) = v19;
LABEL_30:
        *(_DWORD *)(v23 + 316) |= 0xFu;
        goto LABEL_22;
      }
      if ( v25 == v123 )
      {
        DC::pSurface((DC *)v23, v21);
        *(struct tagSIZE *)(v23 + 512) = v15;
        goto LABEL_30;
      }
LABEL_22:
      cy = *(unsigned int *)(v23 + 36);
      if ( (cy & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v23 + 496) + 112LL) & 0x200) != 0 )
        LODWORD(cy) = cy | 0x8000;
      else
        LODWORD(cy) = cy & 0xFFFF7FFF;
      v26 = *(_QWORD *)(v23 + 24);
      v27 = v132;
      *(_DWORD *)(v23 + 36) = cy;
      if ( v26 == v27 )
      {
        *(_QWORD *)(v23 + 24) = v127;
        *(_DWORD *)(struct HDEV__ *)(v23 + 72) = a2[456];
        v28 = *((_DWORD *)a2 + 532);
        goto LABEL_26;
      }
      v24 = v26 == v127;
      v20 = v125;
      if ( v24 )
      {
        *(_QWORD *)(v23 + 24) = v27;
        *(_DWORD *)(struct HDEV__ *)(v23 + 72) = a1[456];
        v28 = *((_DWORD *)a1 + 532);
LABEL_26:
        *(_DWORD *)(v23 + 76) = v28;
        v20 = v125;
      }
    }
  }
  v7 = (__int64)v138;
  v29 = a1 + 10;
  v30 = v123;
  v31 = 0LL;
  v32 = v134;
  while ( 1 )
  {
    LOBYTE(cy) = 5;
    v33 = (struct SURFACE **)HmgSafeNextObjt(v31, cy);
    v36 = v33;
    if ( !v33 )
      break;
    v31 = *v33;
    v37 = (HDEV)v33[6];
    v124 = v31;
    if ( v37 == a1 )
    {
      v39 = *((_DWORD *)v36 + 28);
      if ( (v39 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v36 + 29) & 0x2001) == 0x2001 )
        {
          v102 = WdLogNewEntry5_WdAssertion(v31, 8193LL, v34, v35);
          WdLogEvent5_WdAssertion(v102);
          v31 = v124;
          v36[6] = (struct SURFACE *)a2;
        }
        if ( v139 != v126 && *((_DWORD *)v36 + 24) == *((_DWORD *)v32 + 24) )
        {
          v103 = a2;
          v104 = a1;
          goto LABEL_116;
        }
      }
      else if ( (v39 & 0x300000) == 0x200000 )
      {
        v36[6] = (struct SURFACE *)a2;
      }
    }
    else if ( v37 == a2 )
    {
      v38 = *((_DWORD *)v36 + 28);
      if ( (v38 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v36 + 29) & 0x2001) == 0x2001 )
          v36[6] = (struct SURFACE *)a1;
        if ( v139 != v126 && *((_DWORD *)v36 + 24) == *((_DWORD *)v30 + 24) )
        {
          v103 = a1;
          v104 = a2;
LABEL_116:
          vDynamicSwitchPalettes((struct SURFACE *)v36, (struct PDEV *)v104, (struct PDEV *)v103);
          v31 = v124;
        }
      }
      else if ( (v38 & 0x300000) == 0x200000 )
      {
        v36[6] = (struct SURFACE *)a1;
      }
    }
  }
  v40 = 0LL;
  while ( 1 )
  {
    LOBYTE(cy) = 28;
    v41 = (__int64 *)HmgSafeNextObjt(v40, cy);
    if ( !v41 )
      break;
    v105 = (HDEV)v41[5];
    v40 = *v41;
    if ( v105 == a1 )
    {
      v41[5] = (__int64)a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v129, cy, v42);
      v107 = &v128;
      goto LABEL_123;
    }
    if ( v105 == a2 )
    {
      v41[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v128, cy, v42);
      v107 = &v129;
LABEL_123:
      PDEVOBJ::vUnreferencePdev((struct PDEV **)v107, 0, v106);
    }
  }
  vChangeWndObjs(v32, a1, v30, a2);
  v43 = HmgShareLockEx((unsigned int)WPP_MAIN_CB.Queue.Wcb.DeviceObject, 16, 0);
  *(_QWORD *)(v7 + 976) = v7 + 544;
  *(_DWORD *)(v7 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
  v44 = *(_QWORD *)(v7 + 976);
  *(_DWORD *)(v7 + 120) = 0;
  *(_QWORD *)(v44 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush((int *)a1 + 386, v7, v43, (__int64)ppalDefault, v136, (__int64)v30, 1u);
  EBRUSHOBJ::vInitBrush((int *)a2 + 386, v7, v43, (__int64)ppalDefault, v135, (__int64)v32, 1u);
  HmgDecrementShareReferenceCountEx(v43, 0LL);
  *((_QWORD *)a2 + 226) = v135;
  *((_QWORD *)a2 + 225) = v132;
  v45 = v136;
  *((_QWORD *)a2 + 319) = v32;
  *((_QWORD *)a1 + 226) = v45;
  *((_QWORD *)a1 + 225) = v127;
  *((_QWORD *)a1 + 319) = v30;
  v46 = *((_DWORD *)v32 + 28);
  v47 = *((_DWORD *)v30 + 28);
  if ( (v46 & 0x10000000) != 0 )
  {
    *((_DWORD *)v30 + 28) = v47 | 0x10000000;
    if ( a1 != (HDEV)-88LL && (((_DWORD)a1[45] & 0x10000000) != 0 || ((_DWORD)a1[47] & 0x10000000) != 0) )
    {
      v48 = a2 + 22;
LABEL_55:
      if ( v48 )
      {
        *((_DWORD *)v48 + 23) |= 0x10000000u;
        *((_DWORD *)v48 + 25) |= 0x10000000u;
      }
    }
  }
  else if ( (v47 & 0x10000000) != 0 )
  {
    *((_DWORD *)v32 + 28) = v46 | 0x10000000;
    if ( a2 != (HDEV)-88LL && (((_DWORD)a2[45] & 0x10000000) != 0 || ((_DWORD)a2[47] & 0x10000000) != 0) )
    {
      v48 = a1 + 22;
      goto LABEL_55;
    }
  }
  v49 = a2 + 456;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
  v50 = 2LL;
  v51 = (_OWORD *)v7;
  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
  v52 = 2LL;
  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
  v53 = a2 + 456;
  do
  {
    *v51 = *(_OWORD *)v53;
    v51[1] = *((_OWORD *)v53 + 1);
    v51[2] = *((_OWORD *)v53 + 2);
    v51[3] = *((_OWORD *)v53 + 3);
    v51[4] = *((_OWORD *)v53 + 4);
    v51[5] = *((_OWORD *)v53 + 5);
    v51[6] = *((_OWORD *)v53 + 6);
    v51 += 8;
    v54 = *((_OWORD *)v53 + 7);
    v53 += 32;
    *(v51 - 1) = v54;
    --v52;
  }
  while ( v52 );
  v55 = 2LL;
  *v51 = *(_OWORD *)v53;
  v51[1] = *((_OWORD *)v53 + 1);
  v51[2] = *((_OWORD *)v53 + 2);
  *((_QWORD *)v51 + 6) = *((_QWORD *)v53 + 6);
  v56 = a1 + 456;
  v57 = a1 + 456;
  do
  {
    *(_OWORD *)v49 = *(_OWORD *)v57;
    *((_OWORD *)v49 + 1) = *((_OWORD *)v57 + 1);
    *((_OWORD *)v49 + 2) = *((_OWORD *)v57 + 2);
    *((_OWORD *)v49 + 3) = *((_OWORD *)v57 + 3);
    *((_OWORD *)v49 + 4) = *((_OWORD *)v57 + 4);
    *((_OWORD *)v49 + 5) = *((_OWORD *)v57 + 5);
    *((_OWORD *)v49 + 6) = *((_OWORD *)v57 + 6);
    v49 += 32;
    v58 = *((_OWORD *)v57 + 7);
    v57 += 32;
    *((_OWORD *)v49 - 1) = v58;
    --v55;
  }
  while ( v55 );
  *(_OWORD *)v49 = *(_OWORD *)v57;
  *((_OWORD *)v49 + 1) = *((_OWORD *)v57 + 1);
  *((_OWORD *)v49 + 2) = *((_OWORD *)v57 + 2);
  *((_QWORD *)v49 + 6) = *((_QWORD *)v57 + 6);
  v59 = (_OWORD *)v7;
  v60 = 2LL;
  do
  {
    *(_OWORD *)v56 = *v59;
    *((_OWORD *)v56 + 1) = v59[1];
    *((_OWORD *)v56 + 2) = v59[2];
    *((_OWORD *)v56 + 3) = v59[3];
    *((_OWORD *)v56 + 4) = v59[4];
    *((_OWORD *)v56 + 5) = v59[5];
    *((_OWORD *)v56 + 6) = v59[6];
    v56 += 32;
    v61 = v59[7];
    v59 += 8;
    *((_OWORD *)v56 - 1) = v61;
    --v60;
  }
  while ( v60 );
  v62 = 2LL;
  *(_OWORD *)v56 = *v59;
  *((_OWORD *)v56 + 1) = v59[1];
  *((_OWORD *)v56 + 2) = v59[2];
  *((_QWORD *)v56 + 6) = *((_QWORD *)v59 + 6);
  v63 = a2 + 534;
  v64 = a2 + 534;
  v65 = (_OWORD *)v7;
  do
  {
    *v65 = *(_OWORD *)v64;
    v65[1] = *((_OWORD *)v64 + 1);
    v65[2] = *((_OWORD *)v64 + 2);
    v65[3] = *((_OWORD *)v64 + 3);
    v65[4] = *((_OWORD *)v64 + 4);
    v65[5] = *((_OWORD *)v64 + 5);
    v65[6] = *((_OWORD *)v64 + 6);
    v65 += 8;
    v66 = *((_OWORD *)v64 + 7);
    v64 += 32;
    *(v65 - 1) = v66;
    --v62;
  }
  while ( v62 );
  v67 = 2LL;
  *v65 = *(_OWORD *)v64;
  v65[1] = *((_OWORD *)v64 + 1);
  v65[2] = *((_OWORD *)v64 + 2);
  v68 = *((_OWORD *)v64 + 3);
  v69 = a1 + 534;
  v65[3] = v68;
  v70 = a1 + 534;
  do
  {
    *(_OWORD *)v63 = *(_OWORD *)v70;
    *((_OWORD *)v63 + 1) = *((_OWORD *)v70 + 1);
    *((_OWORD *)v63 + 2) = *((_OWORD *)v70 + 2);
    *((_OWORD *)v63 + 3) = *((_OWORD *)v70 + 3);
    *((_OWORD *)v63 + 4) = *((_OWORD *)v70 + 4);
    *((_OWORD *)v63 + 5) = *((_OWORD *)v70 + 5);
    *((_OWORD *)v63 + 6) = *((_OWORD *)v70 + 6);
    v63 += 32;
    v71 = *((_OWORD *)v70 + 7);
    v70 += 32;
    *((_OWORD *)v63 - 1) = v71;
    --v67;
  }
  while ( v67 );
  *(_OWORD *)v63 = *(_OWORD *)v70;
  *((_OWORD *)v63 + 1) = *((_OWORD *)v70 + 1);
  *((_OWORD *)v63 + 2) = *((_OWORD *)v70 + 2);
  *((_OWORD *)v63 + 3) = *((_OWORD *)v70 + 3);
  v72 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v69 = *v72;
    *((_OWORD *)v69 + 1) = v72[1];
    *((_OWORD *)v69 + 2) = v72[2];
    *((_OWORD *)v69 + 3) = v72[3];
    *((_OWORD *)v69 + 4) = v72[4];
    *((_OWORD *)v69 + 5) = v72[5];
    *((_OWORD *)v69 + 6) = v72[6];
    v69 += 32;
    v73 = v72[7];
    v72 += 8;
    *((_OWORD *)v69 - 1) = v73;
    --v50;
  }
  while ( v50 );
  *(_OWORD *)v69 = *v72;
  *((_OWORD *)v69 + 1) = v72[1];
  *((_OWORD *)v69 + 2) = v72[2];
  *((_OWORD *)v69 + 3) = v72[3];
  *(_OWORD *)v7 = *(_OWORD *)(a2 + 614);
  *(_OWORD *)(v7 + 16) = *(_OWORD *)(a2 + 618);
  *(_OWORD *)(v7 + 32) = *(_OWORD *)(a2 + 622);
  *(_OWORD *)(v7 + 48) = *(_OWORD *)(a2 + 626);
  *(_OWORD *)(v7 + 64) = *(_OWORD *)(a2 + 630);
  *(_OWORD *)(v7 + 80) = *(_OWORD *)(a2 + 634);
  *(_OWORD *)(a2 + 614) = *(_OWORD *)(a1 + 614);
  *(_OWORD *)(a2 + 618) = *(_OWORD *)(a1 + 618);
  *(_OWORD *)(a2 + 622) = *(_OWORD *)(a1 + 622);
  *(_OWORD *)(a2 + 626) = *(_OWORD *)(a1 + 626);
  *(_OWORD *)(a2 + 630) = *(_OWORD *)(a1 + 630);
  *(_OWORD *)(a2 + 634) = *(_OWORD *)(a1 + 634);
  *(_OWORD *)(a1 + 614) = *(_OWORD *)v7;
  *(_OWORD *)(a1 + 618) = *(_OWORD *)(v7 + 16);
  *(_OWORD *)(a1 + 622) = *(_OWORD *)(v7 + 32);
  *(_OWORD *)(a1 + 626) = *(_OWORD *)(v7 + 48);
  *(_OWORD *)(a1 + 630) = *(_OWORD *)(v7 + 64);
  *(_OWORD *)(a1 + 634) = *(_OWORD *)(v7 + 80);
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
  *(_DWORD *)(struct HDEV__ *)v7 = a2[888];
  a2[888] = a1[888];
  *(_DWORD *)(a1 + 888) = *(_DWORD *)(HDEV)v7;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 325);
  v74 = a2 + 10;
  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[652];
  a2[652] = a1[652];
  *(_DWORD *)(a1 + 652) = *(_DWORD *)(HDEV)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[653];
  a2[653] = a1[653];
  *(_DWORD *)(a1 + 653) = *(_DWORD *)(HDEV)v7;
  v75 = *((_DWORD *)a2 + 10);
  v76 = *(_DWORD *)v29;
  v77 = *(_DWORD *)v29 & 0x20000;
  if ( v77 != (v75 & 0x20000) )
  {
    SETFLAG(v75 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000u);
    SETFLAG(v77, v109, v108);
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)v29;
  }
  v78 = v76 & 0x1000000;
  if ( (v76 & 0x1000000) != (v75 & 0x1000000) )
  {
    SETFLAG(v75 & 0x1000000, (volatile unsigned int *)a1 + 10, 0x1000000u);
    SETFLAG(v78, v111, v110);
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)v29;
  }
  v79 = v76 & 0x20000000;
  if ( (v76 & 0x20000000) != (v75 & 0x20000000) )
  {
    SETFLAG(v75 & 0x20000000, (volatile unsigned int *)a1 + 10, 0x20000000u);
    SETFLAG(v79, v113, v112);
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)v29;
  }
  v80 = v76 & 0x2000000;
  if ( (v76 & 0x2000000) != (v75 & 0x2000000) )
  {
    SETFLAG(v75 & 0x2000000, (volatile unsigned int *)a1 + 10, 0x2000000u);
    SETFLAG(v80, v115, v114);
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)v29;
  }
  v81 = v76 & 0x8000000;
  if ( (v76 & 0x8000000) != (v75 & 0x8000000) )
  {
    SETFLAG(v75 & 0x8000000, (volatile unsigned int *)a1 + 10, 0x8000000u);
    SETFLAG(v81, v117, v116);
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)v29;
  }
  v82 = v76 & 0x4000000;
  if ( (v76 & 0x4000000) != (v75 & 0x4000000) )
  {
    SETFLAG(v75 & 0x4000000, (volatile unsigned int *)a1 + 10, 0x4000000u);
    SETFLAG(v82, v119, v118);
    v75 = *(_DWORD *)v74;
    v76 = *(_DWORD *)v29;
  }
  v83 = v75 & 0x40000000;
  if ( (v76 & 0x40000000) != v83 )
  {
    SETFLAG(v83, (volatile unsigned int *)a1 + 10, 0x40000000u);
    SETFLAG(v121, v122, v120);
  }
  _m_prefetchw(v29);
  do
    v84 = *(_DWORD *)v29;
  while ( v84 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v29,
                   *(_DWORD *)v29 & 0xEFFFFFFF,
                   *(_DWORD *)v29) );
  _m_prefetchw(v74);
  do
    v85 = *(_DWORD *)v74;
  while ( v85 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v74,
                   *(_DWORD *)v74 & 0xEFFFFFFF,
                   *(_DWORD *)v74) );
  *((_QWORD *)a1 + 4) = 0LL;
  v86 = 6LL;
  *((_QWORD *)a2 + 4) = 0LL;
  v87 = (_OWORD *)v7;
  v88 = 6LL;
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
  v89 = a2 + 672;
  v90 = a2 + 672;
  do
  {
    *v87 = *(_OWORD *)v90;
    v87[1] = *((_OWORD *)v90 + 1);
    v87[2] = *((_OWORD *)v90 + 2);
    v87[3] = *((_OWORD *)v90 + 3);
    v87[4] = *((_OWORD *)v90 + 4);
    v87[5] = *((_OWORD *)v90 + 5);
    v87[6] = *((_OWORD *)v90 + 6);
    v87 += 8;
    v91 = *((_OWORD *)v90 + 7);
    v90 += 32;
    *(v87 - 1) = v91;
    --v88;
  }
  while ( v88 );
  v92 = 6LL;
  *v87 = *(_OWORD *)v90;
  v87[1] = *((_OWORD *)v90 + 1);
  v87[2] = *((_OWORD *)v90 + 2);
  v93 = *((_OWORD *)v90 + 3);
  v94 = a1 + 672;
  v87[3] = v93;
  v95 = a1 + 672;
  do
  {
    *(_OWORD *)v89 = *(_OWORD *)v95;
    *((_OWORD *)v89 + 1) = *((_OWORD *)v95 + 1);
    *((_OWORD *)v89 + 2) = *((_OWORD *)v95 + 2);
    *((_OWORD *)v89 + 3) = *((_OWORD *)v95 + 3);
    *((_OWORD *)v89 + 4) = *((_OWORD *)v95 + 4);
    *((_OWORD *)v89 + 5) = *((_OWORD *)v95 + 5);
    *((_OWORD *)v89 + 6) = *((_OWORD *)v95 + 6);
    v89 += 32;
    v96 = *((_OWORD *)v95 + 7);
    v95 += 32;
    *((_OWORD *)v89 - 1) = v96;
    --v92;
  }
  while ( v92 );
  *(_OWORD *)v89 = *(_OWORD *)v95;
  *((_OWORD *)v89 + 1) = *((_OWORD *)v95 + 1);
  *((_OWORD *)v89 + 2) = *((_OWORD *)v95 + 2);
  *((_OWORD *)v89 + 3) = *((_OWORD *)v95 + 3);
  v97 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v94 = *v97;
    *((_OWORD *)v94 + 1) = v97[1];
    *((_OWORD *)v94 + 2) = v97[2];
    *((_OWORD *)v94 + 3) = v97[3];
    *((_OWORD *)v94 + 4) = v97[4];
    *((_OWORD *)v94 + 5) = v97[5];
    *((_OWORD *)v94 + 6) = v97[6];
    v94 += 32;
    v98 = v97[7];
    v97 += 8;
    *((_OWORD *)v94 - 1) = v98;
    --v86;
  }
  while ( v86 );
  *(_OWORD *)v94 = *v97;
  *((_OWORD *)v94 + 1) = v97[1];
  *((_OWORD *)v94 + 2) = v97[2];
  *((_OWORD *)v94 + 3) = v97[3];
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
  *(_DWORD *)(struct HDEV__ *)v7 = a2[661];
  a2[661] = a1[661];
  *(_DWORD *)(a1 + 661) = *(_DWORD *)(HDEV)v7;
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
  (*((void (__fastcall **)(_QWORD, HDEV))a2 + 337))(*((_QWORD *)a2 + 225), a2);
  (*((void (__fastcall **)(_QWORD, HDEV))a1 + 337))(*((_QWORD *)a1 + 225), a1);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v128, v130);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v129, v131);
  vResetSurfacePalette(a1);
  vResetSurfacePalette(a2);
  if ( qword_1C02575B0 )
    v99 = qword_1C02575B0();
  else
    v99 = -1073741637;
  if ( v99 >= 0 && qword_1C02575B8 )
    qword_1C02575B8(a1, a2);
  ++gcModeChanges;
  v3 = 1;
LABEL_99:
  Win32FreePool(v7, cy, v13);
  if ( qword_1C0257288 )
  {
    qword_1C0257288(a2);
    if ( qword_1C0257288 )
      qword_1C0257288(a1);
  }
  return v3;
}
