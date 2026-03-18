/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C0074590
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C00742C0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C001ACC8 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0064144 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C0066F4C (GreCreateDIBitmapReal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C0076650 (GreSetDIBitsToDeviceInternal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C007CD30 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C0084BB0 (NtGdiPatBlt.c)
 *     bCvtPts1 @ 0x1C0086360 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C008A108 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngCopyBits @ 0x1C00D10E0 (EngCopyBits.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C010D2DC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     GreCreateDIBitmapComp @ 0x1C01173D8 (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026FA74 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BD5DC (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BD698 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BF8D8 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02C0E08 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 */

__int64 __fastcall GreStretchDIBitsInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  __int64 v18; // rdx
  unsigned int v19; // r12d
  unsigned __int8 v20; // al
  struct _DC_ATTR *UserAttr; // rax
  __int64 v22; // rdi
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // rax
  char *v26; // r9
  unsigned int v27; // edx
  __int64 v28; // r10
  int v29; // r14d
  int v30; // r15d
  int v31; // eax
  unsigned int v32; // esi
  struct _DC_ATTR *v33; // rax
  __int64 v34; // rbx
  int v36; // ecx
  BOOL v37; // esi
  int v38; // r9d
  unsigned int v39; // r8d
  __int64 v40; // rsi
  int v41; // r10d
  __int64 v42; // r15
  unsigned int v43; // eax
  unsigned int v44; // ebx
  int v45; // r11d
  unsigned int v46; // ecx
  unsigned __int64 v47; // rcx
  __int64 v48; // rdx
  unsigned int v49; // r13d
  __int64 v50; // rsi
  HDC v51; // r15
  int v52; // eax
  int v53; // edx
  int v54; // r8d
  int v55; // r9d
  int v56; // r10d
  int v57; // ecx
  int v58; // ebx
  DC *v59; // r8
  struct SURFACE *v60; // r14
  struct PALETTE *v61; // rbx
  __int64 v62; // rdi
  HDC v63; // rax
  unsigned int v64; // esi
  int v65; // eax
  int v66; // ebx
  _DWORD *v67; // r8
  _DWORD *v68; // rcx
  bool v69; // zf
  _DWORD *v70; // rax
  int v71; // r8d
  unsigned int v72; // esi
  int v73; // eax
  int v74; // r9d
  char v75; // di
  int v76; // edx
  int v77; // ecx
  struct REGION *v78; // rax
  __int64 v79; // r11
  struct ECLIPOBJ *v80; // rdx
  __int64 v81; // rax
  BOOL (__stdcall *v82)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  int v83; // r11d
  char *v84; // r8
  __int64 v85; // rdx
  HDC v86; // rsi
  int v87; // eax
  HDC CompatibleDC; // rdi
  __int64 DIBitmapComp; // rax
  __int64 v90; // rsi
  int v91; // ebx
  unsigned int v92; // ecx
  unsigned __int64 v93; // rcx
  __int64 v94; // rcx
  DC *v95; // r9
  int v96; // r11d
  unsigned int v97; // ecx
  unsigned __int64 v98; // rcx
  unsigned int v99; // eax
  unsigned int v100; // eax
  DC *v101; // rcx
  int v102; // eax
  DC *v103; // rcx
  int v104; // eax
  SURFOBJ *v105; // rdx
  SURFOBJ *v106; // rcx
  int v107; // ebx
  __int64 v108; // r8
  int v109; // eax
  __int64 v110; // rax
  int v111; // ecx
  int v112; // ecx
  int v113; // [rsp+80h] [rbp-80h]
  unsigned int v114; // [rsp+84h] [rbp-7Ch]
  unsigned int v115; // [rsp+88h] [rbp-78h]
  unsigned int v116; // [rsp+8Ch] [rbp-74h]
  unsigned int v117; // [rsp+90h] [rbp-70h]
  unsigned int v118; // [rsp+94h] [rbp-6Ch]
  unsigned int v119; // [rsp+94h] [rbp-6Ch]
  DC *v120; // [rsp+98h] [rbp-68h] BYREF
  __int64 v121; // [rsp+A0h] [rbp-60h]
  int v122; // [rsp+A8h] [rbp-58h]
  unsigned int v123; // [rsp+ACh] [rbp-54h]
  int v124; // [rsp+B0h] [rbp-50h]
  unsigned int v125; // [rsp+B4h] [rbp-4Ch]
  int v126; // [rsp+B8h] [rbp-48h]
  int v127; // [rsp+BCh] [rbp-44h] BYREF
  HDC XlateObject; // [rsp+C0h] [rbp-40h] BYREF
  int v129; // [rsp+C8h] [rbp-38h]
  __int128 v130; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v131; // [rsp+E0h] [rbp-20h]
  unsigned int v132; // [rsp+F0h] [rbp-10h]
  unsigned int v133; // [rsp+F4h] [rbp-Ch]
  unsigned int v134; // [rsp+F8h] [rbp-8h]
  int v135; // [rsp+FCh] [rbp-4h]
  int v136; // [rsp+100h] [rbp+0h]
  int v137; // [rsp+104h] [rbp+4h]
  int v138; // [rsp+108h] [rbp+8h]
  __int64 v139; // [rsp+110h] [rbp+10h] BYREF
  int v140; // [rsp+118h] [rbp+18h]
  __int64 v141; // [rsp+120h] [rbp+20h] BYREF
  char v142; // [rsp+128h] [rbp+28h]
  int v143; // [rsp+12Ch] [rbp+2Ch]
  __int64 v144[2]; // [rsp+130h] [rbp+30h] BYREF
  char *v145; // [rsp+140h] [rbp+40h] BYREF
  int v146; // [rsp+148h] [rbp+48h]
  int v147; // [rsp+14Ch] [rbp+4Ch]
  DC *v148[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v149; // [rsp+160h] [rbp+60h] BYREF
  char v150; // [rsp+168h] [rbp+68h]
  int v151; // [rsp+16Ch] [rbp+6Ch]
  DC *v152[2]; // [rsp+170h] [rbp+70h] BYREF
  DC *v153[2]; // [rsp+180h] [rbp+80h] BYREF
  __int64 v154; // [rsp+190h] [rbp+90h] BYREF
  int v155; // [rsp+19Ch] [rbp+9Ch]
  _BYTE v156[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v157[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 v158; // [rsp+1D0h] [rbp+D0h]
  _BYTE v159[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v160[2]; // [rsp+210h] [rbp+110h] BYREF
  __int16 v161; // [rsp+220h] [rbp+120h]
  _OWORD v162[2]; // [rsp+240h] [rbp+140h] BYREF
  int v163; // [rsp+260h] [rbp+160h] BYREF
  int v164; // [rsp+264h] [rbp+164h]
  int v165; // [rsp+268h] [rbp+168h]
  int v166; // [rsp+26Ch] [rbp+16Ch]
  struct tagRGBQUAD *v167; // [rsp+270h] [rbp+170h] BYREF
  int v168; // [rsp+278h] [rbp+178h]
  int v169; // [rsp+27Ch] [rbp+17Ch]
  RECTL prclDest; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v171[4]; // [rsp+290h] [rbp+190h] BYREF
  __int128 v172[4]; // [rsp+294h] [rbp+194h] BYREF
  __int64 v173; // [rsp+2E0h] [rbp+1E0h]
  int v174; // [rsp+2E8h] [rbp+1E8h]
  int v175; // [rsp+310h] [rbp+210h]
  __int64 v176; // [rsp+320h] [rbp+220h]

  v124 = a15;
  v144[0] = a16;
  v127 = a2;
  v18 = a13;
  v137 = a4;
  v138 = a3;
  v19 = 0;
  v20 = gajRop3[BYTE2(a13)];
  XlateObject = a1;
  v136 = a5;
  *(_QWORD *)&prclDest.left = a10;
  v122 = a12;
  v123 = 0;
  v167 = (struct tagRGBQUAD *)BYTE2(a13);
  if ( (v20 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  LOBYTE(v18) = 1;
  v121 = 0LL;
  v120 = (DC *)HmgLockEx(a1, v18, 0LL);
  if ( v120 )
  {
    if ( (*((_DWORD *)v120 + 11) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v120);
      if ( UserAttr && !DC::SaveAttributes(v120, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v120 + 3);
        v120 = 0LL;
        goto LABEL_142;
      }
      *((_DWORD *)v120 + 11) |= 2u;
      LODWORD(v121) = 1;
    }
    if ( (*((_DWORD *)v120 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v120);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v120
    || !a11
    || !a10
    || a12 > 2
    || a14 < 0xC
    || (v22 = *a11, a14 < (unsigned int)v22)
    || (unsigned int)v22 < 0x28
    || (int)a11[1] <= 0
    || !a11[2] )
  {
LABEL_142:
    if ( v120 )
      XDCOBJ::vUnlockFast((XDCOBJ *)&v120);
    return v19;
  }
  v23 = *((_QWORD *)v120 + 122);
  v24 = *(unsigned __int8 *)(v23 + 215);
  v146 = *(_DWORD *)(v23 + 208);
  v25 = *((_QWORD *)v120 + 122);
  v135 = v24;
  v147 = *(_DWORD *)(v25 + 108) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v120 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v145, (struct XDCOBJ *)&v120, 0x204u, 0);
    v26 = v145;
    v24 = v135;
  }
  else
  {
    v26 = (char *)v120 + 320;
    v145 = (char *)v120 + 320;
  }
  v27 = a11[4];
  if ( v27 - 4 <= 1 )
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v120, v27)
      || BYTE2(a13) != 204
      || (*((_DWORD *)v26 + 8) & 1) == 0
      || a12
      || (v28 = v144[0]) != 0 )
    {
      v32 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    v28 = v144[0];
  }
  v29 = a9;
  if ( a4 == a8 && v136 == a9 && a9 > 0 && a8 > 0 )
  {
    v30 = a7;
    if ( !(a7 | a6) && BYTE2(a13) == 204 && v24 != 4 && (*((_DWORD *)v26 + 8) & 2) != 0 )
    {
      v31 = a11[2];
      if ( v31 < 0 )
        v31 = -v31;
      if ( a9 >= v31 )
        v29 = v31;
      v32 = GreSetDIBitsToDeviceInternal(
              XlateObject,
              v136,
              a6,
              a7,
              a7,
              v29,
              *(__int64 *)&prclDest.left,
              (__int64)a11,
              v122,
              v124,
              a14,
              1,
              v28);
      goto LABEL_35;
    }
  }
  else
  {
    v30 = a7;
  }
  v36 = v122;
  v37 = 0;
  if ( v122 == 1 )
  {
    v160[0] = 0LL;
    v160[1] = 0LL;
    v161 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v159, (struct XDCOBJ *)&v120, 0);
    v94 = *((_QWORD *)v120 + 62);
    if ( v94 )
      v37 = *(_DWORD *)(v94 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v159);
    if ( v160[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v160);
    v36 = v122;
    v26 = v145;
  }
  if ( (_DWORD)v167 == 204 && (*((_DWORD *)v26 + 8) & 1) != 0 && !v37 )
  {
    v38 = a11[2];
    v39 = a11[8];
    v40 = *((unsigned __int16 *)a11 + 7);
    v41 = 1;
    v42 = a11[1];
    v113 = 1;
    v43 = a11[4];
    v167 = (struct tagRGBQUAD *)((char *)a11 + v22);
    v125 = v43;
    v117 = v38;
    v118 = v39;
    v130 = 0LL;
    v131 = 0LL;
    if ( v38 < 0 )
    {
      v38 = -v38;
      DWORD2(v131) = 1;
      v117 = v38;
    }
    v114 = 0;
    v116 = 0;
    v115 = 0;
    v134 = 0;
    v133 = 0;
    v132 = 0;
    v126 = 0;
    switch ( v43 )
    {
      case 3u:
        if ( a14 < 0x34 )
        {
          EngSetLastError(0x57u);
          v39 = v118;
          v41 = 0;
          v38 = v117;
          v113 = 0;
        }
        else
        {
          if ( v36 == 1 )
            v122 = 0;
          if ( (_DWORD)v40 == 32 )
          {
            LODWORD(v130) = 6;
          }
          else if ( (_DWORD)v40 == 16 )
          {
            LODWORD(v130) = 4;
          }
          else
          {
            EngSetLastError(0x57u);
            v39 = v118;
            v41 = 0;
            v38 = v117;
            v113 = 0;
          }
          v134 = a11[10];
          v133 = a11[11];
          v92 = v40 * v42;
          v167 = (struct tagRGBQUAD *)(a11 + 10);
          v132 = a11[12];
          v116 = 2;
          v115 = 512;
          if ( (unsigned __int64)(v40 * v42) > 0xFFFFFFFF || v92 + 31 < v92 )
            goto LABEL_207;
          v93 = (unsigned int)v38 * (((unsigned __int64)(v92 + 31) >> 3) & 0x1FFFFFFC);
          if ( v93 > 0xFFFFFFFF )
            goto LABEL_186;
          HIDWORD(v130) = v93;
        }
        v44 = 0;
        v114 = 0;
        goto LABEL_184;
      case 0u:
        if ( (unsigned int)v40 <= 8 )
        {
          switch ( (_DWORD)v40 )
          {
            case 1:
              LODWORD(v130) = 1;
              v44 = 2;
              v116 = 1;
              v45 = 1024;
              goto LABEL_61;
            case 4:
              v116 = 1;
              v44 = 16;
              v45 = 1024;
              LODWORD(v130) = 2;
              goto LABEL_61;
            case 8:
              LODWORD(v130) = 3;
              v44 = 256;
              v116 = 1;
              v115 = 1024;
LABEL_62:
              v114 = v44;
              v46 = v40 * v42;
              if ( (unsigned __int64)(v40 * v42) > 0xFFFFFFFF || v46 + 31 < v46 )
                goto LABEL_207;
              v47 = (unsigned int)v38 * (((unsigned __int64)(v46 + 31) >> 3) & 0x1FFFFFFC);
              if ( v47 <= 0xFFFFFFFF )
              {
                HIDWORD(v130) = v47;
                goto LABEL_66;
              }
LABEL_186:
              HIDWORD(v130) = -1;
LABEL_207:
              EngSetLastError(0x216u);
              v32 = 0;
              goto LABEL_35;
          }
        }
        if ( v36 == 1 )
          v122 = 0;
        switch ( (_DWORD)v40 )
        {
          case 0x18:
            LODWORD(v130) = 5;
            break;
          case 0x20:
            LODWORD(v130) = 6;
            break;
          case 0x10:
            LODWORD(v130) = 4;
            v134 = 31744;
            v133 = 992;
            v132 = 31;
            v116 = 2;
            goto LABEL_60;
          default:
            goto LABEL_210;
        }
        v116 = 8;
LABEL_60:
        v44 = 0;
        v45 = 512;
LABEL_61:
        v115 = v45;
        goto LABEL_62;
      case 0xAu:
        DCOBJ::DCOBJ((DCOBJ *)v148, XlateObject);
        if ( !v148[0] || !(unsigned int)DC::bIsCMYKColor(v148[0]) )
          goto LABEL_230;
        switch ( (_DWORD)v40 )
        {
          case 1:
            v44 = 2;
            LODWORD(v130) = 1;
            v116 = 1;
            break;
          case 4:
            LODWORD(v130) = 2;
            v44 = 16;
            v116 = 1;
            break;
          case 8:
            LODWORD(v130) = 3;
            v44 = 256;
            v116 = 1;
            break;
          case 0x20:
            LODWORD(v130) = 6;
            v44 = 0;
            v116 = 16;
            v96 = 512;
LABEL_223:
            v115 = v96;
            v97 = v40 * v42;
            v114 = v44;
            if ( (unsigned __int64)(v40 * v42) <= 0xFFFFFFFF && v97 + 31 >= v97 )
            {
              v98 = v117 * (unsigned __int64)(((v97 + 31) >> 3) & 0x1FFFFFFC);
              if ( v98 <= 0xFFFFFFFF )
              {
                v41 = 1;
                HIDWORD(v130) = v98;
                goto LABEL_231;
              }
              HIDWORD(v130) = -1;
            }
            EngSetLastError(0x216u);
            v32 = 0;
            if ( v148[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v148);
            goto LABEL_35;
          default:
LABEL_230:
            EngSetLastError(0x57u);
            v44 = 0;
            v41 = 0;
            v95 = v148[0];
            v113 = 0;
LABEL_231:
            if ( v95 )
            {
              XDCOBJ::vUnlockFast((XDCOBJ *)v148);
              v41 = v113;
            }
            goto LABEL_243;
        }
        v96 = 1024;
        goto LABEL_223;
    }
    if ( v43 != 2 )
    {
      if ( v43 != 12 )
      {
        if ( v43 == 1 )
          goto LABEL_251;
        if ( v43 != 11 )
        {
          if ( v43 == 4 )
          {
            v99 = a11[5];
            v115 = 512;
            v44 = 0;
            LODWORD(v130) = 9;
            v114 = 0;
            v116 = 8;
            HIDWORD(v130) = v99;
            goto LABEL_66;
          }
          if ( v43 == 5 )
          {
            v100 = a11[5];
            v115 = 512;
            v44 = 0;
            LODWORD(v130) = 10;
            v114 = 0;
            v116 = 8;
            HIDWORD(v130) = v100;
            goto LABEL_66;
          }
          EngSetLastError(0x57u);
          v41 = 0;
          v113 = 0;
          goto LABEL_242;
        }
        DCOBJ::DCOBJ((DCOBJ *)v152, XlateObject);
        if ( v152[0] && (unsigned int)DC::bIsCMYKColor(v152[0]) )
        {
          v41 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
          v101 = v152[0];
          v41 = 0;
          v113 = 0;
        }
        if ( v101 )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)v152);
          v41 = v113;
        }
        v39 = v118;
        v38 = v117;
        if ( v41 )
        {
LABEL_251:
          if ( (_DWORD)v40 != 8 )
          {
            EngSetLastError(0x57u);
            v39 = v118;
            v41 = v113;
            v38 = v117;
          }
          v116 = 1;
          LODWORD(v130) = 8;
          v126 = 1;
          v114 = 256;
          HIDWORD(v130) = a11[5];
          v102 = 0;
          if ( (_DWORD)v40 == 8 )
            v102 = v41;
          v115 = 1024;
          v41 = v102;
          v113 = v102;
        }
        v44 = v114;
LABEL_184:
        if ( !v41 )
          goto LABEL_141;
LABEL_66:
        v48 = v144[0];
        v49 = a14 - v22;
        if ( !v144[0] )
        {
          v48 = *(_QWORD *)(*((_QWORD *)v120 + 122) + 248LL);
          v144[0] = v48;
        }
        v129 = *((_DWORD *)v120 + 30);
        if ( (v129 & 0x10000000) != 0 && (!v48 || v125 - 10 > 2) )
          v129 = v129 & 0xFFFFFFF | 0x20000000;
        *(_QWORD *)((char *)&v130 + 4) = __PAIR64__(v38, v42);
        if ( v39 )
        {
          if ( v39 > v44 )
            v39 = v44;
          v119 = v39;
        }
        else
        {
          v119 = v44;
        }
        if ( (unsigned int)v124 >= HIDWORD(v130) )
        {
          v50 = *((_QWORD *)v120 + 6);
          v165 = v127 + v137;
          v163 = v127;
          v164 = v138;
          v166 = v138 + v136;
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v154, (struct XDCOBJ *)&v120, 0x204u);
          if ( (*(_BYTE *)(v154 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v154, &v163, 2LL) )
          {
            v51 = 0LL;
            v52 = 1;
          }
          else
          {
            v51 = 0LL;
            v52 = 0;
          }
          if ( v155 )
          {
            ++v163;
            ++v165;
          }
          if ( !v52 )
            goto LABEL_141;
          if ( !ERECTL::bEmpty((ERECTL *)&v163) )
          {
            v124 = 0;
            v56 = 0;
            if ( v54 > v53 )
            {
              v163 = v53;
              v165 = v54;
              if ( !v55 )
              {
                v163 = v53 + 1;
                v165 = v54 + 1;
              }
              v56 = 1;
              v124 = 1;
            }
            v57 = v164;
            if ( v164 > v166 )
            {
              v164 = v166 + 1;
              v124 = v56 ^ 2;
              v166 = v57 + 1;
            }
            v140 = 0;
            v139 = 0LL;
            if ( !v122 && !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v139, v116, v44, 0LL, v134, v133, v132, v115, 1) )
              goto LABEL_140;
            v157[0] = 0LL;
            v157[1] = 0LL;
            v158 = 256;
            DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v156, (struct XDCOBJ *)&v120, 0);
            DWORD2(v131) |= 8 * (*(_DWORD *)(*((_QWORD *)v120 + 6) + 40LL) & 0x8000);
            *(_QWORD *)&v131 = 0LL;
            v141 = 0LL;
            v142 = 0;
            v143 = 0;
            if ( v126 )
            {
              v149 = 0LL;
              v150 = 0;
              v162[0] = v130;
              v151 = 0;
              v162[1] = v131;
              if ( SURFMEM::bCreateDIB(
                     (SURFMEM *)&v149,
                     (struct _DEVBITMAPINFO *)v162,
                     *(void **)&prclDest.left,
                     0LL,
                     0,
                     0LL,
                     0LL,
                     0,
                     1,
                     0,
                     0) )
              {
                LODWORD(v130) = ((_DWORD)v130 != 7) + 2;
                if ( SURFMEM::bCreateDIB(
                       (SURFMEM *)&v141,
                       (struct _DEVBITMAPINFO *)&v130,
                       0LL,
                       0LL,
                       0,
                       0LL,
                       0LL,
                       0,
                       1,
                       0,
                       0) )
                {
                  *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v130 + 4);
                  *(_QWORD *)&prclDest.left = 0LL;
                  v105 = (SURFOBJ *)(v149 + 24);
                  if ( !v149 )
                    v105 = 0LL;
                  v106 = (SURFOBJ *)(v141 + 24);
                  if ( !v141 )
                    v106 = 0LL;
                  EngCopyBits(v106, v105, 0LL, 0LL, &prclDest, &gptl00);
                  v58 = v113;
                }
                else
                {
                  v58 = 0;
                  v113 = 0;
                }
              }
              else
              {
                v58 = 0;
                v113 = 0;
              }
              SURFMEM::~SURFMEM((SURFMEM *)&v149);
            }
            else
            {
              if ( !SURFMEM::bCreateDIB(
                      (SURFMEM *)&v141,
                      (struct _DEVBITMAPINFO *)&v130,
                      *(void **)&prclDest.left,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0,
                      0) )
                goto LABEL_138;
              v58 = v113;
            }
            if ( !v58 )
            {
LABEL_138:
              SURFMEM::~SURFMEM((SURFMEM *)&v141);
              DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v156);
              if ( v157[0] )
                DLODCOBJ::vUnlock((DLODCOBJ *)v157);
LABEL_140:
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v139);
LABEL_141:
              v19 = v123;
              goto LABEL_142;
            }
            v59 = v120;
            v60 = (struct SURFACE *)*((_QWORD *)v120 + 62);
            if ( !v60 )
              v60 = SURFACE::pdibDefault;
            v61 = (struct PALETTE *)*((_QWORD *)v120 + 11);
            v62 = *((_QWORD *)v60 + 16);
            XlateObject = 0LL;
            v126 = 0;
            if ( v61 != ppalDefault )
            {
              *((_QWORD *)v60 + 22) = *(_QWORD *)v61;
              v59 = v120;
            }
            if ( v122 )
            {
              if ( v122 == 1 )
              {
                if ( v49 < 2 * (unsigned __int64)v119
                  || !(unsigned int)EXLATEOBJ::bMakeXlate(&XlateObject, v167, v61, v60, v119, v114) )
                {
                  goto LABEL_137;
                }
                v51 = XlateObject;
                if ( gbMultiMonMismatchColor && (*(_DWORD *)(v50 + 40) & 1) != 0 )
                {
                  if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v139, v116, v114, 0LL, v134, v133, v132, v115, 1) )
                    goto LABEL_137;
                  v108 = *((_QWORD *)v60 + 16);
                  if ( !v108 )
                    v108 = *(_QWORD *)(v50 + 1808);
                  XEPALOBJ::vGetEntriesFrom(&v139, v61, v108, v167, v119);
                  v59 = v120;
                  v64 = v125;
                  v66 = 1;
                }
                else
                {
                  v59 = v120;
                  v66 = v126;
                  v64 = v125;
                }
              }
              else
              {
                v64 = v125;
                if ( v122 == 2 )
                {
                  v107 = v113;
                  v51 = (HDC)xloIdent;
                  if ( *((_DWORD *)v60 + 24) != (_DWORD)v130 )
                    v107 = 0;
                  v113 = v107;
                }
                v66 = 0;
              }
              v65 = v113;
              goto LABEL_96;
            }
            if ( v119 )
            {
              if ( v49 < 4 * v119 )
                goto LABEL_137;
              v64 = v125;
              if ( v125 - 10 <= 2 )
                XEPALOBJ::vCopy_cmykquad(
                  (XEPALOBJ *)&v139,
                  (const unsigned int *)&v167->rgbBlue,
                  (unsigned int)v59,
                  v119);
              else
                XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v139, v167, 0, v119);
              XlateObject = (HDC)CreateXlateObject(v144[0], (unsigned int)v129, v139, v62, v61, v61, 0, 0, 0xFFFFFF, 0);
              v51 = XlateObject;
              if ( !XlateObject )
              {
                v65 = 0;
                goto LABEL_95;
              }
            }
            else
            {
              v63 = (HDC)CreateXlateObject(v144[0], (unsigned int)v129, v139, v62, v61, v61, 0, 0, 0xFFFFFF, 0);
              v64 = v125;
              v51 = v63;
              XlateObject = v63;
              if ( !v63 )
              {
                v65 = 0;
                v51 = 0LL;
                goto LABEL_95;
              }
            }
            v65 = v113;
LABEL_95:
            v59 = v120;
            v66 = v126;
LABEL_96:
            if ( v65 )
            {
              if ( (*((_DWORD *)v59 + 9) & 0xE0) != 0 )
                XDCOBJ::vAccumulate((XDCOBJ *)&v120, (struct ERECTL *)&v163);
              if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v120) )
              {
                v72 = v117;
              }
              else
              {
                if ( (v156[24] & 1) == 0 )
                  goto LABEL_137;
                v68 = v67 + 256;
                v69 = (v67[10] & 1) == 0;
                v70 = v67 + 254;
                v71 = a6;
                if ( v69 )
                  v68 = v70;
                v163 += *v68;
                v165 += *v68;
                v164 += v68[1];
                v166 += v68[1];
                LODWORD(v167) = a6;
                if ( v64 == 4 && (BYTE8(v131) & 1) != 0 )
                {
                  v74 = a7;
                  v73 = a9;
                  v72 = v117;
                }
                else
                {
                  v72 = v117;
                  v73 = a9;
                  v74 = v117 - a7 - a9;
                }
                v75 = v124;
                v76 = a6 + a8;
                HIDWORD(v167) = v74;
                v77 = v74 + v73;
                v169 = v74 + v73;
                v168 = a6 + a8;
                if ( a6 > a6 + a8 )
                {
                  v71 = v76 + 1;
                  v75 = v124 ^ 1;
                  v76 = a6 + 1;
                  LODWORD(v167) = v71;
                  v168 = a6 + 1;
                }
                if ( v74 > v77 )
                {
                  v109 = v74;
                  v75 ^= 2u;
                  v74 = v77 + 1;
                  HIDWORD(v167) = v77 + 1;
                  v77 = v109 + 1;
                  v169 = v109 + 1;
                }
                if ( v76 <= 0
                  || v77 <= 0
                  || v71 >= *(_DWORD *)(v141 + 56)
                  || v74 >= *(_DWORD *)(v141 + 60)
                  || ERECTL::bEmpty((ERECTL *)&v167) )
                {
                  goto LABEL_137;
                }
                v78 = XDCOBJ::prgnEffRao((XDCOBJ *)&v120);
                v173 = v79;
                v174 = v79;
                v175 = 1;
                v176 = v79;
                XCLIPOBJ::vSetup((XCLIPOBJ *)v171, v78, (struct ERECTL *)&v163, 0);
                if ( !ERECTL::bEmpty((ERECTL *)v172) )
                {
                  if ( (*((_DWORD *)v120 + 9) & 0xE0) != 0 )
                  {
                    *(_OWORD *)v144 = v172[0];
                    XDCOBJ::vAccumulateTight((XDCOBJ *)&v120, v80, (struct ERECTL *)v144);
                  }
                  if ( v66 )
                  {
                    v110 = v139;
                    if ( v139 )
                    {
                      INC_SHARE_REF_CNT(v139);
                      v110 = v139;
                    }
                    *(_QWORD *)(v141 + 128) = v110;
                  }
                  v81 = *((_QWORD *)v60 + 6);
                  if ( (*((_DWORD *)v60 + 28) & 2) != 0 )
                    v82 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v81 + 2848);
                  else
                    v82 = EngStretchBlt;
                  v83 = v135;
                  if ( (*((_DWORD *)v60 + 28) & 2) != 0 && (*(_DWORD *)(v81 + 40) & 0x20000) == 0 )
                  {
                    if ( v135 == 4 && (*((_BYTE *)v120 + 72) & 0x10) == 0 )
                      v82 = EngStretchBlt;
                    if ( (int)v167 < 0
                      || SHIDWORD(v167) < 0
                      || v168 > *(_DWORD *)(v141 + 56)
                      || v169 > *(_DWORD *)(v141 + 60) )
                    {
                      v82 = EngStretchBlt;
                    }
                  }
                  if ( (v75 & 1) != 0 )
                  {
                    v111 = v163;
                    v163 = v165;
                    v165 = v111;
                  }
                  if ( (v75 & 2) != 0 )
                  {
                    v112 = v164;
                    v164 = v166;
                    v166 = v112;
                  }
                  ++*((_DWORD *)v60 + 23);
                  v84 = *((__int16 *)v120 + 89) >= 0 ? (char *)v120 + 176 : 0LL;
                  v85 = v141 ? v141 + 24 : 0LL;
                  if ( !((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, HDC, char *, char *, int *, struct tagRGBQUAD **, _QWORD, int))v82)(
                          (char *)v60 + 24,
                          v85,
                          0LL,
                          v171,
                          v51,
                          v84,
                          (char *)v120 + 1176,
                          &v163,
                          &v167,
                          0LL,
                          v83) )
                    goto LABEL_137;
                }
              }
              v123 = v72;
            }
LABEL_137:
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
            goto LABEL_138;
          }
          v19 = a9;
          goto LABEL_142;
        }
LABEL_210:
        EngSetLastError(0x57u);
        goto LABEL_141;
      }
      DCOBJ::DCOBJ((DCOBJ *)v153, XlateObject);
      if ( v153[0] && (unsigned int)DC::bIsCMYKColor(v153[0]) )
      {
        v41 = 1;
      }
      else
      {
        EngSetLastError(0x57u);
        v103 = v153[0];
        v41 = 0;
        v113 = 0;
      }
      if ( v103 )
      {
        XDCOBJ::vUnlockFast((XDCOBJ *)v153);
        v41 = v113;
      }
      if ( !v41 )
      {
LABEL_242:
        v44 = 0;
LABEL_243:
        v38 = v117;
        v39 = v118;
        goto LABEL_184;
      }
      v39 = v118;
      v38 = v117;
    }
    if ( (_DWORD)v40 != 4 )
    {
      EngSetLastError(0x57u);
      v39 = v118;
      v41 = v113;
      v38 = v117;
    }
    HIDWORD(v130) = a11[5];
    v104 = 0;
    if ( (_DWORD)v40 == 4 )
      v104 = v41;
    v116 = 1;
    v114 = 16;
    v44 = 16;
    v41 = v104;
    v113 = v104;
    LODWORD(v130) = 7;
    v115 = 1024;
    v126 = 1;
    goto LABEL_184;
  }
  v86 = XlateObject;
  v87 = a11[2] - v30 - a9;
  v129 = a11[2];
  if ( v129 > 0 )
    v30 = v87;
  CompatibleDC = (HDC)GreCreateCompatibleDC(XlateObject);
  if ( a11[4] - 1 <= 1 )
    DIBitmapComp = GreCreateDIBitmapComp(v86, *(__int64 *)&prclDest.left, (__int64)a11, v122, a14, v124);
  else
    DIBitmapComp = GreCreateDIBitmapReal(
                     v86,
                     4,
                     *(void **)&prclDest.left,
                     a11,
                     v122,
                     a14,
                     v124,
                     0LL,
                     0,
                     0LL,
                     0,
                     0LL,
                     0LL);
  v90 = DIBitmapComp;
  if ( !CompatibleDC || !DIBitmapComp )
  {
    bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
    GreDeleteObject(v90);
    goto LABEL_318;
  }
  GreSelectBitmap(CompatibleDC, DIBitmapComp);
  v91 = GreStretchBltInternal(XlateObject, v127, v138, v137, v136, CompatibleDC, a6, v30, a8, a9, a13, 0xFFFFFF, 1);
  bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
  GreDeleteObject(v90);
  if ( !v91 )
  {
LABEL_318:
    v32 = v123;
    goto LABEL_35;
  }
  v32 = v129;
LABEL_35:
  if ( v120 )
  {
    if ( (_DWORD)v121 && (*((_DWORD *)v120 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v121) )
      {
        v33 = XDCOBJ::GetUserAttr((XDCOBJ *)&v120);
        if ( v33 )
          DC::RestoreAttributes(v120, v33);
      }
      *((_DWORD *)v120 + 11) &= ~2u;
      LODWORD(v121) = 0;
    }
    v127 = 0;
    v34 = *(_QWORD *)v120;
    HmgDecrementExclusiveReferenceCountEx(v120, HIDWORD(v121), &v127);
    if ( v127 )
      bDeleteDCInternalEx(v34, 0LL);
  }
  return v32;
}
