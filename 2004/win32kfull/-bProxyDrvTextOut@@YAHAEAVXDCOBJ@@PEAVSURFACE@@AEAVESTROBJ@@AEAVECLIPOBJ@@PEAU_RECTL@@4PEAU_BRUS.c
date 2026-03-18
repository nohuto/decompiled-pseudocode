/*
 * XREFs of ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C000611C
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C00802E0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 * Callees:
 *     ?PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0006670 (-PostTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0006698 (-PreTextOut@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z @ 0x1C00066C0 (-bAdjusBaseLine@@YAHAEAVRFONTOBJ@@0PEAU_POINTL@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008502C (--1RFONTOBJ@@QEAA@XZ.c)
 *     STROBJ_bEnum @ 0x1C00CF140 (STROBJ_bEnum.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00FB9C0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1C010A118 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C0130AA4 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C0130C7C (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0138F78 (-bSimpleStroke@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSH.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C013A088 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A7FA8 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1C02BE0F8 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall bProxyDrvTextOut(
        struct XDCOBJ *a1,
        struct SURFACE *a2,
        struct ESTROBJ *a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        struct _POINTL *a9,
        struct RFONTOBJ *a10,
        struct PDEVOBJ *a11,
        unsigned int a12,
        struct _RECTL *a13)
{
  int v13; // r12d
  struct RFONTOBJ *v14; // rbx
  SURFACE *v15; // r15
  _WORD *v16; // r11
  CLIPOBJ *v17; // rsi
  struct _RECTL *v18; // r14
  POINTL *v20; // r10
  __int64 v21; // rax
  unsigned int v22; // r13d
  _DWORD *v23; // rdx
  struct _SURFOBJ *v24; // r9
  _BOOL8 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  int v29; // eax
  __int64 result; // rax
  RFONTOBJ *v31; // r13
  _DWORD *v32; // rdx
  unsigned __int64 v33; // r8
  _WORD *v34; // rcx
  unsigned __int64 v35; // r10
  __int64 v36; // rcx
  __int128 v37; // xmm0
  __int64 v38; // rcx
  float v39; // xmm0_4
  int v40; // r14d
  BOOL (__stdcall *v41)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rsi
  int v42; // edx
  struct XDCOBJ *v43; // rbx
  PGLYPHPOS v44; // rbx
  ULONG v45; // r14d
  unsigned int v46; // r15d
  int v47; // r12d
  struct _RECTL *v48; // r9
  int v49; // eax
  int v50; // eax
  unsigned int v51; // r8d
  __int64 v52; // r10
  int *v53; // rcx
  int v54; // edx
  LONG right; // edx
  unsigned __int64 left; // r8
  LONG v57; // eax
  __int64 v58; // rax
  LONG top; // ecx
  LONG bottom; // ecx
  __int64 v61; // rbx
  ULONG v62; // r15d
  unsigned int v63; // r14d
  PGLYPHPOS v64; // rsi
  int v65; // r12d
  bool v66; // zf
  struct RFONTOBJ *v67; // rbx
  int v68; // eax
  BOOL v69; // eax
  int v70; // r10d
  GLYPHBITS *pgb; // rdx
  int v72; // ecx
  int v73; // r8d
  int v74; // eax
  BRUSHOBJ *pbo; // [rsp+28h] [rbp-D8h]
  POINTL *v76; // [rsp+38h] [rbp-C8h]
  POINTL *v77; // [rsp+40h] [rbp-C0h]
  unsigned int v78; // [rsp+58h] [rbp-A8h]
  ULONG pc; // [rsp+60h] [rbp-A0h] BYREF
  int v80; // [rsp+64h] [rbp-9Ch]
  int v81; // [rsp+68h] [rbp-98h]
  __int64 v82; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v83; // [rsp+78h] [rbp-88h] BYREF
  SURFACE *v84; // [rsp+80h] [rbp-80h]
  struct _RECTL *v85; // [rsp+88h] [rbp-78h]
  PGLYPHPOS ppgpos; // [rsp+90h] [rbp-70h] BYREF
  int v87; // [rsp+98h] [rbp-68h]
  unsigned int v88; // [rsp+9Ch] [rbp-64h]
  struct XDCOBJ *v89; // [rsp+A0h] [rbp-60h]
  struct RFONTOBJ *v90; // [rsp+A8h] [rbp-58h]
  POINTL *v91; // [rsp+B0h] [rbp-50h]
  CLIPOBJ *pco; // [rsp+B8h] [rbp-48h]
  BRUSHOBJ *v93; // [rsp+C0h] [rbp-40h]
  _BOOL8 v94; // [rsp+C8h] [rbp-38h]
  struct _SURFOBJ *v95; // [rsp+D0h] [rbp-30h]
  struct _POINTL v96; // [rsp+D8h] [rbp-28h] BYREF
  struct PDEVOBJ *v97; // [rsp+E0h] [rbp-20h]
  struct _BRUSHOBJ *v98; // [rsp+E8h] [rbp-18h]
  struct _RECTL *v99; // [rsp+F0h] [rbp-10h]
  _WORD *v100; // [rsp+F8h] [rbp-8h]
  __int64 v101; // [rsp+100h] [rbp+0h]
  LINEATTRS v102; // [rsp+108h] [rbp+8h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+30h] BYREF
  __int64 v104; // [rsp+138h] [rbp+38h]
  int v105[10]; // [rsp+1B0h] [rbp+B0h] BYREF
  int v106[10]; // [rsp+1D8h] [rbp+D8h] BYREF

  v13 = 0;
  v14 = a10;
  v15 = a2;
  v16 = (_WORD *)*((_QWORD *)a3 + 25);
  v17 = a4;
  v18 = a6;
  v20 = a9;
  v99 = a5;
  v93 = a7;
  v98 = a8;
  v97 = a11;
  v88 = *(_DWORD *)a3;
  v21 = *((_QWORD *)a3 + 7);
  *((_QWORD *)a3 + 4) = 0LL;
  v101 = v21;
  v84 = a2;
  v22 = 1;
  v23 = *(_DWORD **)a10;
  v81 = 1;
  pco = a4;
  v24 = (struct _SURFOBJ *)*((_QWORD *)a3 + 5);
  v25 = 0LL;
  LODWORD(v21) = v23[179];
  v89 = a1;
  v85 = a6;
  v91 = a9;
  v90 = a10;
  v87 = 0;
  v96 = 0LL;
  v100 = v16;
  v95 = v24;
  v94 = 0LL;
  if ( (v21 & 4) != 0 )
  {
    v94 = 0LL;
    if ( v23[52] == 1 )
    {
      v25 = *(_DWORD *)(*(_QWORD *)a1 + 1740LL) != v23[98];
      v94 = v25;
    }
  }
  *(_QWORD *)((char *)a3 + 4) = 0LL;
  v26 = *(_QWORD *)a10;
  v80 = 0;
  if ( *(_DWORD *)(v26 + 840) + 4 > 0 )
  {
    while ( 1 )
    {
      v82 = 0LL;
      if ( v13 )
        break;
      v50 = *((_DWORD *)a3 + 62) + *((_DWORD *)a3 + 63) + *((_DWORD *)a3 + 64);
      v51 = *(_DWORD *)(v26 + 840);
      if ( v51 )
      {
        v52 = v51;
        v53 = (int *)*((_QWORD *)a3 + 33);
        do
        {
          if ( *((_QWORD *)a3 + 33) )
            v54 = *v53;
          else
            v54 = 0;
          v50 += v54;
          ++v53;
          --v52;
        }
        while ( v52 );
        v24 = v95;
        v20 = v91;
      }
      if ( v50 == v88 )
      {
        if ( v18 )
        {
          left = (unsigned int)a13->left;
          if ( (int)left <= v18->left )
            left = (unsigned int)v18->left;
          v17->rclBounds.left = left;
          right = a13->right;
          if ( right >= v18->right )
            right = v18->right;
          v17->rclBounds.right = right;
          top = a13->top;
          if ( top <= v18->top )
            top = v18->top;
          v17->rclBounds.top = top;
          bottom = a13->bottom;
          if ( bottom >= v18->bottom )
            bottom = v18->bottom;
          v17->rclBounds.bottom = bottom;
        }
        else
        {
          right = v17->rclBounds.right;
          left = (unsigned int)v17->rclBounds.left;
        }
        if ( (int)left < right && v17->rclBounds.top < v17->rclBounds.bottom && v18 )
        {
          ++*((_DWORD *)v15 + 23);
          TextOutBitBlt(
            v15,
            v14,
            (struct _SURFOBJ *)left,
            v24,
            v17,
            (struct _XLATEOBJ *)pbo,
            v18,
            v76,
            v77,
            v98,
            v20,
            v78);
        }
        v17->rclBounds.left = a13->left;
        v17->rclBounds.top = a13->top;
        v17->rclBounds.right = a13->right;
        v57 = a13->bottom;
        v18 = 0LL;
        v85 = 0LL;
        v17->rclBounds.bottom = v57;
        goto LABEL_49;
      }
      v31 = v14;
LABEL_16:
      v32 = (_DWORD *)*((_QWORD *)a3 + 26);
      v33 = v88;
      v34 = v16;
      v35 = 0LL;
      if ( v32 > &v32[v88] )
        v33 = 0LL;
      if ( v33 )
      {
        do
        {
          if ( *v32 == v13 )
            *v34++ = v24->dhsurf;
          v24 = (struct _SURFOBJ *)((char *)v24 + 2);
          ++v32;
          ++v35;
        }
        while ( v35 < v33 );
      }
      *((_QWORD *)a3 + 5) = v16;
      v36 = v34 - v16;
      v87 += v36;
      *(_DWORD *)a3 = v36;
      *((_DWORD *)a3 + 59) = v13;
      *((_DWORD *)a3 + 12) = 0;
      if ( v13 && (unsigned int)bAdjusBaseLine(v14, (struct RFONTOBJ *)&v82, &v96) )
        ESTROBJ::ptlBaseLineAdjustSet(a3, &v96);
      v37 = *(_OWORD *)((char *)a3 + 12);
      *((_QWORD *)a3 + 7) = v31;
      *(_OWORD *)((char *)a3 + 180) = v37;
      v38 = *(_QWORD *)v31;
      if ( (*(_DWORD *)(*(_QWORD *)v31 + 88LL) & 2) != 0 )
      {
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&ppo);
        if ( v104 )
        {
          v61 = *((_QWORD *)v15 + 6);
          v83 = 0;
          v62 = 0;
          pc = 0;
          v63 = 0;
          v64 = (PGLYPHPOS)v105;
          v65 = 0;
          ppgpos = (PGLYPHPOS)v105;
          v81 = ESTROBJ::bTextToPathWorkhorse((STROBJ *)a3, (struct EPATHOBJ *)&ppo);
          if ( v81 )
          {
            v66 = (*(_DWORD *)(v61 + 40) & 0x8000) == 0;
            v67 = v90;
            if ( !v66 )
            {
              v68 = UMPDReleaseRFONTSem(v90, 0LL, &v83, &pc, (int **)&ppgpos);
              v63 = v83;
              v65 = v68;
              v62 = pc;
              v64 = ppgpos;
            }
            if ( (*(_DWORD *)(*(_QWORD *)v31 + 716LL) & 0x8000) != 0 )
            {
              if ( ppo.cCurves > 1 )
                v81 = EPATHOBJ::bSimpleFill(&ppo, a12, v97, v84, pco, v93, v91, 0xD0Du, 2u);
            }
            else
            {
              v102 = glaSimpleStroke;
              v81 = EPATHOBJ::bSimpleStroke(&ppo, a12, v97, v84, pco, 0LL, v93, v91, &v102, 0xD0Du);
            }
            if ( v65 )
            {
              UMPDAcquireRFONTSem(v67, 0LL, v63, v62, (const int *)v64);
              if ( v64 )
              {
                if ( v64 != (PGLYPHPOS)v105 )
                  Win32FreePool(v64);
              }
            }
          }
          v15 = v84;
          v13 = v80;
          v18 = v85;
        }
        else
        {
          EngSetLastError(8u);
          v81 = 0;
        }
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&ppo);
        goto LABEL_48;
      }
      v39 = *(float *)(v38 + 140);
      v40 = 0;
      pc = 0;
      ppgpos = 0LL;
      if ( v39 == 0.0 && *(float *)(v38 + 144) == 0.0 )
        goto LABEL_28;
      do
      {
        v69 = STROBJ_bEnum((STROBJ *)a3, &pc, &ppgpos);
        if ( pc )
        {
          v70 = 0;
          while ( 1 )
          {
            pgb = ppgpos[v70].pgdf->pgb;
            if ( pgb )
            {
              v72 = pgb->ptlOrigin.x + ppgpos[v70].ptl.x;
              v73 = ppgpos[v70].ptl.y + pgb->ptlOrigin.y;
              if ( v72 < *((_DWORD *)a3 + 3)
                || pgb->sizlBitmap.cx + v72 > *((_DWORD *)a3 + 5)
                || v73 < *((_DWORD *)a3 + 4)
                || v73 + pgb->sizlBitmap.cy > *((_DWORD *)a3 + 6) )
              {
                break;
              }
            }
            if ( ++v70 >= pc )
              goto LABEL_113;
          }
          v40 = 1;
        }
LABEL_113:
        ;
      }
      while ( v69 );
      *((_QWORD *)a3 + 6) = 0LL;
      if ( !v40 )
      {
LABEL_28:
        if ( (*((_DWORD *)v15 + 28) & 8) != 0 )
          v41 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*((_QWORD *)v15 + 6) + 2872LL);
        else
          v41 = EngTextOut;
        if ( (char *)v41 == (char *)SpTextOut
          || (char *)v41 == (char *)MulTextOut
          || (char *)v41 == (char *)BmpDevTextOut )
        {
          if ( (*(_DWORD *)(*(_QWORD *)v31 + 12LL) & 0x10010000) == 0 )
            goto LABEL_38;
          v43 = v89;
          SURFACE::pdcoAA(v15, v89);
        }
        else
        {
          v42 = *(_DWORD *)(*(_QWORD *)v31 + 12LL);
          if ( (v42 & 0x10000) == 0 )
            goto LABEL_38;
          if ( (*(_DWORD *)(*(_QWORD *)v89 + 72LL) & 0x1000000) != 0 && (v42 & 0x10000000) == 0 )
          {
            v43 = v89;
          }
          else
          {
            if ( v41 != EngTextOut )
              SURFACE::pdcoAA(v15, v89);
            v41 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
LABEL_38:
            v43 = v89;
          }
        }
        RFONTOBJ::PreTextOut(v31, v43);
        v44 = (PGLYPHPOS)v106;
        ppgpos = (PGLYPHPOS)v106;
        pc = 0;
        v45 = 0;
        v83 = 0;
        v46 = 0;
        v47 = 0;
        if ( v31 != v90 && (*(_DWORD *)(*((_QWORD *)v84 + 6) + 40LL) & 0x8080) == 0x8080 )
        {
          v74 = UMPDReleaseRFONTSem(v90, 0LL, &pc, &v83, (int **)&ppgpos);
          v45 = pc;
          v47 = v74;
          v46 = v83;
          v44 = ppgpos;
        }
        v48 = v99;
        if ( v87 != v88 )
          v48 = 0LL;
        v77 = v91;
        v76 = (POINTL *)v98;
        pbo = (BRUSHOBJ *)v85;
        v49 = ((__int64 (__fastcall *)(unsigned __int64, struct ESTROBJ *, _QWORD, CLIPOBJ *, struct _RECTL *))v41)(
                ((unsigned __int64)v84 + 24) & -(__int64)(v84 != 0LL),
                a3,
                *(_QWORD *)v31,
                pco,
                v48);
        v81 = v49 != 0 ? v81 : 0;
        if ( v47 )
        {
          UMPDAcquireRFONTSem(v90, 0LL, v45, v46, (const int *)v44);
          if ( v44 )
          {
            if ( v44 != (PGLYPHPOS)v106 )
              Win32FreePool(v44);
          }
        }
        RFONTOBJ::PostTextOut(v31, v89);
        v15 = v84;
        SURFACE::pdcoAA(v84, 0LL);
        v13 = v80;
      }
      v18 = 0LL;
      v85 = 0LL;
LABEL_48:
      v14 = v90;
      v17 = pco;
      *(_OWORD *)((char *)a3 + 12) = *(_OWORD *)((char *)a3 + 180);
LABEL_49:
      v82 = 0LL;
LABEL_11:
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v82);
      v26 = *(_QWORD *)v14;
      ++v13;
      v25 = v94;
      v24 = v95;
      v20 = v91;
      v16 = v100;
      v29 = *(_DWORD *)(*(_QWORD *)v14 + 840LL) + 4;
      v80 = v13;
      if ( v13 >= v29 )
      {
        v22 = v81;
        goto LABEL_13;
      }
    }
    switch ( v13 )
    {
      case 1:
        if ( v25 || !*((_DWORD *)a3 + 62) )
          goto LABEL_11;
        v58 = *(_QWORD *)(v26 + 720);
        break;
      case 2:
        if ( v25 || !*((_DWORD *)a3 + 63) )
          goto LABEL_11;
        v58 = *(_QWORD *)(v26 + 728);
        break;
      case 3:
        if ( v25 || !*((_DWORD *)a3 + 64) )
          goto LABEL_11;
        v58 = *(_QWORD *)(v26 + 736);
        break;
      default:
        if ( v25 )
          goto LABEL_11;
        v27 = *((_QWORD *)a3 + 33);
        if ( !(v27 ? *(_DWORD *)(v27 + 4LL * (unsigned int)(v13 - 4)) : 0) )
          goto LABEL_11;
        v82 = *(_QWORD *)(*(_QWORD *)(v26 + 744) + 8LL * (unsigned int)(v13 - 4));
        goto LABEL_15;
    }
    v82 = v58;
LABEL_15:
    v31 = (RFONTOBJ *)&v82;
    goto LABEL_16;
  }
LABEL_13:
  *((_QWORD *)a3 + 7) = v101;
  result = v22;
  *((_QWORD *)a3 + 5) = v24;
  return result;
}
