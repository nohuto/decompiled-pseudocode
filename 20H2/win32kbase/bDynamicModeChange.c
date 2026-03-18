/*
 * XREFs of bDynamicModeChange @ 0x1C0019194
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@@Z @ 0x1C0013B70 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ?vReferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C0011970 (-vReferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z @ 0x1C0017F10 (-vInitBrush@EBRUSHOBJ@@QEAAXPEAVDC@@PEAVBRUSH@@VXEPALOBJ@@2PEAVSURFACE@@H@Z.c)
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00186AC (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C00190D4 (-bDisabled@PDEVOBJ@@QEAAHH@Z.c)
 *     bDynamicProcessAllDriverRealizations @ 0x1C001A100 (bDynamicProcessAllDriverRealizations.c)
 *     HmgSafeNextObjt @ 0x1C001A270 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C001A944 (-SETFLAG@@YAXHAECKK@Z.c)
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgShareLockEx @ 0x1C0042C10 (HmgShareLockEx.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C004BD80 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0064DAC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x1C00B9B44 (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     ?vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z @ 0x1C00BBE94 (-vChangeWndObjs@@YAXPEAVSURFACE@@PEAUHDEV__@@01@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ?bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z @ 0x1C0143E44 (-bDynamicIntersectVisRect@@YAHPEAVSURFACE@@UtagSIZE@@@Z.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C0143ED0 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 */

__int64 __fastcall bDynamicModeChange(HDEV a1, HDEV a2, unsigned int a3)
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
  HDEV v29; // r13
  struct SURFACE *v30; // rdi
  struct SURFACE *v31; // rcx
  struct SURFACE *v32; // r12
  struct SURFACE **v33; // rax
  struct SURFACE **v34; // rbx
  HDEV v35; // rax
  int v36; // eax
  int v37; // eax
  __int64 v38; // rbx
  __int64 *v39; // rax
  int v40; // r8d
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 v43; // rcx
  __int64 v44; // rax
  int v45; // ecx
  int v46; // eax
  HDEV v47; // rax
  HDEV v48; // rdx
  __int64 v49; // r8
  _OWORD *v50; // rcx
  __int64 v51; // r9
  HDEV v52; // rax
  __int128 v53; // xmm1
  __int64 v54; // r9
  HDEV v55; // rcx
  HDEV v56; // rax
  __int128 v57; // xmm1
  _OWORD *v58; // rax
  __int64 v59; // rdx
  __int128 v60; // xmm1
  __int64 v61; // r9
  HDEV v62; // rax
  HDEV v63; // rdx
  _OWORD *v64; // rcx
  __int128 v65; // xmm1
  __int64 v66; // r9
  __int128 v67; // xmm1
  HDEV v68; // rdx
  HDEV v69; // rcx
  __int128 v70; // xmm1
  _OWORD *v71; // rax
  __int128 v72; // xmm1
  HDEV v73; // r11
  signed __int32 v74; // ecx
  signed __int32 v75; // r10d
  int v76; // ebx
  int v77; // ebx
  int v78; // ebx
  int v79; // ebx
  int v80; // ebx
  int v81; // ebx
  int v82; // ecx
  signed __int32 v83; // ett
  signed __int32 v84; // ett
  __int64 v85; // r8
  _OWORD *v86; // rcx
  __int64 v87; // r9
  HDEV v88; // rax
  HDEV v89; // rdx
  __int128 v90; // xmm1
  __int64 v91; // r9
  __int128 v92; // xmm1
  HDEV v93; // rdx
  HDEV v94; // rcx
  __int128 v95; // xmm1
  _OWORD *v96; // rax
  __int128 v97; // xmm1
  int v98; // eax
  char v100; // al
  __int64 v101; // rax
  HDEV v102; // r8
  HDEV v103; // rdx
  HDEV v104; // rcx
  HDEV *v105; // rcx
  unsigned int v106; // r8d
  volatile unsigned int *v107; // r11
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
  int v119; // r10d
  volatile unsigned int *v120; // r11
  struct SURFACE *v121; // [rsp+48h] [rbp-49h]
  struct SURFACE *v122; // [rsp+48h] [rbp-49h]
  __int64 v123; // [rsp+50h] [rbp-41h]
  int v124; // [rsp+58h] [rbp-39h]
  __int64 v125; // [rsp+60h] [rbp-31h]
  HDEV v126; // [rsp+68h] [rbp-29h] BYREF
  HDEV v127; // [rsp+70h] [rbp-21h] BYREF
  int v128; // [rsp+78h] [rbp-19h]
  int v129; // [rsp+7Ch] [rbp-15h]
  __int64 v130; // [rsp+80h] [rbp-11h]
  struct tagSIZE v131; // [rsp+88h] [rbp-9h]
  struct SURFACE *v132; // [rsp+90h] [rbp-1h]
  __int64 v133; // [rsp+98h] [rbp+7h]
  __int64 v134; // [rsp+A0h] [rbp+Fh]
  struct tagSIZE v135; // [rsp+A8h] [rbp+17h]
  __int64 v136; // [rsp+B0h] [rbp+1Fh]
  int v137; // [rsp+110h] [rbp+7Fh]

  v3 = 0;
  if ( !(unsigned int)bDynamicMatchEnoughForModeChange(a1, a2) )
    return v3;
  v136 = PALLOCMEM2(0x840uLL);
  v7 = v136;
  if ( !v136 )
    return v3;
  v8 = (_DWORD)a2[10] & 0x400;
  v126 = a1;
  v128 = v8;
  v9 = (_DWORD)a1[10] & 0x400;
  v127 = a2;
  v129 = v9;
  if ( qword_1C024F5E0 )
    v10 = qword_1C024F5E0();
  else
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    if ( qword_1C024F5E8 )
    {
      qword_1C024F5E8(a2);
      if ( qword_1C024F5E8 )
        qword_1C024F5E8(a1);
    }
  }
  v11 = 1;
  v124 = *((_DWORD *)a2 + 540) * *((_DWORD *)a2 + 541);
  v137 = *((_DWORD *)a1 + 540) * *((_DWORD *)a1 + 541);
  if ( !(unsigned int)bDynamicProcessAllDriverRealizations(a2, 0LL, 1LL)
    || !(unsigned int)bDynamicProcessAllDriverRealizations(a1, a2, a3) )
  {
    goto LABEL_99;
  }
  v12 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v126);
  v132 = (struct SURFACE *)*((_QWORD *)a1 + 319);
  v13 = *v12;
  v133 = *((_QWORD *)a1 + 226);
  v130 = *((_QWORD *)a1 + 225);
  v131 = v13;
  v14 = (struct tagSIZE *)PDEVOBJ::sizl((PDEVOBJ *)&v127);
  v16 = (struct SURFACE *)*((_QWORD *)a2 + 319);
  v121 = v16;
  v17 = *v14;
  v134 = *((_QWORD *)a2 + 226);
  v125 = *((_QWORD *)a2 + 225);
  v135 = v17;
  if ( v17.cx < v13.cx || (cy = (unsigned int)v131.cy, v17.cy < v131.cy) )
  {
    v100 = bDynamicIntersectVisRect(v15, v17);
    v16 = v121;
    cy = (unsigned int)v131.cy;
    v11 = v100 & 1;
  }
  if ( v13.cx < v17.cx || (int)cy < v135.cy )
    v11 &= bDynamicIntersectVisRect(v16, v13);
  v19 = *((_QWORD *)a2 + 343);
  if ( v19 && v19 == *((_QWORD *)a1 + 343) && *((_QWORD *)a2 + 224) == *((_QWORD *)a1 + 224) )
  {
    if ( !v11 )
      goto LABEL_103;
    v11 = (*((__int64 (__fastcall **)(__int64, __int64))a2 + 343))(v130, v125);
  }
  if ( !v11 )
  {
LABEL_103:
    v3 = 0;
    goto LABEL_99;
  }
  v20 = 0LL;
  v21 = v132;
  while ( 1 )
  {
    LOBYTE(cy) = 1;
    Objt = HmgSafeNextObjt(v20, cy);
    v23 = Objt;
    if ( !Objt )
      break;
    v24 = (*(_DWORD *)(Objt + 36) & 0x2000) == 0;
    v20 = *(_QWORD *)Objt;
    v123 = v20;
    if ( v24 )
    {
      v25 = *(struct SURFACE **)(v23 + 496);
      if ( v25 == v21 )
      {
        DC::pSurface((DC *)v23, v121);
        *(struct tagSIZE *)(v23 + 512) = v17;
LABEL_30:
        *(_DWORD *)(v23 + 316) |= 0xFu;
        goto LABEL_22;
      }
      if ( v25 == v121 )
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
      v27 = v130;
      *(_DWORD *)(v23 + 36) = cy;
      if ( v26 == v27 )
      {
        *(_QWORD *)(v23 + 24) = v125;
        *(_DWORD *)(struct HDEV__ *)(v23 + 72) = a2[456];
        v28 = *((_DWORD *)a2 + 532);
        goto LABEL_26;
      }
      v24 = v26 == v125;
      v20 = v123;
      if ( v24 )
      {
        *(_QWORD *)(v23 + 24) = v27;
        *(_DWORD *)(struct HDEV__ *)(v23 + 72) = a1[456];
        v28 = *((_DWORD *)a1 + 532);
LABEL_26:
        *(_DWORD *)(v23 + 76) = v28;
        v20 = v123;
      }
    }
  }
  v7 = v136;
  v29 = a1 + 10;
  v30 = v121;
  v31 = 0LL;
  v32 = v132;
  while ( 1 )
  {
    LOBYTE(cy) = 5;
    v33 = (struct SURFACE **)HmgSafeNextObjt(v31, cy);
    v34 = v33;
    if ( !v33 )
      break;
    v31 = *v33;
    v35 = (HDEV)v33[6];
    v122 = v31;
    if ( v35 == a1 )
    {
      v37 = *((_DWORD *)v34 + 28);
      if ( (v37 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v34 + 29) & 0x2001) == 0x2001 )
        {
          v101 = WdLogNewEntry5_WdAssertion(v31, 8193LL);
          WdLogEvent5_WdAssertion(v101);
          v31 = v122;
          v34[6] = (struct SURFACE *)a2;
        }
        if ( v137 != v124 && *((_DWORD *)v34 + 24) == *((_DWORD *)v32 + 24) )
        {
          v102 = a2;
          v103 = a1;
          goto LABEL_116;
        }
      }
      else if ( (v37 & 0x300000) == 0x200000 )
      {
        v34[6] = (struct SURFACE *)a2;
      }
    }
    else if ( v35 == a2 )
    {
      v36 = *((_DWORD *)v34 + 28);
      if ( (v36 & 0x4000000) != 0 )
      {
        cy = 8193LL;
        if ( (*((_DWORD *)v34 + 29) & 0x2001) == 0x2001 )
          v34[6] = (struct SURFACE *)a1;
        if ( v137 != v124 && *((_DWORD *)v34 + 24) == *((_DWORD *)v30 + 24) )
        {
          v102 = a1;
          v103 = a2;
LABEL_116:
          vDynamicSwitchPalettes((struct SURFACE *)v34, (struct PDEV *)v103, (struct PDEV *)v102);
          v31 = v122;
        }
      }
      else if ( (v36 & 0x300000) == 0x200000 )
      {
        v34[6] = (struct SURFACE *)a1;
      }
    }
  }
  v38 = 0LL;
  while ( 1 )
  {
    LOBYTE(cy) = 28;
    v39 = (__int64 *)HmgSafeNextObjt(v38, cy);
    if ( !v39 )
      break;
    v104 = (HDEV)v39[5];
    v38 = *v39;
    if ( v104 == a1 )
    {
      v39[5] = (__int64)a2;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v127, cy, v40);
      v105 = &v126;
      goto LABEL_123;
    }
    if ( v104 == a2 )
    {
      v39[5] = (__int64)a1;
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v126, cy, v40);
      v105 = &v127;
LABEL_123:
      PDEVOBJ::vUnreferencePdev(v105, 0LL);
    }
  }
  vChangeWndObjs(v32, a1, v30, a2);
  LOBYTE(v41) = 16;
  v42 = HmgShareLockEx(*(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, v41, 0LL);
  *(_QWORD *)(v7 + 976) = v7 + 544;
  *(_DWORD *)(v7 + 728) = 0;
  *(_DWORD *)(*(_QWORD *)(v7 + 976) + 176LL) = 0xFFFFFF;
  v43 = *(_QWORD *)(v7 + 976);
  *(_DWORD *)(v7 + 120) = 0;
  *(_QWORD *)(v43 + 248) = 0LL;
  EBRUSHOBJ::vInitBrush((int *)a1 + 386, v7, v42, (__int64)ppalDefault, v134, (__int64)v30, 1u);
  EBRUSHOBJ::vInitBrush((int *)a2 + 386, v7, v42, (__int64)ppalDefault, v133, (__int64)v32, 1u);
  HmgDecrementShareReferenceCountEx(v42, 0LL);
  *((_QWORD *)a2 + 226) = v133;
  *((_QWORD *)a2 + 225) = v130;
  v44 = v134;
  *((_QWORD *)a2 + 319) = v32;
  *((_QWORD *)a1 + 226) = v44;
  *((_QWORD *)a1 + 225) = v125;
  *((_QWORD *)a1 + 319) = v30;
  v45 = *((_DWORD *)v32 + 28);
  v46 = *((_DWORD *)v30 + 28);
  if ( (v45 & 0x10000000) != 0 )
  {
    *((_DWORD *)v30 + 28) = v46 | 0x10000000;
    if ( a1 != (HDEV)-88LL && (((_DWORD)a1[45] & 0x10000000) != 0 || ((_DWORD)a1[47] & 0x10000000) != 0) )
    {
      v47 = a2 + 22;
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
    if ( a2 != (HDEV)-88LL && (((_DWORD)a2[45] & 0x10000000) != 0 || ((_DWORD)a2[47] & 0x10000000) != 0) )
    {
      v47 = a1 + 22;
      goto LABEL_55;
    }
  }
  v48 = a2 + 456;
  *(_QWORD *)v7 = *((_QWORD *)a2 + 224);
  v49 = 2LL;
  v50 = (_OWORD *)v7;
  *((_QWORD *)a2 + 224) = *((_QWORD *)a1 + 224);
  v51 = 2LL;
  *((_QWORD *)a1 + 224) = *(_QWORD *)v7;
  v52 = a2 + 456;
  do
  {
    *v50 = *(_OWORD *)v52;
    v50[1] = *((_OWORD *)v52 + 1);
    v50[2] = *((_OWORD *)v52 + 2);
    v50[3] = *((_OWORD *)v52 + 3);
    v50[4] = *((_OWORD *)v52 + 4);
    v50[5] = *((_OWORD *)v52 + 5);
    v50[6] = *((_OWORD *)v52 + 6);
    v50 += 8;
    v53 = *((_OWORD *)v52 + 7);
    v52 += 32;
    *(v50 - 1) = v53;
    --v51;
  }
  while ( v51 );
  v54 = 2LL;
  *v50 = *(_OWORD *)v52;
  v50[1] = *((_OWORD *)v52 + 1);
  v50[2] = *((_OWORD *)v52 + 2);
  *((_QWORD *)v50 + 6) = *((_QWORD *)v52 + 6);
  v55 = a1 + 456;
  v56 = a1 + 456;
  do
  {
    *(_OWORD *)v48 = *(_OWORD *)v56;
    *((_OWORD *)v48 + 1) = *((_OWORD *)v56 + 1);
    *((_OWORD *)v48 + 2) = *((_OWORD *)v56 + 2);
    *((_OWORD *)v48 + 3) = *((_OWORD *)v56 + 3);
    *((_OWORD *)v48 + 4) = *((_OWORD *)v56 + 4);
    *((_OWORD *)v48 + 5) = *((_OWORD *)v56 + 5);
    *((_OWORD *)v48 + 6) = *((_OWORD *)v56 + 6);
    v48 += 32;
    v57 = *((_OWORD *)v56 + 7);
    v56 += 32;
    *((_OWORD *)v48 - 1) = v57;
    --v54;
  }
  while ( v54 );
  *(_OWORD *)v48 = *(_OWORD *)v56;
  *((_OWORD *)v48 + 1) = *((_OWORD *)v56 + 1);
  *((_OWORD *)v48 + 2) = *((_OWORD *)v56 + 2);
  *((_QWORD *)v48 + 6) = *((_QWORD *)v56 + 6);
  v58 = (_OWORD *)v7;
  v59 = 2LL;
  do
  {
    *(_OWORD *)v55 = *v58;
    *((_OWORD *)v55 + 1) = v58[1];
    *((_OWORD *)v55 + 2) = v58[2];
    *((_OWORD *)v55 + 3) = v58[3];
    *((_OWORD *)v55 + 4) = v58[4];
    *((_OWORD *)v55 + 5) = v58[5];
    *((_OWORD *)v55 + 6) = v58[6];
    v55 += 32;
    v60 = v58[7];
    v58 += 8;
    *((_OWORD *)v55 - 1) = v60;
    --v59;
  }
  while ( v59 );
  v61 = 2LL;
  *(_OWORD *)v55 = *v58;
  *((_OWORD *)v55 + 1) = v58[1];
  *((_OWORD *)v55 + 2) = v58[2];
  *((_QWORD *)v55 + 6) = *((_QWORD *)v58 + 6);
  v62 = a2 + 534;
  v63 = a2 + 534;
  v64 = (_OWORD *)v7;
  do
  {
    *v64 = *(_OWORD *)v63;
    v64[1] = *((_OWORD *)v63 + 1);
    v64[2] = *((_OWORD *)v63 + 2);
    v64[3] = *((_OWORD *)v63 + 3);
    v64[4] = *((_OWORD *)v63 + 4);
    v64[5] = *((_OWORD *)v63 + 5);
    v64[6] = *((_OWORD *)v63 + 6);
    v64 += 8;
    v65 = *((_OWORD *)v63 + 7);
    v63 += 32;
    *(v64 - 1) = v65;
    --v61;
  }
  while ( v61 );
  v66 = 2LL;
  *v64 = *(_OWORD *)v63;
  v64[1] = *((_OWORD *)v63 + 1);
  v64[2] = *((_OWORD *)v63 + 2);
  v67 = *((_OWORD *)v63 + 3);
  v68 = a1 + 534;
  v64[3] = v67;
  v69 = a1 + 534;
  do
  {
    *(_OWORD *)v62 = *(_OWORD *)v69;
    *((_OWORD *)v62 + 1) = *((_OWORD *)v69 + 1);
    *((_OWORD *)v62 + 2) = *((_OWORD *)v69 + 2);
    *((_OWORD *)v62 + 3) = *((_OWORD *)v69 + 3);
    *((_OWORD *)v62 + 4) = *((_OWORD *)v69 + 4);
    *((_OWORD *)v62 + 5) = *((_OWORD *)v69 + 5);
    *((_OWORD *)v62 + 6) = *((_OWORD *)v69 + 6);
    v62 += 32;
    v70 = *((_OWORD *)v69 + 7);
    v69 += 32;
    *((_OWORD *)v62 - 1) = v70;
    --v66;
  }
  while ( v66 );
  *(_OWORD *)v62 = *(_OWORD *)v69;
  *((_OWORD *)v62 + 1) = *((_OWORD *)v69 + 1);
  *((_OWORD *)v62 + 2) = *((_OWORD *)v69 + 2);
  *((_OWORD *)v62 + 3) = *((_OWORD *)v69 + 3);
  v71 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v68 = *v71;
    *((_OWORD *)v68 + 1) = v71[1];
    *((_OWORD *)v68 + 2) = v71[2];
    *((_OWORD *)v68 + 3) = v71[3];
    *((_OWORD *)v68 + 4) = v71[4];
    *((_OWORD *)v68 + 5) = v71[5];
    *((_OWORD *)v68 + 6) = v71[6];
    v68 += 32;
    v72 = v71[7];
    v71 += 8;
    *((_OWORD *)v68 - 1) = v72;
    --v49;
  }
  while ( v49 );
  *(_OWORD *)v68 = *v71;
  *((_OWORD *)v68 + 1) = v71[1];
  *((_OWORD *)v68 + 2) = v71[2];
  *((_OWORD *)v68 + 3) = v71[3];
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
  v73 = a2 + 10;
  *((_QWORD *)a2 + 325) = *((_QWORD *)a1 + 325);
  *((_QWORD *)a1 + 325) = *(_QWORD *)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[652];
  a2[652] = a1[652];
  *(_DWORD *)(a1 + 652) = *(_DWORD *)(HDEV)v7;
  *(_DWORD *)(struct HDEV__ *)v7 = a2[653];
  a2[653] = a1[653];
  *(_DWORD *)(a1 + 653) = *(_DWORD *)(HDEV)v7;
  v74 = *((_DWORD *)a2 + 10);
  v75 = *(_DWORD *)v29;
  v76 = *(_DWORD *)v29 & 0x20000;
  if ( v76 != (v74 & 0x20000) )
  {
    SETFLAG(v74 & 0x20000, (volatile unsigned int *)a1 + 10, 0x20000u);
    SETFLAG(v76, v107, v106);
    v74 = *(_DWORD *)v73;
    v75 = *(_DWORD *)v29;
  }
  v77 = v75 & 0x1000000;
  if ( (v75 & 0x1000000) != (v74 & 0x1000000) )
  {
    SETFLAG(v74 & 0x1000000, (volatile unsigned int *)a1 + 10, 0x1000000u);
    SETFLAG(v77, v109, v108);
    v74 = *(_DWORD *)v73;
    v75 = *(_DWORD *)v29;
  }
  v78 = v75 & 0x20000000;
  if ( (v75 & 0x20000000) != (v74 & 0x20000000) )
  {
    SETFLAG(v74 & 0x20000000, (volatile unsigned int *)a1 + 10, 0x20000000u);
    SETFLAG(v78, v111, v110);
    v74 = *(_DWORD *)v73;
    v75 = *(_DWORD *)v29;
  }
  v79 = v75 & 0x2000000;
  if ( (v75 & 0x2000000) != (v74 & 0x2000000) )
  {
    SETFLAG(v74 & 0x2000000, (volatile unsigned int *)a1 + 10, 0x2000000u);
    SETFLAG(v79, v113, v112);
    v74 = *(_DWORD *)v73;
    v75 = *(_DWORD *)v29;
  }
  v80 = v75 & 0x8000000;
  if ( (v75 & 0x8000000) != (v74 & 0x8000000) )
  {
    SETFLAG(v74 & 0x8000000, (volatile unsigned int *)a1 + 10, 0x8000000u);
    SETFLAG(v80, v115, v114);
    v74 = *(_DWORD *)v73;
    v75 = *(_DWORD *)v29;
  }
  v81 = v75 & 0x4000000;
  if ( (v75 & 0x4000000) != (v74 & 0x4000000) )
  {
    SETFLAG(v74 & 0x4000000, (volatile unsigned int *)a1 + 10, 0x4000000u);
    SETFLAG(v81, v117, v116);
    v74 = *(_DWORD *)v73;
    v75 = *(_DWORD *)v29;
  }
  v82 = v74 & 0x40000000;
  if ( (v75 & 0x40000000) != v82 )
  {
    SETFLAG(v82, (volatile unsigned int *)a1 + 10, 0x40000000u);
    SETFLAG(v119, v120, v118);
  }
  _m_prefetchw(v29);
  do
    v83 = *(_DWORD *)v29;
  while ( v83 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v29,
                   *(_DWORD *)v29 & 0xEFFFFFFF,
                   *(_DWORD *)v29) );
  _m_prefetchw(v73);
  do
    v84 = *(_DWORD *)v73;
  while ( v84 != _InterlockedCompareExchange(
                   (volatile signed __int32 *)v73,
                   *(_DWORD *)v73 & 0xEFFFFFFF,
                   *(_DWORD *)v73) );
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
  v88 = a2 + 672;
  v89 = a2 + 672;
  do
  {
    *v86 = *(_OWORD *)v89;
    v86[1] = *((_OWORD *)v89 + 1);
    v86[2] = *((_OWORD *)v89 + 2);
    v86[3] = *((_OWORD *)v89 + 3);
    v86[4] = *((_OWORD *)v89 + 4);
    v86[5] = *((_OWORD *)v89 + 5);
    v86[6] = *((_OWORD *)v89 + 6);
    v86 += 8;
    v90 = *((_OWORD *)v89 + 7);
    v89 += 32;
    *(v86 - 1) = v90;
    --v87;
  }
  while ( v87 );
  v91 = 6LL;
  *v86 = *(_OWORD *)v89;
  v86[1] = *((_OWORD *)v89 + 1);
  v86[2] = *((_OWORD *)v89 + 2);
  v92 = *((_OWORD *)v89 + 3);
  v93 = a1 + 672;
  v86[3] = v92;
  v94 = a1 + 672;
  do
  {
    *(_OWORD *)v88 = *(_OWORD *)v94;
    *((_OWORD *)v88 + 1) = *((_OWORD *)v94 + 1);
    *((_OWORD *)v88 + 2) = *((_OWORD *)v94 + 2);
    *((_OWORD *)v88 + 3) = *((_OWORD *)v94 + 3);
    *((_OWORD *)v88 + 4) = *((_OWORD *)v94 + 4);
    *((_OWORD *)v88 + 5) = *((_OWORD *)v94 + 5);
    *((_OWORD *)v88 + 6) = *((_OWORD *)v94 + 6);
    v88 += 32;
    v95 = *((_OWORD *)v94 + 7);
    v94 += 32;
    *((_OWORD *)v88 - 1) = v95;
    --v91;
  }
  while ( v91 );
  *(_OWORD *)v88 = *(_OWORD *)v94;
  *((_OWORD *)v88 + 1) = *((_OWORD *)v94 + 1);
  *((_OWORD *)v88 + 2) = *((_OWORD *)v94 + 2);
  *((_OWORD *)v88 + 3) = *((_OWORD *)v94 + 3);
  v96 = (_OWORD *)v7;
  do
  {
    *(_OWORD *)v93 = *v96;
    *((_OWORD *)v93 + 1) = v96[1];
    *((_OWORD *)v93 + 2) = v96[2];
    *((_OWORD *)v93 + 3) = v96[3];
    *((_OWORD *)v93 + 4) = v96[4];
    *((_OWORD *)v93 + 5) = v96[5];
    *((_OWORD *)v93 + 6) = v96[6];
    v93 += 32;
    v97 = v96[7];
    v96 += 8;
    *((_OWORD *)v93 - 1) = v97;
    --v85;
  }
  while ( v85 );
  *(_OWORD *)v93 = *v96;
  *((_OWORD *)v93 + 1) = v96[1];
  *((_OWORD *)v93 + 2) = v96[2];
  *((_OWORD *)v93 + 3) = v96[3];
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
  PDEVOBJ::bDisabled((PDEVOBJ *)&v126, v128);
  PDEVOBJ::bDisabled((PDEVOBJ *)&v127, v129);
  vResetSurfacePalette(a1);
  vResetSurfacePalette(a2);
  if ( qword_1C024F5F0 )
    v98 = qword_1C024F5F0();
  else
    v98 = -1073741637;
  if ( v98 >= 0 && qword_1C024F5F8 )
    qword_1C024F5F8(a1, a2);
  ++gcModeChanges;
  v3 = 1;
LABEL_99:
  Win32FreePool(v7);
  if ( qword_1C024F2C8 )
  {
    qword_1C024F2C8(a2);
    if ( qword_1C024F2C8 )
      qword_1C024F2C8(a1);
  }
  return v3;
}
