/*
 * XREFs of NtGdiTransparentBlt @ 0x1C014B4C0
 * Callers:
 *     DxgkEngBltViaGDI @ 0x1C02764D0 (DxgkEngBltViaGDI.c)
 * Callees:
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1C0068928 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z @ 0x1C00978D8 (-bXform@EXFORMOBJ@@QEAAHAEAVERECTL@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C009CCAC (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C009D358 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C009D39C (--0DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00A37B0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00B180C (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00B3D30 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GetAppCompatFlags2 @ 0x1C00C7E10 (GetAppCompatFlags2.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C01031A8 (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C014BAB8 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ @ 0x1C014BB54 (-bRotationOrMirroring@EXFORMOBJ@@QEBAHXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C014BB84 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C014BBDC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?bRedirHooked@XDCOBJ@@QEAAHXZ @ 0x1C0277924 (-bRedirHooked@XDCOBJ@@QEAAHXZ.c)
 *     EngPlgBlt @ 0x1C028B9B0 (EngPlgBlt.c)
 */

__int64 __fastcall NtGdiTransparentBlt(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        int a9,
        int a10,
        unsigned int a11)
{
  unsigned int v14; // ecx
  unsigned int v15; // r12d
  struct ECLIPOBJ *v16; // rdx
  SURFACE **v17; // r8
  struct SURFACE *v18; // rsi
  __int64 v19; // r14
  __int64 v20; // r15
  __int64 v21; // r13
  BOOL v22; // r8d
  __int64 v23; // rdi
  bool v24; // cc
  int v25; // ebx
  int v26; // ebx
  __int64 v27; // rbx
  __int64 v28; // rsi
  struct REGION *v29; // rax
  POINTFIX v30; // r9
  int inited; // eax
  struct SURFACE *v32; // rdi
  unsigned int v33; // eax
  FIX x; // r9d
  FIX v36; // r8d
  FIX y; // r11d
  FIX v38; // ecx
  int v39; // r10d
  __int64 v40; // r8
  __int64 v41; // rdi
  unsigned int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // eax
  LONG v45; // ecx
  LONG v46; // edx
  int v47; // eax
  __int64 *v48; // rax
  bool v49; // zf
  BOOL (__stdcall *v50)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  int v51; // edx
  __int64 v52; // rdi
  unsigned int v53; // edx
  int *v54; // rdi
  unsigned int v55; // edx
  __int64 k; // rcx
  _BYTE *v57; // r8
  _BYTE *j; // r10
  _BYTE *v59; // rdx
  unsigned __int64 v60; // rcx
  _BYTE *v61; // rdx
  unsigned int v62; // edx
  _WORD *v63; // rdi
  __int64 i; // rcx
  size_t v65; // r8
  int v66; // edx
  SURFOBJ *v67; // rcx
  __int64 v68; // rdx
  __int64 v69; // r8
  int v70; // r12d
  int NearestIndexFromColorref; // [rsp+60h] [rbp-A0h]
  POINTFIX v72; // [rsp+68h] [rbp-98h] BYREF
  DC *v73[2]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v74[2]; // [rsp+80h] [rbp-80h] BYREF
  HDC v75; // [rsp+90h] [rbp-70h] BYREF
  __int64 v76; // [rsp+98h] [rbp-68h] BYREF
  char v77; // [rsp+A0h] [rbp-60h]
  int v78; // [rsp+A4h] [rbp-5Ch]
  __int64 v79; // [rsp+A8h] [rbp-58h] BYREF
  char v80; // [rsp+B0h] [rbp-50h]
  int v81; // [rsp+B4h] [rbp-4Ch]
  _QWORD v82[2]; // [rsp+B8h] [rbp-48h] BYREF
  _DWORD v83[4]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v84; // [rsp+D8h] [rbp-28h]
  __int64 v85; // [rsp+E0h] [rbp-20h]
  struct SURFACE *v86; // [rsp+E8h] [rbp-18h]
  _DWORD v87[4]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v88; // [rsp+100h] [rbp+0h]
  int v89; // [rsp+108h] [rbp+8h]
  int v90; // [rsp+10Ch] [rbp+Ch]
  _BYTE v91[16]; // [rsp+110h] [rbp+10h] BYREF
  _BYTE v92[224]; // [rsp+120h] [rbp+20h] BYREF
  __int128 v93; // [rsp+200h] [rbp+100h] BYREF
  RECTL prcl; // [rsp+210h] [rbp+110h] BYREF
  RECTL v95; // [rsp+220h] [rbp+120h] BYREF
  _BYTE v96[4]; // [rsp+230h] [rbp+130h] BYREF
  RECTL v97; // [rsp+234h] [rbp+134h] BYREF
  __int64 v98; // [rsp+280h] [rbp+180h]
  int v99; // [rsp+288h] [rbp+188h]
  int v100; // [rsp+2B0h] [rbp+1B0h]
  __int64 v101; // [rsp+2C0h] [rbp+1C0h]
  struct _POINTFIX v102; // [rsp+2D0h] [rbp+1D0h] BYREF
  FIX v103; // [rsp+2D8h] [rbp+1D8h]
  int v104; // [rsp+2DCh] [rbp+1DCh]
  int v105; // [rsp+2E0h] [rbp+1E0h]
  FIX v106; // [rsp+2E4h] [rbp+1E4h]
  FIX v107; // [rsp+2E8h] [rbp+1E8h]
  int v108; // [rsp+2ECh] [rbp+1ECh]
  __int128 v109; // [rsp+2F0h] [rbp+1F0h] BYREF
  unsigned int v110; // [rsp+300h] [rbp+200h]
  int v111; // [rsp+304h] [rbp+204h]
  POINTFIX pptfx; // [rsp+310h] [rbp+210h] BYREF
  POINTFIX v113; // [rsp+318h] [rbp+218h]
  POINTFIX v114; // [rsp+320h] [rbp+220h]

  v75 = a6;
  if ( a4 < 0 || a5 < 0 || a9 < 0 || a10 < 0 )
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
  DCOBJ::DCOBJ((DCOBJ *)v73, a1);
  DCOBJ::DCOBJ((DCOBJ *)v74, v75);
  if ( !v73[0]
    || (*((_DWORD *)v73[0] + 9) & 0x10000) != 0
    || !v74[0]
    || (bSpDwmValidateSurface((struct XDCOBJ *)v74, a7, a8, a9, a10),
        bSpDwmValidateSurface((struct XDCOBJ *)v73, a2, a3, a4, a5),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v82, (struct XDCOBJ *)v73, 516),
        EXFORMOBJ::vQuickInit((EXFORMOBJ *)v91, (struct XDCOBJ *)v74, 516),
        (unsigned int)EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v91)) )
  {
    EngSetLastError(0x57u);
    v15 = 0;
    goto LABEL_45;
  }
  prcl.right = a9 + a7;
  prcl.top = a8;
  prcl.left = a7;
  prcl.bottom = a10 + a8;
  EXFORMOBJ::bXform((EXFORMOBJ *)v91, (struct _POINTL *)&prcl);
  ERECTL::vOrder((ERECTL *)&prcl);
  `vector constructor iterator'(&v102, 8uLL, 4uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
  v72.x = EXFORMOBJ::bRotationOrMirroring((EXFORMOBJ *)v82);
  v14 = a4 + a2;
  v15 = 1;
  if ( v72.x )
  {
    v111 = a5 + a3;
    LODWORD(v109) = a2;
    *(_QWORD *)((char *)&v109 + 4) = __PAIR64__(v14, a3);
    HIDWORD(v109) = a3;
    v110 = a2;
    EXFORMOBJ::bXform((EXFORMOBJ *)v82, (struct _POINTL *)&v109, &v102, 3uLL);
    x = v102.x;
    v36 = v103;
    if ( (*(_DWORD *)(v82[0] + 32LL) & 1) != 0 )
    {
      if ( v102.x > v103 )
      {
        x = v102.x + 16;
        v36 = v103 + 16;
        v105 += 16;
        v102.x += 16;
        v103 += 16;
      }
      y = v102.y;
      v38 = v106;
      v39 = v104;
      if ( v102.y > v106 )
      {
        y = v102.y + 16;
        v39 = v104 + 16;
        v38 = v106 + 16;
        v102.y += 16;
        v106 += 16;
        v104 += 16;
      }
    }
    else
    {
      v38 = v106;
      v39 = v104;
      y = v102.y;
    }
    v108 = v38 + v39 - y;
    v107 = v36 + v105 - x;
    v40 = (v36 <= v107) ^ (unsigned int)(v36 > x);
    v41 = (v39 > y) ^ (unsigned int)(v39 <= v108);
    v42 = v40 ^ 3;
    if ( *(&v102.x + 2 * v40) <= *(&v102.x + 2 * ((unsigned int)v40 ^ 3LL)) )
      v42 = v40;
    v43 = v42;
    v44 = v41 ^ 3;
    if ( *(&v102.y + 2 * v41) <= *(&v102.y + 2 * ((unsigned int)v41 ^ 3LL)) )
      v44 = (v39 > y) ^ (v39 <= v108);
    LODWORD(v93) = (*(&v102.x + 2 * v43) + 15) >> 4;
    DWORD1(v93) = (*(&v102.y + 2 * v44) + 15) >> 4;
    DWORD2(v93) = (*(&v102.x + 2 * (v43 ^ 3)) + 15) >> 4;
    HIDWORD(v93) = (*(&v102.y + 2 * (v44 ^ 3LL)) + 15) >> 4;
  }
  else
  {
    HIDWORD(v93) = a5 + a3;
    LODWORD(v93) = a2;
    *(_QWORD *)((char *)&v93 + 4) = __PAIR64__(v14, a3);
    EXFORMOBJ::bXform((EXFORMOBJ *)v82, (struct _POINTL *)&v93);
    ERECTL::vOrder((ERECTL *)&v93);
  }
  if ( !ERECTL::bEmpty((ERECTL *)&v93) )
  {
    if ( (*((_DWORD *)v73[0] + 9) & 0xE0) != 0 )
      XDCOBJ::vAccumulate((XDCOBJ *)v73, (struct ERECTL *)&v93);
    DEVLOCKBLTOBJ::DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v92);
    if ( !(unsigned int)DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v92, (struct XDCOBJ *)v73, (struct XDCOBJ *)v74) )
    {
      v70 = XDCOBJ::bFullScreen((XDCOBJ *)v74);
      v15 = XDCOBJ::bFullScreen((XDCOBJ *)v73) | v70;
      goto LABEL_43;
    }
    v18 = (struct SURFACE *)*((_QWORD *)v73[0] + 62);
    v86 = v18;
    if ( !v18 )
      goto LABEL_43;
    v19 = *((_QWORD *)v18 + 16);
    v20 = *((_QWORD *)v73[0] + 11);
    v21 = *(_QWORD *)(v74[0] + 496LL);
    if ( !v21 )
      goto LABEL_43;
    if ( !(unsigned int)SrcSurfaceAccessCheck(*(struct SURFACE **)(v74[0] + 496LL))
      || !(unsigned int)DestSurfaceAccessCheck(v18) )
    {
      EngSetLastError(6u);
      goto LABEL_126;
    }
    v109 = v93;
    v22 = !(unsigned int)ERECTL::bOffsetAdd(
                           (ERECTL *)&v93,
                           (const struct _POINTL *)v73[0] + (*((_DWORD *)v73[0] + 10) & 1LL) + 127,
                           1)
       || !(unsigned int)ERECTL::bOffsetAdd(
                           (ERECTL *)&prcl,
                           (const struct _POINTL *)(v74[0] + 1016LL + 8 * (*(_DWORD *)(v74[0] + 40LL) & 1LL)),
                           1);
    v23 = *(_QWORD *)(v21 + 48);
    if ( *(_WORD *)(v21 + 100) == 1 && v23 && (*(_DWORD *)(v23 + 40) & 0x20000) != 0 )
    {
      v45 = *(_DWORD *)(v23 + 2584);
      if ( prcl.left < v45 )
        goto LABEL_69;
      v46 = *(_DWORD *)(v23 + 2588);
      if ( prcl.top < v46 || prcl.right > *(_DWORD *)(v21 + 56) + v45 )
        goto LABEL_69;
      v24 = prcl.bottom <= v46 + *(_DWORD *)(v21 + 60);
    }
    else
    {
      if ( prcl.left < 0 || prcl.top < 0 || prcl.right > *(_DWORD *)(v21 + 56) )
        goto LABEL_69;
      v24 = prcl.bottom <= *(_DWORD *)(v21 + 60);
    }
    if ( v24 )
    {
      v25 = 0;
LABEL_29:
      v26 = v22 | v25;
      if ( (struct SURFACE *)v21 == v18 )
      {
        v95 = prcl;
        ERECTL::operator*=(&v95.left, (int *)&v93);
        if ( !ERECTL::bEmpty((ERECTL *)&v95) )
          v26 = 1;
      }
      if ( v26 )
      {
        EngSetLastError(0x57u);
        v15 = 0;
      }
      else
      {
        v27 = *(_QWORD *)(v21 + 128);
        v28 = *(_QWORD *)(v74[0] + 88LL);
        NearestIndexFromColorref = ulGetNearestIndexFromColorref(v27, v28, a11, 1LL);
        v29 = XDCOBJ::prgnEffRao(v73);
        v100 = 1;
        v98 = 0LL;
        v99 = 0;
        v101 = 0LL;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v96, v29, (struct ERECTL *)&v93, 0);
        if ( !ERECTL::bEmpty((ERECTL *)&v97) )
        {
          if ( (*((_DWORD *)v73[0] + 9) & 0xE0) != 0 )
          {
            v95 = v97;
            XDCOBJ::vAccumulateTight((XDCOBJ *)v73, v16, (__m128i *)&v95);
          }
          v79 = 0LL;
          v80 = 0;
          v81 = 0;
          if ( (GetAppCompatFlags2(0x400u) & 0x8000000) != 0 )
          {
            v47 = *(_DWORD *)(*((_QWORD *)v73[0] + 122) + 108LL);
            if ( (v47 & 1) != 0 && (v47 & 9) != 9 )
            {
              v83[1] = *(_DWORD *)(v21 + 56);
              v83[2] = *(_DWORD *)(v21 + 60);
              v83[0] = *(_DWORD *)(v21 + 96);
              v48 = *(__int64 **)(v21 + 128);
              v83[3] = 0;
              v85 = 0LL;
              if ( v48 )
                v84 = *v48;
              else
                v84 = 0LL;
              SURFMEM::bCreateDIB((SURFMEM *)&v79, (struct _DEVBITMAPINFO *)v83, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
              if ( !v79
                || ((v49 = (*(_DWORD *)(v21 + 112) & 0x400) == 0,
                     *(_QWORD *)&v95.right = *(_QWORD *)(v21 + 56),
                     *(_QWORD *)&v95.left = 0LL,
                     v75 = 0LL,
                     v49)
                  ? (v50 = EngCopyBits)
                  : (v50 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v23 + 2840)),
                    !((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _QWORD, RECTL *, HDC *))v50)(
                       v79 + 24,
                       v21 + 24,
                       0LL,
                       0LL,
                       &v95,
                       &v75)
                 || (v51 = *(_DWORD *)(v79 + 96), (unsigned int)(v51 - 1) > 5)) )
              {
LABEL_119:
                SURFMEM::~SURFMEM((SURFMEM *)&v79);
LABEL_126:
                v15 = 0;
                goto LABEL_43;
              }
              ((void (*)(void))(&apfnMirror)[v51])();
              v21 = v79;
            }
          }
          v76 = 0LL;
          v77 = 0;
          v78 = 0;
          if ( !v72.x )
            goto LABEL_36;
          v87[1] = DWORD2(v93) - v93;
          v87[2] = HIDWORD(v93) - DWORD1(v93);
          v87[0] = *(_DWORD *)(v21 + 96);
          v89 = *(_DWORD *)(v21 + 112) & 0x40000;
          v87[3] = 0;
          v90 = 0;
          v88 = 0LL;
          if ( SURFMEM::bCreateDIB((SURFMEM *)&v76, (struct _DEVBITMAPINFO *)v87, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
            v52 = v76;
            v53 = *(_DWORD *)(v76 + 64);
            switch ( *(_DWORD *)(v21 + 96) )
            {
              case 1:
                v65 = *(unsigned int *)(v76 + 64);
                if ( NearestIndexFromColorref )
                  v66 = 255;
                else
                  v66 = 0;
                break;
              case 2:
                v65 = *(unsigned int *)(v76 + 64);
                v66 = NearestIndexFromColorref | (16 * NearestIndexFromColorref);
                break;
              case 3:
                v65 = *(unsigned int *)(v76 + 64);
                v66 = NearestIndexFromColorref;
                break;
              default:
                switch ( *(_DWORD *)(v21 + 96) )
                {
                  case 4:
                    v62 = v53 >> 1;
                    v63 = *(_WORD **)(v76 + 72);
                    if ( v62 )
                    {
                      for ( i = v62; i; --i )
                        *v63++ = NearestIndexFromColorref;
                    }
                    break;
                  case 5:
                    v57 = *(_BYTE **)(v76 + 80);
                    for ( j = &v57[*(_DWORD *)(v76 + 60) * *(_DWORD *)(v76 + 88)]; v57 != j; v57 += *(int *)(v52 + 88) )
                    {
                      v59 = v57;
                      v60 = (unsigned __int64)&v57[3 * *(_DWORD *)(v52 + 56) - 2];
                      if ( (unsigned __int64)v57 < v60 )
                      {
                        do
                        {
                          *v59 = NearestIndexFromColorref;
                          v61 = v59 + 1;
                          *v61++ = BYTE1(NearestIndexFromColorref);
                          *v61 = BYTE2(NearestIndexFromColorref);
                          v59 = v61 + 1;
                        }
                        while ( (unsigned __int64)v59 < v60 );
                        v52 = v76;
                      }
                    }
                    break;
                  case 6:
                    v54 = *(int **)(v76 + 72);
                    v55 = v53 >> 2;
                    if ( v55 )
                    {
                      for ( k = v55; k; --k )
                        *v54++ = NearestIndexFromColorref;
                    }
                    break;
                }
                goto LABEL_114;
            }
            memset(*(void **)(v76 + 72), v66, v65);
LABEL_114:
            `vector constructor iterator'(&pptfx, 8uLL, 3uLL, (void *(*)(void *))EPOINTFIX::EPOINTFIX);
            v72.x = v102.x - 16 * v109;
            v72.y = v102.y - 16 * DWORD1(v109);
            pptfx = v72;
            v72.x = v103 - 16 * v109;
            v72.y = v104 - 16 * DWORD1(v109);
            v113 = v72;
            v72.x = v105 - 16 * v109;
            v72.y = v106 - 16 * DWORD1(v109);
            v114 = v72;
            if ( v76 )
              v67 = (SURFOBJ *)(v76 + 24);
            else
              v67 = 0LL;
            EngPlgBlt(v67, (SURFOBJ *)(v21 + 24), 0LL, 0LL, xloIdent, 0LL, 0LL, &pptfx, &prcl, 0LL, 3u);
            v21 = v76;
            prcl.right = DWORD2(v93) - v93;
            prcl.bottom = HIDWORD(v93) - DWORD1(v93);
            *(_QWORD *)&prcl.left = 0LL;
            `vector destructor iterator'(&pptfx, 8uLL, 3uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_36:
            v30 = 0LL;
            v72 = 0LL;
            if ( *(_QWORD *)(v74[0] + 496LL) == *((_QWORD *)v73[0] + 62)
              || (inited = EXLATEOBJ::bInitXlateObj(
                             (__int64 *)&v72,
                             0LL,
                             0,
                             v27,
                             v19,
                             v28,
                             v20,
                             *(_DWORD *)(*((_QWORD *)v73[0] + 122) + 184LL),
                             *(_DWORD *)(*((_QWORD *)v73[0] + 122) + 176LL),
                             -1,
                             0),
                  v30 = v72,
                  inited) )
            {
              v32 = v86;
              ++*((_DWORD *)v86 + 23);
              if ( *((_QWORD *)v73[0] + 6) == *(_QWORD *)(v74[0] + 48LL)
                || (unsigned int)XDCOBJ::bRedirHooked((XDCOBJ *)v73) && *(_QWORD *)(v68 + 3520) == v69 )
              {
                if ( (*((_DWORD *)v32 + 28) & 0x8000) != 0 )
                  v33 = (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, POINTFIX, __int128 *, RECTL *, int, _DWORD))(*((_QWORD *)v32 + 6) + 3280LL))(
                          (__int64)v32 + 24,
                          (v21 + 24) & -(__int64)(v21 != 0),
                          v96,
                          v30,
                          &v93,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                else
                  v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))EngTransparentBlt)(
                          (char *)v32 + 24,
                          (v21 + 24) & -(__int64)(v21 != 0),
                          v96,
                          v30,
                          &v93,
                          &prcl,
                          NearestIndexFromColorref,
                          0);
                v15 = v33;
              }
              else
              {
                EngSetLastError(0x57u);
                v15 = 0;
              }
            }
            else
            {
              EngSetLastError(6u);
              v15 = 0;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v72);
            SURFMEM::~SURFMEM((SURFMEM *)&v76);
            SURFMEM::~SURFMEM((SURFMEM *)&v79);
            goto LABEL_43;
          }
          EngSetLastError(8u);
          SURFMEM::~SURFMEM((SURFMEM *)&v76);
          goto LABEL_119;
        }
      }
LABEL_43:
      DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v92, (__int64)v16, v17);
      goto LABEL_44;
    }
LABEL_69:
    v25 = 1;
    goto LABEL_29;
  }
LABEL_44:
  `vector destructor iterator'(&v102, 8uLL, 4uLL, (void (*)(void *))vSrcCopyDummy);
LABEL_45:
  if ( v74[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v74);
  if ( v73[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v73);
  return v15;
}
