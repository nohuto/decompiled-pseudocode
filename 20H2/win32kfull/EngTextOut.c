/*
 * XREFs of EngTextOut @ 0x1C0088810
 * Callers:
 *     NtGdiEngTextOut @ 0x1C0131D30 (NtGdiEngTextOut.c)
 *     ?PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02956A0 (-PanTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 *     ?BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C0299E30 (-BmpDevTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 *     ?RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C029CA90 (-RedirTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSH.c)
 *     ?MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z @ 0x1C02A4450 (-MulTextOut@@YAHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOB.c)
 * Callees:
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1C0087EF8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1C0089310 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z @ 0x1C00898E8 (-vDIBSolidBlt@@YAXPEAVSURFACE@@PEAU_RECTL@@PEAU_CLIPOBJ@@KH@Z.c)
 *     ?STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z @ 0x1C0089C58 (-STROBJ_bEnumCheckBounds@@YAHPEAU_STROBJ@@PEAKPEAPEAU_GLYPHPOS@@PEAU_RECTL@@@Z.c)
 *     STROBJ_bEnum @ 0x1C0089EC0 (STROBJ_bEnum.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B520 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C008BCC0 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00FC34C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1C015DC64 (--0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QEAA@XZ @ 0x1C015DCE4 (--1UMPDReleaseAcquireRFONTSem@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028F3AC (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 */

BOOL __stdcall EngTextOut(
        SURFOBJ *pso,
        STROBJ *pstro,
        FONTOBJ *pfo,
        CLIPOBJ *pco,
        RECTL *prclExtra,
        RECTL *prclOpaque,
        BRUSHOBJ *pboFore,
        BRUSHOBJ *pboOpaque,
        POINTL *pptlOrg,
        MIX mix)
{
  STROBJ *v10; // rdi
  SURFOBJ *v11; // r12
  LONG left; // r15d
  LONG top; // esi
  LONG right; // r14d
  LONG bottom; // ebx
  int v16; // r13d
  struct _GLYPHPOS *pgp; // r12
  ULONG cGlyphs; // r11d
  ULONG i; // edi
  struct _GLYPHPOS *v20; // r8
  GLYPHBITS *pgb; // rax
  LONG v22; // r9d
  LONG v23; // r10d
  LONG v24; // r8d
  LONG v25; // eax
  PVOID *p_pvScan0; // r12
  FLONG flFontType; // eax
  ULONG v28; // r13d
  LONG v29; // ecx
  unsigned int v30; // r8d
  int v31; // edi
  unsigned int v32; // edx
  unsigned int v33; // edi
  unsigned int v34; // edx
  unsigned __int64 v35; // r15
  _DWORD *v36; // rax
  __int64 v37; // rcx
  _DWORD *v38; // r14
  STROBJ *v39; // r11
  FLONG flAccel; // edx
  unsigned __int8 *v41; // rbx
  int v42; // ecx
  int v43; // eax
  bool v44; // zf
  RECTL *v45; // rdi
  struct _KTHREAD *v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 *v50; // rax
  struct _SURFOBJ *v51; // r9
  __int64 v52; // rax
  __int64 v53; // rcx
  struct _BRUSHOBJ *v54; // rax
  LONG v55; // ecx
  LONG v56; // r9d
  LONG v57; // r8d
  int v58; // eax
  LONG v59; // ecx
  struct _RECTL *v60; // r10
  LONG v61; // edx
  LONG v62; // ecx
  LONG v63; // edi
  LONG v64; // ecx
  unsigned int v65; // r9d
  void *v66; // r8
  unsigned __int64 v67; // rdx
  ULONG v68; // r12d
  struct _GLYPHPOS *v69; // rsi
  unsigned int v70; // r15d
  ULONG v71; // r13d
  struct _GLYPHPOS *v72; // r8
  struct SURFACE *v73; // rsi
  BOOL v74; // r14d
  bool v75; // sf
  int j; // eax
  void *v78; // r8
  unsigned __int64 v79; // rdx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v85; // rax
  PVOID v86; // rax
  int v87; // ecx
  FLONG v88; // eax
  int v89; // edx
  LONG v90; // ecx
  BOOL v91; // eax
  ULONG v92; // eax
  LONG v93; // edx
  CLIPOBJ *v94; // rdi
  struct SURFACE *v95; // r14
  int v96; // r13d
  int v97; // edi
  struct _FONTOBJ *v98; // rdx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 v101; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v103; // rax
  int v104; // edi
  __int64 v105; // rcx
  __int64 v106; // rax
  __int64 v107; // rcx
  LONG v108; // ecx
  struct SURFACE *v109; // rsi
  unsigned int v110; // r15d
  unsigned int v111; // eax
  int v112; // eax
  int v113; // eax
  LONG v114; // ecx
  LONG v115; // r10d
  __int64 v116; // rdi
  LONG v117; // edx
  LONG v118; // r9d
  LONG v119; // r8d
  int v120; // ecx
  LONG v121; // ecx
  LONG v122; // r10d
  BOOL v123; // eax
  BOOL (__stdcall *v124)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v125; // rcx
  __int64 v126; // rdi
  BOOL v127; // eax
  BOOL (__stdcall *v128)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  char *v129; // rdx
  BOOL v130; // eax
  char *v131; // rbx
  _DWORD *v132; // rdi
  int (*k)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rsi
  unsigned __int8 *v134; // [rsp+20h] [rbp-100h]
  struct _XLATEOBJ *v135; // [rsp+30h] [rbp-F0h]
  struct _POINTL *v136; // [rsp+40h] [rbp-E0h]
  struct _POINTL *v137; // [rsp+48h] [rbp-D8h]
  struct _RECTL *v138; // [rsp+50h] [rbp-D0h]
  unsigned int v139; // [rsp+60h] [rbp-C0h]
  unsigned int v140; // [rsp+80h] [rbp-A0h]
  char v141; // [rsp+A0h] [rbp-80h]
  unsigned int v142; // [rsp+A4h] [rbp-7Ch]
  ULONG pc; // [rsp+A8h] [rbp-78h] BYREF
  STROBJ *pstroa; // [rsp+B0h] [rbp-70h]
  struct _BRUSHOBJ *v145; // [rsp+B8h] [rbp-68h]
  ULONG v146; // [rsp+C0h] [rbp-60h] BYREF
  unsigned int v147; // [rsp+C4h] [rbp-5Ch]
  struct _FONTOBJ *v148; // [rsp+C8h] [rbp-58h]
  CLIPOBJ *v149; // [rsp+D0h] [rbp-50h]
  int iDComplexity; // [rsp+D8h] [rbp-48h]
  int iSolidColor; // [rsp+DCh] [rbp-44h]
  LONG v152; // [rsp+E0h] [rbp-40h]
  struct SURFACE *v153; // [rsp+E8h] [rbp-38h]
  PGLYPHPOS v154; // [rsp+F0h] [rbp-30h] BYREF
  unsigned __int64 v155; // [rsp+F8h] [rbp-28h]
  RECTL *v156; // [rsp+100h] [rbp-20h]
  struct SURFACE *v157; // [rsp+108h] [rbp-18h]
  SURFOBJ *v158; // [rsp+110h] [rbp-10h]
  struct _RECTL *p_rclBkGround; // [rsp+118h] [rbp-8h]
  struct _POINTL *v160; // [rsp+120h] [rbp+0h]
  struct _BRUSHOBJ *v161; // [rsp+128h] [rbp+8h]
  struct SURFACE *v162; // [rsp+130h] [rbp+10h]
  struct SURFACE *v163; // [rsp+138h] [rbp+18h] BYREF
  char v164; // [rsp+140h] [rbp+20h]
  int v165; // [rsp+144h] [rbp+24h]
  _DWORD *v166; // [rsp+148h] [rbp+28h]
  struct _RECTL *v167; // [rsp+150h] [rbp+30h]
  __int64 v168; // [rsp+158h] [rbp+38h] BYREF
  PGLYPHPOS ppgpos; // [rsp+160h] [rbp+40h] BYREF
  __int128 v170; // [rsp+168h] [rbp+48h] BYREF
  __int128 v171; // [rsp+178h] [rbp+58h]
  _OWORD v172[21]; // [rsp+190h] [rbp+70h] BYREF
  struct _RECTL v173; // [rsp+2E0h] [rbp+1C0h] BYREF
  __int128 v174; // [rsp+2F0h] [rbp+1D0h] BYREF
  struct _RECTL v175; // [rsp+300h] [rbp+1E0h] BYREF
  SURFACE *v176; // [rsp+310h] [rbp+1F0h]
  PVOID v177; // [rsp+318h] [rbp+1F8h]
  struct _CLIPOBJ *v178; // [rsp+320h] [rbp+200h]
  struct _BRUSHOBJ *v179; // [rsp+328h] [rbp+208h]
  int v180; // [rsp+330h] [rbp+210h]
  _DWORD v181[17]; // [rsp+334h] [rbp+214h] BYREF
  struct _FONTOBJ *v182; // [rsp+378h] [rbp+258h]
  _BYTE v183[80]; // [rsp+380h] [rbp+260h] BYREF
  _BYTE v184[80]; // [rsp+3D0h] [rbp+2B0h] BYREF
  _BYTE v185[80]; // [rsp+420h] [rbp+300h] BYREF
  struct _RECTL si128; // [rsp+470h] [rbp+350h] BYREF
  int v187; // [rsp+48Ch] [rbp+36Ch]

  v10 = pstro;
  v167 = prclExtra;
  v11 = pso;
  v161 = pboFore;
  v148 = pfo;
  v145 = pboOpaque;
  pstroa = pstro;
  v158 = pso;
  v156 = prclOpaque;
  v160 = pptlOrg;
  v149 = pco;
  memset(v172, 0, 0x144uLL);
  left = v10->rclBkGround.left;
  top = v10->rclBkGround.top;
  right = v10->rclBkGround.right;
  bottom = v10->rclBkGround.bottom;
  v16 = 0;
  v173.left = left;
  v173.top = top;
  v173.right = right;
  v173.bottom = bottom;
  v154 = 0LL;
  v146 = 0;
  v147 = 0;
  v142 = 0;
  v174 = 0LL;
  v157 = 0LL;
  v175 = 0LL;
  p_rclBkGround = &v10->rclBkGround;
  if ( !v10->ulCharInc )
  {
    pgp = v10->pgp;
    cGlyphs = v10->cGlyphs;
    ppgpos = pgp;
    pc = cGlyphs;
    if ( !pgp )
    {
      *(_QWORD *)&v10[1].cGlyphs = 0LL;
      v16 = 1;
    }
    if ( v16 )
      goto LABEL_100;
    while ( 1 )
    {
      for ( i = 0; i < cGlyphs; ++i )
      {
        v20 = &pgp[i];
        pgb = v20->pgdf->pgb;
        if ( !pgb )
          goto LABEL_18;
        v22 = pgb->ptlOrigin.x + v20->ptl.x;
        v23 = v22 + pgb->sizlBitmap.cx;
        v24 = pgb->ptlOrigin.y + v20->ptl.y;
        v25 = v24 + pgb->sizlBitmap.cy;
        if ( left == right || top == bottom )
        {
          left = v22;
          v173.left = v22;
          top = v24;
          v173.top = v24;
          right = v23;
          v173.right = v23;
        }
        else
        {
          if ( v22 < left )
          {
            left = v22;
            v173.left = v22;
          }
          if ( v24 < top )
          {
            top = v24;
            v173.top = v24;
          }
          if ( v23 > right )
          {
            right = v23;
            v173.right = v23;
          }
          if ( v25 <= bottom )
            continue;
        }
        v173.bottom = v25;
        bottom = v25;
      }
      v10 = pstroa;
      if ( !v16 )
        break;
LABEL_100:
      v91 = STROBJ_bEnum(v10, &pc, &ppgpos);
      cGlyphs = pc;
      v16 = v91;
      pgp = ppgpos;
    }
LABEL_18:
    v10 = pstroa;
    v16 = 0;
    v11 = v158;
  }
  if ( v11 )
    p_pvScan0 = &v11[-1].pvScan0;
  else
    p_pvScan0 = 0LL;
  v153 = (struct SURFACE *)p_pvScan0;
  v162 = (struct SURFACE *)p_pvScan0;
  if ( (v148->flFontType & 0x10000) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(0LL)
       || (CurrentProcess = PsGetCurrentProcess(v82, v81, v83),
           ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
           CurrentThreadProcess = PsGetCurrentThreadProcess(v101),
           v44 = ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess),
           v10 = pstroa,
           v44))
      && (ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread)) != 0LL
      && (v85 = *ThreadWin32Thread) != 0 )
    {
      v86 = *(PVOID *)(v85 + 304);
    }
    else
    {
      v86 = p_pvScan0[13];
    }
    if ( v86 )
      v157 = *(struct SURFACE **)(*(_QWORD *)(*(_QWORD *)v86 + 48LL) + 2552LL);
    else
      v157 = (struct SURFACE *)p_pvScan0;
    if ( *((_WORD *)p_pvScan0 + 50) )
    {
      v16 = 16;
      v142 = 16;
    }
    bottom = v173.bottom;
    right = v173.right;
    top = v173.top;
    left = v173.left;
    if ( (*((_WORD *)p_pvScan0 + 51) & 0x100) != 0 )
      v142 = v16 | 0x80;
  }
  flFontType = v148->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( v149 )
    iDComplexity = v149->iDComplexity;
  else
    iDComplexity = 0;
  pc = -1;
  v28 = -1;
  iSolidColor = v161->iSolidColor;
  if ( (flFontType & 0x10000) != 0 )
  {
    if ( *((_DWORD *)p_pvScan0 + 24) != 3 )
      goto LABEL_93;
    if ( bUMPDSecurityGateEx() && !v145 )
    {
      if ( gfUMPDDebug )
        DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( v145->iSolidColor != -1 )
    {
LABEL_93:
      v87 = v142 | 8;
      v142 |= 8u;
      v88 = v148->flFontType;
      if ( (v88 & 0x10000000) == 0 )
      {
        if ( (v88 & 0x20000000) == 0 )
        {
          v30 = 4;
          v93 = v10->rclBkGround.right;
          v31 = v10->rclBkGround.left;
          v32 = (((v93 + 8) >> 1) & 0xFFFFFFFC) - ((v31 >> 1) & 0xFFFFFFFC);
          v29 = pstroa->rclBkGround.right;
          goto LABEL_27;
        }
        v32 = v147;
        v30 = v147;
        goto LABEL_97;
      }
      v89 = v10->rclBkGround.right;
      v142 = v87 | 0x20;
      v30 = 8;
      if ( v89 <= 2147483643 )
      {
        v90 = v10->rclBkGround.left;
        if ( (unsigned int)(v89 - v90 + 4) < 0x7FFFFFFF )
        {
          v32 = ((v89 + 4) & 0xFFFFFFFC) - (v90 & 0xFFFFFFFC);
LABEL_97:
          v31 = v10->rclBkGround.left;
          v29 = pstroa->rclBkGround.right;
          goto LABEL_27;
        }
      }
    }
    return 0;
  }
  v29 = v10->rclBkGround.right;
  v30 = 1;
  v31 = v10->rclBkGround.left;
  v32 = (int)(((v29 + 32) & 0xFFFFFFE0) - (v31 & 0xFFFFFFE0)) >> 3;
LABEL_27:
  v33 = ((v30 * (v31 - left) + 31) >> 3) & 0x1FFFFFFC;
  v34 = v33 + (((v30 * (right - v29) + 31) >> 3) & 0x1FFFFFFC) + v32;
  v35 = v34 * (unsigned __int64)(unsigned int)(bottom - top);
  v147 = v34;
  v155 = v35;
  if ( v35 > 0xFFFFFFFF )
    return 0;
  if ( (unsigned int)v35 >= 0x10000 )
  {
    v141 = 0;
    v36 = EngAllocUserMem((unsigned int)v35, 0x6F746547u);
  }
  else
  {
    v141 = 1;
    v36 = (_DWORD *)AllocThreadBufferWithTag((unsigned int)v35, 1869899079LL, 32LL, 0xFFFFFFFFLL);
  }
  v166 = v36;
  v38 = v36;
  if ( !v36 )
    return 0;
  v39 = pstroa;
  flAccel = pstroa->flAccel;
  v41 = (unsigned __int8 *)v36 + v147 * (pstroa->rclBkGround.top - top) + v33;
  if ( (flAccel & 0xA) == 2 )
  {
    v42 = 0;
    if ( (flAccel & 0x51) == 0x51 )
      v42 = 4;
    v43 = 0;
    if ( (flAccel & 0x11) != 0x11 )
      v43 = 2;
    v37 = (pstroa->ulCharInc != 0) | v43 | (unsigned int)v42;
    v142 |= v37;
  }
  v44 = *((_WORD *)p_pvScan0 + 50) == 0;
  v176 = (SURFACE *)p_pvScan0;
  if ( v44 )
    v177 = p_pvScan0[9];
  else
    v177 = 0LL;
  v45 = v156;
  v179 = v145;
  v182 = v148;
  v178 = v149;
  v180 = 0;
  if ( v156 )
  {
    v46 = KeGetCurrentThread();
    if ( (!(unsigned __int8)KeIsAttachedProcess(v37)
       || (v103 = PsGetCurrentProcess(v48, v47, v49),
           v104 = PsGetProcessSessionIdEx(v103),
           v106 = PsGetCurrentThreadProcess(v105),
           v44 = v104 == (unsigned int)PsGetProcessSessionIdEx(v106),
           v45 = v156,
           v44))
      && (v50 = (__int64 *)PsGetThreadWin32Thread(v46)) != 0LL
      && (v52 = *v50) != 0 )
    {
      v53 = *(_QWORD *)(v52 + 40);
      v44 = v53 == v52 + 40;
      v54 = v145;
      if ( !v44 )
      {
        v107 = v53 - 40;
        if ( v107 )
        {
          if ( (*(_DWORD *)(v107 + 412) & 0x100) != 0 && *(_DWORD *)(v107 + 420) && !v145 )
          {
            if ( gfUMPDDebug )
              DbgPrint(
                "clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n",
                857);
            if ( v141 )
              FreeThreadBufferWithTag(v38);
            else
              EngFreeUserMem(v38);
            v74 = 0;
            goto LABEL_73;
          }
        }
      }
    }
    else
    {
      v54 = v145;
    }
    v28 = v54->iSolidColor;
    pc = v28;
    if ( v28 == -1 || iSolidColor == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)p_pvScan0,
        v148,
        v142,
        v51,
        (struct _SURFOBJ *)v134,
        v149,
        v135,
        v45,
        v136,
        v137,
        v54,
        v160,
        v139);
      v39 = pstroa;
      v60 = p_rclBkGround;
    }
    else
    {
      v39 = pstroa;
      v55 = v45->top;
      v56 = v45->left;
      v57 = pstroa->rclBkGround.top;
      if ( v57 > v55 )
      {
        v181[4 * v180] = v56;
        v181[4 * v180 + 1] = v55;
        v181[4 * v180 + 2] = v45->right;
        v181[4 * v180 + 3] = v57;
        v58 = ++v180;
      }
      else
      {
        v58 = v180;
      }
      v59 = v39->rclBkGround.left;
      v60 = &v39->rclBkGround;
      v61 = v39->rclBkGround.bottom;
      if ( v59 > v56 )
      {
        v181[4 * v58] = v56;
        v181[4 * v180 + 1] = v57;
        v181[4 * v180 + 2] = v59;
        v181[4 * v180 + 3] = v61;
        v58 = ++v180;
      }
      v62 = v39->rclBkGround.right;
      v63 = v45->right;
      if ( v62 < v63 )
      {
        v181[4 * v58] = v62;
        v181[4 * v180 + 1] = v57;
        v181[4 * v180 + 2] = v63;
        v181[4 * v180 + 3] = v61;
        v58 = ++v180;
      }
      v64 = v156->bottom;
      if ( v61 < v64 )
      {
        v181[4 * v58] = v56;
        v181[4 * v180 + 1] = v61;
        v181[4 * v180 + 2] = v63;
        v181[4 * v180++ + 3] = v64;
      }
    }
  }
  else
  {
    v60 = &pstroa->rclBkGround;
  }
  v65 = v142;
  v163 = 0LL;
  v164 = 0;
  v165 = 0;
  LODWORD(v145) = v142 & 0x10;
  v170 = 0LL;
  v171 = 0LL;
  if ( (v142 & 0x10) != 0 )
  {
    v108 = v39->rclBkGround.top;
    v109 = v153;
    LODWORD(v170) = *((_DWORD *)v153 + 24);
    v110 = v60->left & ((v142 >> 3) & 4 | 0xFFFFFFF8);
    v111 = v39->rclBkGround.right - v110;
    v152 = v108;
    DWORD1(v170) = v111;
    v112 = v39->rclBkGround.bottom - v108;
    *(_QWORD *)&v171 = 0LL;
    v44 = (*((_DWORD *)v153 + 28) & 0x40000) == 0;
    DWORD2(v170) = v112;
    v113 = 1;
    if ( !v44 )
      v113 = 262145;
    DWORD2(v171) = v113;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v163, (struct _DEVBITMAPINFO *)&v170, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
    {
      if ( v141 )
        FreeThreadBufferWithTag(v38);
      else
        EngFreeUserMem(v38);
      v74 = 0;
      goto LABEL_72;
    }
    v114 = 0;
    v115 = 0;
    v162 = v163;
    v116 = *((_QWORD *)v109 + 6);
    if ( v109 == *(struct SURFACE **)(v116 + 2552) && (*(_DWORD *)(v116 + 40) & 0x20000) != 0 )
    {
      v114 = *(_DWORD *)(v116 + 2584);
      v115 = *(_DWORD *)(v116 + 2588);
    }
    v39 = pstroa;
    v117 = p_rclBkGround->left;
    if ( v114 > p_rclBkGround->left )
      v117 = v114;
    v118 = pstroa->rclBkGround.top;
    v119 = pstroa->rclBkGround.right;
    if ( v115 > v118 )
      v118 = v115;
    v175 = *p_rclBkGround;
    v120 = v158->sizlBitmap.cx + v114;
    LODWORD(v174) = v117;
    if ( v120 < v119 )
      v119 = v120;
    *(_QWORD *)((char *)&v174 + 4) = __PAIR64__(v119, v118);
    v121 = v115 + v158->sizlBitmap.cy;
    v122 = pstroa->rclBkGround.bottom;
    if ( v121 < v122 )
      v122 = v121;
    HIDWORD(v174) = v122;
    if ( iDComplexity )
    {
      if ( !(unsigned int)bIntersect(&v174, &v149->rclBounds) )
        goto LABEL_69;
      v122 = HIDWORD(v174);
      v119 = DWORD2(v174);
      v118 = DWORD1(v174);
      v117 = v174;
      v39 = pstroa;
    }
    v175.right = DWORD2(v174) - v110;
    v175.left = v117 - v110;
    v175.top = DWORD1(v174) - v152;
    v175.bottom = HIDWORD(v174) - v152;
    if ( v28 == -1 && v117 < v119 && v118 < v122 )
    {
      v123 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v183, v109, v148, v123);
      if ( (*((_DWORD *)v109 + 28) & 0x400) != 0 )
        v124 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v116 + 2840);
      else
        v124 = EngCopyBits;
      v125 = (char *)v163 + 24;
      if ( !v163 )
        v125 = 0LL;
      ((void (__fastcall *)(char *, char *, _QWORD, XLATEOBJ *const, struct _RECTL *, __int128 *))v124)(
        v125,
        (char *)v109 + 24,
        0LL,
        xloIdent,
        &v175,
        &v174);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v183);
      v39 = pstroa;
    }
    v65 = v142;
    LODWORD(v35) = v155;
  }
  *(_QWORD *)&v39[1].cGlyphs = 0LL;
  if ( v28 == -1 )
    goto LABEL_60;
  v66 = v38;
  v67 = (unsigned __int64)(unsigned int)v35 >> 2;
  if ( !v67 )
    goto LABEL_60;
  if ( ((unsigned __int8)v38 & 4) == 0 )
    goto LABEL_58;
  *v38 = 0;
  if ( --v67 )
  {
    v66 = v38 + 1;
LABEL_58:
    memset(v66, 0, 8 * (v67 >> 1));
    if ( (v67 & 1) != 0 )
      *((_DWORD *)v66 + v67 - 1) = 0;
  }
LABEL_60:
  v68 = pc;
  do
  {
    if ( v68 == -1 )
    {
      v78 = v38;
      v79 = (unsigned __int64)(unsigned int)v35 >> 2;
      if ( v79 )
      {
        if ( ((unsigned __int8)v38 & 4) != 0 )
        {
          *v38 = 0;
          if ( !--v79 )
            goto LABEL_62;
          v78 = v38 + 1;
        }
        memset(v78, 0, 8 * (v79 >> 1));
        if ( (v79 & 1) != 0 )
          *((_DWORD *)v78 + v79 - 1) = 0;
      }
    }
LABEL_62:
    v69 = v39->pgp;
    if ( v69 )
    {
      v70 = v39->cGlyphs;
      v71 = 0;
      v146 = v39->cGlyphs;
      v154 = v69;
      pc = 0;
    }
    else
    {
      if ( ((__int64)v39[4].pwszOrg & 2) != 0 )
        v92 = STROBJ_bEnum(v39, &v146, &v154);
      else
        v92 = STROBJ_bEnumCheckBounds(v39, &v146, &v154, &v173);
      v65 = v142;
      v39 = pstroa;
      v71 = v92;
      v70 = v146;
      v69 = v154;
      pc = v92;
    }
    if ( v70 )
    {
      si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
      v187 = 0;
      switch ( iDComplexity )
      {
        case 0:
          goto LABEL_66;
        case 1:
          si128 = v149->rclBounds;
LABEL_66:
          v72 = v69;
          v73 = v153;
          vExpandAndCopyText(
            v153,
            v148,
            v72,
            v70,
            v41,
            v147,
            v39->ulCharInc,
            v162,
            v157,
            &v39->rclBkGround,
            v138,
            iSolidColor,
            v68,
            v65,
            &si128,
            v167,
            v140,
            v161,
            v160);
          goto LABEL_67;
        case 3:
          v94 = v149;
          XCLIPOBJ::cEnumStart((XCLIPOBJ *)v149, 0, 0, 4u, 0);
          v95 = v153;
          v96 = iSolidColor;
          do
          {
            v97 = XCLIPOBJ::bEnum((XCLIPOBJ *)v94, 0x134u, v172, 0LL);
            v98 = v148;
            LODWORD(v172[LODWORD(v172[0]) + 1]) = 0;
            vExpandAndCopyText(
              v95,
              v98,
              v69,
              v70,
              v41,
              v147,
              pstroa->ulCharInc,
              v162,
              v157,
              p_rclBkGround,
              v138,
              v96,
              v68,
              v142,
              (struct _RECTL *)((char *)v172 + 4),
              v167,
              v140,
              v161,
              v160);
            v44 = v97 == 0;
            v94 = v149;
          }
          while ( !v44 );
          v38 = v166;
          v71 = pc;
          break;
      }
    }
    v73 = v153;
LABEL_67:
    LODWORD(v35) = v155;
    v39 = pstroa;
    v65 = v142;
  }
  while ( v71 );
  if ( (_DWORD)v145 )
  {
    v126 = *((_QWORD *)v73 + 6);
    v127 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v184, v73, v148, v127);
    if ( (*((_DWORD *)v73 + 28) & 0x400) != 0 )
      v128 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v126 + 2840);
    else
      v128 = EngCopyBits;
    v129 = (char *)v163 + 24;
    if ( !v163 )
      v129 = 0LL;
    ((void (__fastcall *)(char *, char *, CLIPOBJ *, _QWORD, __int128 *, struct _RECTL *))v128)(
      (char *)v73 + 24,
      v129,
      v149,
      0LL,
      &v174,
      &v175);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v184);
  }
LABEL_69:
  if ( v141 )
    FreeThreadBufferWithTag(v38);
  else
    EngFreeUserMem(v38);
  v74 = 1;
LABEL_72:
  SURFMEM::~SURFMEM((SURFMEM *)&v163);
LABEL_73:
  if ( v177 )
  {
    v75 = v180 - 1 < 0;
    for ( j = --v180; !v75; --v180 )
    {
      vDIBSolidBlt(v176, (struct _RECTL *)&v181[4 * j], v178, v179->iSolidColor, 0);
      v75 = v180 - 1 < 0;
      j = v180 - 1;
    }
    return v74;
  }
  else
  {
    v130 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v185, v176, v182, v130);
    v168 = 0LL;
    v131 = (char *)v176 + 24;
    if ( !v176 )
      v131 = 0LL;
    v132 = v181;
    for ( k = SURFACE::pfnBitBlt(v176); v132 < &v181[4 * v180]; v132 += 4 )
      ((void (__fastcall *)(char *, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, _DWORD *, _QWORD, _QWORD, struct _BRUSHOBJ *, __int64 *, int))k)(
        v131,
        0LL,
        0LL,
        v178,
        0LL,
        v132,
        0LL,
        0LL,
        v179,
        &v168,
        61680);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)v185);
    return v74;
  }
}
