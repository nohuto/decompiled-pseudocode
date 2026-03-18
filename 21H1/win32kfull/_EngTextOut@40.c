/*
 * XREFs of _EngTextOut@40 @ 0x54580
 * Callers:
 *     ?PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1F67CE (-PanTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 *     ?BmpDevTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1FA55F (-BmpDevTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@.c)
 *     ?RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x1FC132 (-RedirTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5.c)
 *     ?MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PAU_POINTL@@K@Z @ 0x204C5E (-MulTextOut@@YGHPAU_SURFOBJ@@PAU_STROBJ@@PAU_FONTOBJ@@PAU_CLIPOBJ@@PAU_RECTL@@4PAU_BRUSHOBJ@@5PA.c)
 *     _NtGdiEngTextOut@40 @ 0x21998C (_NtGdiEngTextOut@40.c)
 * Callees:
 *     ??1FRINGERECT@@QAE@XZ @ 0x55340 (--1FRINGERECT@@QAE@XZ.c)
 *     ?vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRUSHOBJ@@PAU_POINTL@@@Z @ 0x553A0 (-vExpandAndCopyText@@YGXPAVSURFACE@@PAU_FONTOBJ@@PAU_GLYPHPOS@@KPAEKK00PAU_RECTL@@4HHK44KPAU_BRU.c)
 *     ?pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ @ 0x55814 (-pSurfobj@SURFACE@@QAEPAU_SURFOBJ@@XZ.c)
 *     ?bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z @ 0x8E412 (-bEnum@XCLIPOBJ@@QAEHKPAXPAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QAEKHKKK@Z @ 0x948B4 (-cEnumStart@XCLIPOBJ@@QAEKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YGHXZ @ 0x9591E (-bUMPDSecurityGateEx@@YGHXZ.c)
 *     ?vAddRect@FRINGERECT@@QAEXJJJJ@Z @ 0xABF28 (-vAddRect@FRINGERECT@@QAEXJJJJ@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 *     ??0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z @ 0xF6EBC (--0UMPDReleaseAcquireRFONTSem@@QAE@PAVSURFACE@@PAU_FONTOBJ@@H@Z.c)
 *     ??1UMPDReleaseAcquireRFONTSem@@QAE@XZ @ 0xF6F23 (--1UMPDReleaseAcquireRFONTSem@@QAE@XZ.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@6PAU_BRUSHOBJ@@6K@Z @ 0x1EFC42 (-EngTextOutBitBlt@@YGXPAVSURFACE@@PAU_FONTOBJ@@KPAU_SURFOBJ@@2PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_REC.c)
 *     ?STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z @ 0x223AE6 (-STROBJ_bEnumCheckBounds@@YGHPAU_STROBJ@@PAKPAPAU_GLYPHPOS@@PAU_RECTL@@@Z.c)
 *     _STROBJ_bEnum@12 @ 0x2255A9 (_STROBJ_bEnum@12.c)
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
  STROBJ *v10; // ecx
  LONG top; // esi
  LONG right; // ebx
  LONG bottom; // edi
  bool v14; // zf
  LONG left; // eax
  PGLYPHPOS v16; // esi
  int v17; // edx
  SIZE_T cGlyphs; // eax
  BOOL v19; // eax
  GLYPHDEF **p_pgdf; // edx
  GLYPHBITS *pgb; // ecx
  int v22; // eax
  int v23; // esi
  int v24; // edx
  int v25; // ecx
  LONG *v26; // ecx
  int *ThreadWin32Thread; // eax
  int v28; // eax
  LONG v29; // eax
  FLONG flFontType; // eax
  int v32; // ecx
  FLONG v33; // eax
  LONG v34; // edx
  LONG v35; // ecx
  LONG v36; // ecx
  LONG v37; // edx
  unsigned int v38; // edi
  unsigned int v39; // ecx
  SIZE_T v40; // eax
  PVOID v41; // edi
  int v42; // eax
  STROBJ *v43; // esi
  FLONG flAccel; // edx
  PKTHREAD v45; // esi
  struct _SURFOBJ *v46; // ecx
  int *v47; // eax
  int v48; // eax
  ULONG *p_cjBits; // eax
  BRUSHOBJ *v50; // eax
  RECTL *v51; // edx
  int v52; // ecx
  LONG v53; // ecx
  int v54; // edx
  LONG v55; // ecx
  LONG v56; // esi
  LONG v57; // edx
  LONG v58; // eax
  unsigned int v59; // ecx
  LONG v60; // edx
  unsigned int v61; // eax
  int v62; // eax
  BOOL v63; // esi
  _DWORD *v64; // esi
  int v65; // edx
  int v66; // edi
  LONG v67; // ecx
  LONG v68; // edx
  LONG v69; // eax
  int v70; // eax
  struct _SURFOBJ *v71; // eax
  void (__stdcall *v72)(struct _SURFOBJ *, char *, _DWORD, XLATEOBJ *const, unsigned int *, int *); // edx
  STROBJ *v73; // ebx
  struct _RECTL *v74; // esi
  void (__stdcall *v75)(PVOID, SIZE_T, ULONG); // eax
  CLIPOBJ *v76; // ecx
  struct _GLYPHPOS *pgp; // edi
  struct _FONTOBJ *v78; // ebx
  int v79; // eax
  int v80; // eax
  int v81; // esi
  struct SURFACE *v82; // ebx
  int v83; // eax
  struct _SURFOBJ *v84; // eax
  void (__stdcall *v85)(char *, struct _SURFOBJ *, CLIPOBJ *, _DWORD, int *, unsigned int *); // edx
  struct _FONTOBJ *v86; // [esp+6h] [ebp-300h]
  struct _FONTOBJ *v87; // [esp+1Eh] [ebp-2E8h]
  unsigned int v88; // [esp+22h] [ebp-2E4h]
  struct _XLATEOBJ *v89; // [esp+32h] [ebp-2D4h]
  struct _RECTL *v90; // [esp+36h] [ebp-2D0h]
  unsigned int v91; // [esp+36h] [ebp-2D0h]
  struct SURFACE *v92; // [esp+3Ah] [ebp-2CCh]
  struct _RECTL *v93; // [esp+3Eh] [ebp-2C8h]
  struct _POINTL *v94; // [esp+42h] [ebp-2C4h]
  struct _POINTL *v95; // [esp+46h] [ebp-2C0h]
  struct _RECTL *v96; // [esp+4Ah] [ebp-2BCh]
  char v97; // [esp+59h] [ebp-2ADh]
  struct _POINTL *v98; // [esp+5Eh] [ebp-2A8h]
  PVOID pv; // [esp+62h] [ebp-2A4h]
  PVOID pva; // [esp+62h] [ebp-2A4h]
  struct SURFACE *v101; // [esp+66h] [ebp-2A0h]
  struct SURFACE *v102; // [esp+66h] [ebp-2A0h]
  unsigned int v103; // [esp+6Ah] [ebp-29Ch]
  unsigned int v104; // [esp+6Ah] [ebp-29Ch]
  int v105; // [esp+6Eh] [ebp-298h]
  LONG v106; // [esp+72h] [ebp-294h]
  int v107; // [esp+72h] [ebp-294h]
  struct _CLIPOBJ *v108; // [esp+76h] [ebp-290h]
  struct _RECTL *v109; // [esp+7Eh] [ebp-288h]
  ULONG iSolidColor; // [esp+7Eh] [ebp-288h]
  int v111; // [esp+82h] [ebp-284h]
  int v112; // [esp+82h] [ebp-284h]
  struct _GLYPHPOS *CurrentThread; // [esp+8Ah] [ebp-27Ch]
  struct _GLYPHPOS *v114; // [esp+8Ah] [ebp-27Ch]
  struct _GLYPHPOS *v115; // [esp+8Ah] [ebp-27Ch]
  int v116; // [esp+8Eh] [ebp-278h]
  unsigned int v117; // [esp+8Eh] [ebp-278h]
  struct _POINTL *v118; // [esp+92h] [ebp-274h]
  SIZE_T v119; // [esp+96h] [ebp-270h]
  int iDComplexity; // [esp+96h] [ebp-270h]
  ULONG pc; // [esp+9Ah] [ebp-26Ch] BYREF
  PGLYPHPOS ppgpos; // [esp+9Eh] [ebp-268h] BYREF
  PGLYPHPOS v123; // [esp+A2h] [ebp-264h] BYREF
  ULONG v124; // [esp+A6h] [ebp-260h] BYREF
  SIZE_T Length; // [esp+AAh] [ebp-25Ch]
  unsigned int v126; // [esp+AEh] [ebp-258h]
  struct _POINTL *v127; // [esp+B2h] [ebp-254h]
  struct SURFACE *p_rclBkGround; // [esp+B6h] [ebp-250h]
  struct _RECTL *v129; // [esp+BAh] [ebp-24Ch]
  unsigned int v130; // [esp+BEh] [ebp-248h]
  SURFACE *v131; // [esp+C2h] [ebp-244h] BYREF
  char v132; // [esp+C6h] [ebp-240h]
  int v133; // [esp+CAh] [ebp-23Ch]
  int v134; // [esp+CEh] [ebp-238h] BYREF
  unsigned int v135; // [esp+D2h] [ebp-234h]
  int v136; // [esp+D6h] [ebp-230h]
  int v137; // [esp+DAh] [ebp-22Ch]
  int v138; // [esp+DEh] [ebp-228h]
  int v139; // [esp+E2h] [ebp-224h]
  LONG v140; // [esp+E6h] [ebp-220h]
  int v141; // [esp+EAh] [ebp-21Ch]
  _DWORD v142[82]; // [esp+EEh] [ebp-218h] BYREF
  int v143; // [esp+236h] [ebp-D0h] BYREF
  struct _POINTL *v144; // [esp+23Ah] [ebp-CCh]
  struct _CLIPOBJ *v145; // [esp+23Eh] [ebp-C8h]
  LONG v146; // [esp+242h] [ebp-C4h]
  unsigned int v147; // [esp+246h] [ebp-C0h] BYREF
  int v148; // [esp+24Ah] [ebp-BCh]
  unsigned int v149; // [esp+24Eh] [ebp-B8h]
  int v150; // [esp+252h] [ebp-B4h]
  LONG v151; // [esp+256h] [ebp-B0h] BYREF
  LONG v152; // [esp+25Ah] [ebp-ACh]
  LONG v153; // [esp+25Eh] [ebp-A8h]
  LONG v154; // [esp+262h] [ebp-A4h]
  LONG *v155; // [esp+266h] [ebp-A0h] BYREF
  int v156; // [esp+26Ah] [ebp-9Ch]
  CLIPOBJ *v157; // [esp+26Eh] [ebp-98h]
  BRUSHOBJ *v158; // [esp+272h] [ebp-94h]
  int v159; // [esp+276h] [ebp-90h]
  _DWORD v160[17]; // [esp+27Ah] [ebp-8Ch]
  RECTL rclBounds; // [esp+2BEh] [ebp-48h] BYREF
  int v162; // [esp+2DAh] [ebp-2Ch]

  v130 = (unsigned int)prclExtra;
  v129 = (struct _RECTL *)pboFore;
  v127 = pptlOrg;
  memset(v142, 0, 0x144u);
  v10 = pstro;
  top = pstro->rclBkGround.top;
  right = pstro->rclBkGround.right;
  bottom = pstro->rclBkGround.bottom;
  v14 = pstro->ulCharInc == 0;
  v111 = 0;
  v143 = 0;
  v144 = 0;
  v145 = 0;
  v146 = 0;
  v147 = 0;
  v148 = 0;
  v149 = 0;
  v150 = 0;
  v126 = 0;
  left = pstro->rclBkGround.left;
  v123 = 0;
  v124 = 0;
  v103 = 0;
  v105 = 0;
  p_rclBkGround = (struct SURFACE *)&pstro->rclBkGround;
  pv = (PVOID)left;
  v151 = left;
  v101 = (struct SURFACE *)top;
  v152 = top;
  v153 = right;
  v154 = bottom;
  if ( !v14 )
    goto LABEL_25;
  v17 = 0;
  cGlyphs = pstro->cGlyphs;
  ppgpos = pstro->pgp;
  v16 = ppgpos;
  Length = cGlyphs;
  pc = cGlyphs;
  v116 = 0;
  if ( !ppgpos )
  {
    pstro[1].cGlyphs = 0;
    pstro[1].flAccel = 0;
    v17 = 1;
    v116 = 1;
  }
  if ( !v17 )
    goto LABEL_6;
  do
  {
    v19 = STROBJ_bEnum(v10, &pc, &ppgpos);
    v16 = ppgpos;
    v17 = v19;
    cGlyphs = pc;
    v116 = v17;
    Length = pc;
LABEL_6:
    v119 = 0;
    if ( cGlyphs )
    {
      p_pgdf = &v16->pgdf;
      v109 = (struct _RECTL *)&v16->pgdf;
      while ( 1 )
      {
        pgb = (*p_pgdf)->pgb;
        if ( !pgb )
          goto LABEL_24;
        v22 = (int)p_pgdf[1] + pgb->ptlOrigin.x;
        v23 = v22 + pgb->sizlBitmap.cx;
        v24 = v109->right + pgb->ptlOrigin.y;
        v25 = v24 + pgb->sizlBitmap.cy;
        if ( pv == (PVOID)right || v101 == (struct SURFACE *)bottom )
        {
          pv = (PVOID)v22;
          right = v23;
          v151 = v22;
          v101 = (struct SURFACE *)v24;
          v152 = v24;
          v153 = v23;
        }
        else
        {
          if ( v22 < (int)pv )
          {
            pv = (PVOID)v22;
            v151 = v22;
          }
          if ( v24 < (int)v101 )
          {
            v101 = (struct SURFACE *)v24;
            v152 = v24;
          }
          if ( v23 > right )
          {
            right = v23;
            v153 = v23;
          }
          if ( v25 <= bottom )
            goto LABEL_21;
        }
        bottom = v25;
        v154 = v25;
LABEL_21:
        p_pgdf = (GLYPHDEF **)&v109[1];
        ++v119;
        ++v109;
        if ( v119 >= Length )
        {
          v17 = v116;
          break;
        }
      }
    }
    v10 = pstro;
  }
  while ( v17 );
LABEL_24:
  top = (LONG)v101;
LABEL_25:
  v26 = pso != 0 ? &pso[-1].lDelta : 0;
  v102 = (struct SURFACE *)v26;
  ppgpos = (PGLYPHPOS)v26;
  if ( (pfo->flFontType & 0x10000) != 0 )
  {
    CurrentThread = (struct _GLYPHPOS *)KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached()
      && (ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread)) != 0
      && (v28 = *ThreadWin32Thread) != 0 )
    {
      v29 = *(_DWORD *)(v28 + 168);
      v26 = pso != 0 ? &pso[-1].lDelta : 0;
    }
    else
    {
      v26 = pso != 0 ? &pso[-1].lDelta : 0;
      v29 = v26[17];
    }
    v126 = v29 ? *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v29 + 36) + 1820) : (unsigned int)v26;
    v105 = *((_WORD *)v26 + 32) != 0 ? 0x10 : 0;
    if ( (*((_WORD *)v26 + 33) & 0x100) != 0 )
      v105 = (*((_WORD *)v26 + 32) != 0 ? 0x10 : 0) | 0x80;
  }
  flFontType = pfo->flFontType;
  if ( (flFontType & 2) != 0 )
    return 0;
  if ( pco )
    iDComplexity = pco->iDComplexity;
  else
    iDComplexity = 0;
  iSolidColor = -1;
  pc = v129->left;
  if ( (flFontType & 0x10000) == 0 )
  {
    v111 = 1;
    v37 = pstro->rclBkGround.right;
    v36 = pstro->rclBkGround.left;
    v103 = (int)(((v37 + 32) & 0xFFFFFFE0) - (v36 & 0xFFFFFFE0)) >> 3;
    goto LABEL_56;
  }
  if ( v26[15] == 3 )
  {
    if ( bUMPDSecurityGateEx() && !pboOpaque )
    {
      if ( gfUMPDDebug )
        _DbgPrint("clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n", 639);
      return 0;
    }
    if ( pboOpaque->iSolidColor == -1 )
      return 0;
  }
  v32 = v105 | 8;
  v105 |= 8u;
  v33 = pfo->flFontType;
  if ( (v33 & 0x10000000) != 0 )
  {
    v111 = 8;
    v105 = v32 | 0x20;
    v34 = pstro->rclBkGround.right;
    if ( v34 > 2147483643 )
      return 0;
    v35 = pstro->rclBkGround.left;
    if ( (unsigned int)(v34 - v35 + 4) >= 0x7FFFFFFF )
      return 0;
    v103 = 4 * (((v34 + 4) >> 2) - (v35 >> 2));
    v36 = pstro->rclBkGround.left;
    v37 = pstro->rclBkGround.right;
  }
  else
  {
    if ( (v33 & 0x20000000) == 0 )
    {
      v111 = 4;
      v103 = 4 * (((pstro->rclBkGround.right + 8) >> 3) - (pstro->rclBkGround.left >> 3));
    }
    v36 = pstro->rclBkGround.left;
    v37 = pstro->rclBkGround.right;
  }
LABEL_56:
  v38 = bottom - top;
  v114 = (struct _GLYPHPOS *)(((unsigned int)(v111 * (v36 - (_DWORD)pv) + 31) >> 3) & 0x1FFFFFFC);
  v39 = (unsigned int)v114 + (((unsigned int)(v111 * (right - v37) + 31) >> 3) & 0x1FFFFFFC) + v103;
  v40 = v39 * v38;
  v104 = v39;
  Length = v39 * v38;
  if ( !is_mul_ok(v39, v38) )
    return 0;
  if ( v40 >= 0x10000 )
  {
    v97 = 0;
    v41 = EngAllocUserMem(v40, 0x6F746547u);
  }
  else
  {
    v97 = 1;
    v41 = (PVOID)AllocThreadBufferWithTag(v40, 1869899079, 32);
  }
  pva = v41;
  if ( !v41 )
    return 0;
  v42 = pstro->rclBkGround.top - top;
  v43 = pstro;
  flAccel = pstro->flAccel;
  v115 = (struct _GLYPHPOS *)((char *)v114 + v104 * v42 + (_DWORD)v41);
  if ( (flAccel & 0xA) == 2 )
    v105 |= (pstro->ulCharInc != 0) | ((unsigned __int8)((flAccel & 0x11) - 17) != 0 ? 2 : 0) | ((flAccel & 0x51) != 81
                                                                                               ? 0
                                                                                               : 4);
  v155 = pso != 0 ? &pso[-1].lDelta : 0;
  if ( *((_WORD *)v155 + 32) )
    v156 = 0;
  else
    v156 = (int)*(pso != 0 ? &pso->pvBits : (PVOID *)44);
  v157 = pco;
  v158 = pboOpaque;
  v159 = 0;
  v160[16] = pfo;
  if ( prclOpaque )
  {
    v45 = KeGetCurrentThread();
    if ( IsThreadCrossSessionAttached()
      || (v47 = (int *)PsGetThreadWin32Thread(v45)) == 0
      || (v48 = *v47) == 0
      || (v46 = *(struct _SURFOBJ **)(v48 + 20), v46 == (struct _SURFOBJ *)(v48 + 20))
      || (p_cjBits = &v46[-1].cjBits, v46 == (struct _SURFOBJ *)28)
      || (p_cjBits[55] & 0x100) == 0 )
    {
      v50 = pboOpaque;
    }
    else
    {
      v14 = p_cjBits[57] == 0;
      v50 = pboOpaque;
      if ( !v14 && !pboOpaque )
      {
        if ( gfUMPDDebug )
          _DbgPrint(
            "clientcore\\windows\\core\\ntgdi\\gre\\windows\\textddi.cxx:%d:EngTextOut:pboOpaque == NULL\n",
            857);
        if ( v97 )
          FreeThreadBufferWithTag(v41);
        else
          EngFreeUserMem(v41);
        FRINGERECT::~FRINGERECT((FRINGERECT *)&v155);
        return 0;
      }
    }
    iSolidColor = v50->iSolidColor;
    if ( v50->iSolidColor == -1 || pc == -1 )
    {
      EngTextOutBitBlt(
        (struct SURFACE *)v105,
        v87,
        v88,
        pco,
        v46,
        (struct _CLIPOBJ *)prclOpaque,
        v89,
        v90,
        (struct _POINTL *)pboOpaque,
        v127,
        (struct _BRUSHOBJ *)v46,
        v95,
        (unsigned int)v96);
    }
    else
    {
      v51 = prclOpaque;
      v52 = prclOpaque->top;
      if ( pstro->rclBkGround.top > v52 )
      {
        FRINGERECT::vAddRect((FRINGERECT *)&v155, prclOpaque->left, v52, prclOpaque->right, pstro->rclBkGround.top);
        v51 = prclOpaque;
      }
      v53 = pstro->rclBkGround.left;
      v54 = v51->left;
      if ( v53 > v54 )
        FRINGERECT::vAddRect((FRINGERECT *)&v155, v54, pstro->rclBkGround.top, v53, pstro->rclBkGround.bottom);
      v55 = pstro->rclBkGround.right;
      v56 = prclOpaque->right;
      v57 = pstro->rclBkGround.bottom;
      if ( v55 < v56 )
      {
        v160[4 * v159] = v55;
        v160[4 * v159 + 1] = pstro->rclBkGround.top;
        v160[4 * v159 + 2] = v56;
        v160[4 * v159++ + 3] = v57;
      }
      if ( v57 < prclOpaque->bottom )
        FRINGERECT::vAddRect((FRINGERECT *)&v155, prclOpaque->left, v57, v56, prclOpaque->bottom);
    }
    v43 = pstro;
  }
  v134 = 0;
  v135 = 0;
  v136 = 0;
  v137 = 0;
  v138 = 0;
  v139 = 0;
  v131 = 0;
  v132 = 0;
  v133 = 0;
  v141 = v105 & 0x10;
  if ( (v105 & 0x10) != 0 )
  {
    v58 = v43->rclBkGround.left;
    v59 = v58 & 0xFFFFFFF8;
    v117 = v58 & 0xFFFFFFF8;
    if ( (v105 & 0x20) != 0 )
    {
      v59 = v58 & 0xFFFFFFFC;
      v117 = v58 & 0xFFFFFFFC;
    }
    v60 = v43->rclBkGround.top;
    v134 = *(pso != 0 ? &pso->iBitmapFormat : (ULONG *)60);
    v61 = v43->rclBkGround.right - v59;
    v140 = v60;
    v135 = v61;
    v62 = v43->rclBkGround.bottom - v60;
    v138 = 0;
    v14 = ((int)*(pso != 0 ? &pso[1].hsurf : (HSURF *)72) & 0x40000) == 0;
    v136 = v62;
    v139 = 1;
    if ( !v14 )
      v139 = (int)&loc_40001;
    if ( !SURFMEM::bCreateDIB((SURFMEM *)&v131, (struct _DEVBITMAPINFO *)&v134, 0, 0, 0, 0, 0, 0, 1, 0, 0) )
    {
      if ( v97 )
        FreeThreadBufferWithTag(v41);
      else
        EngFreeUserMem(v41);
      v63 = 0;
      goto LABEL_151;
    }
    v64 = *(pso != 0 ? &pso->hdev : (HDEV *)28);
    v65 = 0;
    ppgpos = (PGLYPHPOS)v131;
    v118 = 0;
    if ( v102 == (struct SURFACE *)v64[455] && ((unsigned int)&loc_20000 & v64[6]) != 0 )
    {
      v65 = v64[459];
      v118 = (struct _POINTL *)v64[460];
    }
    v66 = *(_DWORD *)p_rclBkGround;
    v147 = v66;
    v148 = *((_DWORD *)p_rclBkGround + 1);
    v149 = *((_DWORD *)p_rclBkGround + 2);
    v150 = *((_DWORD *)p_rclBkGround + 3);
    v112 = v66;
    if ( v65 > v66 )
    {
      v66 = v65;
      v112 = v65;
    }
    v143 = v66;
    v67 = pstro->rclBkGround.top;
    v98 = (struct _POINTL *)v67;
    if ( (int)v118 > v67 )
    {
      v67 = (LONG)v118;
      v98 = v118;
    }
    v144 = (struct _POINTL *)v67;
    v68 = pso->sizlBitmap.cx + v65;
    v108 = (struct _CLIPOBJ *)v68;
    if ( v68 >= pstro->rclBkGround.right )
    {
      v68 = pstro->rclBkGround.right;
      v108 = (struct _CLIPOBJ *)v68;
    }
    v145 = (struct _CLIPOBJ *)v68;
    v69 = (LONG)v118 + pso->sizlBitmap.cy;
    v106 = v69;
    if ( v69 >= pstro->rclBkGround.bottom )
    {
      v69 = pstro->rclBkGround.bottom;
      v106 = v69;
    }
    v146 = v69;
    if ( iDComplexity )
    {
      if ( !bIntersect(&v143, &pco->rclBounds) )
        goto LABEL_147;
      v69 = v146;
      v68 = (LONG)v145;
      v67 = (LONG)v144;
      v106 = v146;
      v108 = v145;
      v98 = v144;
      v112 = v143;
    }
    v147 = v112 - v117;
    v148 = v67 - v140;
    v149 = v68 - v117;
    v150 = v69 - v140;
    if ( iSolidColor == -1 && v112 < (int)v108 && (int)v98 < v106 )
    {
      v70 = bUMPDSecurityGateEx();
      UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&rclBounds, v102, pfo, v70);
      v71 = SURFACE::pSurfobj(v131);
      v72(v71, v102 != 0 ? (char *)v102 + 16 : 0, 0, xloIdent, &v147, &v143);
      UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&rclBounds);
    }
    v41 = pva;
  }
  v73 = pstro;
  v74 = (struct _RECTL *)iSolidColor;
  v75 = RtlFillMemoryUlong;
  pstro[1].cGlyphs = 0;
  pstro[1].flAccel = 0;
  if ( iSolidColor == -1 )
    goto LABEL_127;
  RtlFillMemoryUlong(v41, Length, 0);
  v75 = RtlFillMemoryUlong;
  while ( 2 )
  {
    if ( v74 == (struct _RECTL *)-1 )
LABEL_127:
      v75(v41, Length, 0);
    pgp = v73->pgp;
    if ( pgp )
    {
      v78 = (struct _FONTOBJ *)v73->cGlyphs;
      v123 = pgp;
      v124 = (ULONG)v78;
      v107 = 0;
    }
    else
    {
      if ( (v73[5].rclBkGround.left & 2) != 0 )
        v79 = STROBJ_bEnum(v73, &v124, &v123);
      else
        v79 = STROBJ_bEnumCheckBounds(&v123, (struct ESTROBJ *)&v151, (struct _GLYPHPOS **)v95, v96);
      v78 = (struct _FONTOBJ *)v124;
      pgp = v123;
      v107 = v79;
    }
    if ( v78 )
    {
      rclBounds.left = 0x80000000;
      rclBounds.top = 0x80000000;
      rclBounds.right = 0x7FFFFFFF;
      rclBounds.bottom = 0x7FFFFFFF;
      v162 = 0;
      if ( iDComplexity )
      {
        if ( iDComplexity != 1 )
        {
          if ( iDComplexity == 3 )
          {
            XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0);
            do
            {
              v80 = XCLIPOBJ::bEnum((XCLIPOBJ *)v76, 0x134u, v142, 0);
              v94 = v127;
              v81 = v80;
              v93 = v129;
              v92 = (struct SURFACE *)(16 * v142[0]);
              v91 = v130;
              *(_DWORD *)((char *)&v142[4] + (_DWORD)v92) = 0;
              vExpandAndCopyText(
                (struct SURFACE *)pgp,
                v78,
                v115,
                v104,
                (unsigned __int8 *)pstro->ulCharInc,
                (unsigned int)ppgpos,
                v126,
                p_rclBkGround,
                v92,
                (struct _RECTL *)pc,
                (struct _RECTL *)iSolidColor,
                v105,
                (int)&v142[1],
                v91,
                (struct _RECTL *)v92,
                v93,
                (unsigned int)v94,
                (struct _BRUSHOBJ *)v95,
                (struct _POINTL *)v96);
              v76 = pco;
            }
            while ( v81 );
            v74 = (struct _RECTL *)iSolidColor;
          }
          goto LABEL_141;
        }
        v76 = pco;
        rclBounds = pco->rclBounds;
      }
      v86 = v78;
      v82 = pso != 0 ? (struct SURFACE *)&pso[-1].lDelta : 0;
      vExpandAndCopyText(
        (struct SURFACE *)pgp,
        v86,
        v115,
        v104,
        (unsigned __int8 *)pstro->ulCharInc,
        (unsigned int)ppgpos,
        v126,
        p_rclBkGround,
        (struct SURFACE *)v76,
        (struct _RECTL *)pc,
        v74,
        v105,
        (int)&rclBounds,
        v130,
        (struct _RECTL *)v76,
        v129,
        (unsigned int)v127,
        (struct _BRUSHOBJ *)v95,
        (struct _POINTL *)v96);
    }
    else
    {
LABEL_141:
      v82 = pso != 0 ? (struct SURFACE *)&pso[-1].lDelta : 0;
    }
    v41 = pva;
    v75 = RtlFillMemoryUlong;
    if ( v107 )
    {
      v73 = pstro;
      continue;
    }
    break;
  }
  if ( v141 )
  {
    v83 = bUMPDSecurityGateEx();
    UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&rclBounds, v82, pfo, v83);
    v84 = SURFACE::pSurfobj(v131);
    v85(v82 != 0 ? (char *)v82 + 16 : 0, v84, pco, 0, &v143, &v147);
    UMPDReleaseAcquireRFONTSem::~UMPDReleaseAcquireRFONTSem((UMPDReleaseAcquireRFONTSem *)&rclBounds);
  }
LABEL_147:
  if ( v97 )
    FreeThreadBufferWithTag(pva);
  else
    EngFreeUserMem(pva);
  v63 = 1;
LABEL_151:
  SURFMEM::~SURFMEM((SURFMEM *)&v131);
  FRINGERECT::~FRINGERECT((FRINGERECT *)&v155);
  return v63;
}
