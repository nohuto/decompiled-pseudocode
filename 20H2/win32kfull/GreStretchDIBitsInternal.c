/*
 * XREFs of GreStretchDIBitsInternal @ 0x1C009FCF0
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x1C009FA20 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1C0092534 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     GreCreateDIBitmapReal @ 0x1C00961AC (GreCreateDIBitmapReal.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     EngCopyBits @ 0x1C009C350 (EngCopyBits.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A16C0 (GreSetDIBitsToDeviceInternal.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C00A53E0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A81F0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiPatBlt @ 0x1C00AF630 (NtGdiPatBlt.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C0102BAC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     GreCreateDIBitmapComp @ 0x1C0118928 (GreCreateDIBitmapComp.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C026E454 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z @ 0x1C02BC07C (-vCopy_cmykquad@XEPALOBJ@@QEAAXPEBKKK@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x1C02BC138 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1C02BE378 (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x1C02BF8A8 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
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
        struct tagRGBQUAD *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        int a15,
        __int64 a16)
{
  __int64 v18; // rdx
  unsigned int v19; // r12d
  char v20; // al
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
  __int64 v86; // rbx
  HDC v87; // rsi
  int v88; // eax
  HDC CompatibleDC; // rdi
  __int64 DIBitmapComp; // rax
  __int64 v91; // rsi
  int v92; // ebx
  unsigned int v93; // ecx
  unsigned __int64 v94; // rcx
  __int64 v95; // rcx
  DC *v96; // r9
  int v97; // r11d
  unsigned int v98; // ecx
  unsigned __int64 v99; // rcx
  unsigned int v100; // eax
  unsigned int v101; // eax
  DC *v102; // rcx
  int v103; // eax
  DC *v104; // rcx
  int v105; // eax
  SURFOBJ *v106; // rdx
  SURFOBJ *v107; // rcx
  int v108; // ebx
  __int64 v109; // r8
  int v110; // eax
  __int64 v111; // rax
  int v112; // ecx
  int v113; // ecx
  int v114; // [rsp+80h] [rbp-80h]
  unsigned int v115; // [rsp+84h] [rbp-7Ch]
  unsigned int v116; // [rsp+88h] [rbp-78h]
  unsigned int v117; // [rsp+8Ch] [rbp-74h]
  unsigned int v118; // [rsp+90h] [rbp-70h]
  unsigned int v119; // [rsp+94h] [rbp-6Ch]
  unsigned int v120; // [rsp+94h] [rbp-6Ch]
  DC *v121; // [rsp+98h] [rbp-68h] BYREF
  __int64 v122; // [rsp+A0h] [rbp-60h]
  int v123; // [rsp+A8h] [rbp-58h]
  unsigned int v124; // [rsp+ACh] [rbp-54h]
  int v125; // [rsp+B0h] [rbp-50h]
  unsigned int v126; // [rsp+B4h] [rbp-4Ch]
  int v127; // [rsp+B8h] [rbp-48h]
  int v128; // [rsp+BCh] [rbp-44h] BYREF
  int v129; // [rsp+C0h] [rbp-40h] BYREF
  HDC XlateObject; // [rsp+C8h] [rbp-38h] BYREF
  int v131; // [rsp+D0h] [rbp-30h]
  __int128 v132; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v133; // [rsp+E8h] [rbp-18h]
  unsigned int v134; // [rsp+F8h] [rbp-8h]
  unsigned int v135; // [rsp+FCh] [rbp-4h]
  unsigned int v136; // [rsp+100h] [rbp+0h]
  int v137; // [rsp+104h] [rbp+4h]
  int v138; // [rsp+108h] [rbp+8h]
  int v139; // [rsp+10Ch] [rbp+Ch]
  __int64 v140; // [rsp+110h] [rbp+10h] BYREF
  int v141; // [rsp+118h] [rbp+18h]
  __int64 v142; // [rsp+120h] [rbp+20h] BYREF
  char v143; // [rsp+128h] [rbp+28h]
  int v144; // [rsp+12Ch] [rbp+2Ch]
  __int64 v145[2]; // [rsp+130h] [rbp+30h] BYREF
  char *v146; // [rsp+140h] [rbp+40h] BYREF
  int v147; // [rsp+148h] [rbp+48h]
  int v148; // [rsp+14Ch] [rbp+4Ch]
  DC *v149[2]; // [rsp+150h] [rbp+50h] BYREF
  __int64 v150; // [rsp+160h] [rbp+60h] BYREF
  char v151; // [rsp+168h] [rbp+68h]
  int v152; // [rsp+16Ch] [rbp+6Ch]
  DC *v153[2]; // [rsp+170h] [rbp+70h] BYREF
  DC *v154[2]; // [rsp+180h] [rbp+80h] BYREF
  unsigned __int64 v155; // [rsp+190h] [rbp+90h] BYREF
  int v156; // [rsp+19Ch] [rbp+9Ch]
  _BYTE v157[32]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v158[2]; // [rsp+1C0h] [rbp+C0h] BYREF
  __int16 v159; // [rsp+1D0h] [rbp+D0h]
  _BYTE v160[32]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v161[2]; // [rsp+210h] [rbp+110h] BYREF
  __int16 v162; // [rsp+220h] [rbp+120h]
  _OWORD v163[2]; // [rsp+240h] [rbp+140h] BYREF
  int v164; // [rsp+260h] [rbp+160h] BYREF
  int v165; // [rsp+264h] [rbp+164h]
  int v166; // [rsp+268h] [rbp+168h]
  int v167; // [rsp+26Ch] [rbp+16Ch]
  struct tagRGBQUAD *v168; // [rsp+270h] [rbp+170h] BYREF
  int v169; // [rsp+278h] [rbp+178h]
  int v170; // [rsp+27Ch] [rbp+17Ch]
  RECTL prclDest; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v172[4]; // [rsp+290h] [rbp+190h] BYREF
  __int128 v173[4]; // [rsp+294h] [rbp+194h] BYREF
  __int64 v174; // [rsp+2E0h] [rbp+1E0h]
  int v175; // [rsp+2E8h] [rbp+1E8h]
  int v176; // [rsp+310h] [rbp+210h]
  __int64 v177; // [rsp+320h] [rbp+220h]

  v125 = a15;
  v145[0] = a16;
  v129 = a2;
  v18 = a13;
  v139 = a4;
  v128 = a3;
  v19 = 0;
  v20 = gajRop3[BYTE2(a13)];
  XlateObject = a1;
  v138 = a5;
  *(_QWORD *)&prclDest.left = a10;
  v123 = a12;
  v124 = 0;
  v168 = (struct tagRGBQUAD *)BYTE2(a13);
  if ( (v20 & 0xD4) == 0 )
    return (unsigned int)NtGdiPatBlt(a1, a2, a3, a4, a5, a13);
  LOBYTE(v18) = 1;
  v122 = 0LL;
  v121 = (DC *)HmgLockEx(a1, v18, 0LL);
  if ( v121 )
  {
    if ( (*((_DWORD *)v121 + 11) & 2) == 0 )
    {
      UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v121);
      if ( UserAttr && !DC::SaveAttributes(v121, UserAttr) )
      {
        _InterlockedDecrement((volatile signed __int32 *)v121 + 3);
        v121 = 0LL;
        goto LABEL_142;
      }
      *((_DWORD *)v121 + 11) |= 2u;
      LODWORD(v122) = 1;
    }
    if ( (*((_DWORD *)v121 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(v121);
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  if ( !v121
    || !a11
    || !a10
    || a12 > 2
    || a14 < 0xC
    || (v22 = (__int64)*a11, a14 < (unsigned int)v22)
    || (unsigned int)v22 < 0x28
    || *(_DWORD *)&a11[1] <= 0
    || !*(_DWORD *)&a11[2] )
  {
LABEL_142:
    if ( v121 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v121);
      v128 = 0;
      v86 = *(_QWORD *)v121;
      HmgDecrementExclusiveReferenceCountEx(v121, HIDWORD(v122), &v128);
      if ( v128 )
        bDeleteDCInternalEx(v86, 0LL);
    }
    return v19;
  }
  v23 = *((_QWORD *)v121 + 122);
  v24 = *(unsigned __int8 *)(v23 + 215);
  v147 = *(_DWORD *)(v23 + 208);
  v25 = *((_QWORD *)v121 + 122);
  v137 = v24;
  v148 = *(_DWORD *)(v25 + 108) & 1;
  if ( (*(_DWORD *)(*((_QWORD *)v121 + 122) + 340LL) & 0x1E000) != 0 )
  {
    EXFORMOBJ::vInit((EXFORMOBJ *)&v146, (struct XDCOBJ *)&v121, 0x204u, 0);
    v26 = v146;
    v24 = v137;
  }
  else
  {
    v26 = (char *)v121 + 320;
    v146 = (char *)v121 + 320;
  }
  v27 = (unsigned int)a11[4];
  if ( v27 - 4 <= 1 )
  {
    if ( !(unsigned int)XDCOBJ::bSupportsPassthroughImage((XDCOBJ *)&v121, v27)
      || BYTE2(a13) != 204
      || (*((_DWORD *)v26 + 8) & 1) == 0
      || a12
      || (v28 = v145[0]) != 0 )
    {
      v32 = 0;
      goto LABEL_35;
    }
  }
  else
  {
    v28 = v145[0];
  }
  v29 = a9;
  if ( a4 == a8 && v138 == a9 && a9 > 0 && a8 > 0 )
  {
    v30 = a7;
    if ( !(a7 | a6) && BYTE2(a13) == 204 && v24 != 4 && (*((_DWORD *)v26 + 8) & 2) != 0 )
    {
      v31 = (int)a11[2];
      if ( v31 < 0 )
        v31 = -v31;
      if ( a9 >= v31 )
        v29 = v31;
      v32 = GreSetDIBitsToDeviceInternal(
              XlateObject,
              v138,
              a6,
              a7,
              a7,
              v29,
              *(__int64 *)&prclDest.left,
              (__int64)a11,
              v123,
              v125,
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
  v36 = v123;
  v37 = 0;
  if ( v123 == 1 )
  {
    v161[0] = 0LL;
    v161[1] = 0LL;
    v162 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v160, (struct XDCOBJ *)&v121, 0);
    v95 = *((_QWORD *)v121 + 62);
    if ( v95 )
      v37 = *(_DWORD *)(v95 + 96) == 1;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v160);
    if ( v161[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v161);
    v36 = v123;
    v26 = v146;
  }
  if ( (_DWORD)v168 == 204 && (*((_DWORD *)v26 + 8) & 1) != 0 && !v37 )
  {
    v38 = (int)a11[2];
    v39 = (unsigned int)a11[8];
    v40 = *(unsigned __int16 *)&a11[3].rgbRed;
    v41 = 1;
    v42 = (unsigned int)a11[1];
    v114 = 1;
    v43 = (unsigned int)a11[4];
    v168 = (struct tagRGBQUAD *)((char *)a11 + v22);
    v126 = v43;
    v118 = v38;
    v119 = v39;
    v132 = 0LL;
    v133 = 0LL;
    if ( v38 < 0 )
    {
      v38 = -v38;
      DWORD2(v133) = 1;
      v118 = v38;
    }
    v115 = 0;
    v117 = 0;
    v116 = 0;
    v136 = 0;
    v135 = 0;
    v134 = 0;
    v127 = 0;
    if ( v43 != 3 )
    {
      if ( !v43 )
      {
        if ( (unsigned int)v40 <= 8 )
        {
          switch ( (_DWORD)v40 )
          {
            case 1:
              LODWORD(v132) = 1;
              v44 = 2;
              v117 = 1;
              v45 = 1024;
              goto LABEL_61;
            case 4:
              v117 = 1;
              v44 = 16;
              v45 = 1024;
              LODWORD(v132) = 2;
              goto LABEL_61;
            case 8:
              LODWORD(v132) = 3;
              v44 = 256;
              v117 = 1;
              v116 = 1024;
LABEL_62:
              v115 = v44;
              v46 = v40 * v42;
              if ( (unsigned __int64)(v40 * v42) > 0xFFFFFFFF || v46 + 31 < v46 )
                goto LABEL_208;
              v47 = (unsigned int)v38 * (((unsigned __int64)(v46 + 31) >> 3) & 0x1FFFFFFC);
              if ( v47 <= 0xFFFFFFFF )
              {
                HIDWORD(v132) = v47;
                goto LABEL_66;
              }
LABEL_187:
              HIDWORD(v132) = -1;
LABEL_208:
              EngSetLastError(0x216u);
              v32 = 0;
              goto LABEL_35;
          }
        }
        if ( v36 == 1 )
          v123 = 0;
        switch ( (_DWORD)v40 )
        {
          case 0x18:
            LODWORD(v132) = 5;
            break;
          case 0x20:
            LODWORD(v132) = 6;
            break;
          case 0x10:
            LODWORD(v132) = 4;
            v136 = 31744;
            v135 = 992;
            v134 = 31;
            v117 = 2;
            goto LABEL_60;
          default:
LABEL_211:
            EngSetLastError(0x57u);
            goto LABEL_186;
        }
        v117 = 8;
LABEL_60:
        v44 = 0;
        v45 = 512;
LABEL_61:
        v116 = v45;
        goto LABEL_62;
      }
      if ( v43 == 10 )
      {
        DCOBJ::DCOBJ((DCOBJ *)v149, XlateObject);
        if ( !v149[0] || !(unsigned int)DC::bIsCMYKColor(v149[0]) )
          goto LABEL_231;
        switch ( (_DWORD)v40 )
        {
          case 1:
            v44 = 2;
            LODWORD(v132) = 1;
            v117 = 1;
            break;
          case 4:
            LODWORD(v132) = 2;
            v44 = 16;
            v117 = 1;
            break;
          case 8:
            LODWORD(v132) = 3;
            v44 = 256;
            v117 = 1;
            break;
          case 0x20:
            LODWORD(v132) = 6;
            v44 = 0;
            v117 = 16;
            v97 = 512;
LABEL_224:
            v116 = v97;
            v98 = v40 * v42;
            v115 = v44;
            if ( (unsigned __int64)(v40 * v42) <= 0xFFFFFFFF && v98 + 31 >= v98 )
            {
              v99 = v118 * (unsigned __int64)(((v98 + 31) >> 3) & 0x1FFFFFFC);
              if ( v99 <= 0xFFFFFFFF )
              {
                v41 = 1;
                HIDWORD(v132) = v99;
                goto LABEL_232;
              }
              HIDWORD(v132) = -1;
            }
            EngSetLastError(0x216u);
            v32 = 0;
            if ( v149[0] )
              XDCOBJ::vUnlockFast((XDCOBJ *)v149);
            goto LABEL_35;
          default:
LABEL_231:
            EngSetLastError(0x57u);
            v44 = 0;
            v41 = 0;
            v96 = v149[0];
            v114 = 0;
LABEL_232:
            if ( v96 )
            {
              XDCOBJ::vUnlockFast((XDCOBJ *)v149);
              v41 = v114;
            }
            goto LABEL_244;
        }
        v97 = 1024;
        goto LABEL_224;
      }
      if ( v43 != 2 )
      {
        if ( v43 != 12 )
        {
          if ( v43 == 1 )
            goto LABEL_252;
          if ( v43 != 11 )
          {
            if ( v43 == 4 )
            {
              v100 = (unsigned int)a11[5];
              v116 = 512;
              v44 = 0;
              LODWORD(v132) = 9;
              v115 = 0;
              v117 = 8;
              HIDWORD(v132) = v100;
              goto LABEL_66;
            }
            if ( v43 == 5 )
            {
              v101 = (unsigned int)a11[5];
              v116 = 512;
              v44 = 0;
              LODWORD(v132) = 10;
              v115 = 0;
              v117 = 8;
              HIDWORD(v132) = v101;
LABEL_66:
              v48 = v145[0];
              v49 = a14 - v22;
              if ( !v145[0] )
              {
                v48 = *(_QWORD *)(*((_QWORD *)v121 + 122) + 248LL);
                v145[0] = v48;
              }
              v131 = *((_DWORD *)v121 + 30);
              if ( (v131 & 0x10000000) != 0 && (!v48 || v126 - 10 > 2) )
                v131 = v131 & 0xFFFFFFF | 0x20000000;
              *(_QWORD *)((char *)&v132 + 4) = __PAIR64__(v38, v42);
              if ( v39 )
              {
                if ( v39 > v44 )
                  v39 = v44;
                v120 = v39;
              }
              else
              {
                v120 = v44;
              }
              if ( (unsigned int)v125 >= HIDWORD(v132) )
              {
                v50 = *((_QWORD *)v121 + 6);
                v166 = v129 + v139;
                v164 = v129;
                v165 = v128;
                v167 = v128 + v138;
                EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v155, (struct XDCOBJ *)&v121, 0x204u);
                if ( (*(_BYTE *)(v155 + 32) & 0x43) == 0x43 || (unsigned int)bCvtPts1(v155, &v164, 2LL) )
                {
                  v51 = 0LL;
                  v52 = 1;
                }
                else
                {
                  v51 = 0LL;
                  v52 = 0;
                }
                if ( v156 )
                {
                  ++v164;
                  ++v166;
                }
                if ( !v52 )
                  goto LABEL_141;
                if ( ERECTL::bEmpty((ERECTL *)&v164) )
                {
                  v19 = a9;
                  goto LABEL_142;
                }
                v125 = 0;
                v56 = 0;
                if ( v54 > v53 )
                {
                  v164 = v53;
                  v166 = v54;
                  if ( !v55 )
                  {
                    v164 = v53 + 1;
                    v166 = v54 + 1;
                  }
                  v56 = 1;
                  v125 = 1;
                }
                v57 = v165;
                if ( v165 > v167 )
                {
                  v165 = v167 + 1;
                  v125 = v56 ^ 2;
                  v167 = v57 + 1;
                }
                v141 = 0;
                v140 = 0LL;
                if ( !v123 && !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v140, v117, v44, 0LL, v136, v135, v134, v116, 1) )
                {
LABEL_140:
                  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v140);
LABEL_141:
                  v19 = v124;
                  goto LABEL_142;
                }
                v158[0] = 0LL;
                v158[1] = 0LL;
                v159 = 256;
                DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v157, (struct XDCOBJ *)&v121, 0);
                DWORD2(v133) |= 8 * (*(_DWORD *)(*((_QWORD *)v121 + 6) + 40LL) & 0x8000);
                *(_QWORD *)&v133 = 0LL;
                v142 = 0LL;
                v143 = 0;
                v144 = 0;
                if ( v127 )
                {
                  v150 = 0LL;
                  v151 = 0;
                  v163[0] = v132;
                  v152 = 0;
                  v163[1] = v133;
                  if ( SURFMEM::bCreateDIB(
                         (SURFMEM *)&v150,
                         (struct _DEVBITMAPINFO *)v163,
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
                    LODWORD(v132) = ((_DWORD)v132 != 7) + 2;
                    if ( SURFMEM::bCreateDIB(
                           (SURFMEM *)&v142,
                           (struct _DEVBITMAPINFO *)&v132,
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
                      *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v132 + 4);
                      *(_QWORD *)&prclDest.left = 0LL;
                      v106 = (SURFOBJ *)(v150 + 24);
                      if ( !v150 )
                        v106 = 0LL;
                      v107 = (SURFOBJ *)(v142 + 24);
                      if ( !v142 )
                        v107 = 0LL;
                      EngCopyBits(v107, v106, 0LL, 0LL, &prclDest, &gptl00);
                      v58 = v114;
                    }
                    else
                    {
                      v58 = 0;
                      v114 = 0;
                    }
                  }
                  else
                  {
                    v58 = 0;
                    v114 = 0;
                  }
                  SURFMEM::~SURFMEM((SURFMEM *)&v150);
                }
                else
                {
                  if ( !SURFMEM::bCreateDIB(
                          (SURFMEM *)&v142,
                          (struct _DEVBITMAPINFO *)&v132,
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
                  v58 = v114;
                }
                if ( !v58 )
                {
LABEL_138:
                  SURFMEM::~SURFMEM((SURFMEM *)&v142);
                  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v157);
                  if ( v158[0] )
                    DLODCOBJ::vUnlock((DLODCOBJ *)v158);
                  goto LABEL_140;
                }
                v59 = v121;
                v60 = (struct SURFACE *)*((_QWORD *)v121 + 62);
                if ( !v60 )
                  v60 = SURFACE::pdibDefault;
                v61 = (struct PALETTE *)*((_QWORD *)v121 + 11);
                v62 = *((_QWORD *)v60 + 16);
                XlateObject = 0LL;
                v127 = 0;
                if ( v61 != ppalDefault )
                {
                  *((_QWORD *)v60 + 22) = *(_QWORD *)v61;
                  v59 = v121;
                }
                if ( v123 )
                {
                  if ( v123 == 1 )
                  {
                    if ( v49 < 2 * (unsigned __int64)v120
                      || !(unsigned int)EXLATEOBJ::bMakeXlate(&XlateObject, v168, v61, v60, v120, v115) )
                    {
                      goto LABEL_137;
                    }
                    v51 = XlateObject;
                    if ( gbMultiMonMismatchColor && (*(_DWORD *)(v50 + 40) & 1) != 0 )
                    {
                      if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v140, v117, v115, 0LL, v136, v135, v134, v116, 1) )
                        goto LABEL_137;
                      v109 = *((_QWORD *)v60 + 16);
                      if ( !v109 )
                        v109 = *(_QWORD *)(v50 + 1808);
                      XEPALOBJ::vGetEntriesFrom(&v140, v61, v109, v168, v120);
                      v59 = v121;
                      v64 = v126;
                      v66 = 1;
                    }
                    else
                    {
                      v59 = v121;
                      v66 = v127;
                      v64 = v126;
                    }
                  }
                  else
                  {
                    v64 = v126;
                    if ( v123 == 2 )
                    {
                      v108 = v114;
                      v51 = (HDC)xloIdent;
                      if ( *((_DWORD *)v60 + 24) != (_DWORD)v132 )
                        v108 = 0;
                      v114 = v108;
                    }
                    v66 = 0;
                  }
                  v65 = v114;
                  goto LABEL_96;
                }
                if ( v120 )
                {
                  if ( v49 < 4 * v120 )
                    goto LABEL_137;
                  v64 = v126;
                  if ( v126 - 10 <= 2 )
                    XEPALOBJ::vCopy_cmykquad(
                      (XEPALOBJ *)&v140,
                      (const unsigned int *)&v168->rgbBlue,
                      (unsigned int)v59,
                      v120);
                  else
                    XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v140, v168, 0, v120);
                  XlateObject = (HDC)CreateXlateObject(
                                       v145[0],
                                       (unsigned int)v131,
                                       v140,
                                       v62,
                                       v61,
                                       v61,
                                       0,
                                       0,
                                       0xFFFFFF,
                                       0);
                  v51 = XlateObject;
                  if ( !XlateObject )
                  {
                    v65 = 0;
                    goto LABEL_95;
                  }
                }
                else
                {
                  v63 = (HDC)CreateXlateObject(v145[0], (unsigned int)v131, v140, v62, v61, v61, 0, 0, 0xFFFFFF, 0);
                  v64 = v126;
                  v51 = v63;
                  XlateObject = v63;
                  if ( !v63 )
                  {
                    v65 = 0;
                    v51 = 0LL;
                    goto LABEL_95;
                  }
                }
                v65 = v114;
LABEL_95:
                v59 = v121;
                v66 = v127;
LABEL_96:
                if ( v65 )
                {
                  if ( (*((_DWORD *)v59 + 9) & 0xE0) != 0 )
                    XDCOBJ::vAccumulate((XDCOBJ *)&v121, (struct ERECTL *)&v164);
                  if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)&v121) )
                  {
                    v72 = v118;
                  }
                  else
                  {
                    if ( (v157[24] & 1) == 0 )
                      goto LABEL_137;
                    v68 = v67 + 256;
                    v69 = (v67[10] & 1) == 0;
                    v70 = v67 + 254;
                    v71 = a6;
                    if ( v69 )
                      v68 = v70;
                    v164 += *v68;
                    v166 += *v68;
                    v165 += v68[1];
                    v167 += v68[1];
                    LODWORD(v168) = a6;
                    if ( v64 == 4 && (BYTE8(v133) & 1) != 0 )
                    {
                      v74 = a7;
                      v73 = a9;
                      v72 = v118;
                    }
                    else
                    {
                      v72 = v118;
                      v73 = a9;
                      v74 = v118 - a7 - a9;
                    }
                    v75 = v125;
                    v76 = a6 + a8;
                    HIDWORD(v168) = v74;
                    v77 = v74 + v73;
                    v170 = v74 + v73;
                    v169 = a6 + a8;
                    if ( a6 > a6 + a8 )
                    {
                      v71 = v76 + 1;
                      v75 = v125 ^ 1;
                      v76 = a6 + 1;
                      LODWORD(v168) = v71;
                      v169 = a6 + 1;
                    }
                    if ( v74 > v77 )
                    {
                      v110 = v74;
                      v75 ^= 2u;
                      v74 = v77 + 1;
                      HIDWORD(v168) = v77 + 1;
                      v77 = v110 + 1;
                      v170 = v110 + 1;
                    }
                    if ( v76 <= 0
                      || v77 <= 0
                      || v71 >= *(_DWORD *)(v142 + 56)
                      || v74 >= *(_DWORD *)(v142 + 60)
                      || ERECTL::bEmpty((ERECTL *)&v168) )
                    {
                      goto LABEL_137;
                    }
                    v78 = XDCOBJ::prgnEffRao((XDCOBJ *)&v121);
                    v174 = v79;
                    v175 = v79;
                    v176 = 1;
                    v177 = v79;
                    XCLIPOBJ::vSetup((XCLIPOBJ *)v172, v78, (struct ERECTL *)&v164, 0);
                    if ( !ERECTL::bEmpty((ERECTL *)v173) )
                    {
                      if ( (*((_DWORD *)v121 + 9) & 0xE0) != 0 )
                      {
                        *(_OWORD *)v145 = v173[0];
                        XDCOBJ::vAccumulateTight((XDCOBJ *)&v121, v80, (__m128i *)v145);
                      }
                      if ( v66 )
                      {
                        v111 = v140;
                        if ( v140 )
                        {
                          INC_SHARE_REF_CNT(v140);
                          v111 = v140;
                        }
                        *(_QWORD *)(v142 + 128) = v111;
                      }
                      v81 = *((_QWORD *)v60 + 6);
                      if ( (*((_DWORD *)v60 + 28) & 2) != 0 )
                        v82 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v81 + 2848);
                      else
                        v82 = EngStretchBlt;
                      v83 = v137;
                      if ( (*((_DWORD *)v60 + 28) & 2) != 0 && (*(_DWORD *)(v81 + 40) & 0x20000) == 0 )
                      {
                        if ( v137 == 4 && (*((_BYTE *)v121 + 72) & 0x10) == 0 )
                          v82 = EngStretchBlt;
                        if ( (int)v168 < 0
                          || SHIDWORD(v168) < 0
                          || v169 > *(_DWORD *)(v142 + 56)
                          || v170 > *(_DWORD *)(v142 + 60) )
                        {
                          v82 = EngStretchBlt;
                        }
                      }
                      if ( (v75 & 1) != 0 )
                      {
                        v112 = v164;
                        v164 = v166;
                        v166 = v112;
                      }
                      if ( (v75 & 2) != 0 )
                      {
                        v113 = v165;
                        v165 = v167;
                        v167 = v113;
                      }
                      ++*((_DWORD *)v60 + 23);
                      v84 = *((__int16 *)v121 + 89) >= 0 ? (char *)v121 + 176 : 0LL;
                      v85 = v142 ? v142 + 24 : 0LL;
                      if ( !((unsigned int (__fastcall *)(char *, __int64, _QWORD, _BYTE *, HDC, char *, char *, int *, struct tagRGBQUAD **, _QWORD, int))v82)(
                              (char *)v60 + 24,
                              v85,
                              0LL,
                              v172,
                              v51,
                              v84,
                              (char *)v121 + 1176,
                              &v164,
                              &v168,
                              0LL,
                              v83) )
                        goto LABEL_137;
                    }
                  }
                  v124 = v72;
                }
LABEL_137:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&XlateObject);
                goto LABEL_138;
              }
              goto LABEL_211;
            }
            EngSetLastError(0x57u);
            v41 = 0;
            v114 = 0;
LABEL_243:
            v44 = 0;
LABEL_244:
            v38 = v118;
            v39 = v119;
            goto LABEL_185;
          }
          DCOBJ::DCOBJ((DCOBJ *)v153, XlateObject);
          if ( v153[0] && (unsigned int)DC::bIsCMYKColor(v153[0]) )
          {
            v41 = 1;
          }
          else
          {
            EngSetLastError(0x57u);
            v102 = v153[0];
            v41 = 0;
            v114 = 0;
          }
          if ( v102 )
          {
            XDCOBJ::vUnlockFast((XDCOBJ *)v153);
            v41 = v114;
          }
          v39 = v119;
          v38 = v118;
          if ( v41 )
          {
LABEL_252:
            if ( (_DWORD)v40 != 8 )
            {
              EngSetLastError(0x57u);
              v39 = v119;
              v41 = v114;
              v38 = v118;
            }
            v117 = 1;
            LODWORD(v132) = 8;
            v127 = 1;
            v115 = 256;
            HIDWORD(v132) = a11[5];
            v103 = 0;
            if ( (_DWORD)v40 == 8 )
              v103 = v41;
            v116 = 1024;
            v41 = v103;
            v114 = v103;
          }
          v44 = v115;
LABEL_185:
          if ( !v41 )
          {
LABEL_186:
            v19 = v124;
            goto LABEL_142;
          }
          goto LABEL_66;
        }
        DCOBJ::DCOBJ((DCOBJ *)v154, XlateObject);
        if ( v154[0] && (unsigned int)DC::bIsCMYKColor(v154[0]) )
        {
          v41 = 1;
        }
        else
        {
          EngSetLastError(0x57u);
          v104 = v154[0];
          v41 = 0;
          v114 = 0;
        }
        if ( v104 )
        {
          XDCOBJ::vUnlockFast((XDCOBJ *)v154);
          v41 = v114;
        }
        if ( !v41 )
          goto LABEL_243;
        v39 = v119;
        v38 = v118;
      }
      if ( (_DWORD)v40 != 4 )
      {
        EngSetLastError(0x57u);
        v39 = v119;
        v41 = v114;
        v38 = v118;
      }
      HIDWORD(v132) = a11[5];
      v105 = 0;
      if ( (_DWORD)v40 == 4 )
        v105 = v41;
      v117 = 1;
      v115 = 16;
      v44 = 16;
      v41 = v105;
      v114 = v105;
      LODWORD(v132) = 7;
      v116 = 1024;
      v127 = 1;
      goto LABEL_185;
    }
    if ( a14 < 0x34 )
    {
      EngSetLastError(0x57u);
      v39 = v119;
      v41 = 0;
      v38 = v118;
      v114 = 0;
    }
    else
    {
      if ( v36 == 1 )
        v123 = 0;
      if ( (_DWORD)v40 == 32 )
      {
        LODWORD(v132) = 6;
      }
      else if ( (_DWORD)v40 == 16 )
      {
        LODWORD(v132) = 4;
      }
      else
      {
        EngSetLastError(0x57u);
        v39 = v119;
        v41 = 0;
        v38 = v118;
        v114 = 0;
      }
      v136 = (unsigned int)a11[10];
      v135 = (unsigned int)a11[11];
      v93 = v40 * v42;
      v168 = a11 + 10;
      v134 = (unsigned int)a11[12];
      v117 = 2;
      v116 = 512;
      if ( (unsigned __int64)(v40 * v42) > 0xFFFFFFFF || v93 + 31 < v93 )
        goto LABEL_208;
      v94 = (unsigned int)v38 * (((unsigned __int64)(v93 + 31) >> 3) & 0x1FFFFFFC);
      if ( v94 > 0xFFFFFFFF )
        goto LABEL_187;
      HIDWORD(v132) = v94;
    }
    v44 = 0;
    v115 = 0;
    goto LABEL_185;
  }
  v87 = XlateObject;
  v88 = *(_DWORD *)&a11[2] - v30 - a9;
  v131 = (int)a11[2];
  if ( v131 > 0 )
    v30 = v88;
  CompatibleDC = (HDC)GreCreateCompatibleDC(XlateObject);
  if ( (unsigned int)(*(_DWORD *)&a11[4] - 1) <= 1 )
    DIBitmapComp = GreCreateDIBitmapComp(v87, *(__int64 *)&prclDest.left, (__int64)a11, v123, a14, v125);
  else
    DIBitmapComp = GreCreateDIBitmapReal(
                     v87,
                     4,
                     *(void **)&prclDest.left,
                     (__int64)a11,
                     v123,
                     a14,
                     v125,
                     0LL,
                     0,
                     0LL,
                     0,
                     0LL,
                     0LL);
  v91 = DIBitmapComp;
  if ( !CompatibleDC || !DIBitmapComp )
  {
    bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
    GreDeleteObject(v91);
    goto LABEL_319;
  }
  GreSelectBitmap(CompatibleDC, DIBitmapComp);
  v92 = GreStretchBltInternal(XlateObject, v129, v128, v139, v138, CompatibleDC, a6, v30, a8, a9, a13, 0xFFFFFF, 1);
  bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
  GreDeleteObject(v91);
  if ( !v92 )
  {
LABEL_319:
    v32 = v124;
    goto LABEL_35;
  }
  v32 = v131;
LABEL_35:
  if ( v121 )
  {
    if ( (_DWORD)v122 && (*((_DWORD *)v121 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v122) )
      {
        v33 = XDCOBJ::GetUserAttr((XDCOBJ *)&v121);
        if ( v33 )
          DC::RestoreAttributes(v121, v33);
      }
      *((_DWORD *)v121 + 11) &= ~2u;
      LODWORD(v122) = 0;
    }
    v129 = 0;
    v34 = *(_QWORD *)v121;
    HmgDecrementExclusiveReferenceCountEx(v121, HIDWORD(v122), &v129);
    if ( v129 )
      bDeleteDCInternalEx(v34, 0LL);
  }
  return v32;
}
