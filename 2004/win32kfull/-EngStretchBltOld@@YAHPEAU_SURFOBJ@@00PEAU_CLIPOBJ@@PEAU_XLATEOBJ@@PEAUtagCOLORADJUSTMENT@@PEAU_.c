/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028ED10
 * Callers:
 *     EngStretchBlt @ 0x1C00D2AA0 (EngStretchBlt.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C001D0B8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0077C50 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00CD2A0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00CD3E8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C00D3E10 (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C00D431C (-vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z.c)
 *     EngHTBlt @ 0x1C00D4640 (EngHTBlt.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00F1B00 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C010FFE0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C01598D4 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0159900 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015A488 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A2CB8 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _SURFOBJ *v12; // r10
  struct _SURFOBJ *v13; // r11
  struct tagCOLORADJUSTMENT *v14; // r9
  struct _RECTL *v15; // r12
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v30; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v33; // edx
  BOOL v34; // eax
  int v35; // ecx
  struct _SURFOBJ *v36; // rax
  LONG v37; // ecx
  LONG v38; // eax
  unsigned __int64 v39; // r13
  SURFOBJ *v40; // rax
  LONG v41; // r9d
  int v42; // ecx
  LONG v43; // r8d
  LONG v44; // edx
  LONG v45; // edx
  SURFOBJ *v46; // rax
  int v47; // eax
  unsigned int (__fastcall *v48)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, __int128 *, _QWORD *, unsigned int); // rax
  int v49; // r13d
  int v50; // ecx
  int v51; // eax
  struct _RECTL *v52; // rcx
  int v53; // eax
  unsigned __int64 v54; // rbx
  int v55; // eax
  unsigned __int64 v56; // r9
  SIZEL v57; // r8
  int v58; // eax
  int v59; // ecx
  __int64 v60; // rcx
  int v61; // r8d
  LONG v62; // r11d
  int v63; // r9d
  struct _RECTL *v64; // rbx
  int v65; // ecx
  int v66; // edx
  unsigned int v67; // edx
  int v68; // ecx
  XCLIPOBJ *v69; // rdi
  int v70; // eax
  struct _RECTL *v71; // rcx
  LONG v72; // eax
  LONG v73; // ecx
  LONG v74; // edx
  LONG v75; // r8d
  unsigned int v76; // ecx
  struct _STRDDA *v77; // r12
  struct _RECTL *v78; // r9
  struct _RECTL *v79; // rbx
  unsigned __int64 v80; // rcx
  unsigned int v81; // r8d
  unsigned int v82; // eax
  __int64 v83; // rcx
  HSURF v84; // rbx
  struct _RECTL *v85; // r11
  struct _RECTL *v86; // r12
  unsigned int v87; // r8d
  unsigned int v88; // r8d
  struct HSURF__ *v89; // r10
  LONG v90; // r8d
  int i; // r9d
  int v92; // edx
  __int64 v93; // rax
  unsigned __int64 v94; // rbx
  XCLIPOBJ *v96; // r15
  unsigned __int64 v97; // r9
  unsigned int v98; // [rsp+70h] [rbp-3D8h]
  LONG v99; // [rsp+70h] [rbp-3D8h]
  int v100; // [rsp+74h] [rbp-3D4h]
  LONG v101; // [rsp+74h] [rbp-3D4h]
  int v102; // [rsp+74h] [rbp-3D4h]
  int v103; // [rsp+78h] [rbp-3D0h]
  unsigned int v104; // [rsp+7Ch] [rbp-3CCh]
  unsigned int v105; // [rsp+7Ch] [rbp-3CCh]
  LONG v106; // [rsp+80h] [rbp-3C8h]
  int v107; // [rsp+80h] [rbp-3C8h]
  int v108; // [rsp+80h] [rbp-3C8h]
  struct HSURF__ *v109; // [rsp+80h] [rbp-3C8h]
  __int16 v110; // [rsp+88h] [rbp-3C0h]
  int v111; // [rsp+88h] [rbp-3C0h]
  unsigned __int64 v112; // [rsp+88h] [rbp-3C0h]
  __int64 v113; // [rsp+90h] [rbp-3B8h] BYREF
  struct _RECTL *v114; // [rsp+98h] [rbp-3B0h]
  SURFOBJ *pso; // [rsp+A0h] [rbp-3A8h]
  struct _SURFOBJ *v116; // [rsp+A8h] [rbp-3A0h]
  unsigned __int64 v117; // [rsp+B0h] [rbp-398h]
  struct _RECTL *v118; // [rsp+B8h] [rbp-390h]
  XCLIPOBJ *v119; // [rsp+C0h] [rbp-388h]
  unsigned __int64 v120; // [rsp+C8h] [rbp-380h]
  struct _SURFOBJ *v121; // [rsp+D0h] [rbp-378h]
  struct _SURFOBJ *v122; // [rsp+D8h] [rbp-370h] BYREF
  char v123; // [rsp+E0h] [rbp-368h]
  int v124; // [rsp+E4h] [rbp-364h]
  SIZEL v125; // [rsp+E8h] [rbp-360h] BYREF
  char v126; // [rsp+F0h] [rbp-358h]
  int v127; // [rsp+F4h] [rbp-354h]
  struct REGION *v128[2]; // [rsp+F8h] [rbp-350h] BYREF
  SIZEL sizl; // [rsp+108h] [rbp-340h]
  BOOL v130; // [rsp+110h] [rbp-338h]
  struct _SURFOBJ *v131; // [rsp+118h] [rbp-330h]
  struct _POINTL *v132; // [rsp+120h] [rbp-328h]
  struct tagCOLORADJUSTMENT *v133; // [rsp+128h] [rbp-320h]
  HSURF hsurf; // [rsp+130h] [rbp-318h]
  struct REGION *v135[2]; // [rsp+138h] [rbp-310h] BYREF
  _QWORD *v136; // [rsp+148h] [rbp-300h]
  void (**v137)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+150h] [rbp-2F8h]
  _QWORD v138[2]; // [rsp+158h] [rbp-2F0h] BYREF
  int v139; // [rsp+168h] [rbp-2E0h]
  __int64 v140; // [rsp+170h] [rbp-2D8h] BYREF
  char v141; // [rsp+178h] [rbp-2D0h]
  int v142; // [rsp+17Ch] [rbp-2CCh]
  struct _CLIPOBJ *v143; // [rsp+180h] [rbp-2C8h]
  unsigned __int64 v144; // [rsp+188h] [rbp-2C0h]
  __int64 v145; // [rsp+190h] [rbp-2B8h]
  __int64 v146; // [rsp+198h] [rbp-2B0h] BYREF
  int v147; // [rsp+1A0h] [rbp-2A8h]
  int v148; // [rsp+1A4h] [rbp-2A4h]
  _DWORD v149[4]; // [rsp+1A8h] [rbp-2A0h] BYREF
  __int64 v150; // [rsp+1B8h] [rbp-290h]
  int v151; // [rsp+1C0h] [rbp-288h]
  int v152; // [rsp+1C4h] [rbp-284h]
  _DWORD v153[4]; // [rsp+1C8h] [rbp-280h] BYREF
  __int64 v154; // [rsp+1D8h] [rbp-270h]
  int v155; // [rsp+1E0h] [rbp-268h]
  int v156; // [rsp+1E4h] [rbp-264h]
  __int64 v157; // [rsp+1E8h] [rbp-260h] BYREF
  __int64 v158; // [rsp+1F0h] [rbp-258h] BYREF
  __int64 v159; // [rsp+1F8h] [rbp-250h]
  __int64 v160; // [rsp+200h] [rbp-248h]
  __int64 v161; // [rsp+208h] [rbp-240h] BYREF
  struct _RECTL v162; // [rsp+210h] [rbp-238h] BYREF
  struct _RECTL v163; // [rsp+220h] [rbp-228h] BYREF
  struct _RECTL v164; // [rsp+230h] [rbp-218h] BYREF
  __m128i v165; // [rsp+240h] [rbp-208h] BYREF
  __int128 v166; // [rsp+250h] [rbp-1F8h] BYREF
  struct _RECTL v167; // [rsp+260h] [rbp-1E8h] BYREF
  __int128 v168; // [rsp+270h] [rbp-1D8h] BYREF
  struct _RECTL v169; // [rsp+280h] [rbp-1C8h] BYREF
  struct _RECTL v170; // [rsp+290h] [rbp-1B8h] BYREF
  int v171; // [rsp+2A0h] [rbp-1A8h]
  struct _RECTL v172; // [rsp+2A8h] [rbp-1A0h] BYREF
  _BYTE v173[160]; // [rsp+2C0h] [rbp-188h] BYREF
  _BYTE v174[4]; // [rsp+360h] [rbp-E8h] BYREF
  char v175[156]; // [rsp+364h] [rbp-E4h] BYREF

  v119 = (XCLIPOBJ *)a4;
  v131 = a3;
  v12 = a2;
  v116 = a2;
  v13 = a1;
  v121 = a1;
  v120 = (unsigned __int64)a5;
  v143 = a4;
  v14 = a6;
  v133 = a6;
  v132 = a7;
  v114 = a8;
  v15 = a9;
  v118 = a9;
  v136 = a10;
  v98 = a11;
  v137 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v117 = (unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL);
  v144 = v117;
  v16 = (unsigned __int64)&a2[-1].pvScan0 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64);
  *(_QWORD *)&v167.left = (unsigned __int64)&a3[-1].pvScan0 & -(__int64)(a3 != 0LL);
  v160 = *(_QWORD *)&v167.left;
  if ( !v117 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v17 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0LL;
  v18 = *(_DWORD *)(v16 + 96);
  if ( v18 == 9 || v17 == 10 || v18 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v19 = *(_QWORD *)(((unsigned __int64)&v13[-1].pvScan0 & -(__int64)(v13 != 0LL)) + 0x30);
    v138[0] = v19;
    v145 = v19;
    v20 = *(_QWORD *)(v16 + 48);
    v159 = v20;
    v140 = 0LL;
    v141 = 0;
    v142 = 0;
    v172 = *a9;
    v21 = v16;
    v22 = 1;
    if ( v12->iType == 1 && v20 && (*(_DWORD *)(v20 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v12, (struct SURFMEM *)&v140, &v172) )
      {
LABEL_204:
        v22 = 0;
        goto LABEL_185;
      }
      if ( !v140 )
        goto LABEL_185;
      v15 = &v172;
      v118 = &v172;
      v12 = (struct _SURFOBJ *)(v140 + 24);
      v116 = (struct _SURFOBJ *)(v140 + 24);
      v21 = v140 & -(__int64)(v140 != -24);
      v20 = *(_QWORD *)(v21 + 0x30);
      v159 = v20;
      v13 = v121;
      v14 = v133;
    }
    if ( !v120 || (v23 = 1, (*(_DWORD *)(v120 + 4) & 8) == 0) )
      v23 = 0;
    v104 = v23;
    v139 = v23;
    if ( v23 )
    {
      if ( v12->iType )
        goto LABEL_204;
      if ( v13->iType != 1 )
        goto LABEL_204;
      v24 = (__int64)v131;
      if ( v131 )
        goto LABEL_204;
    }
    else
    {
      v24 = (__int64)v131;
    }
    v25 = a11;
    if ( a11 == 4 )
    {
      if ( v23 )
        goto LABEL_204;
      v26 = EngHTBlt(
              v13,
              v12,
              v24,
              (CLIPOBJ *)v119,
              (struct XLATE *)v120,
              v14,
              (POINTL)v132,
              a8,
              (struct SURFACE *)v15,
              v136,
              0,
              0LL);
      if ( v26 == -1 )
        goto LABEL_204;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
          v25 = 4;
          goto LABEL_33;
        }
LABEL_185:
        SURFMEM::~SURFMEM((SURFMEM *)&v140);
        return v22;
      }
      v25 = 3;
      v98 = 3;
    }
LABEL_33:
    v27 = 0;
    v100 = 0;
    bottom = a8->bottom;
    top = a8->top;
    v30 = bottom;
    if ( bottom < top )
    {
      v30 = a8->top;
      a8->top = bottom;
      a8->bottom = top;
      v27 = 2;
      v100 = 2;
      top = bottom;
    }
    right = a8->right;
    left = a8->left;
    v33 = right;
    if ( right < a8->left )
    {
      v33 = a8->left;
      a8->left = right;
      a8->right = left;
      v27 |= 1u;
      v100 = v27;
      left = right;
    }
    if ( v25 >= 3 || *(_QWORD *)&v167.left )
    {
      v34 = 0;
      v103 = 0;
    }
    else
    {
      v103 = 1;
      v34 = 1;
      if ( v33 - left >= v15->right - v15->left )
      {
        v34 = v30 - top < v15->bottom - v15->top;
        v103 = v34;
      }
      v25 = v98;
    }
    v130 = v34;
    if ( !v34 )
    {
      if ( v25 < 3 )
        v25 = 3;
      v98 = v25;
    }
    v35 = *(_DWORD *)(v117 + 112);
    if ( (v35 & 0x40000) == 0 )
    {
      if ( v120 && (*(_DWORD *)(v120 + 4) & 1) == 0 )
      {
        v36 = v116;
      }
      else
      {
        v36 = v116;
        if ( !v116->iType )
          goto LABEL_50;
      }
      if ( *(_WORD *)(v117 + 100) )
      {
        if ( (v35 & 2) != 0 && !v27 && !v131 )
        {
          v41 = v15->left;
          if ( v15->left >= 0 )
          {
            v42 = v15->top;
            if ( v42 >= 0 )
            {
              v43 = v15->right;
              if ( v43 <= v36->sizlBitmap.cx )
              {
                v44 = v15->bottom;
                if ( v44 <= v36->sizlBitmap.cy )
                {
                  v168 = 0LL;
                  v111 = v43 - v41;
                  sizl.cx = v43 - v41;
                  v45 = v44 - v42;
                  v106 = v45;
                  sizl.cy = v45;
                  if ( v43 - v41 <= a8->right - a8->left && v45 <= a8->bottom - a8->top )
                  {
                    hsurf = (HSURF)EngCreateBitmap(sizl, 0, v121->iBitmapFormat, 0, 0LL);
                    v46 = EngLockSurface(hsurf);
                    pso = v46;
                    if ( v46 )
                    {
                      v46->iUniq = 0;
                      *((_QWORD *)&v168 + 1) = __PAIR64__(v106, v111);
                      if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
                        v47 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v20 + 2840))(
                                v46,
                                v116,
                                0LL,
                                v120,
                                &v168,
                                v15);
                      else
                        v47 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                v46,
                                v116,
                                0LL,
                                v120,
                                &v168,
                                v15);
                      if ( !v47
                        || (v48 = *(unsigned int (__fastcall **)(struct _SURFOBJ *, SURFOBJ *, _QWORD, XCLIPOBJ *, _QWORD, struct tagCOLORADJUSTMENT *, struct _POINTL *, struct _RECTL *, __int128 *, _QWORD *, unsigned int))(v19 + 2848)) == 0LL
                        || !v48(v121, pso, 0LL, v119, 0LL, v133, v132, a8, &v168, v136, v98) )
                      {
                        v22 = 0;
                      }
                      EngUnlockSurface(pso);
                      EngDeleteSurface(hsurf);
                      goto LABEL_185;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_50:
    v122 = 0LL;
    v123 = 0;
    v124 = 0;
    v165 = 0LL;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v173);
    v37 = *(_DWORD *)(v21 + 60);
    v38 = *(_DWORD *)(v21 + 56);
    *(_QWORD *)&v162.left = 0LL;
    v162.right = v38;
    v162.bottom = v37;
    v164 = 0LL;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v128);
    v110 = *(_WORD *)(v117 + 100);
    if ( v110 || *(_QWORD *)(v117 + 32) == *(_QWORD *)(v21 + 32) )
    {
      v165 = *(__m128i *)a8;
      v49 = _mm_cvtsi128_si32(v165);
      v163.left = v49 - 1;
      v163.top = v165.m128i_i32[1] - 1;
      v107 = _mm_cvtsi128_si32(_mm_srli_si128(v165, 8));
      v163.right = v107 + 1;
      v163.bottom = _mm_srli_si128(v165, 8).m128i_i32[1] + 1;
      v50 = *(_DWORD *)(v117 + 60);
      v51 = *(_DWORD *)(v117 + 56);
      v146 = 0LL;
      v147 = v51;
      v148 = v50;
      ERECTL::operator*=(&v163.left, (int *)&v146);
      if ( ERECTL::bEmpty((ERECTL *)&v163) )
        goto LABEL_184;
      if ( v110
        || v163.left <= v15->right && v163.right >= v15->left && v163.top <= v15->bottom && v163.bottom >= v15->top )
      {
        v165.m128i_i32[0] = v49 - v163.left;
        v165.m128i_i32[1] -= v163.top;
        v165.m128i_i32[2] = v107 - v163.left;
        v165.m128i_i32[3] -= v163.top;
        v149[3] = 0;
        v152 = 0;
        v149[1] = v163.right - v163.left + 1;
        v149[2] = v163.bottom - v163.top + 1;
        v150 = 0LL;
        if ( v104 )
          v53 = *(_DWORD *)(v21 + 96);
        else
          v53 = *(_DWORD *)(v117 + 96);
        v149[0] = v53;
        v151 = *(_DWORD *)(v117 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v122, (struct _DEVBITMAPINFO *)v149, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v122 )
          goto LABEL_203;
        v113 = *(_QWORD *)&v163.left;
        if ( !v128[0] )
          goto LABEL_203;
        *(_QWORD *)&v163.left = 0LL;
        v163.right -= v113;
        v163.bottom -= HIDWORD(v113);
        RGNOBJ::vSet((RGNOBJ *)v128, &v163);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v173, v128[0], (struct ERECTL *)&v163, 1);
        v161 = *(_QWORD *)(v117 + 48);
        PDEVOBJ::vSync((PDEVOBJ *)&v161, (struct _SURFOBJ *)(v117 + 24), 0LL, 0);
        if ( *(_QWORD *)&v167.left )
        {
          if ( (*(_DWORD *)(v117 + 112) & 0x400) != 0 )
            (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))(v19 + 2840))(
              (unsigned __int64)&v122->hdev & -(__int64)(v122 != 0LL),
              v117 + 24,
              0LL,
              xloIdent,
              &v163,
              &v113);
          else
            ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))EngCopyBits)(
              (unsigned __int64)&v122->hdev & -(__int64)(v122 != 0LL),
              v117 + 24,
              0LL,
              xloIdent,
              &v163,
              &v113);
        }
        v39 = (unsigned __int64)v122;
        v121 = v122;
        v52 = (struct _RECTL *)&v165;
        v40 = (SURFOBJ *)v173;
      }
      else
      {
        v39 = v117;
        v121 = (struct _SURFOBJ *)v117;
        v52 = v114;
        v40 = (SURFOBJ *)v119;
      }
      v114 = v52;
    }
    else
    {
      v39 = v117;
      v121 = (struct _SURFOBJ *)v117;
      v40 = (SURFOBJ *)v119;
    }
    pso = v40;
    v157 = *(_QWORD *)(v21 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v157, v116, 0LL, 0);
    ERECTL::operator*=(&v162.left, &v15->left);
    if ( !ERECTL::bEmpty((ERECTL *)&v162) )
    {
      v125 = 0LL;
      v126 = 0;
      v127 = 0;
      v166 = 0LL;
      if ( v100 || *(_WORD *)(v21 + 100) || (unsigned int)(*(_DWORD *)(v21 + 96) - 7) <= 1 )
      {
        v153[3] = 0;
        v156 = 0;
        v153[1] = v162.right - v162.left;
        v153[2] = v162.bottom - v162.top;
        v154 = 0LL;
        if ( v104 )
          v55 = *(_DWORD *)(v21 + 96);
        else
          v55 = *(_DWORD *)(v39 + 96);
        v153[0] = v55;
        v155 = *(_DWORD *)(v21 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v125, (struct _DEVBITMAPINFO *)v153, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !*(_QWORD *)&v125 )
          goto LABEL_202;
        DWORD2(v166) = v162.right - v162.left;
        HIDWORD(v166) = v162.bottom - v162.top;
        v56 = 0LL;
        if ( !v104 )
          v56 = v120;
        if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
          (*(void (__fastcall **)(__int64, __int64, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v20 + 2840))(
            *(_QWORD *)&v125 + 24LL,
            v21 + 24,
            0LL,
            v56,
            &v166,
            &v162);
        else
          ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
            *(_QWORD *)&v125 + 24LL,
            v21 + 24,
            0LL,
            v56,
            &v166,
            &v162);
        LODWORD(v166) = v15->left - v162.left;
        DWORD1(v166) = v15->top - v162.top;
        DWORD2(v166) = v15->right - v162.left;
        HIDWORD(v166) = v15->bottom - v162.top;
        v57 = v125;
        v21 = (__int64)v125;
        sizl = v125;
        v15 = (struct _RECTL *)&v166;
        v118 = (struct _RECTL *)&v166;
        v112 = 0LL;
        v162.right -= v162.left;
        v58 = v162.bottom - v162.top;
        v162.bottom -= v162.top;
        *(_QWORD *)&v162.left = 0LL;
        if ( (v100 & 2) != 0 )
        {
          v59 = *(_DWORD *)(*(_QWORD *)&v125 + 88LL);
          if ( v59 <= 0 )
            *(_QWORD *)(*(_QWORD *)&v125 + 80LL) = *(_QWORD *)(*(_QWORD *)&v125 + 72LL);
          else
            *(_QWORD *)(*(_QWORD *)&v125 + 80LL) = *(_QWORD *)(*(_QWORD *)&v125 + 72LL) + v59 * (v58 - 1);
          *(_DWORD *)(*(_QWORD *)&v125 + 88LL) = -*(_DWORD *)(*(_QWORD *)&v125 + 88LL);
          v57 = v125;
        }
        if ( (v100 & 1) != 0 )
        {
          v60 = *(unsigned int *)(*(_QWORD *)&v57 + 96LL);
          if ( (unsigned int)(v60 - 1) > 5 )
          {
LABEL_202:
            SURFMEM::~SURFMEM((SURFMEM *)&v125);
LABEL_203:
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v128);
            SURFMEM::~SURFMEM((SURFMEM *)&v122);
            goto LABEL_204;
          }
          ((void (__fastcall *)(_QWORD))(&apfnMirror)[v60])(v57);
        }
      }
      else
      {
        sizl = (SIZEL)v21;
        v54 = 0LL;
        if ( !v104 )
          v54 = v120;
        v112 = v54;
      }
      v158 = *(_QWORD *)(v39 + 48);
      PDEVOBJ::vSync((PDEVOBJ *)&v158, (struct _SURFOBJ *)(v39 + 24), 0LL, 0);
      v101 = v15->right;
      v61 = v101 - v15->left;
      if ( v61 >= 128000000 )
        goto LABEL_202;
      v62 = v15->top;
      v63 = v15->bottom - v62;
      if ( v63 >= 128000000 )
        goto LABEL_202;
      v64 = v114;
      v65 = v114->right - v114->left;
      if ( v65 >= 128000000 )
        goto LABEL_202;
      v66 = v114->bottom - v114->top;
      if ( v66 >= 128000000 || v65 <= -128000000 || v66 <= -128000000 )
        goto LABEL_202;
      if ( v98 == 3 && !v131 && (!v112 || (*(_DWORD *)(v112 + 4) & 1) != 0) )
      {
        v67 = *(_DWORD *)(v39 + 96);
        v68 = *(_DWORD *)(v21 + 96);
        if ( v67 == v68 && ((v68 - 3) & 0xFFFFFFFC) == 0 && v68 != 5 )
        {
          if ( pso && BYTE4(pso->dhpdev) == 3 )
          {
            v167 = 0LL;
            *(_QWORD *)&v162.right = 0LL;
            *(_QWORD *)&v162.left = 0LL;
            v170 = 0LL;
            v171 = 0;
            v69 = v119;
            XCLIPOBJ::cEnumStart(v119, 0, 0, 4u, 0);
            do
            {
              v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v170, 0LL);
              v108 = v70;
              if ( v170.left )
              {
                StretchDIBDirect(
                  *(char **)(v39 + 80),
                  *(_DWORD *)(v39 + 88),
                  *(_DWORD *)(v39 + 56),
                  *(_DWORD *)(v39 + 60),
                  v64,
                  *(char **)(v21 + 80),
                  *(_DWORD *)(v21 + 88),
                  *(_DWORD *)(v21 + 56),
                  *(_DWORD *)(v21 + 60),
                  v15,
                  &v167,
                  (struct _RECTL *)&v170.top,
                  *(_DWORD *)(v39 + 96));
                ERECTL::operator+=((unsigned int *)&v162, (unsigned int *)&v167);
                v70 = v108;
              }
            }
            while ( v70 );
            v19 = v138[0];
          }
          else
          {
            v71 = v114;
            if ( pso && BYTE4(pso->dhpdev) == 1 )
              v71 = (struct _RECTL *)((char *)&pso->dhsurf + 4);
            StretchDIBDirect(
              *(char **)(v39 + 80),
              *(_DWORD *)(v39 + 88),
              *(_DWORD *)(v39 + 56),
              *(_DWORD *)(v39 + 60),
              v114,
              *(char **)(v21 + 80),
              *(_DWORD *)(v21 + 88),
              *(_DWORD *)(v21 + 56),
              *(_DWORD *)(v21 + 60),
              v15,
              &v162,
              v71,
              v67);
          }
          v72 = v162.left;
          v164 = v162;
          v73 = v162.right;
          v74 = v162.top;
          v75 = v162.bottom;
          goto LABEL_182;
        }
      }
      if ( v101 < v15->left )
        goto LABEL_202;
      if ( v15->bottom < v62 )
        goto LABEL_202;
      v76 = v63 + v61;
      if ( v63 + v61 < (unsigned int)v61 )
        goto LABEL_202;
      if ( v76 >= 0x3FFFFFF5 )
        goto LABEL_202;
      v77 = (struct _STRDDA *)PALLOCMEM2(4 * v76 + 40, 1752462151LL, 0);
      v109 = (struct HSURF__ *)v77;
      if ( !v77 )
        goto LABEL_202;
      *(_DWORD *)v137 = 1;
      v78 = v64;
      v79 = v118;
      vInitStrDDA(v77, &v162, v118, v78);
      v164 = *(struct _RECTL *)v77;
      v80 = v112;
      if ( v112 )
      {
        if ( (*(_BYTE *)(v112 + 4) & 1) != 0 )
          v80 = 0LL;
        v112 = v80;
      }
      if ( pso )
        pso = (SURFOBJ *)((unsigned __int64)pso & -(__int64)(BYTE4(pso->dhpdev) != 0));
      v137 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))(&apfnWrite)[*(unsigned int *)(v39 + 96)];
      if ( v103 )
        *((_DWORD *)v77 + 5) = (v98 != 1) - 1;
      v116 = (struct _SURFOBJ *)*(&apfnRead + 3 * *(unsigned int *)(v21 + 96) + v98 - 1);
      v132 = (struct _POINTL *)v116;
      v81 = v164.right - v164.left;
      if ( v79->right - v79->left <= v114->right - v114->left )
      {
        if ( v81 + 3 < v81 )
          goto LABEL_201;
        v82 = (v81 + 3) >> 1;
        if ( v82 >= 0x15555553 )
          goto LABEL_201;
      }
      else
      {
        if ( v81 >= 0x15555553 )
          goto LABEL_201;
        v82 = v164.right - v164.left;
      }
      v83 = 12 * (v82 + 2);
      if ( v81 <= 0x5F5E100 && (unsigned int)v83 <= 0x2710000 )
      {
        v84 = (HSURF)AllocFreeTmpBuffer(v83);
        hsurf = v84;
        if ( v84 )
        {
          v85 = (struct _RECTL *)(*(_QWORD *)(v21 + 80) + *(_DWORD *)(v21 + 88) * v162.top);
          v114 = v85;
          v133 = 0LL;
          if ( v131 )
          {
            LODWORD(v133) = *(_DWORD *)v136 + v162.left - v118->left;
            v86 = (struct _RECTL *)(*(_QWORD *)(*(_QWORD *)&v167.left + 80LL)
                                  + *(_DWORD *)(*(_QWORD *)&v167.left + 88LL)
                                  * (v162.top + *((_DWORD *)v136 + 1) - v118->top));
          }
          else
          {
            v86 = 0LL;
          }
          v118 = v86;
          v105 = 0;
          if ( v103 )
          {
            v87 = -1;
            if ( v98 != 1 )
              v87 = 0;
            vInitBuffer((struct _STRRUN *)v84, &v164, v87);
            v105 = v88;
          }
          v89 = v109;
          *(_DWORD *)v84 = v109[1];
          v90 = v162.top;
          for ( i = 0; ; ++i )
          {
            v102 = i;
            v99 = v90;
            if ( v90 >= v162.bottom )
              break;
            v92 = *(_DWORD *)(*((_QWORD *)v89 + 3) + 4LL * i);
            *((_DWORD *)v84 + 1) = v92;
            if ( v92 )
            {
              v93 = ((__int64 (__fastcall *)(struct HSURF__ *, HSURF, struct _RECTL *, struct _RECTL *, unsigned __int64, LONG, LONG, _DWORD))v116)(
                      v89,
                      v84,
                      v85,
                      v86,
                      v112,
                      v162.left,
                      v162.right,
                      (_DWORD)v133);
              ((void (__fastcall *)(HSURF, __int64, unsigned __int64, SURFOBJ *))v137)(v84, v93, v39, pso);
              v85 = v114;
              v90 = v99;
              if ( v103 )
              {
                vInitBuffer((struct _STRRUN *)v84, &v164, v105);
                v90 = v99;
              }
              i = v102;
              v89 = v109;
            }
            else if ( v103 )
            {
              ((void (__fastcall *)(struct HSURF__ *, HSURF, struct _RECTL *, _QWORD, unsigned __int64, LONG, LONG, _DWORD))v116)(
                v89,
                v84,
                v85,
                0LL,
                v112,
                v162.left,
                v162.right,
                0);
              v89 = v109;
              v85 = v114;
              v90 = v99;
              i = v102;
            }
            v85 = (struct _RECTL *)((char *)v85 + *(int *)(v21 + 88));
            v114 = v85;
            *(_DWORD *)v84 += *((_DWORD *)v84 + 1);
            if ( v86 )
            {
              v86 = (struct _RECTL *)((char *)v86 + *(int *)(v160 + 88));
              v118 = v86;
            }
            ++v90;
          }
          FreeTmpBuffer(v84);
          Win32FreePool(v109);
          v75 = v164.bottom;
          v73 = v164.right;
          v74 = v164.top;
          v72 = v164.left;
LABEL_182:
          v94 = v117;
          if ( v39 == v117 )
          {
LABEL_183:
            SURFMEM::~SURFMEM((SURFMEM *)&v125);
            goto LABEL_184;
          }
          v164.left = v113 + v72;
          v164.top = HIDWORD(v113) + v74;
          v164.right = v113 + v73;
          v164.bottom = HIDWORD(v113) + v75;
          RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v135);
          if ( !v135[0] )
            goto LABEL_187;
          v96 = v119;
          if ( v119 )
          {
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
            if ( !v138[0]
              || (RGNOBJ::vSet((RGNOBJ *)v138, &v164),
                  !RGNOBJ::bMerge((RGNOBJ *)v135, (struct RGNOBJ *)v138, (XCLIPOBJ *)((char *)v96 + 56), 8u)) )
            {
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
LABEL_187:
              RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v135);
              goto LABEL_202;
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v138);
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)v135, &v164);
          }
          v169 = (struct _RECTL)*((_OWORD *)v135[0] + 6);
          if ( !v96 || bIntersect(&v169, (const struct _RECTL *)((char *)v96 + 4), &v169) )
          {
            ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v174, v135[0], (struct ERECTL *)&v169, 1);
            if ( !ERECTL::bEmpty((ERECTL *)v175) )
            {
              v163.left += v113;
              v163.top += HIDWORD(v113);
              v163.right += v113;
              v163.bottom += HIDWORD(v113);
              v113 = 0LL;
              v97 = v120 & -(__int64)(v139 != 0);
              if ( (*(_DWORD *)(v94 + 112) & 0x400) != 0 )
                (*(void (__fastcall **)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))(v19 + 2840))(
                  v94 + 24,
                  (unsigned __int64)&v122->hdev & -(__int64)(v122 != 0LL),
                  v174,
                  v97,
                  &v163,
                  &v113);
              else
                ((void (__fastcall *)(unsigned __int64, unsigned __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))EngCopyBits)(
                  v94 + 24,
                  (unsigned __int64)&v122->hdev & -(__int64)(v122 != 0LL),
                  v174,
                  v97,
                  &v163,
                  &v113);
            }
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v135);
          goto LABEL_183;
        }
      }
LABEL_201:
      Win32FreePool(v77);
      goto LABEL_202;
    }
LABEL_184:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v128);
    SURFMEM::~SURFMEM((SURFMEM *)&v122);
    goto LABEL_185;
  }
  return 1LL;
}
